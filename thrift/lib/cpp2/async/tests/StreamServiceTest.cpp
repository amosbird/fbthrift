/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <folly/portability/GTest.h>

#include <folly/experimental/coro/Collect.h>
#include <folly/experimental/coro/Sleep.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/async/tests/util/Util.h>

using namespace testutil::testservice;
using namespace apache::thrift;

template <typename Service>
class StreamServiceTest
    : public AsyncTestSetup<Service, TestStreamServiceAsyncClient> {};

using TestTypes = ::testing::Types<
    TestStreamGeneratorService,
    TestStreamPublisherService,
    TestStreamGeneratorWithHeaderService,
    TestStreamPublisherWithHeaderService>;
TYPED_TEST_CASE(StreamServiceTest, TestTypes);

TYPED_TEST(StreamServiceTest, Basic) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        auto gen = (co_await client.co_range(0, 100)).toAsyncGenerator();
        int i = 0;
        while (auto t = co_await gen.next()) {
          EXPECT_EQ(i, *t);
          EXPECT_LE(++i, 101);
        }
        EXPECT_EQ(i, 101);
      });
}

TYPED_TEST(StreamServiceTest, Throw) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        auto gen = (co_await client.co_rangeThrow(0, 100)).toAsyncGenerator();
        for (int i = 0; i <= 100; i++) {
          auto t = co_await gen.next();
          EXPECT_EQ(i, *t);
        }
        EXPECT_THROW(
            co_await gen.next(), apache::thrift::TApplicationException);
      });
}

TYPED_TEST(StreamServiceTest, ThrowUDE) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        auto gen =
            (co_await client.co_rangeThrowUDE(0, 100)).toAsyncGenerator();
        for (int i = 0; i <= 100; i++) {
          auto t = co_await gen.next();
          EXPECT_EQ(i, *t);
        }
        EXPECT_THROW(co_await gen.next(), UserDefinedException);
      });
}

TYPED_TEST(StreamServiceTest, ServerTimeout) {
  this->server_->setStreamExpireTime(std::chrono::milliseconds(1));
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        auto gen = (co_await client.co_range(0, 100)).toAsyncGenerator();
        co_await folly::coro::sleep(std::chrono::milliseconds(100));
        EXPECT_THROW(while (co_await gen.next()){}, TApplicationException);
      });
}

TYPED_TEST(StreamServiceTest, WithHeader) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        auto gen =
            (co_await client.co_range(0, 100)).toAsyncGeneratorWithHeader();
        int i = 0;
        while (auto t = co_await gen.next()) {
          EXPECT_EQ(i, *t->payload);
          if (t->metadata.otherMetadata_ref()) {
            EXPECT_EQ(
                std::to_string(i), (*t->metadata.otherMetadata_ref())["val"]);
            t = co_await gen.next();
            EXPECT_FALSE(t->payload);
            EXPECT_EQ(
                std::to_string(i), (*t->metadata.otherMetadata_ref())["val"]);
          }
          EXPECT_LE(++i, 101);
        }
        EXPECT_EQ(i, 101);
      });
}

TYPED_TEST(StreamServiceTest, WithSizeTarget) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        auto gen = (co_await client.co_range(
                        RpcOptions().setMemoryBufferSize(512, 10), 0, 100))
                       .toAsyncGenerator();
        int i = 0;
        while (auto t = co_await gen.next()) {
          EXPECT_EQ(i, *t);
          EXPECT_LE(++i, 101);
        }
        EXPECT_EQ(i, 101);
      });
}

class InitialThrowHandler : public TestStreamServiceSvIf {
 public:
  ServerStream<int32_t> range(int32_t, int32_t) override {
    throw std::runtime_error("oops");
  }
};
class InitialThrowTest
    : public AsyncTestSetup<InitialThrowHandler, TestStreamServiceAsyncClient> {
};
TEST_F(InitialThrowTest, InitialThrow) {
  class Callback : public StreamClientCallback {
   public:
    Callback(
        bool onFirstResponseBool,
        folly::coro::Baton& responseReceived,
        folly::coro::Baton& onStreamCompleteCalled)
        : onFirstResponseBool_(onFirstResponseBool),
          responseReceived_(responseReceived),
          onStreamCompleteCalled_(onStreamCompleteCalled) {}
    bool onFirstResponse(
        FirstResponsePayload&&,
        folly::EventBase*,
        StreamServerCallback* serverCallback) override {
      SCOPE_EXIT { responseReceived_.post(); };
      if (!onFirstResponseBool_) {
        serverCallback->onStreamCancel();
        return false;
      }
      return true;
    }
    void onStreamComplete() override {
      if (onFirstResponseBool_) {
        onStreamCompleteCalled_.post();
      } else {
        FAIL() << "onStreamComplete called when onFirstResponse returned false";
      }
    }
    bool onFirstResponseBool_;
    folly::coro::Baton& responseReceived_;
    folly::coro::Baton& onStreamCompleteCalled_;

    // unused
    void onFirstResponseError(folly::exception_wrapper) override {}
    bool onStreamNext(StreamPayload&&) override { return true; }
    void onStreamError(folly::exception_wrapper) override {}
    void resetServerCallback(StreamServerCallback&) override {}
  };
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        ThriftPresult<false> pargs;
        auto req = CompactSerializer::serialize<std::string>(pargs);
        for (auto onFirstResponseBool : {true, false}) {
          folly::coro::Baton responseReceived, onStreamCompleteCalled;
          Callback callback(
              onFirstResponseBool, responseReceived, onStreamCompleteCalled);
          client.getChannelShared()->sendRequestStream(
              RpcOptions(),
              "range",
              SerializedRequest(folly::IOBuf::copyBuffer(req)),
              std::make_shared<transport::THeader>(),
              &callback);
          co_await responseReceived;
          if (onFirstResponseBool) {
            co_await onStreamCompleteCalled;
          }
        }
      });
}

template <typename Service>
class MultiStreamServiceTest
    : public AsyncTestSetup<Service, TestStreamServiceAsyncClient> {
 protected:
  MultiStreamServiceTest() {
    this->numIOThreads_ = 5;
    this->numWorkerThreads_ = 5;
  }
};

using MultiTestTypes = ::testing::Types<
    TestStreamMultiPublisherService,
    TestStreamMultiPublisherWithHeaderService>;
TYPED_TEST_CASE(MultiStreamServiceTest, MultiTestTypes);

TYPED_TEST(MultiStreamServiceTest, Basic) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        std::vector<folly::coro::Task<void>> tasks;
        for (int streamCount = 0; streamCount < 5; streamCount++) {
          tasks.push_back(
              folly::coro::co_invoke([&]() -> folly::coro::Task<void> {
                auto gen =
                    (co_await client.co_range(0, 100)).toAsyncGenerator();
                int i = 0;
                while (auto t = co_await gen.next()) {
                  EXPECT_EQ(i, *t);
                  EXPECT_LE(++i, 101);
                  co_await folly::coro::co_reschedule_on_current_executor;
                }
                EXPECT_EQ(i, 101);
              }));
        }
        co_await folly::coro::collectAllRange(std::move(tasks));
      });
}

TYPED_TEST(MultiStreamServiceTest, Throw) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        std::vector<folly::coro::Task<void>> tasks;
        for (int streamCount = 0; streamCount < 5; streamCount++) {
          tasks.push_back(
              folly::coro::co_invoke([&]() -> folly::coro::Task<void> {
                auto gen =
                    (co_await client.co_rangeThrow(0, 100)).toAsyncGenerator();
                for (int i = 0; i <= 100; i++) {
                  auto t = co_await gen.next();
                  EXPECT_EQ(i, *t);
                  co_await folly::coro::co_reschedule_on_current_executor;
                }
                EXPECT_THROW(co_await gen.next(), TApplicationException);
              }));
        }
        co_await folly::coro::collectAllRange(std::move(tasks));
      });
}

TYPED_TEST(MultiStreamServiceTest, ThrowUDE) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        std::vector<folly::coro::Task<void>> tasks;
        for (int streamCount = 0; streamCount < 5; streamCount++) {
          tasks.push_back(
              folly::coro::co_invoke([&]() -> folly::coro::Task<void> {
                auto gen = (co_await client.co_rangeThrowUDE(0, 100))
                               .toAsyncGenerator();
                for (int i = 0; i <= 100; i++) {
                  auto t = co_await gen.next();
                  EXPECT_EQ(i, *t);
                  co_await folly::coro::co_reschedule_on_current_executor;
                }
                EXPECT_THROW(co_await gen.next(), UserDefinedException);
              }));
        }
        co_await folly::coro::collectAllRange(std::move(tasks));
      });
}

TYPED_TEST(MultiStreamServiceTest, ServerTimeout) {
  this->server_->setStreamExpireTime(std::chrono::milliseconds(1));
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        std::vector<folly::coro::Task<void>> tasks;
        for (int streamCount = 0; streamCount < 5; streamCount++) {
          tasks.push_back(
              folly::coro::co_invoke([&client]() -> folly::coro::Task<void> {
                auto gen = (co_await client.co_range(
                                RpcOptions().setChunkBufferSize(0), 0, 100))
                               .toAsyncGenerator();
                co_await folly::coro::sleep(std::chrono::milliseconds{500});

                bool exceptionThrown = false;
                try {
                  co_await gen.next();
                } catch (const TApplicationException& ex) {
                  exceptionThrown = true;
                  EXPECT_EQ(TApplicationException::TIMEOUT, ex.getType());
                }
                EXPECT_TRUE(exceptionThrown);
              }));
        }
        co_await folly::coro::collectAllRange(std::move(tasks));
      });
}

TYPED_TEST(MultiStreamServiceTest, WithHeader) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        std::vector<folly::coro::Task<void>> tasks;
        for (int streamCount = 0; streamCount < 5; streamCount++) {
          tasks.push_back(
              folly::coro::co_invoke([&client]() -> folly::coro::Task<void> {
                auto gen = (co_await client.co_range(0, 100))
                               .toAsyncGeneratorWithHeader();
                int i = 0;
                while (auto t = co_await gen.next()) {
                  EXPECT_EQ(i, *t->payload);
                  if (t->metadata.otherMetadata_ref()) {
                    EXPECT_EQ(
                        std::to_string(i),
                        (*t->metadata.otherMetadata_ref())["val"]);
                    t = co_await gen.next();
                    EXPECT_FALSE(t->payload);
                    EXPECT_EQ(
                        std::to_string(i),
                        (*t->metadata.otherMetadata_ref())["val"]);
                  }
                  EXPECT_LE(++i, 101);
                  co_await folly::coro::co_reschedule_on_current_executor;
                }
                EXPECT_EQ(i, 101);
              }));
        }
        co_await folly::coro::collectAllRange(std::move(tasks));
      });
}

TYPED_TEST(MultiStreamServiceTest, Cancel) {
  folly::coro::Baton waitForCancellation;
  this->handler_->waitForCancellation_ = &waitForCancellation;
  this->connectToServer(
      [&](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        std::vector<folly::coro::Task<void>> tasks;
        for (int streamCount = 0; streamCount < 5; streamCount++) {
          tasks.push_back(folly::coro::co_invoke(
              [&, streamCount]() -> folly::coro::Task<void> {
                auto gen = (co_await client.co_rangeWaitForCancellation(0, 100))
                               .toAsyncGenerator();

                int i = 0;
                while (auto t = co_await gen.next()) {
                  EXPECT_EQ(i, *t);
                  EXPECT_LE(++i, 101);
                  // cancel some streams after they have reached steady-state
                  if (streamCount % 2 == 0) {
                    if (streamCount == 4) {
                      waitForCancellation.post();
                    }
                    co_return;
                  }
                  co_await folly::coro::co_reschedule_on_current_executor;
                }
                EXPECT_EQ(i, 101);
              }));
        }
        co_await folly::coro::collectAllRange(std::move(tasks));
      });
}

TYPED_TEST(MultiStreamServiceTest, UncompletedPublisherDestructor) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        co_await client.co_uncompletedPublisherDestructor(
            RpcOptions().setTimeout(std::chrono::seconds{10}));
      });
}

TYPED_TEST(MultiStreamServiceTest, UncompletedPublisherMoveAssignment) {
  this->connectToServer(
      [](TestStreamServiceAsyncClient& client) -> folly::coro::Task<void> {
        co_await client.co_uncompletedPublisherMoveAssignment(
            RpcOptions().setTimeout(std::chrono::seconds{10}));
      });
}

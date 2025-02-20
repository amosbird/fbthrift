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

#include <folly/portability/GMock.h>
#include <folly/portability/GTest.h>

#include <thrift/lib/cpp2/frozen/FrozenUtil.h>
#include <thrift/lib/cpp2/frozen/test/gen-cpp2/Example_layouts.h>

using namespace apache::thrift;
using namespace apache::thrift::frozen;
using namespace apache::thrift::test;
using namespace apache::thrift::util;
using namespace testing;

TEST(FrozenUnion, union_contains_int) {
  TestUnion u;
  u.set_aInt(937);
  auto f = freeze(u);
  EXPECT_EQ(f.get_aInt(), 937);
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_string) {
  TestUnion u;
  u.set_aString("hello world");
  auto f = freeze(u);
  EXPECT_EQ(f.get_aString(), "hello world");
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_list) {
  TestUnion u;
  std::vector<int64_t> thatList{9, 5, 376, 28};
  u.set_aList(thatList);
  auto f = freeze(u);
  for (size_t i = 0; i < thatList.size(); i++) {
    EXPECT_EQ(f.get_aList()[i], thatList[i]);
  }
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_map) {
  TestUnion u;
  std::map<int32_t, int64_t> thatMap{{9, 5}, {376, 28}};
  u.set_aMap(thatMap);
  auto f = freeze(u);
  EXPECT_EQ(f.get_aMap().at(9), 5);
  EXPECT_EQ(f.get_aMap().at(376), 28);
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_set) {
  TestUnion u;
  std::set<std::string> thatSet{"good", "night", "it's", "09/15/2019 3:48am"};
  u.set_aSet(thatSet);
  auto f = freeze(u);
  EXPECT_EQ(TestUnion::Type::aSet, u.getType());
  EXPECT_THAT(f.get_aSet(), Contains("good"));
  EXPECT_THAT(f.get_aSet(), Contains("night"));
  EXPECT_THAT(f.get_aSet(), Contains("it's"));
  EXPECT_THAT(f.get_aSet(), Contains("09/15/2019 3:48am"));
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_sturct) {
  TestUnion u;
  Member thatStruct;
  *thatStruct.adId_ref() = 2010;
  *thatStruct.name_ref() = "Tiger";
  std::vector<int64_t> thatCreativeIds{9, 5, 376, 28};
  thatStruct.creativeIds_ref() = thatCreativeIds;

  u.set_aStruct(thatStruct);
  auto f = freeze(u);
  EXPECT_EQ(f.get_aStruct().adId(), 2010);
  EXPECT_EQ(f.get_aStruct().name(), "Tiger");
  for (size_t i = 0; i < thatCreativeIds.size(); i++) {
    EXPECT_EQ(f.get_aStruct().creativeIds().value()[i], thatCreativeIds[i]);
  }
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_cpp_shared_ref) {
  TestUnion u;
  auto max = std::make_shared<Pet1>();
  *max->name_ref() = "max";
  max->age_ref() = 7;
  max->vegan_ref() = true;

  u.set_aPet1(*max);
  auto f = freeze(u);

  EXPECT_EQ(f.get_aPet1()->name(), "max");
  EXPECT_EQ(f.get_aPet1()->age().value(), 7);
  EXPECT_EQ(f.get_aPet1()->vegan().value(), true);
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_cpp_unique_ref) {
  TestUnion u;
  Tiny tiny;
  *tiny.a_ref() = "aaa";
  *tiny.b_ref() = "bbb";
  *tiny.c_ref() = "ccc";
  *tiny.d_ref() = "ddd";

  u.set_aTiny(tiny);
  auto f = freeze(u);

  EXPECT_EQ(f.get_aTiny()->a(), "aaa");
  EXPECT_EQ(f.get_aTiny()->b(), "bbb");
  EXPECT_EQ(f.get_aTiny()->c(), "ccc");
  EXPECT_EQ(f.get_aTiny()->d(), "ddd");
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_contains_cpp_ref_true) {
  TestUnion u;
  Place place;
  *place.name_ref() = "somewhere";
  place.popularityByHour_ref()[37] = 21;

  u.set_aPlace(std::move(place));
  auto f = freeze(u);

  EXPECT_EQ(f.get_aPlace()->name(), "somewhere");
  EXPECT_EQ(f.get_aPlace()->popularityByHour().at(37), 21);
  EXPECT_EQ(f.thaw(), u);
}

TEST(FrozenUnion, union_as_member) {
  TestUnion u;
  Member thatStruct;
  *thatStruct.adId_ref() = 2015;
  *thatStruct.name_ref() = "Jayden";
  std::vector<int64_t> thatCreativeIds{9, 5, 376, 28};
  thatStruct.creativeIds_ref() = thatCreativeIds;
  u.set_aStruct(thatStruct);

  Big big;
  big.anOptionalString_ref() = "so good!!";
  *big.anId_ref() = 9527;
  std::vector<int64_t> thatList{19, 15, 1376, 7, 128};
  big.anOptionalList_ref() = thatList;
  *big.aTestUnion_ref() = u;
  *big.aString_ref() =
      "Run fast then you can catch the snowflake and keep it forever.";

  auto f = freeze(big);
  EXPECT_EQ(f.anOptionalString().value(), "so good!!");
  EXPECT_EQ(f.anId(), 9527);
  EXPECT_EQ(
      f.aString(),
      "Run fast then you can catch the snowflake and keep it forever.");
  EXPECT_EQ(f.aTestUnion().get_aStruct().adId(), 2015);
  EXPECT_EQ(f.aTestUnion().get_aStruct().name(), "Jayden");
  for (size_t i = 0; i < thatCreativeIds.size(); i++) {
    EXPECT_EQ(
        f.aTestUnion().get_aStruct().creativeIds().value()[i],
        thatCreativeIds[i]);
  }
  EXPECT_EQ(f.thaw(), big);
}

TEST(FrozenUnion, union_schema_evolution) {
  TestUnion u;
  u.set_aInt(937);
  auto&& str = freezeToString(u);

  auto f2 = mapFrozen<TestUnion2>(std::move(str));
  EXPECT_EQ(f2.getType(), TestUnion2::Type::__EMPTY__);
  TestUnion2 u2 = f2.thaw();
  EXPECT_EQ(u2.getType(), TestUnion2::Type::__EMPTY__);
}

TEST(FrozenUnion, union_serde) {
  TestUnion u;
  u.set_aInt(937);
  auto&& str = freezeToString(u);

  auto f = mapFrozen<TestUnion>(std::move(str));
  EXPECT_EQ(f.getType(), TestUnion::Type::aInt);
  EXPECT_EQ(f.get_aInt(), 937);
  TestUnion u2 = f.thaw();
  EXPECT_EQ(u2.getType(), TestUnion::Type::aInt);
  EXPECT_EQ(u2.get_aInt(), 937);
}

TEST(FrozenUnion, union_get_wrong_type) {
  TestUnion u;
  u.set_aInt(937);
  auto&& str = freezeToString(u);

  auto f = mapFrozen<TestUnion>(std::move(str));
  // get a type mismatched field should cause intenal assert fail
  EXPECT_DEBUG_DEATH(f.get_aString(), "");
}

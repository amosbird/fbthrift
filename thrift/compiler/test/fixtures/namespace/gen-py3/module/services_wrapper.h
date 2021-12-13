/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/TestService.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class TestServiceWrapper : virtual public TestServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit TestServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_init(std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback
        , int64_t int1
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> TestServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2

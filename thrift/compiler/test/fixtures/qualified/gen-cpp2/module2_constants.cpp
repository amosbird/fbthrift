/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-cpp2/module2_constants.h"

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_constants.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_constants.h"
#include <folly/Indestructible.h>

namespace module2 {

 ::module2::Struct const& module2_constants::c2() {
  static folly::Indestructible< ::module2::Struct> const instance(::apache::thrift::detail::make_constant< ::module2::Struct>(::apache::thrift::detail::wrap_argument<1>(::module0::module0_constants::c0()), ::apache::thrift::detail::wrap_argument<2>(::module1::module1_constants::c1())));
  return *instance;
}

 ::module2::Struct const& module2_constants::c3() {
  static folly::Indestructible< ::module2::Struct> const instance(::module2::module2_constants::c2());
  return *instance;
}

 ::module2::Struct const& module2_constants::c4() {
  static folly::Indestructible< ::module2::Struct> const instance(::module2::module2_constants::c2());
  return *instance;
}

} // module2

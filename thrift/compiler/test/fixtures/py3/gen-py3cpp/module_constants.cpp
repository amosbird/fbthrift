/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>


namespace py3 { namespace simple {

constexpr bool const module_constants::A_BOOL_;

constexpr ::std::int8_t const module_constants::A_BYTE_;

constexpr ::std::int16_t const module_constants::THE_ANSWER_;

constexpr ::std::int32_t const module_constants::A_NUMBER_;

constexpr ::std::int64_t const module_constants::A_BIG_NUMBER_;

constexpr double const module_constants::A_REAL_NUMBER_;

constexpr double const module_constants::A_FAKE_NUMBER_;

constexpr char const * const module_constants::A_WORD_;

constexpr ::std::string const module_constants::SOME_BYTES_;

::py3::simple::SimpleStruct const& module_constants::A_STRUCT() {
  static folly::Indestructible<::py3::simple::SimpleStruct> const instance(::apache::thrift::detail::make_constant< ::py3::simple::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::is_on>(static_cast<bool>(true)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::tiny_int>(static_cast<::std::int8_t>(5)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::small_int>(static_cast<::std::int16_t>(6)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::nice_sized_int>(static_cast<::std::int32_t>(7)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::big_int>(static_cast<::std::int64_t>(8)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::real>(static_cast<double>(9.9))));
  return *instance;
}

::std::vector<::std::string> const& module_constants::WORD_LIST() {
  static folly::Indestructible<::std::vector<::std::string>> const instance(std::initializer_list<::std::string>{apache::thrift::StringTraits<std::string>::fromStringLiteral("the"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("quick"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("brown"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("fox"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("jumps"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("over"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("the"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("lazy"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("dog")});
  return *instance;
}

::std::vector<::std::map<::std::int32_t, double>> const& module_constants::SOME_MAP() {
  static folly::Indestructible<::std::vector<::std::map<::std::int32_t, double>>> const instance(std::initializer_list<::std::map<::std::int32_t, double>>{std::initializer_list<std::pair<const ::std::int32_t, double>>{{1, 1.1},
  {2, 2.2}},
  std::initializer_list<std::pair<const ::std::int32_t, double>>{{3, 3.3}}});
  return *instance;
}

::std::set<::std::int32_t> const& module_constants::DIGITS() {
  static folly::Indestructible<::std::set<::std::int32_t>> const instance(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4,
  5});
  return *instance;
}

::std::map<::std::string, ::py3::simple::SimpleStruct> const& module_constants::A_CONST_MAP() {
  static folly::Indestructible<::std::map<::std::string, ::py3::simple::SimpleStruct>> const instance(std::initializer_list<std::pair<const ::std::string, ::py3::simple::SimpleStruct>>{{apache::thrift::StringTraits<std::string>::fromStringLiteral("simple"), ::apache::thrift::detail::make_constant< ::py3::simple::SimpleStruct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::is_on>(static_cast<bool>(false)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::tiny_int>(static_cast<::std::int8_t>(50)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::small_int>(static_cast<::std::int16_t>(61)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::nice_sized_int>(static_cast<::std::int32_t>(72)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::big_int>(static_cast<::std::int64_t>(83)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::real>(static_cast<double>(99.9)))}});
  return *instance;
}

}} // py3::simple

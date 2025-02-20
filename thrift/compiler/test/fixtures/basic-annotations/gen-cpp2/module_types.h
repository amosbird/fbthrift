/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct name;
struct majorVer;
struct package;
struct annotation_with_quote;
struct class_;
struct annotation_with_trailing_comma;
struct empty_annotations;
struct my_enum;
struct id;
struct password;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_majorVer
#define APACHE_THRIFT_ACCESSOR_majorVer
APACHE_THRIFT_DEFINE_ACCESSOR(majorVer);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_package
#define APACHE_THRIFT_ACCESSOR_package
APACHE_THRIFT_DEFINE_ACCESSOR(package);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_annotation_with_quote
#define APACHE_THRIFT_ACCESSOR_annotation_with_quote
APACHE_THRIFT_DEFINE_ACCESSOR(annotation_with_quote);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_class_
#define APACHE_THRIFT_ACCESSOR_class_
APACHE_THRIFT_DEFINE_ACCESSOR(class_);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_annotation_with_trailing_comma
#define APACHE_THRIFT_ACCESSOR_annotation_with_trailing_comma
APACHE_THRIFT_DEFINE_ACCESSOR(annotation_with_trailing_comma);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_empty_annotations
#define APACHE_THRIFT_ACCESSOR_empty_annotations
APACHE_THRIFT_DEFINE_ACCESSOR(empty_annotations);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_my_enum
#define APACHE_THRIFT_ACCESSOR_my_enum
APACHE_THRIFT_DEFINE_ACCESSOR(my_enum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_password
#define APACHE_THRIFT_ACCESSOR_password
APACHE_THRIFT_DEFINE_ACCESSOR(password);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class YourEnum {
  MyValue1 = 0,
  MyValue2 = 1,
  REALM = 2,
};




} // cpp2

namespace std {
template<> struct hash<::cpp2::YourEnum> :
  ::apache::thrift::detail::enum_hash<::cpp2::YourEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::YourEnum>;

template <> struct TEnumTraits<::cpp2::YourEnum> {
  using type = ::cpp2::YourEnum;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::MyValue1; }
  static constexpr type max() { return type::REALM; }
};


}} // apache::thrift

namespace cpp2 {

using _YourEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<YourEnum>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _YourEnum_EnumMapFactory::ValuesToNamesMapType _YourEnum_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _YourEnum_EnumMapFactory::NamesToValuesMapType _YourEnum_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class MyStructNestedAnnotation;
class MyStruct;
class SecretStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
} // cpp2
namespace cpp2 {
class MyStructNestedAnnotation final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyStructNestedAnnotation;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyStructNestedAnnotation() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStructNestedAnnotation(apache::thrift::FragileConstructor, ::std::string name__arg);

  MyStructNestedAnnotation(MyStructNestedAnnotation&&) noexcept;

  MyStructNestedAnnotation(const MyStructNestedAnnotation& src);


  MyStructNestedAnnotation& operator=(MyStructNestedAnnotation&&) noexcept;
  MyStructNestedAnnotation& operator=(const MyStructNestedAnnotation& src);
  void __clear();
 private:
  ::std::string __fbthrift_field_name;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const MyStructNestedAnnotation&) const;
  bool operator<(const MyStructNestedAnnotation&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> name_ref() const& {
    return {this->__fbthrift_field_name, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> name_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_name), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> name_ref() & {
    return {this->__fbthrift_field_name, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> name_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_name), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> name() const& {
    return {this->__fbthrift_field_name, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> name() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_name), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> name() & {
    return {this->__fbthrift_field_name, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> name() && {
    return {static_cast<T&&>(this->__fbthrift_field_name), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_name() const& {
    return __fbthrift_field_name;
  }

  ::std::string get_name() && {
    return std::move(__fbthrift_field_name);
  }

  template <typename T_MyStructNestedAnnotation_name_struct_setter = ::std::string>
  [[deprecated("Use `FOO.name_ref() = BAR;` instead of `FOO.set_name(BAR);`")]]
  ::std::string& set_name(T_MyStructNestedAnnotation_name_struct_setter&& name_) {
    name_ref() = std::forward<T_MyStructNestedAnnotation_name_struct_setter>(name_);
    return __fbthrift_field_name;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyStructNestedAnnotation>;
  friend void swap(MyStructNestedAnnotation& a, MyStructNestedAnnotation& b);
};

template <class Protocol_>
uint32_t MyStructNestedAnnotation::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:
  MyStruct& _data() & { return *this; }
  MyStruct&& _data() && { return std::move(*this); }
  const MyStruct& _data() const& { return *this; }
  const MyStruct&& _data() const&& { return std::move(*this); }

 public:

  MyStruct();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::std::int64_t majorVer__arg, ::std::string package__arg, ::std::string annotation_with_quote__arg, ::std::string class___arg, ::std::string annotation_with_trailing_comma__arg, ::std::string empty_annotations__arg, ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum> my_enum__arg);

  MyStruct(MyStruct&&) noexcept;
  MyStruct(const MyStruct& src);


  MyStruct& operator=(MyStruct&&) noexcept;
  MyStruct& operator=(const MyStruct& src);
  void __clear();

  ~MyStruct();

 private:
  ::std::int64_t __fbthrift_field_majorVer;
 private:
  ::std::string __fbthrift_field_package;
 private:
  ::std::string __fbthrift_field_annotation_with_quote;
 private:
  ::std::string __fbthrift_field_class_;
 private:
  ::std::string __fbthrift_field_annotation_with_trailing_comma;
 private:
  ::std::string __fbthrift_field_empty_annotations;
 private:
  ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum> __fbthrift_field_my_enum;
 private:
  apache::thrift::detail::isset_bitset<7, false> __isset;

 public:

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> majorVer_ref() const& {
    return {this->__fbthrift_field_majorVer, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> majorVer_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_majorVer), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> majorVer_ref() & {
    return {this->__fbthrift_field_majorVer, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> majorVer_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_majorVer), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> majorVer() const& {
    return {this->__fbthrift_field_majorVer, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> majorVer() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_majorVer), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> majorVer() & {
    return {this->__fbthrift_field_majorVer, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> majorVer() && {
    return {static_cast<T&&>(this->__fbthrift_field_majorVer), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> package_ref() const& {
    return {this->__fbthrift_field_package, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> package_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_package), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> package_ref() & {
    return {this->__fbthrift_field_package, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> package_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_package), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> package() const& {
    return {this->__fbthrift_field_package, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> package() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_package), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> package() & {
    return {this->__fbthrift_field_package, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> package() && {
    return {static_cast<T&&>(this->__fbthrift_field_package), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> annotation_with_quote_ref() const& {
    return {this->__fbthrift_field_annotation_with_quote, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> annotation_with_quote_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_annotation_with_quote), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> annotation_with_quote_ref() & {
    return {this->__fbthrift_field_annotation_with_quote, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> annotation_with_quote_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_annotation_with_quote), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> annotation_with_quote() const& {
    return {this->__fbthrift_field_annotation_with_quote, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> annotation_with_quote() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_annotation_with_quote), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> annotation_with_quote() & {
    return {this->__fbthrift_field_annotation_with_quote, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> annotation_with_quote() && {
    return {static_cast<T&&>(this->__fbthrift_field_annotation_with_quote), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> class__ref() const& {
    return {this->__fbthrift_field_class_, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> class__ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_class_), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> class__ref() & {
    return {this->__fbthrift_field_class_, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> class__ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_class_), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> class_() const& {
    return {this->__fbthrift_field_class_, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> class_() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_class_), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> class_() & {
    return {this->__fbthrift_field_class_, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> class_() && {
    return {static_cast<T&&>(this->__fbthrift_field_class_), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> annotation_with_trailing_comma_ref() const& {
    return {this->__fbthrift_field_annotation_with_trailing_comma, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> annotation_with_trailing_comma_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_annotation_with_trailing_comma), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> annotation_with_trailing_comma_ref() & {
    return {this->__fbthrift_field_annotation_with_trailing_comma, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> annotation_with_trailing_comma_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_annotation_with_trailing_comma), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> annotation_with_trailing_comma() const& {
    return {this->__fbthrift_field_annotation_with_trailing_comma, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> annotation_with_trailing_comma() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_annotation_with_trailing_comma), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> annotation_with_trailing_comma() & {
    return {this->__fbthrift_field_annotation_with_trailing_comma, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> annotation_with_trailing_comma() && {
    return {static_cast<T&&>(this->__fbthrift_field_annotation_with_trailing_comma), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> empty_annotations_ref() const& {
    return {this->__fbthrift_field_empty_annotations, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> empty_annotations_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_empty_annotations), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> empty_annotations_ref() & {
    return {this->__fbthrift_field_empty_annotations, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> empty_annotations_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_empty_annotations), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> empty_annotations() const& {
    return {this->__fbthrift_field_empty_annotations, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> empty_annotations() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_empty_annotations), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> empty_annotations() & {
    return {this->__fbthrift_field_empty_annotations, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> empty_annotations() && {
    return {static_cast<T&&>(this->__fbthrift_field_empty_annotations), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> my_enum_ref() const& {
    return {this->__fbthrift_field_my_enum, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> my_enum_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_my_enum), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> my_enum_ref() & {
    return {this->__fbthrift_field_my_enum, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> my_enum_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_my_enum), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> my_enum() const& {
    return {this->__fbthrift_field_my_enum, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> my_enum() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_my_enum), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> my_enum() & {
    return {this->__fbthrift_field_my_enum, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> my_enum() && {
    return {static_cast<T&&>(this->__fbthrift_field_my_enum), __isset.at(6), __isset.bit(6)};
  }

  ::std::int64_t get_majorVer() const {
    return __fbthrift_field_majorVer;
  }

  [[deprecated("Use `FOO.majorVer_ref() = BAR;` instead of `FOO.set_majorVer(BAR);`")]]
  ::std::int64_t& set_majorVer(::std::int64_t majorVer_) {
    majorVer_ref() = majorVer_;
    return __fbthrift_field_majorVer;
  }

  const ::std::string& get_package() const& {
    return __fbthrift_field_package;
  }

  ::std::string get_package() && {
    return std::move(__fbthrift_field_package);
  }

  template <typename T_MyStruct_package_struct_setter = ::std::string>
  [[deprecated("Use `FOO.package_ref() = BAR;` instead of `FOO.set_package(BAR);`")]]
  ::std::string& set_package(T_MyStruct_package_struct_setter&& package_) {
    package_ref() = std::forward<T_MyStruct_package_struct_setter>(package_);
    return __fbthrift_field_package;
  }

  const ::std::string& get_annotation_with_quote() const& {
    return __fbthrift_field_annotation_with_quote;
  }

  ::std::string get_annotation_with_quote() && {
    return std::move(__fbthrift_field_annotation_with_quote);
  }

  template <typename T_MyStruct_annotation_with_quote_struct_setter = ::std::string>
  [[deprecated("Use `FOO.annotation_with_quote_ref() = BAR;` instead of `FOO.set_annotation_with_quote(BAR);`")]]
  ::std::string& set_annotation_with_quote(T_MyStruct_annotation_with_quote_struct_setter&& annotation_with_quote_) {
    annotation_with_quote_ref() = std::forward<T_MyStruct_annotation_with_quote_struct_setter>(annotation_with_quote_);
    return __fbthrift_field_annotation_with_quote;
  }

  const ::std::string& get_class_() const& {
    return __fbthrift_field_class_;
  }

  ::std::string get_class_() && {
    return std::move(__fbthrift_field_class_);
  }

  template <typename T_MyStruct_class__struct_setter = ::std::string>
  [[deprecated("Use `FOO.class__ref() = BAR;` instead of `FOO.set_class_(BAR);`")]]
  ::std::string& set_class_(T_MyStruct_class__struct_setter&& class__) {
    class__ref() = std::forward<T_MyStruct_class__struct_setter>(class__);
    return __fbthrift_field_class_;
  }

  const ::std::string& get_annotation_with_trailing_comma() const& {
    return __fbthrift_field_annotation_with_trailing_comma;
  }

  ::std::string get_annotation_with_trailing_comma() && {
    return std::move(__fbthrift_field_annotation_with_trailing_comma);
  }

  template <typename T_MyStruct_annotation_with_trailing_comma_struct_setter = ::std::string>
  [[deprecated("Use `FOO.annotation_with_trailing_comma_ref() = BAR;` instead of `FOO.set_annotation_with_trailing_comma(BAR);`")]]
  ::std::string& set_annotation_with_trailing_comma(T_MyStruct_annotation_with_trailing_comma_struct_setter&& annotation_with_trailing_comma_) {
    annotation_with_trailing_comma_ref() = std::forward<T_MyStruct_annotation_with_trailing_comma_struct_setter>(annotation_with_trailing_comma_);
    return __fbthrift_field_annotation_with_trailing_comma;
  }

  const ::std::string& get_empty_annotations() const& {
    return __fbthrift_field_empty_annotations;
  }

  ::std::string get_empty_annotations() && {
    return std::move(__fbthrift_field_empty_annotations);
  }

  template <typename T_MyStruct_empty_annotations_struct_setter = ::std::string>
  [[deprecated("Use `FOO.empty_annotations_ref() = BAR;` instead of `FOO.set_empty_annotations(BAR);`")]]
  ::std::string& set_empty_annotations(T_MyStruct_empty_annotations_struct_setter&& empty_annotations_) {
    empty_annotations_ref() = std::forward<T_MyStruct_empty_annotations_struct_setter>(empty_annotations_);
    return __fbthrift_field_empty_annotations;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyStruct>;
  friend void swap(MyStruct& a, MyStruct& b);
};

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class SecretStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = SecretStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SecretStruct() :
      __fbthrift_field_id() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SecretStruct(apache::thrift::FragileConstructor, ::std::int64_t id__arg, ::std::string password__arg);

  SecretStruct(SecretStruct&&) noexcept;

  SecretStruct(const SecretStruct& src);


  SecretStruct& operator=(SecretStruct&&) noexcept;
  SecretStruct& operator=(const SecretStruct& src);
  void __clear();
 private:
  ::std::int64_t __fbthrift_field_id;
 private:
  ::std::string __fbthrift_field_password;
 private:
  apache::thrift::detail::isset_bitset<2, false> __isset;

 public:

  bool operator==(const SecretStruct&) const;
  bool operator<(const SecretStruct&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id_ref() const& {
    return {this->__fbthrift_field_id, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_id), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id_ref() & {
    return {this->__fbthrift_field_id, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_id), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id() const& {
    return {this->__fbthrift_field_id, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_id), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id() & {
    return {this->__fbthrift_field_id, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id() && {
    return {static_cast<T&&>(this->__fbthrift_field_id), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> password_ref() const& {
    return {this->__fbthrift_field_password, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> password_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_password), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> password_ref() & {
    return {this->__fbthrift_field_password, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> password_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_password), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> password() const& {
    return {this->__fbthrift_field_password, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> password() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_password), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> password() & {
    return {this->__fbthrift_field_password, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> password() && {
    return {static_cast<T&&>(this->__fbthrift_field_password), __isset.at(1), __isset.bit(1)};
  }

  ::std::int64_t get_id() const {
    return __fbthrift_field_id;
  }

  [[deprecated("Use `FOO.id_ref() = BAR;` instead of `FOO.set_id(BAR);`")]]
  ::std::int64_t& set_id(::std::int64_t id_) {
    id_ref() = id_;
    return __fbthrift_field_id;
  }

  const ::std::string& get_password() const& {
    return __fbthrift_field_password;
  }

  ::std::string get_password() && {
    return std::move(__fbthrift_field_password);
  }

  template <typename T_SecretStruct_password_struct_setter = ::std::string>
  [[deprecated("Use `FOO.password_ref() = BAR;` instead of `FOO.set_password(BAR);`")]]
  ::std::string& set_password(T_SecretStruct_password_struct_setter&& password_) {
    password_ref() = std::forward<T_SecretStruct_password_struct_setter>(password_);
    return __fbthrift_field_password;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<SecretStruct>;
  friend void swap(SecretStruct& a, SecretStruct& b);
};

template <class Protocol_>
uint32_t SecretStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2

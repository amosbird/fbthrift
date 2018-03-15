/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/include_types.h"

// BEGIN declare_enums
namespace apache { namespace thrift { namespace fixtures { namespace types {

enum class has_bitwise_ops {
  none = 0,
  zero = 1,
  one = 2,
  two = 4,
  three = 8
};

using _has_bitwise_ops_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<has_bitwise_ops, has_bitwise_ops>;
extern const _has_bitwise_ops_EnumMapFactory::ValuesToNamesMapType _has_bitwise_ops_VALUES_TO_NAMES;
extern const _has_bitwise_ops_EnumMapFactory::NamesToValuesMapType _has_bitwise_ops_NAMES_TO_VALUES;

inline constexpr has_bitwise_ops operator&(has_bitwise_ops a, has_bitwise_ops b) {
  using E = has_bitwise_ops;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(static_cast<U>(a) & static_cast<U>(b));
}
#if __cplusplus >= 201402L

inline constexpr has_bitwise_ops& operator&=(has_bitwise_ops& a, has_bitwise_ops b) {
  return a = a & b;
}
#else

inline has_bitwise_ops& operator&=(has_bitwise_ops& a, has_bitwise_ops b) {
  return a = a & b;
}
#endif

inline constexpr has_bitwise_ops operator|(has_bitwise_ops a, has_bitwise_ops b) {
  using E = has_bitwise_ops;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(static_cast<U>(a) | static_cast<U>(b));
}
#if __cplusplus >= 201402L

inline constexpr has_bitwise_ops& operator|=(has_bitwise_ops& a, has_bitwise_ops b) {
  return a = a | b;
}
#else

inline has_bitwise_ops& operator|=(has_bitwise_ops& a, has_bitwise_ops b) {
  return a = a | b;
}
#endif

inline constexpr has_bitwise_ops operator^(has_bitwise_ops a, has_bitwise_ops b) {
  using E = has_bitwise_ops;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(static_cast<U>(a) ^ static_cast<U>(b));
}
#if __cplusplus >= 201402L

inline constexpr has_bitwise_ops& operator^=(has_bitwise_ops& a, has_bitwise_ops b) {
  return a = a ^ b;
}
#else

inline has_bitwise_ops& operator^=(has_bitwise_ops& a, has_bitwise_ops b) {
  return a = a ^ b;
}
#endif

inline constexpr has_bitwise_ops operator~(has_bitwise_ops a) {
  using E = has_bitwise_ops;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(~static_cast<U>(a));
}

enum is_unscoped : int {
  hello = 0,
  world = 1
};

using _is_unscoped_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<is_unscoped, is_unscoped>;
extern const _is_unscoped_EnumMapFactory::ValuesToNamesMapType _is_unscoped_VALUES_TO_NAMES;
extern const _is_unscoped_EnumMapFactory::NamesToValuesMapType _is_unscoped_NAMES_TO_VALUES;



enum class MyForwardRefEnum {
  ZERO = 0,
  NONZERO = 12
};

using _MyForwardRefEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyForwardRefEnum, MyForwardRefEnum>;
extern const _MyForwardRefEnum_EnumMapFactory::ValuesToNamesMapType _MyForwardRefEnum_VALUES_TO_NAMES;
extern const _MyForwardRefEnum_EnumMapFactory::NamesToValuesMapType _MyForwardRefEnum_NAMES_TO_VALUES;



}}}} // apache::thrift::fixtures::types
namespace std {


template<> struct hash<typename  ::apache::thrift::fixtures::types::has_bitwise_ops> : public apache::thrift::detail::enum_hash<typename  ::apache::thrift::fixtures::types::has_bitwise_ops> {};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::has_bitwise_ops> : public apache::thrift::detail::enum_equal_to<typename  ::apache::thrift::fixtures::types::has_bitwise_ops> {};


template<> struct hash<typename  ::apache::thrift::fixtures::types::is_unscoped> : public apache::thrift::detail::enum_hash<typename  ::apache::thrift::fixtures::types::is_unscoped> {};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::is_unscoped> : public apache::thrift::detail::enum_equal_to<typename  ::apache::thrift::fixtures::types::is_unscoped> {};


template<> struct hash<typename  ::apache::thrift::fixtures::types::MyForwardRefEnum> : public apache::thrift::detail::enum_hash<typename  ::apache::thrift::fixtures::types::MyForwardRefEnum> {};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::MyForwardRefEnum> : public apache::thrift::detail::enum_equal_to<typename  ::apache::thrift::fixtures::types::MyForwardRefEnum> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::apache::thrift::fixtures::types::has_bitwise_ops>;
template <> const std::size_t TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::size;
template <> const folly::Range<const  ::apache::thrift::fixtures::types::has_bitwise_ops*> TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::names;
template <> const char* TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::findName( ::apache::thrift::fixtures::types::has_bitwise_ops value);
template <> bool TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::findValue(const char* name,  ::apache::thrift::fixtures::types::has_bitwise_ops* outValue);

template <> inline constexpr  ::apache::thrift::fixtures::types::has_bitwise_ops TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::min() {
  return  ::apache::thrift::fixtures::types::has_bitwise_ops::none;
}

template <> inline constexpr  ::apache::thrift::fixtures::types::has_bitwise_ops TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::max() {
  return  ::apache::thrift::fixtures::types::has_bitwise_ops::three;
}


template <> struct TEnumDataStorage< ::apache::thrift::fixtures::types::is_unscoped>;
template <> const std::size_t TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::size;
template <> const folly::Range<const  ::apache::thrift::fixtures::types::is_unscoped*> TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::names;
template <> const char* TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::findName( ::apache::thrift::fixtures::types::is_unscoped value);
template <> bool TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::findValue(const char* name,  ::apache::thrift::fixtures::types::is_unscoped* outValue);

template <> inline constexpr  ::apache::thrift::fixtures::types::is_unscoped TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::min() {
  return  ::apache::thrift::fixtures::types::is_unscoped::hello;
}

template <> inline constexpr  ::apache::thrift::fixtures::types::is_unscoped TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::max() {
  return  ::apache::thrift::fixtures::types::is_unscoped::world;
}


template <> struct TEnumDataStorage< ::apache::thrift::fixtures::types::MyForwardRefEnum>;
template <> const std::size_t TEnumTraits< ::apache::thrift::fixtures::types::MyForwardRefEnum>::size;
template <> const folly::Range<const  ::apache::thrift::fixtures::types::MyForwardRefEnum*> TEnumTraits< ::apache::thrift::fixtures::types::MyForwardRefEnum>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::fixtures::types::MyForwardRefEnum>::names;
template <> const char* TEnumTraits< ::apache::thrift::fixtures::types::MyForwardRefEnum>::findName( ::apache::thrift::fixtures::types::MyForwardRefEnum value);
template <> bool TEnumTraits< ::apache::thrift::fixtures::types::MyForwardRefEnum>::findValue(const char* name,  ::apache::thrift::fixtures::types::MyForwardRefEnum* outValue);

template <> inline constexpr  ::apache::thrift::fixtures::types::MyForwardRefEnum TEnumTraits< ::apache::thrift::fixtures::types::MyForwardRefEnum>::min() {
  return  ::apache::thrift::fixtures::types::MyForwardRefEnum::ZERO;
}

template <> inline constexpr  ::apache::thrift::fixtures::types::MyForwardRefEnum TEnumTraits< ::apache::thrift::fixtures::types::MyForwardRefEnum>::max() {
  return  ::apache::thrift::fixtures::types::MyForwardRefEnum::NONZERO;
}


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace apache { namespace thrift { namespace fixtures { namespace types {
class decorated_struct;
class ContainerStruct;
class VirtualStruct;
class MyStructWithForwardRefEnum;
}}}} // apache::thrift::fixtures::types
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
namespace std {

template<> struct hash<typename  ::apache::thrift::fixtures::types::decorated_struct> {
  size_t operator()(const  ::apache::thrift::fixtures::types::decorated_struct&) const;
};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::decorated_struct> {
  bool operator()(const  ::apache::thrift::fixtures::types::decorated_struct&,const  ::apache::thrift::fixtures::types::decorated_struct&) const;
};
} // std
// END hash_and_equal_to
namespace apache { namespace thrift { namespace fixtures { namespace types {
class decorated_struct final : private apache::thrift::detail::st::ComparisonOperators<decorated_struct> {
 public:

  decorated_struct() {}
  // FragileConstructor for use in initialization lists only.
  decorated_struct(apache::thrift::FragileConstructor, std::string field__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  decorated_struct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    decorated_struct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field = arg.move();
    __isset.field = true;
  }

  decorated_struct(decorated_struct&&) = default;

  decorated_struct(const decorated_struct&) = default;

  decorated_struct& operator=(decorated_struct&&) = default;

  decorated_struct& operator=(const decorated_struct&) = default;
  void __clear();
  std::string field;

  struct __isset {
    bool field;
  } __isset = {};
  bool operator==(const decorated_struct& rhs) const;

  bool operator < (const decorated_struct& rhs) const {
    if (!(field == rhs.field)) {
      return field < rhs.field;
    }
    (void)rhs;
    return false;
  }

  const std::string& get_field() const& {
    return field;
  }

  std::string get_field() && {
    return std::move(field);
  }

  template <typename T_decorated_struct_field_struct_setter = std::string>
  std::string& set_field(T_decorated_struct_field_struct_setter&& field_) {
    field = std::forward<T_decorated_struct_field_struct_setter>(field_);
    __isset.field = true;
    return field;
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
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< decorated_struct >;
};

void swap(decorated_struct& a, decorated_struct& b);
extern template void decorated_struct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t decorated_struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t decorated_struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void decorated_struct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t decorated_struct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t decorated_struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t decorated_struct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::clear( ::apache::thrift::fixtures::types::decorated_struct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::write(Protocol* proto,  ::apache::thrift::fixtures::types::decorated_struct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::read(Protocol* proto,  ::apache::thrift::fixtures::types::decorated_struct* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::serializedSize(Protocol const* proto,  ::apache::thrift::fixtures::types::decorated_struct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::fixtures::types::decorated_struct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {
class ContainerStruct final : private apache::thrift::detail::st::ComparisonOperators<ContainerStruct> {
 public:

  ContainerStruct();

  // FragileConstructor for use in initialization lists only.
  ContainerStruct(apache::thrift::FragileConstructor, std::vector<int32_t> fieldA__arg, std::list<int32_t> fieldB__arg, std::deque<int32_t> fieldC__arg, folly::fbvector<int32_t> fieldD__arg, folly::small_vector<int32_t> fieldE__arg, folly::sorted_vector_set<int32_t> fieldF__arg, folly::sorted_vector_map<int32_t, std::string> fieldG__arg,  ::apache::thrift::fixtures::types::SomeMap fieldH__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<12, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldA = arg.move();
    __isset.fieldA = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldB = arg.move();
    __isset.fieldB = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldC = arg.move();
    __isset.fieldC = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldD = arg.move();
    __isset.fieldD = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldE = arg.move();
    __isset.fieldE = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<6, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldF = arg.move();
    __isset.fieldF = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<7, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldG = arg.move();
    __isset.fieldG = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ContainerStruct(::apache::thrift::detail::argument_wrapper<8, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ContainerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldH = arg.move();
    __isset.fieldH = true;
  }

  ContainerStruct(ContainerStruct&&) = default;

  ContainerStruct(const ContainerStruct&) = default;

  ContainerStruct& operator=(ContainerStruct&&) = default;

  ContainerStruct& operator=(const ContainerStruct&) = default;
  void __clear();

  ~ContainerStruct();

  std::vector<int32_t> fieldA;
  std::list<int32_t> fieldB;
  std::deque<int32_t> fieldC;
  folly::fbvector<int32_t> fieldD;
  folly::small_vector<int32_t> fieldE;
  folly::sorted_vector_set<int32_t> fieldF;
  folly::sorted_vector_map<int32_t, std::string> fieldG;
   ::apache::thrift::fixtures::types::SomeMap fieldH;

  struct __isset {
    bool fieldA;
    bool fieldB;
    bool fieldC;
    bool fieldD;
    bool fieldE;
    bool fieldF;
    bool fieldG;
    bool fieldH;
  } __isset = {};
  bool operator==(const ContainerStruct& rhs) const;
  bool operator < (const ContainerStruct& rhs) const;
  const std::vector<int32_t>& get_fieldA() const&;
  std::vector<int32_t> get_fieldA() &&;

  template <typename T_ContainerStruct_fieldA_struct_setter = std::vector<int32_t>>
  std::vector<int32_t>& set_fieldA(T_ContainerStruct_fieldA_struct_setter&& fieldA_) {
    fieldA = std::forward<T_ContainerStruct_fieldA_struct_setter>(fieldA_);
    __isset.fieldA = true;
    return fieldA;
  }
  const std::list<int32_t>& get_fieldB() const&;
  std::list<int32_t> get_fieldB() &&;

  template <typename T_ContainerStruct_fieldB_struct_setter = std::list<int32_t>>
  std::list<int32_t>& set_fieldB(T_ContainerStruct_fieldB_struct_setter&& fieldB_) {
    fieldB = std::forward<T_ContainerStruct_fieldB_struct_setter>(fieldB_);
    __isset.fieldB = true;
    return fieldB;
  }
  const std::deque<int32_t>& get_fieldC() const&;
  std::deque<int32_t> get_fieldC() &&;

  template <typename T_ContainerStruct_fieldC_struct_setter = std::deque<int32_t>>
  std::deque<int32_t>& set_fieldC(T_ContainerStruct_fieldC_struct_setter&& fieldC_) {
    fieldC = std::forward<T_ContainerStruct_fieldC_struct_setter>(fieldC_);
    __isset.fieldC = true;
    return fieldC;
  }
  const folly::fbvector<int32_t>& get_fieldD() const&;
  folly::fbvector<int32_t> get_fieldD() &&;

  template <typename T_ContainerStruct_fieldD_struct_setter = folly::fbvector<int32_t>>
  folly::fbvector<int32_t>& set_fieldD(T_ContainerStruct_fieldD_struct_setter&& fieldD_) {
    fieldD = std::forward<T_ContainerStruct_fieldD_struct_setter>(fieldD_);
    __isset.fieldD = true;
    return fieldD;
  }
  const folly::small_vector<int32_t>& get_fieldE() const&;
  folly::small_vector<int32_t> get_fieldE() &&;

  template <typename T_ContainerStruct_fieldE_struct_setter = folly::small_vector<int32_t>>
  folly::small_vector<int32_t>& set_fieldE(T_ContainerStruct_fieldE_struct_setter&& fieldE_) {
    fieldE = std::forward<T_ContainerStruct_fieldE_struct_setter>(fieldE_);
    __isset.fieldE = true;
    return fieldE;
  }
  const folly::sorted_vector_set<int32_t>& get_fieldF() const&;
  folly::sorted_vector_set<int32_t> get_fieldF() &&;

  template <typename T_ContainerStruct_fieldF_struct_setter = folly::sorted_vector_set<int32_t>>
  folly::sorted_vector_set<int32_t>& set_fieldF(T_ContainerStruct_fieldF_struct_setter&& fieldF_) {
    fieldF = std::forward<T_ContainerStruct_fieldF_struct_setter>(fieldF_);
    __isset.fieldF = true;
    return fieldF;
  }
  const folly::sorted_vector_map<int32_t, std::string>& get_fieldG() const&;
  folly::sorted_vector_map<int32_t, std::string> get_fieldG() &&;

  template <typename T_ContainerStruct_fieldG_struct_setter = folly::sorted_vector_map<int32_t, std::string>>
  folly::sorted_vector_map<int32_t, std::string>& set_fieldG(T_ContainerStruct_fieldG_struct_setter&& fieldG_) {
    fieldG = std::forward<T_ContainerStruct_fieldG_struct_setter>(fieldG_);
    __isset.fieldG = true;
    return fieldG;
  }
  const  ::apache::thrift::fixtures::types::SomeMap& get_fieldH() const&;
   ::apache::thrift::fixtures::types::SomeMap get_fieldH() &&;

  template <typename T_ContainerStruct_fieldH_struct_setter =  ::apache::thrift::fixtures::types::SomeMap>
   ::apache::thrift::fixtures::types::SomeMap& set_fieldH(T_ContainerStruct_fieldH_struct_setter&& fieldH_) {
    fieldH = std::forward<T_ContainerStruct_fieldH_struct_setter>(fieldH_);
    __isset.fieldH = true;
    return fieldH;
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
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< ContainerStruct >;
};

void swap(ContainerStruct& a, ContainerStruct& b);
extern template void ContainerStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ContainerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ContainerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void ContainerStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ContainerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ContainerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t ContainerStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::fixtures::types::ContainerStruct>::clear( ::apache::thrift::fixtures::types::ContainerStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::fixtures::types::ContainerStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::ContainerStruct>::write(Protocol* proto,  ::apache::thrift::fixtures::types::ContainerStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::apache::thrift::fixtures::types::ContainerStruct>::read(Protocol* proto,  ::apache::thrift::fixtures::types::ContainerStruct* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::ContainerStruct>::serializedSize(Protocol const* proto,  ::apache::thrift::fixtures::types::ContainerStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::ContainerStruct>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::fixtures::types::ContainerStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {
class VirtualStruct : private apache::thrift::detail::st::ComparisonOperators<VirtualStruct> {
 public:

  VirtualStruct() :
      MyIntField(0) {}
  // FragileConstructor for use in initialization lists only.
  VirtualStruct(apache::thrift::FragileConstructor, int64_t MyIntField__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  VirtualStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    VirtualStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyIntField = arg.move();
    __isset.MyIntField = true;
  }

  VirtualStruct(VirtualStruct&&) = default;

  VirtualStruct(const VirtualStruct&) = default;

  VirtualStruct& operator=(VirtualStruct&&) = default;

  VirtualStruct& operator=(const VirtualStruct&) = default;
  void __clear();

  virtual ~VirtualStruct() {}

  int64_t MyIntField;

  struct __isset {
    bool MyIntField;
  } __isset = {};
  bool operator==(const VirtualStruct& rhs) const;

  bool operator < (const VirtualStruct& rhs) const {
    if (!(MyIntField == rhs.MyIntField)) {
      return MyIntField < rhs.MyIntField;
    }
    (void)rhs;
    return false;
  }

  int64_t get_MyIntField() const {
    return MyIntField;
  }

  int64_t& set_MyIntField(int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
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
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< VirtualStruct >;
};

void swap(VirtualStruct& a, VirtualStruct& b);
extern template void VirtualStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t VirtualStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t VirtualStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t VirtualStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void VirtualStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t VirtualStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t VirtualStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t VirtualStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t VirtualStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::fixtures::types::VirtualStruct>::clear( ::apache::thrift::fixtures::types::VirtualStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::fixtures::types::VirtualStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::VirtualStruct>::write(Protocol* proto,  ::apache::thrift::fixtures::types::VirtualStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::apache::thrift::fixtures::types::VirtualStruct>::read(Protocol* proto,  ::apache::thrift::fixtures::types::VirtualStruct* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::VirtualStruct>::serializedSize(Protocol const* proto,  ::apache::thrift::fixtures::types::VirtualStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::VirtualStruct>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::fixtures::types::VirtualStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {
class MyStructWithForwardRefEnum final : private apache::thrift::detail::st::ComparisonOperators<MyStructWithForwardRefEnum> {
 public:

  MyStructWithForwardRefEnum() :
      a( ::apache::thrift::fixtures::types::MyForwardRefEnum::NONZERO),
      b( ::apache::thrift::fixtures::types::MyForwardRefEnum::NONZERO) {}
  // FragileConstructor for use in initialization lists only.
  MyStructWithForwardRefEnum(apache::thrift::FragileConstructor,  ::apache::thrift::fixtures::types::MyForwardRefEnum a__arg,  ::apache::thrift::fixtures::types::MyForwardRefEnum b__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStructWithForwardRefEnum(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStructWithForwardRefEnum(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    a = arg.move();
    __isset.a = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStructWithForwardRefEnum(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStructWithForwardRefEnum(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    b = arg.move();
    __isset.b = true;
  }

  MyStructWithForwardRefEnum(MyStructWithForwardRefEnum&&) = default;

  MyStructWithForwardRefEnum(const MyStructWithForwardRefEnum&) = default;

  MyStructWithForwardRefEnum& operator=(MyStructWithForwardRefEnum&&) = default;

  MyStructWithForwardRefEnum& operator=(const MyStructWithForwardRefEnum&) = default;
  void __clear();
   ::apache::thrift::fixtures::types::MyForwardRefEnum a;
   ::apache::thrift::fixtures::types::MyForwardRefEnum b;

  struct __isset {
    bool a;
    bool b;
  } __isset = {};
  bool operator==(const MyStructWithForwardRefEnum& rhs) const;
  bool operator < (const MyStructWithForwardRefEnum& rhs) const;

   ::apache::thrift::fixtures::types::MyForwardRefEnum get_a() const {
    return a;
  }

   ::apache::thrift::fixtures::types::MyForwardRefEnum& set_a( ::apache::thrift::fixtures::types::MyForwardRefEnum a_) {
    a = a_;
    __isset.a = true;
    return a;
  }

   ::apache::thrift::fixtures::types::MyForwardRefEnum get_b() const {
    return b;
  }

   ::apache::thrift::fixtures::types::MyForwardRefEnum& set_b( ::apache::thrift::fixtures::types::MyForwardRefEnum b_) {
    b = b_;
    __isset.b = true;
    return b;
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
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyStructWithForwardRefEnum >;
};

void swap(MyStructWithForwardRefEnum& a, MyStructWithForwardRefEnum& b);
extern template void MyStructWithForwardRefEnum::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStructWithForwardRefEnum::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStructWithForwardRefEnum::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStructWithForwardRefEnum::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStructWithForwardRefEnum::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStructWithForwardRefEnum::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStructWithForwardRefEnum::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStructWithForwardRefEnum::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t MyStructWithForwardRefEnum::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum>::clear( ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum>::write(Protocol* proto,  ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum>::read(Protocol* proto,  ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum>::serializedSize(Protocol const* proto,  ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::fixtures::types::MyStructWithForwardRefEnum const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift

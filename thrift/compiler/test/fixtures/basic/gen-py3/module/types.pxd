#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "src/gen-py3/module/types.h":
  pass


cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types.h" namespace "::cpp2":
    cdef cppclass cMyEnum "::cpp2::MyEnum":
        pass





cdef class MyEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cMyStruct "::cpp2::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        bint operator!=(cMyStruct&)
        bint operator<(cMyStruct&)
        bint operator>(cMyStruct&)
        bint operator<=(cMyStruct&)
        bint operator>=(cMyStruct&)
        __field_ref[cint64_t] MyIntField_ref()
        __field_ref[string] MyStringField_ref()
        __field_ref[cMyDataItem] MyDataField_ref()
        __field_ref[cMyEnum] myEnum_ref()
        __field_ref[cbool] oneway_ref()
        __field_ref[cbool] readonly_ref()
        __field_ref[cbool] idempotent_ref()


    cdef cppclass cMyDataItem "::cpp2::MyDataItem":
        cMyDataItem() except +
        cMyDataItem(const cMyDataItem&) except +
        bint operator==(cMyDataItem&)
        bint operator!=(cMyDataItem&)
        bint operator<(cMyDataItem&)
        bint operator>(cMyDataItem&)
        bint operator<=(cMyDataItem&)
        bint operator>=(cMyDataItem&)

    cdef enum cMyUnion__type "::cpp2::MyUnion::Type":
        cMyUnion__type___EMPTY__ "::cpp2::MyUnion::Type::__EMPTY__",
        cMyUnion__type_myEnum "::cpp2::MyUnion::Type::myEnum",
        cMyUnion__type_myStruct "::cpp2::MyUnion::Type::myStruct",
        cMyUnion__type_myDataItem "::cpp2::MyUnion::Type::myDataItem",

    cdef cppclass cMyUnion "::cpp2::MyUnion":
        cMyUnion() except +
        cMyUnion(const cMyUnion&) except +
        bint operator==(cMyUnion&)
        bint operator!=(cMyUnion&)
        bint operator<(cMyUnion&)
        bint operator>(cMyUnion&)
        bint operator<=(cMyUnion&)
        bint operator>=(cMyUnion&)
        cMyUnion__type getType() const
        const cMyEnum& get_myEnum() const
        cMyEnum& set_myEnum(const cMyEnum&)
        const cMyStruct& get_myStruct() const
        cMyStruct& set_myStruct(const cMyStruct&)
        const cMyDataItem& get_myDataItem() const
        cMyDataItem& set_myDataItem(const cMyDataItem&)




cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object MyIntField_impl(self)
    cdef inline object MyStringField_impl(self)
    cdef inline object MyDataField_impl(self)
    cdef inline object myEnum_impl(self)
    cdef inline object oneway_impl(self)
    cdef inline object readonly_impl(self)
    cdef inline object idempotent_impl(self)
    cdef MyDataItem __fbthrift_cached_MyDataField
    cdef object __fbthrift_cached_myEnum

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct])



cdef class MyDataItem(thrift.py3.types.Struct):
    cdef shared_ptr[cMyDataItem] _cpp_obj
    cdef _fbthrift_types_fields.__MyDataItem_FieldsSetter _fields_setter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyDataItem])

cdef class __MyUnionType(thrift.py3.types.CompiledEnum):
    pass




cdef class MyUnion(thrift.py3.types.Union):
    cdef shared_ptr[cMyUnion] _cpp_obj
    cdef readonly __MyUnionType type
    cdef readonly object value
    cdef _load_cache(MyUnion self)

    @staticmethod
    cdef unique_ptr[cMyUnion] _make_instance(
        cMyUnion* base_instance,
        MyEnum myEnum,
        MyStruct myStruct,
        MyDataItem myDataItem
    ) except *

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyUnion])




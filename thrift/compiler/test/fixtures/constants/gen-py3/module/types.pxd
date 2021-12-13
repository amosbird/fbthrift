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
    cdef cppclass cEmptyEnum "::cpp2::EmptyEnum":
        pass

    cdef cppclass cCity "::cpp2::City":
        pass

    cdef cppclass cCompany "::cpp2::Company":
        pass





cdef class EmptyEnum(thrift.py3.types.CompiledEnum):
    pass


cdef class City(thrift.py3.types.CompiledEnum):
    pass


cdef class Company(thrift.py3.types.CompiledEnum):
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

    cdef cppclass cInternship "::cpp2::Internship":
        cInternship() except +
        cInternship(const cInternship&) except +
        bint operator==(cInternship&)
        bint operator!=(cInternship&)
        bint operator<(cInternship&)
        bint operator>(cInternship&)
        bint operator<=(cInternship&)
        bint operator>=(cInternship&)
        __required_field_ref[cint32_t] weeks_ref()
        __field_ref[string] title_ref()
        __optional_field_ref[cCompany] employer_ref()
        __optional_field_ref[double] compensation_ref()
        __optional_field_ref[string] school_ref()


    cdef cppclass cRange "::cpp2::Range":
        cRange() except +
        cRange(const cRange&) except +
        bint operator==(cRange&)
        bint operator!=(cRange&)
        bint operator<(cRange&)
        bint operator>(cRange&)
        bint operator<=(cRange&)
        bint operator>=(cRange&)
        __required_field_ref[cint32_t] min_ref()
        __required_field_ref[cint32_t] max_ref()


    cdef cppclass cstruct1 "::cpp2::struct1":
        cstruct1() except +
        cstruct1(const cstruct1&) except +
        bint operator==(cstruct1&)
        bint operator!=(cstruct1&)
        bint operator<(cstruct1&)
        bint operator>(cstruct1&)
        bint operator<=(cstruct1&)
        bint operator>=(cstruct1&)
        __field_ref[cint32_t] a_ref()
        __field_ref[string] b_ref()


    cdef cppclass cstruct2 "::cpp2::struct2":
        cstruct2() except +
        cstruct2(const cstruct2&) except +
        bint operator==(cstruct2&)
        bint operator!=(cstruct2&)
        bint operator<(cstruct2&)
        bint operator>(cstruct2&)
        bint operator<=(cstruct2&)
        bint operator>=(cstruct2&)
        __field_ref[cint32_t] a_ref()
        __field_ref[string] b_ref()
        __field_ref[cstruct1] c_ref()
        __field_ref[vector[cint32_t]] d_ref()


    cdef cppclass cstruct3 "::cpp2::struct3":
        cstruct3() except +
        cstruct3(const cstruct3&) except +
        bint operator==(cstruct3&)
        bint operator!=(cstruct3&)
        bint operator<(cstruct3&)
        bint operator>(cstruct3&)
        bint operator<=(cstruct3&)
        bint operator>=(cstruct3&)
        __field_ref[string] a_ref()
        __field_ref[cint32_t] b_ref()
        __field_ref[cstruct2] c_ref()


    cdef cppclass cstruct4 "::cpp2::struct4":
        cstruct4() except +
        cstruct4(const cstruct4&) except +
        bint operator==(cstruct4&)
        bint operator!=(cstruct4&)
        bint operator<(cstruct4&)
        bint operator>(cstruct4&)
        bint operator<=(cstruct4&)
        bint operator>=(cstruct4&)
        __field_ref[cint32_t] a_ref()
        __optional_field_ref[double] b_ref()
        __optional_field_ref[cint8_t] c_ref()

    cdef enum cunion1__type "::cpp2::union1::Type":
        cunion1__type___EMPTY__ "::cpp2::union1::Type::__EMPTY__",
        cunion1__type_i "::cpp2::union1::Type::i",
        cunion1__type_d "::cpp2::union1::Type::d",

    cdef cppclass cunion1 "::cpp2::union1":
        cunion1() except +
        cunion1(const cunion1&) except +
        bint operator==(cunion1&)
        bint operator!=(cunion1&)
        bint operator<(cunion1&)
        bint operator>(cunion1&)
        bint operator<=(cunion1&)
        bint operator>=(cunion1&)
        cunion1__type getType() const
        const cint32_t& get_i() const
        cint32_t& set_i(const cint32_t&)
        const double& get_d() const
        double& set_d(const double&)

    cdef enum cunion2__type "::cpp2::union2::Type":
        cunion2__type___EMPTY__ "::cpp2::union2::Type::__EMPTY__",
        cunion2__type_i "::cpp2::union2::Type::i",
        cunion2__type_d "::cpp2::union2::Type::d",
        cunion2__type_s "::cpp2::union2::Type::s",
        cunion2__type_u "::cpp2::union2::Type::u",

    cdef cppclass cunion2 "::cpp2::union2":
        cunion2() except +
        cunion2(const cunion2&) except +
        bint operator==(cunion2&)
        bint operator!=(cunion2&)
        bint operator<(cunion2&)
        bint operator>(cunion2&)
        bint operator<=(cunion2&)
        bint operator>=(cunion2&)
        cunion2__type getType() const
        const cint32_t& get_i() const
        cint32_t& set_i(const cint32_t&)
        const double& get_d() const
        double& set_d(const double&)
        const cstruct1& get_s() const
        cstruct1& set_s(const cstruct1&)
        const cunion1& get_u() const
        cunion1& set_u(const cunion1&)




cdef class Internship(thrift.py3.types.Struct):
    cdef shared_ptr[cInternship] _cpp_obj
    cdef _fbthrift_types_fields.__Internship_FieldsSetter _fields_setter
    cdef inline object weeks_impl(self)
    cdef inline object title_impl(self)
    cdef inline object employer_impl(self)
    cdef inline object compensation_impl(self)
    cdef inline object school_impl(self)
    cdef object __fbthrift_cached_employer

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cInternship])



cdef class Range(thrift.py3.types.Struct):
    cdef shared_ptr[cRange] _cpp_obj
    cdef _fbthrift_types_fields.__Range_FieldsSetter _fields_setter
    cdef inline object min_impl(self)
    cdef inline object max_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cRange])



cdef class struct1(thrift.py3.types.Struct):
    cdef shared_ptr[cstruct1] _cpp_obj
    cdef _fbthrift_types_fields.__struct1_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cstruct1])



cdef class struct2(thrift.py3.types.Struct):
    cdef shared_ptr[cstruct2] _cpp_obj
    cdef _fbthrift_types_fields.__struct2_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)
    cdef inline object c_impl(self)
    cdef inline object d_impl(self)
    cdef struct1 __fbthrift_cached_c
    cdef List__i32 __fbthrift_cached_d

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cstruct2])



cdef class struct3(thrift.py3.types.Struct):
    cdef shared_ptr[cstruct3] _cpp_obj
    cdef _fbthrift_types_fields.__struct3_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)
    cdef inline object c_impl(self)
    cdef struct2 __fbthrift_cached_c

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cstruct3])



cdef class struct4(thrift.py3.types.Struct):
    cdef shared_ptr[cstruct4] _cpp_obj
    cdef _fbthrift_types_fields.__struct4_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)
    cdef inline object c_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cstruct4])

cdef class __union1Type(thrift.py3.types.CompiledEnum):
    pass




cdef class union1(thrift.py3.types.Union):
    cdef shared_ptr[cunion1] _cpp_obj
    cdef readonly __union1Type type
    cdef readonly object value
    cdef _load_cache(union1 self)

    @staticmethod
    cdef unique_ptr[cunion1] _make_instance(
        cunion1* base_instance,
        object i,
        object d
    ) except *

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cunion1])

cdef class __union2Type(thrift.py3.types.CompiledEnum):
    pass




cdef class union2(thrift.py3.types.Union):
    cdef shared_ptr[cunion2] _cpp_obj
    cdef readonly __union2Type type
    cdef readonly object value
    cdef _load_cache(union2 self)

    @staticmethod
    cdef unique_ptr[cunion2] _make_instance(
        cunion2* base_instance,
        object i,
        object d,
        struct1 s,
        union1 u
    ) except *

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cunion2])


cdef class List__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cint32_t]])
    @staticmethod
    cdef shared_ptr[vector[cint32_t]] _make_instance(object items) except *

cdef class Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,cint32_t]])
    @staticmethod
    cdef shared_ptr[cmap[string,cint32_t]] _make_instance(object items) except *

cdef class List__Map__string_i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[string,cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cmap[string,cint32_t]]])
    @staticmethod
    cdef shared_ptr[vector[cmap[string,cint32_t]]] _make_instance(object items) except *

cdef class Map__string_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,string]])
    @staticmethod
    cdef shared_ptr[cmap[string,string]] _make_instance(object items) except *

cdef class List__Range(thrift.py3.types.List):
    cdef shared_ptr[vector[cRange]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cRange]])
    @staticmethod
    cdef shared_ptr[vector[cRange]] _make_instance(object items) except *

cdef class List__Internship(thrift.py3.types.List):
    cdef shared_ptr[vector[cInternship]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cInternship]])
    @staticmethod
    cdef shared_ptr[vector[cInternship]] _make_instance(object items) except *

cdef class List__string(thrift.py3.types.List):
    cdef shared_ptr[vector[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[string]])
    @staticmethod
    cdef shared_ptr[vector[string]] _make_instance(object items) except *

cdef class Set__i32(thrift.py3.types.Set):
    cdef shared_ptr[cset[cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[cint32_t]])
    @staticmethod
    cdef shared_ptr[cset[cint32_t]] _make_instance(object items) except *

cdef class Set__string(thrift.py3.types.Set):
    cdef shared_ptr[cset[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[string]])
    @staticmethod
    cdef shared_ptr[cset[string]] _make_instance(object items) except *

cdef class Map__i32_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint32_t,cint32_t]])
    @staticmethod
    cdef shared_ptr[cmap[cint32_t,cint32_t]] _make_instance(object items) except *

cdef class Map__i32_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint32_t,string]])
    @staticmethod
    cdef shared_ptr[cmap[cint32_t,string]] _make_instance(object items) except *


cdef extern from "src/gen-cpp2/module_constants.h" namespace "::cpp2":
    cdef cint32_t cmyInt "::cpp2::module_constants::myInt"
    cdef const char* cname "::cpp2::module_constants::name"()
    cdef const char* cmulti_line_string "::cpp2::module_constants::multi_line_string"()
    cdef vector[cmap[string,cint32_t]] cstates "::cpp2::module_constants::states"()
    cdef double cx "::cpp2::module_constants::x"
    cdef double cy "::cpp2::module_constants::y"
    cdef double cz "::cpp2::module_constants::z"
    cdef double czeroDoubleValue "::cpp2::module_constants::zeroDoubleValue"
    cdef double clongDoubleValue "::cpp2::module_constants::longDoubleValue"
    cdef cCompany cmy_company "::cpp2::module_constants::my_company"()
    cdef const char* cfoo "::cpp2::module_constants::foo"()
    cdef cint32_t cbar "::cpp2::module_constants::bar"
    cdef cmap[string,string] cmymap "::cpp2::module_constants::mymap"()
    cdef cInternship cinstagram "::cpp2::module_constants::instagram"()
    cdef cInternship cpartial_const "::cpp2::module_constants::partial_const"()
    cdef vector[cRange] ckRanges "::cpp2::module_constants::kRanges"()
    cdef vector[cInternship] cinternList "::cpp2::module_constants::internList"()
    cdef cstruct1 cpod_0 "::cpp2::module_constants::pod_0"()
    cdef cstruct1 cpod_s_0 "::cpp2::module_constants::pod_s_0"()
    cdef cstruct1 cpod_1 "::cpp2::module_constants::pod_1"()
    cdef cstruct1 cpod_s_1 "::cpp2::module_constants::pod_s_1"()
    cdef cstruct2 cpod_2 "::cpp2::module_constants::pod_2"()
    cdef cstruct2 cpod_trailing_commas "::cpp2::module_constants::pod_trailing_commas"()
    cdef cstruct2 cpod_s_2 "::cpp2::module_constants::pod_s_2"()
    cdef cstruct3 cpod_3 "::cpp2::module_constants::pod_3"()
    cdef cstruct3 cpod_s_3 "::cpp2::module_constants::pod_s_3"()
    cdef cstruct4 cpod_4 "::cpp2::module_constants::pod_4"()
    cdef cunion1 cu_1_1 "::cpp2::module_constants::u_1_1"()
    cdef cunion1 cu_1_2 "::cpp2::module_constants::u_1_2"()
    cdef cunion1 cu_1_3 "::cpp2::module_constants::u_1_3"()
    cdef cunion2 cu_2_1 "::cpp2::module_constants::u_2_1"()
    cdef cunion2 cu_2_2 "::cpp2::module_constants::u_2_2"()
    cdef cunion2 cu_2_3 "::cpp2::module_constants::u_2_3"()
    cdef cunion2 cu_2_4 "::cpp2::module_constants::u_2_4"()
    cdef cunion2 cu_2_5 "::cpp2::module_constants::u_2_5"()
    cdef cunion2 cu_2_6 "::cpp2::module_constants::u_2_6"()
    cdef const char* capostrophe "::cpp2::module_constants::apostrophe"()
    cdef const char* ctripleApostrophe "::cpp2::module_constants::tripleApostrophe"()
    cdef const char* cquotationMark "::cpp2::module_constants::quotationMark"()
    cdef const char* cbackslash "::cpp2::module_constants::backslash"()
    cdef const char* cescaped_a "::cpp2::module_constants::escaped_a"()
    cdef cmap[string,cint32_t] cchar2ascii "::cpp2::module_constants::char2ascii"()
    cdef vector[string] cescaped_strings "::cpp2::module_constants::escaped_strings"()
    cdef cbool cfalse_c "::cpp2::module_constants::false_c"
    cdef cbool ctrue_c "::cpp2::module_constants::true_c"
    cdef cint8_t czero_byte "::cpp2::module_constants::zero_byte"
    cdef cint16_t czero16 "::cpp2::module_constants::zero16"
    cdef cint32_t czero32 "::cpp2::module_constants::zero32"
    cdef cint64_t czero64 "::cpp2::module_constants::zero64"
    cdef double czero_dot_zero "::cpp2::module_constants::zero_dot_zero"
    cdef const char* cempty_string "::cpp2::module_constants::empty_string"()
    cdef vector[cint32_t] cempty_int_list "::cpp2::module_constants::empty_int_list"()
    cdef vector[string] cempty_string_list "::cpp2::module_constants::empty_string_list"()
    cdef cset[cint32_t] cempty_int_set "::cpp2::module_constants::empty_int_set"()
    cdef cset[string] cempty_string_set "::cpp2::module_constants::empty_string_set"()
    cdef cmap[cint32_t,cint32_t] cempty_int_int_map "::cpp2::module_constants::empty_int_int_map"()
    cdef cmap[cint32_t,string] cempty_int_string_map "::cpp2::module_constants::empty_int_string_map"()
    cdef cmap[string,cint32_t] cempty_string_int_map "::cpp2::module_constants::empty_string_int_map"()
    cdef cmap[string,string] cempty_string_string_map "::cpp2::module_constants::empty_string_string_map"()

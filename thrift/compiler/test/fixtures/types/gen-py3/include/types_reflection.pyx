#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)


cimport include.types as _include_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __MapSpec get_reflection__std_unordered_map__Map__i32_string():
    return __MapSpec._fbthrift_create(
        key=int,
        key_kind=__NumberType.I32,
        value=str,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

cdef __ListSpec get_reflection__List__std_unordered_map__Map__i32_string():
    return __ListSpec._fbthrift_create(
        value=_include_types.std_unordered_map__Map__i32_string,
        kind=__NumberType.NOT_A_NUMBER,
    )


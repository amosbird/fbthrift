#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder


cimport test.fixtures.interactions.module.types as _test_fixtures_interactions_module_types

cdef class CustomException_Builder(thrift.py3.builder.StructBuilder):
    cdef public str message



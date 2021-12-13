#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection cimport (
  MethodSpec as __MethodSpec,
  ArgumentSpec as __ArgumentSpec,
  NumberType as __NumberType,
)

import folly.iobuf as _fbthrift_iobuf

cimport includes.types as _includes_types
cimport module.types as _module_types
cimport transitive.types as _transitive_types

cimport service.types as _service_types


cdef __InterfaceSpec get_reflection__MyService(bint for_clients):
    cdef __InterfaceSpec spec = __InterfaceSpec._fbthrift_create(
        name="MyService",
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec._fbthrift_create(
            name="query",
            arguments=(
                __ArgumentSpec._fbthrift_create(
                    name="s",
                    type=_module_types.MyStruct,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
                __ArgumentSpec._fbthrift_create(
                    name="i",
                    type=_includes_types.Included,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec._fbthrift_create(
            name="has_arg_docs",
            arguments=(
                __ArgumentSpec._fbthrift_create(
                    name="s",
                    type=_module_types.MyStruct,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
                __ArgumentSpec._fbthrift_create(
                    name="i",
                    type=_includes_types.Included,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec

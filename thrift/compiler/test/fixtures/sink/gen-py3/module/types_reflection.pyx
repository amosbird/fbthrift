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


cimport module.types as _module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__InitialResponse():
    cdef _module_types.InitialResponse defaults = _module_types.InitialResponse._fbthrift_create(
        constant_shared_ptr[_module_types.cInitialResponse](
            default_inst[_module_types.cInitialResponse]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="InitialResponse",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="content",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__FinalResponse():
    cdef _module_types.FinalResponse defaults = _module_types.FinalResponse._fbthrift_create(
        constant_shared_ptr[_module_types.cFinalResponse](
            default_inst[_module_types.cFinalResponse]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="FinalResponse",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="content",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__SinkPayload():
    cdef _module_types.SinkPayload defaults = _module_types.SinkPayload._fbthrift_create(
        constant_shared_ptr[_module_types.cSinkPayload](
            default_inst[_module_types.cSinkPayload]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="SinkPayload",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="content",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__CompatibleWithKeywordSink():
    cdef _module_types.CompatibleWithKeywordSink defaults = _module_types.CompatibleWithKeywordSink._fbthrift_create(
        constant_shared_ptr[_module_types.cCompatibleWithKeywordSink](
            default_inst[_module_types.cCompatibleWithKeywordSink]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="CompatibleWithKeywordSink",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="sink",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__InitialException():
    cdef _module_types.InitialException defaults = _module_types.InitialException._fbthrift_create(
        constant_shared_ptr[_module_types.cInitialException](
            default_inst[_module_types.cInitialException]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="InitialException",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="reason",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__SinkException1():
    cdef _module_types.SinkException1 defaults = _module_types.SinkException1._fbthrift_create(
        constant_shared_ptr[_module_types.cSinkException1](
            default_inst[_module_types.cSinkException1]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="SinkException1",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="reason",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__SinkException2():
    cdef _module_types.SinkException2 defaults = _module_types.SinkException2._fbthrift_create(
        constant_shared_ptr[_module_types.cSinkException2](
            default_inst[_module_types.cSinkException2]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="SinkException2",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="reason",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec

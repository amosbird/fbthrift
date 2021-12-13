#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.py3.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

cimport service.types as _service_types
import service.types as _service_types
import includes.types as _includes_types
cimport includes.types as _includes_types
import module.types as _module_types
cimport module.types as _module_types
import transitive.types as _transitive_types
cimport transitive.types as _transitive_types

cimport service.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from service.services_wrapper cimport cMyServiceInterface



@cython.auto_pickle(False)
cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cFollyUnit](cFollyPromise[cFollyUnit].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cFollyUnit] cPromise):
        cdef Promise_cFollyUnit inst = Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise[0] = cmove(cPromise)
        return inst

cdef object _MyService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class MyServiceInterface(
    ServiceInterface
):
    annotations = _MyService_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    async def query(
            self,
            s,
            i):
        raise NotImplementedError("async def query is not implemented")

    async def has_arg_docs(
            self,
            s,
            i):
        raise NotImplementedError("async def has_arg_docs is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__MyService(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cMyServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "service.MyService"



cdef api void call_cy_MyService_query(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    unique_ptr[_module_types.cMyStruct] s,
    unique_ptr[_includes_types.cIncluded] i
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    arg_s = _module_types.MyStruct._fbthrift_create(shared_ptr[_module_types.cMyStruct](s.release()))
    arg_i = _includes_types.Included._fbthrift_create(shared_ptr[_includes_types.cIncluded](i.release()))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyService_query_coro(
            self,
            __promise,
            arg_s,
            arg_i
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyService_query_coro(
    object self,
    Promise_cFollyUnit promise,
    s,
    i
):
    try:
        result = await self.query(
                    s,
                    i)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler query:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler query:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyService_has_arg_docs(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    unique_ptr[_module_types.cMyStruct] s,
    unique_ptr[_includes_types.cIncluded] i
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    arg_s = _module_types.MyStruct._fbthrift_create(shared_ptr[_module_types.cMyStruct](s.release()))
    arg_i = _includes_types.Included._fbthrift_create(shared_ptr[_includes_types.cIncluded](i.release()))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyService_has_arg_docs_coro(
            self,
            __promise,
            arg_s,
            arg_i
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyService_has_arg_docs_coro(
    object self,
    Promise_cFollyUnit promise,
    s,
    i
):
    try:
        result = await self.has_arg_docs(
                    s,
                    i)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler has_arg_docs:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler has_arg_docs:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)


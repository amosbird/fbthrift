#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection cimport (
  InterfaceSpec as __InterfaceSpec,
)


cdef __InterfaceSpec get_reflection__SimpleService(bint for_clients)

cdef extern from "src/gen-py3cpp/SimpleService.h" namespace "::py3::simple":
    cdef cppclass cSimpleServiceSvIf "::py3::simple::SimpleServiceSvIf":
        pass

cdef __InterfaceSpec get_reflection__DerivedService(bint for_clients)

cdef extern from "src/gen-py3cpp/DerivedService.h" namespace "::py3::simple":
    cdef cppclass cDerivedServiceSvIf "::py3::simple::DerivedServiceSvIf":
        pass

cdef __InterfaceSpec get_reflection__RederivedService(bint for_clients)

cdef extern from "src/gen-py3cpp/RederivedService.h" namespace "::py3::simple":
    cdef cppclass cRederivedServiceSvIf "::py3::simple::RederivedServiceSvIf":
        pass

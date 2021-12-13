#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder


import module.types as _module_types


class SimpleException_Builder(thrift.py3.builder.StructBuilder):
    err_code: _typing.Optional[int]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class OptionalRefStruct_Builder(thrift.py3.builder.StructBuilder):
    optional_blob: _typing.Optional[_fbthrift_iobuf.IOBuf]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class SimpleStruct_Builder(thrift.py3.builder.StructBuilder):
    is_on: _typing.Optional[bool]
    tiny_int: _typing.Optional[int]
    small_int: _typing.Optional[int]
    nice_sized_int: _typing.Optional[int]
    big_int: _typing.Optional[int]
    real: _typing.Optional[float]
    smaller_real: _typing.Optional[float]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class ComplexStruct_Builder(thrift.py3.builder.StructBuilder):
    structOne: _typing.Any
    structTwo: _typing.Any
    an_integer: _typing.Optional[int]
    name: _typing.Optional[str]
    an_enum: _typing.Optional[_module_types.AnEnum]
    some_bytes: _typing.Optional[bytes]
    sender: _typing.Optional[str]
    cdef_: _typing.Optional[str]
    bytes_with_cpp_type: _typing.Optional[bytes]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class BinaryUnion_Builder(thrift.py3.builder.StructBuilder):
    iobuf_val: _typing.Optional[_fbthrift_iobuf.IOBuf]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class BinaryUnionStruct_Builder(thrift.py3.builder.StructBuilder):
    u: _typing.Any

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...



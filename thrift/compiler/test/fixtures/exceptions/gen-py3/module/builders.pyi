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


class Fiery_Builder(thrift.py3.builder.StructBuilder):
    message: _typing.Optional[str]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class Serious_Builder(thrift.py3.builder.StructBuilder):
    sonnet: _typing.Optional[str]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class ComplexFieldNames_Builder(thrift.py3.builder.StructBuilder):
    error_message: _typing.Optional[str]
    internal_error_message: _typing.Optional[str]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class CustomFieldNames_Builder(thrift.py3.builder.StructBuilder):
    error_message: _typing.Optional[str]
    internal_error_message: _typing.Optional[str]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class ExceptionWithPrimitiveField_Builder(thrift.py3.builder.StructBuilder):
    message: _typing.Optional[str]
    error_code: _typing.Optional[int]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class Banal_Builder(thrift.py3.builder.StructBuilder):

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...



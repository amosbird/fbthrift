#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools


__property__ = property


class MyEnum(thrift.py3.types.Enum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...
    DOMAIN: MyEnum = ...


class MyStructNestedAnnotation(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        name: bool
        pass

    name: Final[str] = ...

    def __init__(
        self, *,
        name: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        name: _typing.Union[str, __NotSet, None]=NOTSET
    ) -> MyStructNestedAnnotation: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStructNestedAnnotation'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStructNestedAnnotation') -> bool: ...
    def __gt__(self, other: 'MyStructNestedAnnotation') -> bool: ...
    def __le__(self, other: 'MyStructNestedAnnotation') -> bool: ...
    def __ge__(self, other: 'MyStructNestedAnnotation') -> bool: ...


class MyStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        major: bool
        package: bool
        annotation_with_quote: bool
        class_: bool
        annotation_with_trailing_comma: bool
        empty_annotations: bool
        my_enum: bool
        pass

    major: Final[int] = ...

    package: Final[str] = ...

    annotation_with_quote: Final[str] = ...

    class_: Final[str] = ...

    annotation_with_trailing_comma: Final[str] = ...

    empty_annotations: Final[str] = ...

    my_enum: Final[MyEnum] = ...

    def __init__(
        self, *,
        major: _typing.Optional[int]=None,
        package: _typing.Optional[str]=None,
        annotation_with_quote: _typing.Optional[str]=None,
        class_: _typing.Optional[str]=None,
        annotation_with_trailing_comma: _typing.Optional[str]=None,
        empty_annotations: _typing.Optional[str]=None,
        my_enum: _typing.Optional[MyEnum]=None
    ) -> None: ...

    def __call__(
        self, *,
        major: _typing.Union[int, __NotSet, None]=NOTSET,
        package: _typing.Union[str, __NotSet, None]=NOTSET,
        annotation_with_quote: _typing.Union[str, __NotSet, None]=NOTSET,
        class_: _typing.Union[str, __NotSet, None]=NOTSET,
        annotation_with_trailing_comma: _typing.Union[str, __NotSet, None]=NOTSET,
        empty_annotations: _typing.Union[str, __NotSet, None]=NOTSET,
        my_enum: _typing.Union[MyEnum, __NotSet, None]=NOTSET
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStruct') -> bool: ...
    def __gt__(self, other: 'MyStruct') -> bool: ...
    def __le__(self, other: 'MyStruct') -> bool: ...
    def __ge__(self, other: 'MyStruct') -> bool: ...


class SecretStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        id: bool
        password: bool
        pass

    id: Final[int] = ...

    password: Final[str] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=None,
        password: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        id: _typing.Union[int, __NotSet, None]=NOTSET,
        password: _typing.Union[str, __NotSet, None]=NOTSET
    ) -> SecretStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['SecretStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'SecretStruct') -> bool: ...
    def __gt__(self, other: 'SecretStruct') -> bool: ...
    def __le__(self, other: 'SecretStruct') -> bool: ...
    def __ge__(self, other: 'SecretStruct') -> bool: ...



#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import module.types as _module_types
import includes.types as _includes_types

_EmptyServiceInterfaceT = _typing.TypeVar('_EmptyServiceInterfaceT', bound='EmptyServiceInterface')


class EmptyServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):
    pass


_ReturnServiceInterfaceT = _typing.TypeVar('_ReturnServiceInterfaceT', bound='ReturnServiceInterface')


class ReturnServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):


    @abstractmethod
    async def noReturn(
        self
    ) -> None: ...


    @abstractmethod
    async def boolReturn(
        self
    ) -> bool: ...


    @abstractmethod
    async def i16Return(
        self
    ) -> int: ...


    @abstractmethod
    async def i32Return(
        self
    ) -> int: ...


    @abstractmethod
    async def i64Return(
        self
    ) -> int: ...


    @abstractmethod
    async def floatReturn(
        self
    ) -> float: ...


    @abstractmethod
    async def doubleReturn(
        self
    ) -> float: ...


    @abstractmethod
    async def stringReturn(
        self
    ) -> str: ...


    @abstractmethod
    async def binaryReturn(
        self
    ) -> bytes: ...


    @abstractmethod
    async def mapReturn(
        self
    ) -> _typing.Mapping[str, int]: ...


    @abstractmethod
    async def simpleTypedefReturn(
        self
    ) -> int: ...


    @abstractmethod
    async def complexTypedefReturn(
        self
    ) -> _typing.Sequence[_typing.Mapping[_module_types.Empty, _module_types.MyStruct]]: ...


    @abstractmethod
    async def list_mostComplexTypedefReturn(
        self
    ) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Mapping[_module_types.Empty, _module_types.MyStruct]]]]: ...


    @abstractmethod
    async def enumReturn(
        self
    ) -> _module_types.MyEnumA: ...


    @abstractmethod
    async def list_EnumReturn(
        self
    ) -> _typing.Sequence[_module_types.MyEnumA]: ...


    @abstractmethod
    async def structReturn(
        self
    ) -> _module_types.MyStruct: ...


    @abstractmethod
    async def set_StructReturn(
        self
    ) -> _typing.AbstractSet[_module_types.MyStruct]: ...


    @abstractmethod
    async def unionReturn(
        self
    ) -> _module_types.ComplexUnion: ...


    @abstractmethod
    async def list_UnionReturn(
        self
    ) -> _typing.Sequence[_module_types.ComplexUnion]: ...


    @abstractmethod
    async def readDataEb(
        self,
        size: int
    ) -> _fbthrift_iobuf.IOBuf: ...


    @abstractmethod
    async def readData(
        self,
        size: int
    ) -> _fbthrift_iobuf.IOBuf: ...
    pass


_ParamServiceInterfaceT = _typing.TypeVar('_ParamServiceInterfaceT', bound='ParamServiceInterface')


class ParamServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):


    @abstractmethod
    async def void_ret_i16_param(
        self,
        param1: int
    ) -> None: ...


    @abstractmethod
    async def void_ret_byte_i16_param(
        self,
        param1: int,
        param2: int
    ) -> None: ...


    @abstractmethod
    async def void_ret_map_param(
        self,
        param1: _typing.Mapping[str, int]
    ) -> None: ...


    @abstractmethod
    async def void_ret_map_setlist_param(
        self,
        param1: _typing.Mapping[str, int],
        param2: _typing.AbstractSet[_typing.Sequence[str]]
    ) -> None: ...


    @abstractmethod
    async def void_ret_map_typedef_param(
        self,
        param1: int
    ) -> None: ...


    @abstractmethod
    async def void_ret_enum_param(
        self,
        param1: _module_types.MyEnumA
    ) -> None: ...


    @abstractmethod
    async def void_ret_struct_param(
        self,
        param1: _module_types.MyStruct
    ) -> None: ...


    @abstractmethod
    async def void_ret_listunion_param(
        self,
        param1: _typing.Sequence[_module_types.ComplexUnion]
    ) -> None: ...


    @abstractmethod
    async def bool_ret_i32_i64_param(
        self,
        param1: int,
        param2: int
    ) -> bool: ...


    @abstractmethod
    async def bool_ret_map_param(
        self,
        param1: _typing.Mapping[str, int]
    ) -> bool: ...


    @abstractmethod
    async def bool_ret_union_param(
        self,
        param1: _module_types.ComplexUnion
    ) -> bool: ...


    @abstractmethod
    async def i64_ret_float_double_param(
        self,
        param1: float,
        param2: float
    ) -> int: ...


    @abstractmethod
    async def i64_ret_string_typedef_param(
        self,
        param1: str,
        param2: _typing.AbstractSet[_typing.Sequence[_typing.Sequence[_typing.Mapping[_module_types.Empty, _module_types.MyStruct]]]]
    ) -> int: ...


    @abstractmethod
    async def i64_ret_i32_i32_i32_i32_i32_param(
        self,
        param1: int,
        param2: int,
        param3: int,
        param4: int,
        param5: int
    ) -> int: ...


    @abstractmethod
    async def double_ret_setstruct_param(
        self,
        param1: _typing.AbstractSet[_module_types.MyStruct]
    ) -> float: ...


    @abstractmethod
    async def string_ret_string_param(
        self,
        param1: str
    ) -> str: ...


    @abstractmethod
    async def binary_ret_binary_param(
        self,
        param1: bytes
    ) -> bytes: ...


    @abstractmethod
    async def map_ret_bool_param(
        self,
        param1: bool
    ) -> _typing.Mapping[str, int]: ...


    @abstractmethod
    async def list_ret_map_setlist_param(
        self,
        param1: _typing.Mapping[int, _typing.Sequence[str]],
        param2: _typing.Sequence[str]
    ) -> _typing.Sequence[bool]: ...


    @abstractmethod
    async def mapsetlistmapliststring_ret_listlistlist_param(
        self,
        param1: _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]
    ) -> _typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]: ...


    @abstractmethod
    async def typedef_ret_i32_param(
        self,
        param1: int
    ) -> int: ...


    @abstractmethod
    async def listtypedef_ret_typedef_param(
        self,
        param1: _typing.Sequence[_typing.Mapping[_module_types.Empty, _module_types.MyStruct]]
    ) -> _typing.Sequence[int]: ...


    @abstractmethod
    async def enum_ret_double_param(
        self,
        param1: float
    ) -> _module_types.MyEnumA: ...


    @abstractmethod
    async def enum_ret_double_enum_param(
        self,
        param1: float,
        param2: _module_types.MyEnumA
    ) -> _module_types.MyEnumA: ...


    @abstractmethod
    async def listenum_ret_map_param(
        self,
        param1: _typing.Mapping[str, int]
    ) -> _typing.Sequence[_module_types.MyEnumA]: ...


    @abstractmethod
    async def struct_ret_i16_param(
        self,
        param1: int
    ) -> _module_types.MyStruct: ...


    @abstractmethod
    async def setstruct_ret_set_param(
        self,
        param1: _typing.AbstractSet[str]
    ) -> _typing.AbstractSet[_module_types.MyStruct]: ...


    @abstractmethod
    async def union_ret_i32_i32_param(
        self,
        param1: int,
        param2: int
    ) -> _module_types.ComplexUnion: ...


    @abstractmethod
    async def listunion_string_param(
        self,
        param1: str
    ) -> _typing.Sequence[_module_types.ComplexUnion]: ...
    pass



/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-py3/module/metadata.h"

namespace cpp2 {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<MyEnum>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyDataItem>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyUnion>::gen(metadata);
  ::apache::thrift::detail::md::ServiceMetadata<MyServiceSvIf>::gen(response);
  ::apache::thrift::detail::md::ServiceMetadata<DbMixedStackArgumentsSvIf>::gen(response);
  return metadata;
}
} // namespace cpp2

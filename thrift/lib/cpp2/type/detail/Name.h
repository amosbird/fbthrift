/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <fmt/core.h>
#include <fatal/type/array.h>
#include <folly/lang/Pretty.h>
#include <thrift/lib/cpp2/reflection/reflection.h>
#include <thrift/lib/cpp2/type/ThriftType.h>
#include <thrift/lib/cpp2/type/Traits.h>

namespace apache::thrift::type::detail {

// Helper to get human readable name for the type tag.
template <typename Tag>
struct GetName {
  // Return the name of the base type by default.
  FOLLY_EXPORT const std::string& operator()() const {
    static const auto* kName =
        new std::string(getBaseTypeName(base_type_v<Tag>));
    return *kName;
  }
};

// Helper for any 'named' types.
template <typename T, typename Module, typename Name>
struct GetNameNamed {
  FOLLY_EXPORT const std::string& operator()() const {
    static const auto* kName = new std::string([]() {
      // TODO(afuller): Return thrift.uri if available.
      using info = reflect_module<Module>;
      return fmt::format(
          "{}.{}", fatal::z_data<typename info::name>(), fatal::z_data<Name>());
    }());
    return *kName;
  }
};

template <typename T>
struct GetName<enum_t<T>> : GetNameNamed<
                                T,
                                typename reflect_enum<T>::module,
                                typename reflect_enum<T>::traits::name> {};

template <typename T>
struct GetName<union_t<T>> : GetNameNamed<
                                 T,
                                 typename reflect_variant<T>::module,
                                 typename reflect_variant<T>::traits::name> {};

template <typename T>
struct GetName<struct_t<T>> : GetNameNamed<
                                  T,
                                  typename reflect_struct<T>::module,
                                  typename reflect_struct<T>::name> {};

template <typename T>
struct GetName<exception_t<T>> : GetNameNamed<
                                     T,
                                     typename reflect_struct<T>::module,
                                     typename reflect_struct<T>::name> {};

template <typename CTag, typename... Tags>
struct GetNameParamed;

template <typename CTag, typename T1>
struct GetNameParamed<CTag, T1> {
  FOLLY_EXPORT const std::string& operator()() const {
    static const auto* kName = new std::string(
        fmt::format("{}<{}>", GetName<CTag>()(), GetName<T1>()()));
    return *kName;
  }
};

template <typename CTag, typename T1, typename T2>
struct GetNameParamed<CTag, T1, T2> {
  FOLLY_EXPORT const std::string& operator()() const {
    static const auto* kName = new std::string(fmt::format(
        "{}<{}, {}>", GetName<CTag>()(), GetName<T1>()(), GetName<T2>()()));
    return *kName;
  }
};

template <typename ValTag, template <typename...> typename ListT>
struct GetName<list<ValTag, ListT>> : GetNameParamed<list_c, ValTag> {};

template <typename KeyTag, template <typename...> typename SetT>
struct GetName<set<KeyTag, SetT>> : GetNameParamed<set_c, KeyTag> {};

template <
    typename KeyTag,
    typename ValTag,
    template <typename...>
    typename MapT>
struct GetName<map<KeyTag, ValTag, MapT>>
    : GetNameParamed<map_c, KeyTag, ValTag> {};

template <typename Adapter, typename Tag>
struct GetName<adapted<Adapter, Tag>> {
  FOLLY_EXPORT const std::string& operator()() const {
    static const auto* kName = new std::string(
        folly::pretty_name<native_type<adapted<Adapter, Tag>>>());
    return *kName;
  }
};

} // namespace apache::thrift::type::detail

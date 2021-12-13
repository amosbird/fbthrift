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

cpp_include "folly/sorted_vector_types.h"

namespace cpp2 a.different.ns

typedef i64 IncludedInt64

const i64 IncludedConstant = 42;

enum AnEnum {
  FIELDA = 2,
  FIELDB = 4,
}

struct AStruct {
  1: i32 FieldA;
}

struct AStructB {
  1: AStruct FieldA (cpp2.ref_type = "shared_const");
}

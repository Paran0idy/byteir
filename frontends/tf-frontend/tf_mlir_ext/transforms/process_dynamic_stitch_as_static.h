//===- process_dynamic_stitch_as_static.h ---------------------*--- C++ -*-===//
//
// Copyright 2022 ByteDance Ltd. and/or its affiliates. All rights reserved.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//===----------------------------------------------------------------------===//

#ifndef TFEXT_TRANSFORMS_PROCESS_DYNAMIC_STITCH_AS_STATIC
#define TFEXT_TRANSFORMS_PROCESS_DYNAMIC_STITCH_AS_STATIC

#include <memory>

#include "mlir/IR/MLIRContext.h"  // from @llvm-project
#include "mlir/IR/PatternMatch.h" // from @llvm-project
#include "mlir/Pass/Pass.h"       // from @llvm-project

namespace mlir {
namespace func {
class FuncOp;
} // namespace func

namespace tfext {

std::unique_ptr<OperationPass<func::FuncOp>>
createProcessDynamicStitchAsStaticPass();

} // namespace tfext
} // namespace mlir

#endif // TFEXT_TRANSFORMS_PROCESS_DYNAMIC_STITCH_AS_STATIC
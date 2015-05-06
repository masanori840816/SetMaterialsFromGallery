#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.ToBase64Transform
struct ToBase64Transform_t1584;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.ToBase64Transform::System.IDisposable.Dispose()
 void ToBase64Transform_System_IDisposable_Dispose_m8593 (ToBase64Transform_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Finalize()
 void ToBase64Transform_Finalize_m8594 (ToBase64Transform_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.ToBase64Transform::get_CanReuseTransform()
 bool ToBase64Transform_get_CanReuseTransform_m8595 (ToBase64Transform_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_InputBlockSize()
 int32_t ToBase64Transform_get_InputBlockSize_m8596 (ToBase64Transform_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_OutputBlockSize()
 int32_t ToBase64Transform_get_OutputBlockSize_m8597 (ToBase64Transform_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Dispose(System.Boolean)
 void ToBase64Transform_Dispose_m8598 (ToBase64Transform_t1584 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ToBase64Transform_TransformBlock_m8599 (ToBase64Transform_t1584 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t17* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 void ToBase64Transform_InternalTransformBlock_m8600 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t17* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t17* ToBase64Transform_TransformFinalBlock_m8601 (ToBase64Transform_t1584 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::InternalTransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t17* ToBase64Transform_InternalTransformFinalBlock_m8602 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;

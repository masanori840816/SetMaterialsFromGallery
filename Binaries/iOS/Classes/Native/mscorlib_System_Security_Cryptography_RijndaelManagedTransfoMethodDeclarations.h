#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t1570;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1137;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelManagedTransform__ctor_m8523 (RijndaelManagedTransform_t1570 * __this, Rijndael_t1137 * ___algo, bool ___encryption, ByteU5BU5D_t17* ___key, ByteU5BU5D_t17* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
 void RijndaelManagedTransform_System_IDisposable_Dispose_m8524 (RijndaelManagedTransform_t1570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
 bool RijndaelManagedTransform_get_CanReuseTransform_m8525 (RijndaelManagedTransform_t1570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t RijndaelManagedTransform_TransformBlock_m8526 (RijndaelManagedTransform_t1570 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t17* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t17* RijndaelManagedTransform_TransformFinalBlock_m8527 (RijndaelManagedTransform_t1570 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;

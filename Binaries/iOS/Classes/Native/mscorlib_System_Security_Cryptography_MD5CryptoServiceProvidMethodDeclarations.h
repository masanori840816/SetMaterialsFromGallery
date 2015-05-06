#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t1561;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
 void MD5CryptoServiceProvider__ctor_m8418 (MD5CryptoServiceProvider_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.cctor()
 void MD5CryptoServiceProvider__cctor_m8419 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Finalize()
 void MD5CryptoServiceProvider_Finalize_m8420 (MD5CryptoServiceProvider_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Dispose(System.Boolean)
 void MD5CryptoServiceProvider_Dispose_m8421 (MD5CryptoServiceProvider_t1561 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5CryptoServiceProvider_HashCore_m8422 (MD5CryptoServiceProvider_t1561 * __this, ByteU5BU5D_t17* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::HashFinal()
 ByteU5BU5D_t17* MD5CryptoServiceProvider_HashFinal_m8423 (MD5CryptoServiceProvider_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Initialize()
 void MD5CryptoServiceProvider_Initialize_m8424 (MD5CryptoServiceProvider_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessBlock(System.Byte[],System.Int32)
 void MD5CryptoServiceProvider_ProcessBlock_m8425 (MD5CryptoServiceProvider_t1561 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
 void MD5CryptoServiceProvider_ProcessFinalBlock_m8426 (MD5CryptoServiceProvider_t1561 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::AddLength(System.UInt64,System.Byte[],System.Int32)
 void MD5CryptoServiceProvider_AddLength_m8427 (MD5CryptoServiceProvider_t1561 * __this, uint64_t ___length, ByteU5BU5D_t17* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;

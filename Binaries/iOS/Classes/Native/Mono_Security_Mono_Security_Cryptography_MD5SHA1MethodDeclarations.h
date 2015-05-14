#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t1042;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Security.Cryptography.RSA
struct RSA_t820;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
 void MD5SHA1__ctor_m4755 (MD5SHA1_t1042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
 void MD5SHA1_Initialize_m4756 (MD5SHA1_t1042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
 ByteU5BU5D_t17* MD5SHA1_HashFinal_m4757 (MD5SHA1_t1042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5SHA1_HashCore_m4758 (MD5SHA1_t1042 * __this, ByteU5BU5D_t17* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t17* MD5SHA1_CreateSignature_m4759 (MD5SHA1_t1042 * __this, RSA_t820 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
 bool MD5SHA1_VerifySignature_m4760 (MD5SHA1_t1042 * __this, RSA_t820 * ___rsa, ByteU5BU5D_t17* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;

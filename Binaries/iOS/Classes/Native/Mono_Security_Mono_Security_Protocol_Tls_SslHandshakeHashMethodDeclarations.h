#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t1087;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Security.Cryptography.RSA
struct RSA_t820;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
 void SslHandshakeHash__ctor_m5037 (SslHandshakeHash_t1087 * __this, ByteU5BU5D_t17* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
 void SslHandshakeHash_Initialize_m5038 (SslHandshakeHash_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
 ByteU5BU5D_t17* SslHandshakeHash_HashFinal_m5039 (SslHandshakeHash_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
 void SslHandshakeHash_HashCore_m5040 (SslHandshakeHash_t1087 * __this, ByteU5BU5D_t17* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t17* SslHandshakeHash_CreateSignature_m5041 (SslHandshakeHash_t1087 * __this, RSA_t820 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
 void SslHandshakeHash_initializePad_m5042 (SslHandshakeHash_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

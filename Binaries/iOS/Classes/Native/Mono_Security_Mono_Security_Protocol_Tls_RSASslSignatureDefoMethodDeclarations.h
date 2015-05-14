#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1076;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter__ctor_m4977 (RSASslSignatureDeformatter_t1076 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSASslSignatureDeformatter_VerifySignature_m4978 (RSASslSignatureDeformatter_t1076 * __this, ByteU5BU5D_t17* ___rgbHash, ByteU5BU5D_t17* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
 void RSASslSignatureDeformatter_SetHashAlgorithm_m4979 (RSASslSignatureDeformatter_t1076 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter_SetKey_m4980 (RSASslSignatureDeformatter_t1076 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;

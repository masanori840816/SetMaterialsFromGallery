#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1128;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
 void RSAPKCS1SignatureDeformatter__ctor_m8492 (RSAPKCS1SignatureDeformatter_t1128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter__ctor_m5325 (RSAPKCS1SignatureDeformatter_t1128 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m5326 (RSAPKCS1SignatureDeformatter_t1128 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter_SetKey_m8493 (RSAPKCS1SignatureDeformatter_t1128 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSAPKCS1SignatureDeformatter_VerifySignature_m5327 (RSAPKCS1SignatureDeformatter_t1128 * __this, ByteU5BU5D_t17* ___rgbHash, ByteU5BU5D_t17* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t1554;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
 void DSASignatureFormatter__ctor_m8374 (DSASignatureFormatter_t1554 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t17* DSASignatureFormatter_CreateSignature_m8375 (DSASignatureFormatter_t1554 * __this, ByteU5BU5D_t17* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
 void DSASignatureFormatter_SetHashAlgorithm_m8376 (DSASignatureFormatter_t1554 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureFormatter_SetKey_m8377 (DSASignatureFormatter_t1554 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;

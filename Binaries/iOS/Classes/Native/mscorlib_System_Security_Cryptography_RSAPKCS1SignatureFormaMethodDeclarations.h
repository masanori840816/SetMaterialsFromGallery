#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t1567;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
 void RSAPKCS1SignatureFormatter__ctor_m8499 (RSAPKCS1SignatureFormatter_t1567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t17* RSAPKCS1SignatureFormatter_CreateSignature_m8500 (RSAPKCS1SignatureFormatter_t1567 * __this, ByteU5BU5D_t17* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m8501 (RSAPKCS1SignatureFormatter_t1567 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureFormatter_SetKey_m8502 (RSAPKCS1SignatureFormatter_t1567 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;

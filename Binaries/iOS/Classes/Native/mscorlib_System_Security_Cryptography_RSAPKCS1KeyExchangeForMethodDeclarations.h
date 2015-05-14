#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1142;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter__ctor_m5432 (RSAPKCS1KeyExchangeFormatter_t1142 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
 ByteU5BU5D_t17* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m5433 (RSAPKCS1KeyExchangeFormatter_t1142 * __this, ByteU5BU5D_t17* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m8496 (RSAPKCS1KeyExchangeFormatter_t1142 * __this, AsymmetricAlgorithm_t814 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;

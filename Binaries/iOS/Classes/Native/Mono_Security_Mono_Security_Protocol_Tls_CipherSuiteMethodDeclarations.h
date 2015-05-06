#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1048;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1013;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1041;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t1047;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
 void CipherSuite__ctor_m4764 (CipherSuite_t1048 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
 void CipherSuite__cctor_m4765 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
 Object_t * CipherSuite_get_EncryptionCipher_m4766 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
 Object_t * CipherSuite_get_DecryptionCipher_m4767 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
 KeyedHashAlgorithm_t1041 * CipherSuite_get_ClientHMAC_m4768 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
 KeyedHashAlgorithm_t1041 * CipherSuite_get_ServerHMAC_m4769 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
 int32_t CipherSuite_get_CipherAlgorithmType_m4770 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
 String_t* CipherSuite_get_HashAlgorithmName_m4771 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
 int32_t CipherSuite_get_HashAlgorithmType_m4772 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
 int32_t CipherSuite_get_HashSize_m4773 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
 int32_t CipherSuite_get_ExchangeAlgorithmType_m4774 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
 int32_t CipherSuite_get_CipherMode_m4775 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
 int16_t CipherSuite_get_Code_m4776 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
 String_t* CipherSuite_get_Name_m4777 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
 bool CipherSuite_get_IsExportable_m4778 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
 uint8_t CipherSuite_get_KeyMaterialSize_m4779 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
 int32_t CipherSuite_get_KeyBlockSize_m4780 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
 uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m4781 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
 int16_t CipherSuite_get_EffectiveKeyBits_m4782 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
 uint8_t CipherSuite_get_IvSize_m4783 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
 Context_t1047 * CipherSuite_get_Context_m4784 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
 void CipherSuite_set_Context_m4785 (CipherSuite_t1048 * __this, Context_t1047 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
 void CipherSuite_Write_m4786 (CipherSuite_t1048 * __this, ByteU5BU5D_t17* ___array, int32_t ___offset, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
 void CipherSuite_Write_m4787 (CipherSuite_t1048 * __this, ByteU5BU5D_t17* ___array, int32_t ___offset, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
 void CipherSuite_InitializeCipher_m4788 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
 ByteU5BU5D_t17* CipherSuite_EncryptRecord_m4789 (CipherSuite_t1048 * __this, ByteU5BU5D_t17* ___fragment, ByteU5BU5D_t17* ___mac, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
 void CipherSuite_DecryptRecord_m4790 (CipherSuite_t1048 * __this, ByteU5BU5D_t17* ___fragment, ByteU5BU5D_t17** ___dcrFragment, ByteU5BU5D_t17** ___dcrMAC, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys()
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
 ByteU5BU5D_t17* CipherSuite_CreatePremasterSecret_m4791 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
 ByteU5BU5D_t17* CipherSuite_PRF_m4792 (CipherSuite_t1048 * __this, ByteU5BU5D_t17* ___secret, String_t* ___label, ByteU5BU5D_t17* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
 ByteU5BU5D_t17* CipherSuite_Expand_m4793 (CipherSuite_t1048 * __this, String_t* ___hashName, ByteU5BU5D_t17* ___secret, ByteU5BU5D_t17* ___seed, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
 void CipherSuite_createEncryptionCipher_m4794 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
 void CipherSuite_createDecryptionCipher_m4795 (CipherSuite_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

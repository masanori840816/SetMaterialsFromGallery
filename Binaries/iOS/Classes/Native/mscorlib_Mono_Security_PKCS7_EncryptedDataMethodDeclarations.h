#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1237;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1245;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.ASN1
struct ASN1_t1232;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m6674 (EncryptedData_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m6675 (EncryptedData_t1237 * __this, ASN1_t1232 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t1245 * EncryptedData_get_EncryptionAlgorithm_m6676 (EncryptedData_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t17* EncryptedData_get_EncryptedContent_m6677 (EncryptedData_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

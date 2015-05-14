#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1009;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1008;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.ASN1
struct ASN1_t829;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m4542 (EncryptedData_t1009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m4543 (EncryptedData_t1009 * __this, ASN1_t829 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t1008 * EncryptedData_get_EncryptionAlgorithm_m4544 (EncryptedData_t1009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t17* EncryptedData_get_EncryptedContent_m4545 (EncryptedData_t1009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

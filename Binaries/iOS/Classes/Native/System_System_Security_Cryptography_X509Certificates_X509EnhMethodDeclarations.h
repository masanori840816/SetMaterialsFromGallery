#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t848;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t815;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509EnhancedKeyUsageExtension__ctor_m3571 (X509EnhancedKeyUsageExtension_t848 * __this, AsnEncodedData_t815 * ___encodedEnhancedKeyUsages, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509EnhancedKeyUsageExtension_CopyFrom_m3572 (X509EnhancedKeyUsageExtension_t848 * __this, AsnEncodedData_t815 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
 int32_t X509EnhancedKeyUsageExtension_Decode_m3573 (X509EnhancedKeyUsageExtension_t848 * __this, ByteU5BU5D_t17* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
 String_t* X509EnhancedKeyUsageExtension_ToString_m3574 (X509EnhancedKeyUsageExtension_t848 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;

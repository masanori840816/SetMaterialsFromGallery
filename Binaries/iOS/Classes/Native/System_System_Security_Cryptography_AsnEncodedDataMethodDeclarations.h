#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t815;
// System.Security.Cryptography.Oid
struct Oid_t816;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
 void AsnEncodedData__ctor_m3617 (AsnEncodedData_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
 void AsnEncodedData__ctor_m3618 (AsnEncodedData_t815 * __this, String_t* ___oid, ByteU5BU5D_t17* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
 void AsnEncodedData__ctor_m3619 (AsnEncodedData_t815 * __this, Oid_t816 * ___oid, ByteU5BU5D_t17* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
 Oid_t816 * AsnEncodedData_get_Oid_m3620 (AsnEncodedData_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
 void AsnEncodedData_set_Oid_m3621 (AsnEncodedData_t815 * __this, Oid_t816 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
 ByteU5BU5D_t17* AsnEncodedData_get_RawData_m3622 (AsnEncodedData_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
 void AsnEncodedData_set_RawData_m3623 (AsnEncodedData_t815 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void AsnEncodedData_CopyFrom_m3624 (AsnEncodedData_t815 * __this, AsnEncodedData_t815 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
 String_t* AsnEncodedData_ToString_m3625 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
 String_t* AsnEncodedData_Default_m3626 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
 String_t* AsnEncodedData_BasicConstraintsExtension_m3627 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_EnhancedKeyUsageExtension_m3628 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_KeyUsageExtension_m3629 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
 String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3630 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
 String_t* AsnEncodedData_SubjectAltName_m3631 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
 String_t* AsnEncodedData_NetscapeCertType_m3632 (AsnEncodedData_t815 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;

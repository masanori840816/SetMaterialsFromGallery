#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t858;
// System.String
struct String_t;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t815;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t817;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System_System_Security_Cryptography_X509Certificates_X509Sub_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
 void X509SubjectKeyIdentifierExtension__ctor_m3603 (X509SubjectKeyIdentifierExtension_t858 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m3604 (X509SubjectKeyIdentifierExtension_t858 * __this, AsnEncodedData_t815 * ___encodedSubjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m3605 (X509SubjectKeyIdentifierExtension_t858 * __this, ByteU5BU5D_t17* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m3606 (X509SubjectKeyIdentifierExtension_t858 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m3607 (X509SubjectKeyIdentifierExtension_t858 * __this, PublicKey_t817 * ___key, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m3608 (X509SubjectKeyIdentifierExtension_t858 * __this, PublicKey_t817 * ___key, int32_t ___algorithm, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
 String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m3609 (X509SubjectKeyIdentifierExtension_t858 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509SubjectKeyIdentifierExtension_CopyFrom_m3610 (X509SubjectKeyIdentifierExtension_t858 * __this, AsnEncodedData_t815 * ___encodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
 uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m3611 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
 uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m3612 (Object_t * __this/* static, unused */, uint16_t ___c1, uint16_t ___c2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
 ByteU5BU5D_t17* X509SubjectKeyIdentifierExtension_FromHex_m3613 (Object_t * __this/* static, unused */, String_t* ___hex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
 int32_t X509SubjectKeyIdentifierExtension_Decode_m3614 (X509SubjectKeyIdentifierExtension_t858 * __this, ByteU5BU5D_t17* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
 ByteU5BU5D_t17* X509SubjectKeyIdentifierExtension_Encode_m3615 (X509SubjectKeyIdentifierExtension_t858 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
 String_t* X509SubjectKeyIdentifierExtension_ToString_m3616 (X509SubjectKeyIdentifierExtension_t858 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;

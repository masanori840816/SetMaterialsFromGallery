#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t825;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t815;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
 void X509BasicConstraintsExtension__ctor_m3443 (X509BasicConstraintsExtension_t825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m3444 (X509BasicConstraintsExtension_t825 * __this, AsnEncodedData_t815 * ___encodedBasicConstraints, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m3445 (X509BasicConstraintsExtension_t825 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
 bool X509BasicConstraintsExtension_get_CertificateAuthority_m3446 (X509BasicConstraintsExtension_t825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
 bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m3447 (X509BasicConstraintsExtension_t825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
 int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m3448 (X509BasicConstraintsExtension_t825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509BasicConstraintsExtension_CopyFrom_m3449 (X509BasicConstraintsExtension_t825 * __this, AsnEncodedData_t815 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
 int32_t X509BasicConstraintsExtension_Decode_m3450 (X509BasicConstraintsExtension_t825 * __this, ByteU5BU5D_t17* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
 ByteU5BU5D_t17* X509BasicConstraintsExtension_Encode_m3451 (X509BasicConstraintsExtension_t825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
 String_t* X509BasicConstraintsExtension_ToString_m3452 (X509BasicConstraintsExtension_t825 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;

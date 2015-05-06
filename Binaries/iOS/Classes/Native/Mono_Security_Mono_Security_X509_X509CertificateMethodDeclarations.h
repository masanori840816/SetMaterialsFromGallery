#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t818;
// System.Security.Cryptography.DSA
struct DSA_t819;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t976;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t820;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// Mono.Security.ASN1
struct ASN1_t829;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m4252 (X509Certificate_t818 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m4644 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m4645 (X509Certificate_t818 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t17* X509Certificate_GetUnsignedBigInteger_m4646 (X509Certificate_t818 * __this, ByteU5BU5D_t17* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t819 * X509Certificate_get_DSA_m4198 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
 void X509Certificate_set_DSA_m4250 (X509Certificate_t818 * __this, DSA_t819 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
 X509ExtensionCollection_t976 * X509Certificate_get_Extensions_m4311 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
 ByteU5BU5D_t17* X509Certificate_get_Hash_m4647 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m4648 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
 String_t* X509Certificate_get_KeyAlgorithm_m4191 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t17* X509Certificate_get_KeyAlgorithmParameters_m4204 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
 void X509Certificate_set_KeyAlgorithmParameters_m4309 (X509Certificate_t818 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t17* X509Certificate_get_PublicKey_m4203 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
 RSA_t820 * X509Certificate_get_RSA_m4192 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
 void X509Certificate_set_RSA_m4249 (X509Certificate_t818 * __this, RSA_t820 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t17* X509Certificate_get_RawData_m4341 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
 ByteU5BU5D_t17* X509Certificate_get_SerialNumber_m4232 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
 ByteU5BU5D_t17* X509Certificate_get_Signature_m4649 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
 String_t* X509Certificate_get_SignatureAlgorithm_m4234 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m4650 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t458  X509Certificate_get_ValidFrom_m4231 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t458  X509Certificate_get_ValidUntil_m4229 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
 int32_t X509Certificate_get_Version_m4237 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
 bool X509Certificate_get_IsCurrent_m4651 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
 bool X509Certificate_WasCurrent_m4652 (X509Certificate_t818 * __this, DateTime_t458  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Certificate_VerifySignature_m4653 (X509Certificate_t818 * __this, DSA_t819 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Certificate_VerifySignature_m4654 (X509Certificate_t818 * __this, RSA_t820 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Certificate_VerifySignature_m4310 (X509Certificate_t818 * __this, AsymmetricAlgorithm_t814 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
 bool X509Certificate_get_IsSelfSigned_m4655 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t829 * X509Certificate_GetIssuerName_m4228 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t829 * X509Certificate_GetSubjectName_m4235 (X509Certificate_t818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m4656 (X509Certificate_t818 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t17* X509Certificate_PEM_m4657 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;

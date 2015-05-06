#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t841;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t976;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t843;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t818;
// System.Security.Cryptography.DSA
struct DSA_t819;
// System.Security.Cryptography.RSA
struct RSA_t820;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
 void X509Crl__ctor_m4683 (X509Crl_t841 * __this, ByteU5BU5D_t17* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
 void X509Crl_Parse_m4684 (X509Crl_t841 * __this, ByteU5BU5D_t17* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
 X509ExtensionCollection_t976 * X509Crl_get_Extensions_m4313 (X509Crl_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
 ByteU5BU5D_t17* X509Crl_get_Hash_m4685 (X509Crl_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
 String_t* X509Crl_get_IssuerName_m4321 (X509Crl_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
 DateTime_t458  X509Crl_get_NextUpdate_m4319 (X509Crl_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
 bool X509Crl_Compare_m4686 (X509Crl_t841 * __this, ByteU5BU5D_t17* ___array1, ByteU5BU5D_t17* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
 X509CrlEntry_t843 * X509Crl_GetCrlEntry_m4317 (X509Crl_t841 * __this, X509Certificate_t818 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
 X509CrlEntry_t843 * X509Crl_GetCrlEntry_m4687 (X509Crl_t841 * __this, ByteU5BU5D_t17* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
 String_t* X509Crl_GetHashName_m4688 (X509Crl_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Crl_VerifySignature_m4689 (X509Crl_t841 * __this, DSA_t819 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Crl_VerifySignature_m4690 (X509Crl_t841 * __this, RSA_t820 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Crl_VerifySignature_m4316 (X509Crl_t841 * __this, AsymmetricAlgorithm_t814 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;

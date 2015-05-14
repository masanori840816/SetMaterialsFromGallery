#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Chain
struct X509Chain_t1029;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t973;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t818;
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
 void X509Chain__ctor_m4676 (X509Chain_t1029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509Chain__ctor_m4677 (X509Chain_t1029 * __this, X509CertificateCollection_t973 * ___chain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
 int32_t X509Chain_get_Status_m4678 (X509Chain_t1029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
 X509CertificateCollection_t973 * X509Chain_get_TrustAnchors_m4679 (X509Chain_t1029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
 bool X509Chain_Build_m4680 (X509Chain_t1029 * __this, X509Certificate_t818 * ___leaf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsValid_m4681 (X509Chain_t1029 * __this, X509Certificate_t818 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
 X509Certificate_t818 * X509Chain_FindCertificateParent_m4682 (X509Chain_t1029 * __this, X509Certificate_t818 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
 X509Certificate_t818 * X509Chain_FindCertificateRoot_m4683 (X509Chain_t1029 * __this, X509Certificate_t818 * ___potentialRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsTrusted_m4684 (X509Chain_t1029 * __this, X509Certificate_t818 * ___potentialTrusted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
 bool X509Chain_IsParent_m4685 (X509Chain_t1029 * __this, X509Certificate_t818 * ___child, X509Certificate_t818 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t794;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t836;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t840;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t830;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t828;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t839;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t841;
// Mono.Security.X509.X509Extension
struct X509Extension_t842;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t843;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
 void X509Chain__ctor_m3506 (X509Chain_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
 void X509Chain__ctor_m3507 (X509Chain_t794 * __this, bool ___useMachineContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
 void X509Chain__cctor_m3508 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
 X509ChainPolicy_t836 * X509Chain_get_ChainPolicy_m3509 (X509Chain_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_Build_m3510 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
 void X509Chain_Reset_m3511 (X509Chain_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
 X509Store_t840 * X509Chain_get_Roots_m3512 (X509Chain_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
 X509Store_t840 * X509Chain_get_CertificateAuthorities_m3513 (X509Chain_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
 X509Certificate2Collection_t830 * X509Chain_get_CertificateCollection_m3514 (X509Chain_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Chain_BuildChainFrom_m3515 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 X509Certificate2_t828 * X509Chain_SelectBestFromCollection_m3516 (X509Chain_t794 * __this, X509Certificate2_t828 * ___child, X509Certificate2Collection_t830 * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Certificate2_t828 * X509Chain_FindParent_m3517 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsChainComplete_m3518 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsSelfIssued_m3519 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_ValidateChain_m3520 (X509Chain_t794 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
 void X509Chain_Process_m3521 (X509Chain_t794 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
 void X509Chain_PrepareForNextCertificate_m3522 (X509Chain_t794 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
 void X509Chain_WrapUp_m3523 (X509Chain_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
 void X509Chain_ProcessCertificateExtensions_m3524 (X509Chain_t794 * __this, X509ChainElement_t839 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Chain_IsSignedWith_m3525 (X509Chain_t794 * __this, X509Certificate2_t828 * ___signed, AsymmetricAlgorithm_t814 * ___pubkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetSubjectKeyIdentifier_m3526 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m3527 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m3528 (X509Chain_t794 * __this, X509Crl_t841 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m3529 (X509Chain_t794 * __this, X509Extension_t842 * ___ext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_CheckRevocationOnChain_m3530 (X509Chain_t794 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
 int32_t X509Chain_CheckRevocation_m3531 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, int32_t ___ca, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
 int32_t X509Chain_CheckRevocation_m3532 (X509Chain_t794 * __this, X509Certificate2_t828 * ___certificate, X509Certificate2_t828 * ___ca_cert, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Crl_t841 * X509Chain_FindCrl_m3533 (X509Chain_t794 * __this, X509Certificate2_t828 * ___caCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
 bool X509Chain_ProcessCrlExtensions_m3534 (X509Chain_t794 * __this, X509Crl_t841 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
 bool X509Chain_ProcessCrlEntryExtensions_m3535 (X509Chain_t794 * __this, X509CrlEntry_t843 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;

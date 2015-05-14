#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t1064;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t799;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
 void TlsClientSettings__ctor_m5112 (TlsClientSettings_t1064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
 String_t* TlsClientSettings_get_TargetHost_m5113 (TlsClientSettings_t1064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
 void TlsClientSettings_set_TargetHost_m5114 (TlsClientSettings_t1064 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
 X509CertificateCollection_t799 * TlsClientSettings_get_Certificates_m5115 (TlsClientSettings_t1064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void TlsClientSettings_set_Certificates_m5116 (TlsClientSettings_t1064 * __this, X509CertificateCollection_t799 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
 X509Certificate_t784 * TlsClientSettings_get_ClientCertificate_m5117 (TlsClientSettings_t1064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
 void TlsClientSettings_set_ClientCertificate_m5118 (TlsClientSettings_t1064 * __this, X509Certificate_t784 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
 void TlsClientSettings_UpdateCertificateRSA_m5119 (TlsClientSettings_t1064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

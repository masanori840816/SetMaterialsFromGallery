#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1063;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t973;
// System.Security.Cryptography.RSA
struct RSA_t820;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1091;
// System.String[]
struct StringU5BU5D_t9;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
 void TlsServerSettings__ctor_m5122 (TlsServerSettings_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
 bool TlsServerSettings_get_ServerKeyExchange_m5123 (TlsServerSettings_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
 void TlsServerSettings_set_ServerKeyExchange_m5124 (TlsServerSettings_t1063 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
 X509CertificateCollection_t973 * TlsServerSettings_get_Certificates_m5125 (TlsServerSettings_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerSettings_set_Certificates_m5126 (TlsServerSettings_t1063 * __this, X509CertificateCollection_t973 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
 RSA_t820 * TlsServerSettings_get_CertificateRSA_m5127 (TlsServerSettings_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
 RSAParameters_t964  TlsServerSettings_get_RsaParameters_m5128 (TlsServerSettings_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
 void TlsServerSettings_set_RsaParameters_m5129 (TlsServerSettings_t1063 * __this, RSAParameters_t964  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
 void TlsServerSettings_set_SignedParams_m5130 (TlsServerSettings_t1063 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
 bool TlsServerSettings_get_CertificateRequest_m5131 (TlsServerSettings_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
 void TlsServerSettings_set_CertificateRequest_m5132 (TlsServerSettings_t1063 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
 void TlsServerSettings_set_CertificateTypes_m5133 (TlsServerSettings_t1063 * __this, ClientCertificateTypeU5BU5D_t1091* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
 void TlsServerSettings_set_DistinguisedNames_m5134 (TlsServerSettings_t1063 * __this, StringU5BU5D_t9* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
 void TlsServerSettings_UpdateCertificateRSA_m5135 (TlsServerSettings_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

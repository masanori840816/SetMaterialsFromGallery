#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t1094;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;
// Mono.Security.Protocol.Tls.Context
struct Context_t1047;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificate__ctor_m5172 (TlsClientCertificate_t1094 * __this, Context_t1047 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
 X509Certificate_t784 * TlsClientCertificate_get_ClientCertificate_m5173 (TlsClientCertificate_t1094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
 void TlsClientCertificate_Update_m5174 (TlsClientCertificate_t1094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
 void TlsClientCertificate_GetClientCertificate_m5175 (TlsClientCertificate_t1094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
 void TlsClientCertificate_SendCertificates_m5176 (TlsClientCertificate_t1094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
 void TlsClientCertificate_ProcessAsSsl3_m5177 (TlsClientCertificate_t1094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
 void TlsClientCertificate_ProcessAsTls1_m5178 (TlsClientCertificate_t1094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
 X509Certificate_t784 * TlsClientCertificate_FindParentCertificate_m5179 (TlsClientCertificate_t1094 * __this, X509Certificate_t784 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;

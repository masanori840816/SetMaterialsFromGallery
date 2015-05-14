#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1095;
// Mono.Security.Protocol.Tls.Context
struct Context_t1047;
// System.Security.Cryptography.RSA
struct RSA_t820;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificateVerify__ctor_m5185 (TlsClientCertificateVerify_t1095 * __this, Context_t1047 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
 void TlsClientCertificateVerify_Update_m5186 (TlsClientCertificateVerify_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
 void TlsClientCertificateVerify_ProcessAsSsl3_m5187 (TlsClientCertificateVerify_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
 void TlsClientCertificateVerify_ProcessAsTls1_m5188 (TlsClientCertificateVerify_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
 RSA_t820 * TlsClientCertificateVerify_getClientCertRSA_m5189 (TlsClientCertificateVerify_t1095 * __this, RSA_t820 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t17* TlsClientCertificateVerify_getUnsignedBigInteger_m5190 (TlsClientCertificateVerify_t1095 * __this, ByteU5BU5D_t17* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1071;
// System.IO.Stream
struct Stream_t1057;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t799;
// System.Net.HttpWebRequest
struct HttpWebRequest_t800;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
 void HttpsClientStream__ctor_m4921 (HttpsClientStream_t1071 * __this, Stream_t1057 * ___stream, X509CertificateCollection_t799 * ___clientCertificates, HttpWebRequest_t800 * ___request, ByteU5BU5D_t17* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
 bool HttpsClientStream_get_TrustFailure_m4922 (HttpsClientStream_t1071 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool HttpsClientStream_RaiseServerCertificateValidation_m4923 (HttpsClientStream_t1071 * __this, X509Certificate_t784 * ___certificate, Int32U5BU5D_t877* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t784 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m4924 (Object_t * __this/* static, unused */, X509CertificateCollection_t799 * ___clientCerts, X509Certificate_t784 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t799 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t814 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m4925 (Object_t * __this/* static, unused */, X509Certificate_t784 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;

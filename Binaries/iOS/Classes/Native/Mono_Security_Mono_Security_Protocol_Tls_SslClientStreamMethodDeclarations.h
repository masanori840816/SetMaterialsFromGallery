#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t1053;
// System.IO.Stream
struct Stream_t1057;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t799;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1084;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1069;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1070;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1085;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1083;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t973;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
 void SslClientStream__ctor_m4995 (SslClientStream_t1053 * __this, Stream_t1057 * ___stream, String_t* ___targetHost, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
 void SslClientStream__ctor_m4996 (SslClientStream_t1053 * __this, Stream_t1057 * ___stream, String_t* ___targetHost, X509Certificate_t784 * ___clientCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m4997 (SslClientStream_t1053 * __this, Stream_t1057 * ___stream, String_t* ___targetHost, X509CertificateCollection_t799 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
 void SslClientStream__ctor_m4998 (SslClientStream_t1053 * __this, Stream_t1057 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m4999 (SslClientStream_t1053 * __this, Stream_t1057 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t799 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_add_ServerCertValidation_m5000 (SslClientStream_t1053 * __this, CertificateValidationCallback_t1084 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_remove_ServerCertValidation_m5001 (SslClientStream_t1053 * __this, CertificateValidationCallback_t1084 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_add_ClientCertSelection_m5002 (SslClientStream_t1053 * __this, CertificateSelectionCallback_t1069 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_remove_ClientCertSelection_m5003 (SslClientStream_t1053 * __this, CertificateSelectionCallback_t1069 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_add_PrivateKeySelection_m5004 (SslClientStream_t1053 * __this, PrivateKeySelectionCallback_t1070 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_remove_PrivateKeySelection_m5005 (SslClientStream_t1053 * __this, PrivateKeySelectionCallback_t1070 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_add_ServerCertValidation2_m5006 (SslClientStream_t1053 * __this, CertificateValidationCallback2_t1085 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_remove_ServerCertValidation2_m5007 (SslClientStream_t1053 * __this, CertificateValidationCallback2_t1085 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
 Stream_t1057 * SslClientStream_get_InputBuffer_m5008 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
 X509CertificateCollection_t799 * SslClientStream_get_ClientCertificates_m5009 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
 X509Certificate_t784 * SslClientStream_get_SelectedClientCertificate_m5010 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
 CertificateValidationCallback_t1084 * SslClientStream_get_ServerCertValidationDelegate_m5011 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_set_ServerCertValidationDelegate_m5012 (SslClientStream_t1053 * __this, CertificateValidationCallback_t1084 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
 CertificateSelectionCallback_t1069 * SslClientStream_get_ClientCertSelectionDelegate_m5013 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_set_ClientCertSelectionDelegate_m5014 (SslClientStream_t1053 * __this, CertificateSelectionCallback_t1069 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
 PrivateKeySelectionCallback_t1070 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m5015 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_set_PrivateKeyCertSelectionDelegate_m5016 (SslClientStream_t1053 * __this, PrivateKeySelectionCallback_t1070 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
 void SslClientStream_Finalize_m5017 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
 void SslClientStream_Dispose_m5018 (SslClientStream_t1053 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
 Object_t * SslClientStream_OnBeginNegotiateHandshake_m5019 (SslClientStream_t1053 * __this, AsyncCallback_t39 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
 void SslClientStream_SafeReceiveRecord_m5020 (SslClientStream_t1053 * __this, Stream_t1057 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
 void SslClientStream_OnNegotiateHandshakeCallback_m5021 (SslClientStream_t1053 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t784 * SslClientStream_OnLocalCertificateSelection_m5022 (SslClientStream_t1053 * __this, X509CertificateCollection_t799 * ___clientCertificates, X509Certificate_t784 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t799 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
 bool SslClientStream_get_HaveRemoteValidation2Callback_m5023 (SslClientStream_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1083 * SslClientStream_OnRemoteCertificateValidation2_m5024 (SslClientStream_t1053 * __this, X509CertificateCollection_t973 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_OnRemoteCertificateValidation_m5025 (SslClientStream_t1053 * __this, X509Certificate_t784 * ___certificate, Int32U5BU5D_t877* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_RaiseServerCertificateValidation_m5026 (SslClientStream_t1053 * __this, X509Certificate_t784 * ___certificate, Int32U5BU5D_t877* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1083 * SslClientStream_RaiseServerCertificateValidation2_m5027 (SslClientStream_t1053 * __this, X509CertificateCollection_t973 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t784 * SslClientStream_RaiseClientCertificateSelection_m5028 (SslClientStream_t1053 * __this, X509CertificateCollection_t799 * ___clientCertificates, X509Certificate_t784 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t799 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t814 * SslClientStream_OnLocalPrivateKeySelection_m5029 (SslClientStream_t1053 * __this, X509Certificate_t784 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t814 * SslClientStream_RaisePrivateKeySelection_m5030 (SslClientStream_t1053 * __this, X509Certificate_t784 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;

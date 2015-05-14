#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1084;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
 void CertificateValidationCallback__ctor_m5239 (CertificateValidationCallback_t1084 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool CertificateValidationCallback_Invoke_m5240 (CertificateValidationCallback_t1084 * __this, X509Certificate_t784 * ___certificate, Int32U5BU5D_t877* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
 Object_t * CertificateValidationCallback_BeginInvoke_m5241 (CertificateValidationCallback_t1084 * __this, X509Certificate_t784 * ___certificate, Int32U5BU5D_t877* ___certificateErrors, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
 bool CertificateValidationCallback_EndInvoke_m5242 (CertificateValidationCallback_t1084 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;

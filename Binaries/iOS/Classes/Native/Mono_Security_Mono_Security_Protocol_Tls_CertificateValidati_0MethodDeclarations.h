#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1085;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1083;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t973;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
 void CertificateValidationCallback2__ctor_m5243 (CertificateValidationCallback2_t1085 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1083 * CertificateValidationCallback2_Invoke_m5244 (CertificateValidationCallback2_t1085 * __this, X509CertificateCollection_t973 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
 Object_t * CertificateValidationCallback2_BeginInvoke_m5245 (CertificateValidationCallback2_t1085 * __this, X509CertificateCollection_t973 * ___collection, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
 ValidationResult_t1083 * CertificateValidationCallback2_EndInvoke_m5246 (CertificateValidationCallback2_t1085 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;

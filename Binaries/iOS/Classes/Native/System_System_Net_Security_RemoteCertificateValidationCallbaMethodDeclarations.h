﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t792;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t794;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
 void RemoteCertificateValidationCallback__ctor_m4088 (RemoteCertificateValidationCallback_t792 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
 bool RemoteCertificateValidationCallback_Invoke_m4089 (RemoteCertificateValidationCallback_t792 * __this, Object_t * ___sender, X509Certificate_t784 * ___certificate, X509Chain_t794 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
 Object_t * RemoteCertificateValidationCallback_BeginInvoke_m4090 (RemoteCertificateValidationCallback_t792 * __this, Object_t * ___sender, X509Certificate_t784 * ___certificate, X509Chain_t794 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
 bool RemoteCertificateValidationCallback_EndInvoke_m4091 (RemoteCertificateValidationCallback_t792 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;

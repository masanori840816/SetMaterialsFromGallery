#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t782;
// System.Net.ServicePoint
struct ServicePoint_t783;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;
// System.Net.WebRequest
struct WebRequest_t785;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
 void DefaultCertificatePolicy__ctor_m3311 (DefaultCertificatePolicy_t782 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
 bool DefaultCertificatePolicy_CheckValidationResult_m3312 (DefaultCertificatePolicy_t782 * __this, ServicePoint_t783 * ___point, X509Certificate_t784 * ___certificate, WebRequest_t785 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;

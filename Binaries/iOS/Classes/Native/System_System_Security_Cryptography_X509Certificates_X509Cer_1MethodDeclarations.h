#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t799;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t784;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_t834;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t832;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m3495 (X509CertificateCollection_t799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
 void X509CertificateCollection__ctor_m3496 (X509CertificateCollection_t799 * __this, X509CertificateU5BU5D_t834* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t784 * X509CertificateCollection_get_Item_m3497 (X509CertificateCollection_t799 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate[])
 void X509CertificateCollection_AddRange_m3498 (X509CertificateCollection_t799 * __this, X509CertificateU5BU5D_t834* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t832 * X509CertificateCollection_GetEnumerator_m3499 (X509CertificateCollection_t799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m3500 (X509CertificateCollection_t799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

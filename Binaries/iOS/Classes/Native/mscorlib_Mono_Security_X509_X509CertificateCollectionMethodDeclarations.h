#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1235;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1240;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1241;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m6623 (X509CertificateCollection_t1235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m6624 (X509CertificateCollection_t1235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t1240 * X509CertificateCollection_get_Item_m6625 (X509CertificateCollection_t1235 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_Add_m6626 (X509CertificateCollection_t1235 * __this, X509Certificate_t1240 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t1241 * X509CertificateCollection_GetEnumerator_m6627 (X509CertificateCollection_t1235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m6628 (X509CertificateCollection_t1235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t830;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t828;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t831;
// System.Security.Cryptography.X509Certificates.X509FindType
#include "System_System_Security_Cryptography_X509Certificates_X509Fin.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
 void X509Certificate2Collection__ctor_m3477 (X509Certificate2Collection_t830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 void X509Certificate2Collection__ctor_m3478 (X509Certificate2Collection_t830 * __this, X509Certificate2Collection_t830 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
 X509Certificate2_t828 * X509Certificate2Collection_get_Item_m3479 (X509Certificate2Collection_t830 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Certificate2Collection_Add_m3480 (X509Certificate2Collection_t830 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 void X509Certificate2Collection_AddRange_m3481 (X509Certificate2Collection_t830 * __this, X509Certificate2Collection_t830 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Certificate2Collection_Contains_m3482 (X509Certificate2Collection_t830 * __this, X509Certificate2_t828 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
 X509Certificate2Collection_t830 * X509Certificate2Collection_Find_m3483 (X509Certificate2Collection_t830 * __this, int32_t ___findType, Object_t * ___findValue, bool ___validOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
 X509Certificate2Enumerator_t831 * X509Certificate2Collection_GetEnumerator_m3484 (X509Certificate2Collection_t830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

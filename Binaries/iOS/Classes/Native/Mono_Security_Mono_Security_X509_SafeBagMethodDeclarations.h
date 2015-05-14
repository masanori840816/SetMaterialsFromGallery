#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.SafeBag
struct SafeBag_t1027;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t829;

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
 void SafeBag__ctor_m4618 (SafeBag_t1027 * __this, String_t* ___bagOID, ASN1_t829 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
 String_t* SafeBag_get_BagOID_m4619 (SafeBag_t1027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
 ASN1_t829 * SafeBag_get_ASN1_m4620 (SafeBag_t1027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

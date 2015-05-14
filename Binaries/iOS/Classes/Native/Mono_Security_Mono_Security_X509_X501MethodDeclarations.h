#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X501
struct X501_t968;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t829;
// System.Text.StringBuilder
struct StringBuilder_t274;

// System.Void Mono.Security.X509.X501::.cctor()
 void X501__cctor_m4646 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
 String_t* X501_ToString_m4647 (Object_t * __this/* static, unused */, ASN1_t829 * ___seq, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
 String_t* X501_ToString_m4220 (Object_t * __this/* static, unused */, ASN1_t829 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
 void X501_AppendEntry_m4648 (Object_t * __this/* static, unused */, StringBuilder_t274 * ___sb, ASN1_t829 * ___entry, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;

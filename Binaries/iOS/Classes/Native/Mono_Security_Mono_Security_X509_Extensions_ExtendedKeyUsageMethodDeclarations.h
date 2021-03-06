﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t1033;
// System.Collections.ArrayList
struct ArrayList_t772;
// Mono.Security.X509.X509Extension
struct X509Extension_t842;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
 void ExtendedKeyUsageExtension__ctor_m4725 (ExtendedKeyUsageExtension_t1033 * __this, X509Extension_t842 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
 void ExtendedKeyUsageExtension_Decode_m4726 (ExtendedKeyUsageExtension_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
 void ExtendedKeyUsageExtension_Encode_m4727 (ExtendedKeyUsageExtension_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
 ArrayList_t772 * ExtendedKeyUsageExtension_get_KeyPurpose_m4728 (ExtendedKeyUsageExtension_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
 String_t* ExtendedKeyUsageExtension_ToString_m4729 (ExtendedKeyUsageExtension_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

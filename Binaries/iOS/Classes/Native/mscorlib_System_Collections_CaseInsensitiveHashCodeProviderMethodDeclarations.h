#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t948;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.Globalization.TextInfo
struct TextInfo_t1205;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
 void CaseInsensitiveHashCodeProvider__ctor_m6827 (CaseInsensitiveHashCodeProvider_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
 void CaseInsensitiveHashCodeProvider__ctor_m6828 (CaseInsensitiveHashCodeProvider_t948 * __this, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
 void CaseInsensitiveHashCodeProvider__cctor_m6829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m6830 (Object_t * __this/* static, unused */, CultureInfo_t674 * ___a, CultureInfo_t674 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m6831 (Object_t * __this/* static, unused */, TextInfo_t1205 * ___info, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
 CaseInsensitiveHashCodeProvider_t948 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m4112 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
 int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m6832 (CaseInsensitiveHashCodeProvider_t948 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;

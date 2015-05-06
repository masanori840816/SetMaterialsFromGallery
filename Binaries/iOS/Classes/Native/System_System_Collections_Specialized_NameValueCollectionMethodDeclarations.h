#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t775;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t772;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
 void NameValueCollection__ctor_m3290 (NameValueCollection_t775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameValueCollection__ctor_m3291 (NameValueCollection_t775 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
 void NameValueCollection_Add_m3292 (NameValueCollection_t775 * __this, String_t* ___name, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
 String_t* NameValueCollection_Get_m3293 (NameValueCollection_t775 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
 String_t* NameValueCollection_AsSingleString_m3294 (Object_t * __this/* static, unused */, ArrayList_t772 * ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
 String_t* NameValueCollection_GetKey_m3295 (NameValueCollection_t775 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
 void NameValueCollection_InvalidateCachedArrays_m3296 (NameValueCollection_t775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

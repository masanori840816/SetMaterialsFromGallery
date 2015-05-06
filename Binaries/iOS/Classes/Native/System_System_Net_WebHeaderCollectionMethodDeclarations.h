#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t787;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t771;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
 void WebHeaderCollection__ctor_m3392 (WebHeaderCollection_t787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection__ctor_m3393 (WebHeaderCollection_t787 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
 void WebHeaderCollection__ctor_m3394 (WebHeaderCollection_t787 * __this, bool ___internallyCreated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
 void WebHeaderCollection__cctor_m3395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m3396 (WebHeaderCollection_t787 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
 void WebHeaderCollection_Add_m3397 (WebHeaderCollection_t787 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
 void WebHeaderCollection_AddWithoutValidate_m3398 (WebHeaderCollection_t787 * __this, String_t* ___headerName, String_t* ___headerValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
 bool WebHeaderCollection_IsRestricted_m3399 (Object_t * __this/* static, unused */, String_t* ___headerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
 void WebHeaderCollection_OnDeserialization_m3400 (WebHeaderCollection_t787 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
 String_t* WebHeaderCollection_ToString_m3401 (WebHeaderCollection_t787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_GetObjectData_m3402 (WebHeaderCollection_t787 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
 int32_t WebHeaderCollection_get_Count_m3403 (WebHeaderCollection_t787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
 KeysCollection_t771 * WebHeaderCollection_get_Keys_m3404 (WebHeaderCollection_t787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
 String_t* WebHeaderCollection_Get_m3405 (WebHeaderCollection_t787 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
 String_t* WebHeaderCollection_GetKey_m3406 (WebHeaderCollection_t787 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
 Object_t * WebHeaderCollection_GetEnumerator_m3407 (WebHeaderCollection_t787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
 bool WebHeaderCollection_IsHeaderValue_m3408 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
 bool WebHeaderCollection_IsHeaderName_m3409 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;

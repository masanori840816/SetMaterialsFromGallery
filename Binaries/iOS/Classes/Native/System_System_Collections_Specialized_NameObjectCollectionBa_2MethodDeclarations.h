﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t769;
// System.Object
struct Object_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t771;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t768;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
 void NameObjectCollectionBase__ctor_m3278 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameObjectCollectionBase__ctor_m3279 (NameObjectCollectionBase_t769 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
 bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m3280 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
 Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m3281 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m3282 (NameObjectCollectionBase_t769 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
 void NameObjectCollectionBase_Init_m3283 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
 KeysCollection_t771 * NameObjectCollectionBase_get_Keys_m3284 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
 Object_t * NameObjectCollectionBase_GetEnumerator_m3285 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameObjectCollectionBase_GetObjectData_m3286 (NameObjectCollectionBase_t769 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
 int32_t NameObjectCollectionBase_get_Count_m3287 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
 void NameObjectCollectionBase_OnDeserialization_m3288 (NameObjectCollectionBase_t769 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
 bool NameObjectCollectionBase_get_IsReadOnly_m3289 (NameObjectCollectionBase_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
 void NameObjectCollectionBase_BaseAdd_m3290 (NameObjectCollectionBase_t769 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
 Object_t * NameObjectCollectionBase_BaseGet_m3291 (NameObjectCollectionBase_t769 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
 Object_t * NameObjectCollectionBase_BaseGet_m3292 (NameObjectCollectionBase_t769 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
 String_t* NameObjectCollectionBase_BaseGetKey_m3293 (NameObjectCollectionBase_t769 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
 _Item_t768 * NameObjectCollectionBase_FindFirstMatchedItem_m3294 (NameObjectCollectionBase_t769 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;

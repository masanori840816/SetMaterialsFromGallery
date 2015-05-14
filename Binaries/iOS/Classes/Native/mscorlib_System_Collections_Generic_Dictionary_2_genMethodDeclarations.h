#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t93;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_t305;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2370;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct KeyValuePair_2U5BU5D_t2372;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct IEnumerator_1_t2373;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t763;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor()
 void Dictionary_2__ctor_m1382 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m12134 (Dictionary_2_t93 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Int32)
 void Dictionary_2__ctor_m12135 (Dictionary_2_t93 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m12136 (Dictionary_2_t93 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12137 (Dictionary_2_t93 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m12138 (Dictionary_2_t93 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m12139 (Dictionary_2_t93 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m12140 (Dictionary_2_t93 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12141 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12142 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12143 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12144 (Dictionary_2_t93 * __this, KeyValuePair_2_t303  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12145 (Dictionary_2_t93 * __this, KeyValuePair_2_t303  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12146 (Dictionary_2_t93 * __this, KeyValuePair_2U5BU5D_t2372* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12147 (Dictionary_2_t93 * __this, KeyValuePair_2_t303  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m12148 (Dictionary_2_t93 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12149 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12150 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12151 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
 int32_t Dictionary_2_get_Count_m12152 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
 PointerEventData_t27 * Dictionary_2_get_Item_m12153 (Dictionary_2_t93 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m12154 (Dictionary_2_t93 * __this, int32_t ___key, PointerEventData_t27 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m12155 (Dictionary_2_t93 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m12156 (Dictionary_2_t93 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m12157 (Dictionary_2_t93 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::make_pair(TKey,TValue)
 KeyValuePair_2_t303  Dictionary_2_make_pair_m12158 (Object_t * __this/* static, unused */, int32_t ___key, PointerEventData_t27 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_value(TKey,TValue)
 PointerEventData_t27 * Dictionary_2_pick_value_m12159 (Object_t * __this/* static, unused */, int32_t ___key, PointerEventData_t27 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m12160 (Dictionary_2_t93 * __this, KeyValuePair_2U5BU5D_t2372* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Resize()
 void Dictionary_2_Resize_m12161 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
 void Dictionary_2_Add_m1384 (Dictionary_2_t93 * __this, int32_t ___key, PointerEventData_t27 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
 void Dictionary_2_Clear_m1403 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m12162 (Dictionary_2_t93 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m12163 (Dictionary_2_t93 * __this, PointerEventData_t27 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m12164 (Dictionary_2_t93 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m12165 (Dictionary_2_t93 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
 bool Dictionary_2_Remove_m1385 (Dictionary_2_t93 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m1383 (Dictionary_2_t93 * __this, int32_t ___key, PointerEventData_t27 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
 ValueCollection_t305 * Dictionary_2_get_Values_m1398 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m12166 (Dictionary_2_t93 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTValue(System.Object)
 PointerEventData_t27 * Dictionary_2_ToTValue_m12167 (Dictionary_2_t93 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m12168 (Dictionary_2_t93 * __this, KeyValuePair_2_t303  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
 Enumerator_t302  Dictionary_2_GetEnumerator_m1406 (Dictionary_2_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t766  Dictionary_2_U3CCopyToU3Em__0_m12169 (Object_t * __this/* static, unused */, int32_t ___key, PointerEventData_t27 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2483;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2487;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2439;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2484;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2489;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t763;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
 void Dictionary_2__ctor_m12910_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m12910(__this, method) (void)Dictionary_2__ctor_m12910_gshared((Dictionary_2_t2483 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m12912_gshared (Dictionary_2_t2483 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m12912(__this, ___comparer, method) (void)Dictionary_2__ctor_m12912_gshared((Dictionary_2_t2483 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
 void Dictionary_2__ctor_m12914_gshared (Dictionary_2_t2483 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m12914(__this, ___capacity, method) (void)Dictionary_2__ctor_m12914_gshared((Dictionary_2_t2483 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m12916_gshared (Dictionary_2_t2483 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m12916(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m12916_gshared((Dictionary_2_t2483 *)__this, (SerializationInfo_t572 *)___info, (StreamingContext_t573 )___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12918_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12918(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m12918_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m12920_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12920(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m12920_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m12922_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12922(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m12922_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m12924_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12924(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m12924_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12926_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12926(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12926_gshared((Dictionary_2_t2483 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12928_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12928(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12928_gshared((Dictionary_2_t2483 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12930_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12930(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12930_gshared((Dictionary_2_t2483 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12987 (Dictionary_2_t2483 * __this, KeyValuePair_2_t2488  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12988 (Dictionary_2_t2483 * __this, KeyValuePair_2_t2488  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12934_gshared (Dictionary_2_t2483 * __this, KeyValuePair_2U5BU5D_t2484* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12934(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12934_gshared((Dictionary_2_t2483 *)__this, (KeyValuePair_2U5BU5D_t2484*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12989 (Dictionary_2_t2483 * __this, KeyValuePair_2_t2488  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m12937_gshared (Dictionary_2_t2483 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12937(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m12937_gshared((Dictionary_2_t2483 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12939_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12939(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12939_gshared((Dictionary_2_t2483 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12941_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12941(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12941_gshared((Dictionary_2_t2483 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12943_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12943(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12943_gshared((Dictionary_2_t2483 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
 int32_t Dictionary_2_get_Count_m12945_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m12945(__this, method) (int32_t)Dictionary_2_get_Count_m12945_gshared((Dictionary_2_t2483 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
 Object_t * Dictionary_2_get_Item_m12947_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m12947(__this, ___key, method) (Object_t *)Dictionary_2_get_Item_m12947_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m12949_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m12949(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m12949_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m12951_gshared (Dictionary_2_t2483 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m12951(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m12951_gshared((Dictionary_2_t2483 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m12953_gshared (Dictionary_2_t2483 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m12953(__this, ___size, method) (void)Dictionary_2_InitArrays_m12953_gshared((Dictionary_2_t2483 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m12955_gshared (Dictionary_2_t2483 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12955(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m12955_gshared((Dictionary_2_t2483 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
 KeyValuePair_2_t2488  Dictionary_2_make_pair_m12990 (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
 Object_t * Dictionary_2_pick_value_m12958_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m12958(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_value_m12958_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m12960_gshared (Dictionary_2_t2483 * __this, KeyValuePair_2U5BU5D_t2484* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m12960(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m12960_gshared((Dictionary_2_t2483 *)__this, (KeyValuePair_2U5BU5D_t2484*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
 void Dictionary_2_Resize_m12962_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m12962(__this, method) (void)Dictionary_2_Resize_m12962_gshared((Dictionary_2_t2483 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
 void Dictionary_2_Add_m12963_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m12963(__this, ___key, ___value, method) (void)Dictionary_2_Add_m12963_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
 void Dictionary_2_Clear_m12965_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m12965(__this, method) (void)Dictionary_2_Clear_m12965_gshared((Dictionary_2_t2483 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m12967_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m12967(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m12967_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m12969_gshared (Dictionary_2_t2483 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m12969(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m12969_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m12971_gshared (Dictionary_2_t2483 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m12971(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m12971_gshared((Dictionary_2_t2483 *)__this, (SerializationInfo_t572 *)___info, (StreamingContext_t573 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m12973_gshared (Dictionary_2_t2483 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12973(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m12973_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
 bool Dictionary_2_Remove_m12975_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m12975(__this, ___key, method) (bool)Dictionary_2_Remove_m12975_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m12976_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m12976(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m12976_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
 ValueCollection_t2487 * Dictionary_2_get_Values_m12978_gshared (Dictionary_2_t2483 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m12978(__this, method) (ValueCollection_t2487 *)Dictionary_2_get_Values_m12978_gshared((Dictionary_2_t2483 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
 Object_t * Dictionary_2_ToTKey_m12980_gshared (Dictionary_2_t2483 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m12980(__this, ___key, method) (Object_t *)Dictionary_2_ToTKey_m12980_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
 Object_t * Dictionary_2_ToTValue_m12982_gshared (Dictionary_2_t2483 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m12982(__this, ___value, method) (Object_t *)Dictionary_2_ToTValue_m12982_gshared((Dictionary_2_t2483 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m12991 (Dictionary_2_t2483 * __this, KeyValuePair_2_t2488  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
 Enumerator_t2490  Dictionary_2_GetEnumerator_m12992 (Dictionary_2_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t766  Dictionary_2_U3CCopyToU3Em__0_m12986_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12986(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t766 )Dictionary_2_U3CCopyToU3Em__0_m12986_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)

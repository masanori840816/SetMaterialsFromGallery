#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct Dictionary_2_t343;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_t2593;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
struct IEqualityComparer_1_t2591;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2594;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct IEnumerator_1_t2596;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t763;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor()
 void Dictionary_2__ctor_m13852 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m13853 (Dictionary_2_t343 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Int32)
 void Dictionary_2__ctor_m13854 (Dictionary_2_t343 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m13855 (Dictionary_2_t343 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13856 (Dictionary_2_t343 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m13857 (Dictionary_2_t343 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m13858 (Dictionary_2_t343 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m13859 (Dictionary_2_t343 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13860 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13861 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13862 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13863 (Dictionary_2_t343 * __this, KeyValuePair_2_t2595  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13864 (Dictionary_2_t343 * __this, KeyValuePair_2_t2595  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13865 (Dictionary_2_t343 * __this, KeyValuePair_2U5BU5D_t2594* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13866 (Dictionary_2_t343 * __this, KeyValuePair_2_t2595  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m13867 (Dictionary_2_t343 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13868 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13869 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13870 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Count()
 int32_t Dictionary_2_get_Count_m13871 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Item(TKey)
 int32_t Dictionary_2_get_Item_m13872 (Dictionary_2_t343 * __this, Graphic_t139 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m13873 (Dictionary_2_t343 * __this, Graphic_t139 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m13874 (Dictionary_2_t343 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m13875 (Dictionary_2_t343 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m13876 (Dictionary_2_t343 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::make_pair(TKey,TValue)
 KeyValuePair_2_t2595  Dictionary_2_make_pair_m13877 (Object_t * __this/* static, unused */, Graphic_t139 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_value(TKey,TValue)
 int32_t Dictionary_2_pick_value_m13878 (Object_t * __this/* static, unused */, Graphic_t139 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m13879 (Dictionary_2_t343 * __this, KeyValuePair_2U5BU5D_t2594* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Resize()
 void Dictionary_2_Resize_m13880 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Add(TKey,TValue)
 void Dictionary_2_Add_m13881 (Dictionary_2_t343 * __this, Graphic_t139 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Clear()
 void Dictionary_2_Clear_m13882 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m13883 (Dictionary_2_t343 * __this, Graphic_t139 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m13884 (Dictionary_2_t343 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m13885 (Dictionary_2_t343 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m13886 (Dictionary_2_t343 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Remove(TKey)
 bool Dictionary_2_Remove_m13887 (Dictionary_2_t343 * __this, Graphic_t139 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m13888 (Dictionary_2_t343 * __this, Graphic_t139 * ___key, int32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Values()
 ValueCollection_t2593 * Dictionary_2_get_Values_m13889 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTKey(System.Object)
 Graphic_t139 * Dictionary_2_ToTKey_m13890 (Dictionary_2_t343 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTValue(System.Object)
 int32_t Dictionary_2_ToTValue_m13891 (Dictionary_2_t343 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m13892 (Dictionary_2_t343 * __this, KeyValuePair_2_t2595  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetEnumerator()
 Enumerator_t2597  Dictionary_2_GetEnumerator_m13893 (Dictionary_2_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t766  Dictionary_2_U3CCopyToU3Em__0_m13894 (Object_t * __this/* static, unused */, Graphic_t139 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

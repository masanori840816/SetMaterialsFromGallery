﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t214;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t213;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t2705;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t2706;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t2707;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t2708;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t2704;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t2709;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t2710;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m1889(__this, method) (void)List_1__ctor_m10623_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m14572(__this, ___capacity, method) (void)List_1__ctor_m10625_gshared((List_1_t275 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m14573(__this/* static, unused */, method) (void)List_1__cctor_m10627_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14574(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10629_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14575(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m10631_gshared((List_1_t275 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14576(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m10633_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14577(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m10635_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14578(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m10637_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14579(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m10639_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14580(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m10641_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14581(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m10643_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14582(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10645_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14583(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m10647_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14584(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m10649_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14585(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m10651_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14586(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m10653_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14587(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m10655_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14588(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m10657_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m1897(__this, ___item, method) (void)List_1_Add_m10659_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14589(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m10661_gshared((List_1_t275 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14590(__this, ___collection, method) (void)List_1_AddCollection_m10663_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14591(__this, ___enumerable, method) (void)List_1_AddEnumerable_m10665_gshared((List_1_t275 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14592(__this, ___collection, method) (void)List_1_AddRange_m10667_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m14593(__this, method) (ReadOnlyCollection_1_t2708 *)List_1_AsReadOnly_m10669_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m14594(__this, method) (void)List_1_Clear_m10671_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m14595(__this, ___item, method) (bool)List_1_Contains_m10673_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14596(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m10675_gshared((List_1_t275 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m14597(__this, ___match, method) (MatEntry_t213 *)List_1_Find_m10677_gshared((List_1_t275 *)__this, (Predicate_1_t2200 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14598(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m10679_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2200 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14599(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m10681_gshared((List_1_t275 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2200 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
 Enumerator_t2711  List_1_GetEnumerator_m14600 (List_1_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m14601(__this, ___item, method) (int32_t)List_1_IndexOf_m10684_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14602(__this, ___start, ___delta, method) (void)List_1_Shift_m10686_gshared((List_1_t275 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14603(__this, ___index, method) (void)List_1_CheckIndex_m10688_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m14604(__this, ___index, ___item, method) (void)List_1_Insert_m10690_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14605(__this, ___collection, method) (void)List_1_CheckCollection_m10692_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m14606(__this, ___item, method) (bool)List_1_Remove_m10694_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14607(__this, ___match, method) (int32_t)List_1_RemoveAll_m10696_gshared((List_1_t275 *)__this, (Predicate_1_t2200 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m1898(__this, ___index, method) (void)List_1_RemoveAt_m10697_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m14608(__this, method) (void)List_1_Reverse_m10699_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m14609(__this, method) (void)List_1_Sort_m10701_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14610(__this, ___comparison, method) (void)List_1_Sort_m10703_gshared((List_1_t275 *)__this, (Comparison_1_t2202 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m14611(__this, method) (MatEntryU5BU5D_t2704*)List_1_ToArray_m10705_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m14612(__this, method) (void)List_1_TrimExcess_m10707_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m14613(__this, method) (int32_t)List_1_get_Capacity_m10709_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14614(__this, ___value, method) (void)List_1_set_Capacity_m10711_gshared((List_1_t275 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m1893(__this, method) (int32_t)List_1_get_Count_m10712_gshared((List_1_t275 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m1892(__this, ___index, method) (MatEntry_t213 *)List_1_get_Item_m10713_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m14615(__this, ___index, ___value, method) (void)List_1_set_Item_m10715_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)

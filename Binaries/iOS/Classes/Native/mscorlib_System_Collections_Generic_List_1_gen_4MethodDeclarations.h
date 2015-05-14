#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t33;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t32;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t2324;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t2325;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t2326;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t2327;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t2323;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2328;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t2329;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m11726(__this, method) (void)List_1__ctor_m10623_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m11727(__this, ___capacity, method) (void)List_1__ctor_m10625_gshared((List_1_t275 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m11728(__this/* static, unused */, method) (void)List_1__cctor_m10627_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11729(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10629_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11730(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m10631_gshared((List_1_t275 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11731(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m10633_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11732(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m10635_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11733(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m10637_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11734(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m10639_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11735(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m10641_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11736(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m10643_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11737(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10645_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11738(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m10647_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11739(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m10649_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11740(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m10651_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11741(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m10653_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11742(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m10655_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11743(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m10657_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m11744(__this, ___item, method) (void)List_1_Add_m10659_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11745(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m10661_gshared((List_1_t275 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11746(__this, ___collection, method) (void)List_1_AddCollection_m10663_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11747(__this, ___enumerable, method) (void)List_1_AddEnumerable_m10665_gshared((List_1_t275 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11748(__this, ___collection, method) (void)List_1_AddRange_m10667_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m11749(__this, method) (ReadOnlyCollection_1_t2327 *)List_1_AsReadOnly_m10669_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m11750(__this, method) (void)List_1_Clear_m10671_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m11751(__this, ___item, method) (bool)List_1_Contains_m10673_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11752(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m10675_gshared((List_1_t275 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m11753(__this, ___match, method) (Entry_t32 *)List_1_Find_m10677_gshared((List_1_t275 *)__this, (Predicate_1_t2200 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11754(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m10679_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2200 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11755(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m10681_gshared((List_1_t275 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2200 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
 Enumerator_t2330  List_1_GetEnumerator_m11756 (List_1_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m11757(__this, ___item, method) (int32_t)List_1_IndexOf_m10684_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11758(__this, ___start, ___delta, method) (void)List_1_Shift_m10686_gshared((List_1_t275 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11759(__this, ___index, method) (void)List_1_CheckIndex_m10688_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m11760(__this, ___index, ___item, method) (void)List_1_Insert_m10690_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11761(__this, ___collection, method) (void)List_1_CheckCollection_m10692_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m11762(__this, ___item, method) (bool)List_1_Remove_m10694_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11763(__this, ___match, method) (int32_t)List_1_RemoveAll_m10696_gshared((List_1_t275 *)__this, (Predicate_1_t2200 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11764(__this, ___index, method) (void)List_1_RemoveAt_m10697_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m11765(__this, method) (void)List_1_Reverse_m10699_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m11766(__this, method) (void)List_1_Sort_m10701_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11767(__this, ___comparison, method) (void)List_1_Sort_m10703_gshared((List_1_t275 *)__this, (Comparison_1_t2202 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m11768(__this, method) (EntryU5BU5D_t2323*)List_1_ToArray_m10705_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m11769(__this, method) (void)List_1_TrimExcess_m10707_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m11770(__this, method) (int32_t)List_1_get_Capacity_m10709_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11771(__this, ___value, method) (void)List_1_set_Capacity_m10711_gshared((List_1_t275 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m1304(__this, method) (int32_t)List_1_get_Count_m10712_gshared((List_1_t275 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m1305(__this, ___index, method) (Entry_t32 *)List_1_get_Item_m10713_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m11772(__this, ___index, ___value, method) (void)List_1_set_Item_m10715_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)

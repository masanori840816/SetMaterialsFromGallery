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
struct IEnumerator_1_t2323;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t2324;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t2325;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t2326;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t2322;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2327;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t2328;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m11721(__this, method) (void)List_1__ctor_m10618_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m11722(__this, ___capacity, method) (void)List_1__ctor_m10620_gshared((List_1_t275 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m11723(__this/* static, unused */, method) (void)List_1__cctor_m10622_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11724(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10624_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11725(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m10626_gshared((List_1_t275 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11726(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m10628_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11727(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m10630_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11728(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m10632_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11729(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m10634_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11730(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m10636_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11731(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m10638_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11732(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10640_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11733(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m10642_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11734(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m10644_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11735(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m10646_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11736(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m10648_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11737(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m10650_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11738(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m10652_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m11739(__this, ___item, method) (void)List_1_Add_m10654_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11740(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m10656_gshared((List_1_t275 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11741(__this, ___collection, method) (void)List_1_AddCollection_m10658_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11742(__this, ___enumerable, method) (void)List_1_AddEnumerable_m10660_gshared((List_1_t275 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11743(__this, ___collection, method) (void)List_1_AddRange_m10662_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m11744(__this, method) (ReadOnlyCollection_1_t2326 *)List_1_AsReadOnly_m10664_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m11745(__this, method) (void)List_1_Clear_m10666_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m11746(__this, ___item, method) (bool)List_1_Contains_m10668_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11747(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m10670_gshared((List_1_t275 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m11748(__this, ___match, method) (Entry_t32 *)List_1_Find_m10672_gshared((List_1_t275 *)__this, (Predicate_1_t2199 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11749(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m10674_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2199 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11750(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m10676_gshared((List_1_t275 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2199 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
 Enumerator_t2329  List_1_GetEnumerator_m11751 (List_1_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m11752(__this, ___item, method) (int32_t)List_1_IndexOf_m10679_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11753(__this, ___start, ___delta, method) (void)List_1_Shift_m10681_gshared((List_1_t275 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11754(__this, ___index, method) (void)List_1_CheckIndex_m10683_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m11755(__this, ___index, ___item, method) (void)List_1_Insert_m10685_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11756(__this, ___collection, method) (void)List_1_CheckCollection_m10687_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m11757(__this, ___item, method) (bool)List_1_Remove_m10689_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11758(__this, ___match, method) (int32_t)List_1_RemoveAll_m10691_gshared((List_1_t275 *)__this, (Predicate_1_t2199 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11759(__this, ___index, method) (void)List_1_RemoveAt_m10692_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m11760(__this, method) (void)List_1_Reverse_m10694_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m11761(__this, method) (void)List_1_Sort_m10696_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11762(__this, ___comparison, method) (void)List_1_Sort_m10698_gshared((List_1_t275 *)__this, (Comparison_1_t2201 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m11763(__this, method) (EntryU5BU5D_t2322*)List_1_ToArray_m10700_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m11764(__this, method) (void)List_1_TrimExcess_m10702_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m11765(__this, method) (int32_t)List_1_get_Capacity_m10704_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11766(__this, ___value, method) (void)List_1_set_Capacity_m10706_gshared((List_1_t275 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m1301(__this, method) (int32_t)List_1_get_Count_m10707_gshared((List_1_t275 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m1302(__this, ___index, method) (Entry_t32 *)List_1_get_Item_m10708_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m11767(__this, ___index, ___value, method) (void)List_1_set_Item_m10710_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t595;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t3204;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t3205;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t3206;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t3207;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3203;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t703;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t3208;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m3137(__this, method) (void)List_1__ctor_m10618_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m17735(__this, ___capacity, method) (void)List_1__ctor_m10620_gshared((List_1_t275 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m17736(__this/* static, unused */, method) (void)List_1__cctor_m10622_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17737(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10624_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17738(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m10626_gshared((List_1_t275 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17739(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m10628_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17740(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m10630_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17741(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m10632_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17742(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m10634_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17743(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m10636_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17744(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m10638_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17745(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10640_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17746(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m10642_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17747(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m10644_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17748(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m10646_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17749(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m10648_gshared((List_1_t275 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17750(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m10650_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17751(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m10652_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m3138(__this, ___item, method) (void)List_1_Add_m10654_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17752(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m10656_gshared((List_1_t275 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17753(__this, ___collection, method) (void)List_1_AddCollection_m10658_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17754(__this, ___enumerable, method) (void)List_1_AddEnumerable_m10660_gshared((List_1_t275 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3145(__this, ___collection, method) (void)List_1_AddRange_m10662_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m17755(__this, method) (ReadOnlyCollection_1_t3207 *)List_1_AsReadOnly_m10664_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m3144(__this, method) (void)List_1_Clear_m10666_gshared((List_1_t275 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m3141(__this, ___item, method) (bool)List_1_Contains_m10668_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17756(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m10670_gshared((List_1_t275 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m17757(__this, ___match, method) (BaseInvokableCall_t581 *)List_1_Find_m10672_gshared((List_1_t275 *)__this, (Predicate_1_t2199 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17758(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m10674_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2199 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17759(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m10676_gshared((List_1_t275 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2199 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
 Enumerator_t3209  List_1_GetEnumerator_m17760 (List_1_t595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m17761(__this, ___item, method) (int32_t)List_1_IndexOf_m10679_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17762(__this, ___start, ___delta, method) (void)List_1_Shift_m10681_gshared((List_1_t275 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17763(__this, ___index, method) (void)List_1_CheckIndex_m10683_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m17764(__this, ___index, ___item, method) (void)List_1_Insert_m10685_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17765(__this, ___collection, method) (void)List_1_CheckCollection_m10687_gshared((List_1_t275 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m17766(__this, ___item, method) (bool)List_1_Remove_m10689_gshared((List_1_t275 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m3143(__this, ___match, method) (int32_t)List_1_RemoveAll_m10691_gshared((List_1_t275 *)__this, (Predicate_1_t2199 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17767(__this, ___index, method) (void)List_1_RemoveAt_m10692_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m17768(__this, method) (void)List_1_Reverse_m10694_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m17769(__this, method) (void)List_1_Sort_m10696_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17770(__this, ___comparison, method) (void)List_1_Sort_m10698_gshared((List_1_t275 *)__this, (Comparison_1_t2201 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m17771(__this, method) (BaseInvokableCallU5BU5D_t3203*)List_1_ToArray_m10700_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m17772(__this, method) (void)List_1_TrimExcess_m10702_gshared((List_1_t275 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m17773(__this, method) (int32_t)List_1_get_Capacity_m10704_gshared((List_1_t275 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17774(__this, ___value, method) (void)List_1_set_Capacity_m10706_gshared((List_1_t275 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m3140(__this, method) (int32_t)List_1_get_Count_m10707_gshared((List_1_t275 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m3139(__this, ___index, method) (BaseInvokableCall_t581 *)List_1_get_Item_m10708_gshared((List_1_t275 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m17775(__this, ___index, ___value, method) (void)List_1_set_Item_m10710_gshared((List_1_t275 *)__this, (int32_t)___index, (Object_t *)___value, method)

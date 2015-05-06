#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t3338;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.String[]
struct StringU5BU5D_t9;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3330;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3337;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m18541(__this, method) (void)Collection_1__ctor_m10748_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18542(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10749_gshared((Collection_1_t2207 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m18543(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m10750_gshared((Collection_1_t2207 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m18544(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m10751_gshared((Collection_1_t2207 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m18545(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m10752_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m18546(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m10753_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m18547(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m10754_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m18548(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m10755_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m18549(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m10756_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m18550(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m10757_gshared((Collection_1_t2207 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m18551(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m10758_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m18552(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m10759_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m18553(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m10760_gshared((Collection_1_t2207 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m18554(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m10761_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m18555(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m10762_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m18556(__this, ___item, method) (void)Collection_1_Add_m10763_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m18557(__this, method) (void)Collection_1_Clear_m10764_gshared((Collection_1_t2207 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m18558(__this, method) (void)Collection_1_ClearItems_m10765_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m18559(__this, ___item, method) (bool)Collection_1_Contains_m10766_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m18560(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m10767_gshared((Collection_1_t2207 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m18561(__this, method) (Object_t*)Collection_1_GetEnumerator_m10768_gshared((Collection_1_t2207 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m18562(__this, ___item, method) (int32_t)Collection_1_IndexOf_m10769_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m18563(__this, ___index, ___item, method) (void)Collection_1_Insert_m10770_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m18564(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m10771_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m18565(__this, ___item, method) (bool)Collection_1_Remove_m10772_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m18566(__this, ___index, method) (void)Collection_1_RemoveAt_m10773_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m18567(__this, ___index, method) (void)Collection_1_RemoveItem_m10774_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m18568(__this, method) (int32_t)Collection_1_get_Count_m10775_gshared((Collection_1_t2207 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m18569(__this, ___index, method) (String_t*)Collection_1_get_Item_m10776_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m18570(__this, ___index, ___value, method) (void)Collection_1_set_Item_m10777_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m18571(__this, ___index, ___item, method) (void)Collection_1_SetItem_m10778_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m18572(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m10779_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m18573(__this/* static, unused */, ___item, method) (String_t*)Collection_1_ConvertItem_m10780_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m18574(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m10781_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m18575(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m10782_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m18576(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m10783_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)

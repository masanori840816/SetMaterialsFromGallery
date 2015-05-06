#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Type>
struct Collection_1_t3128;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Type[]
struct TypeU5BU5D_t546;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t3119;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t3127;

// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m17246(__this, method) (void)Collection_1__ctor_m10748_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17247(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10749_gshared((Collection_1_t2207 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m17248(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m10750_gshared((Collection_1_t2207 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m17249(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m10751_gshared((Collection_1_t2207 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m17250(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m10752_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m17251(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m10753_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m17252(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m10754_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m17253(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m10755_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m17254(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m10756_gshared((Collection_1_t2207 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m17255(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m10757_gshared((Collection_1_t2207 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m17256(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m10758_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m17257(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m10759_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m17258(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m10760_gshared((Collection_1_t2207 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m17259(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m10761_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m17260(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m10762_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Add(T)
#define Collection_1_Add_m17261(__this, ___item, method) (void)Collection_1_Add_m10763_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Clear()
#define Collection_1_Clear_m17262(__this, method) (void)Collection_1_Clear_m10764_gshared((Collection_1_t2207 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::ClearItems()
#define Collection_1_ClearItems_m17263(__this, method) (void)Collection_1_ClearItems_m10765_gshared((Collection_1_t2207 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Contains(T)
#define Collection_1_Contains_m17264(__this, ___item, method) (bool)Collection_1_Contains_m10766_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m17265(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m10767_gshared((Collection_1_t2207 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Type>::GetEnumerator()
#define Collection_1_GetEnumerator_m17266(__this, method) (Object_t*)Collection_1_GetEnumerator_m10768_gshared((Collection_1_t2207 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::IndexOf(T)
#define Collection_1_IndexOf_m17267(__this, ___item, method) (int32_t)Collection_1_IndexOf_m10769_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Insert(System.Int32,T)
#define Collection_1_Insert_m17268(__this, ___index, ___item, method) (void)Collection_1_Insert_m10770_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m17269(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m10771_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Remove(T)
#define Collection_1_Remove_m17270(__this, ___item, method) (bool)Collection_1_Remove_m10772_gshared((Collection_1_t2207 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m17271(__this, ___index, method) (void)Collection_1_RemoveAt_m10773_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m17272(__this, ___index, method) (void)Collection_1_RemoveItem_m10774_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::get_Count()
#define Collection_1_get_Count_m17273(__this, method) (int32_t)Collection_1_get_Count_m10775_gshared((Collection_1_t2207 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Type>::get_Item(System.Int32)
#define Collection_1_get_Item_m17274(__this, ___index, method) (Type_t *)Collection_1_get_Item_m10776_gshared((Collection_1_t2207 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m17275(__this, ___index, ___value, method) (void)Collection_1_set_Item_m10777_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m17276(__this, ___index, ___item, method) (void)Collection_1_SetItem_m10778_gshared((Collection_1_t2207 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m17277(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m10779_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Type>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m17278(__this/* static, unused */, ___item, method) (Type_t *)Collection_1_ConvertItem_m10780_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m17279(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m10781_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m17280(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m10782_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m17281(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m10783_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)

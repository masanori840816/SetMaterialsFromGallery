#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
struct Collection_1_t2268;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t248;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// UnityEngine.Component[]
struct ComponentU5BU5D_t2260;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t2261;
// System.Collections.Generic.IList`1<UnityEngine.Component>
struct IList_1_t2267;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m11286(__this, method) (void)Collection_1__ctor_m10753_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11287(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10754_gshared((Collection_1_t2208 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m11288(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m10755_gshared((Collection_1_t2208 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11289(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m10756_gshared((Collection_1_t2208 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m11290(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m10757_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m11291(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m10758_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m11292(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m10759_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m11293(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m10760_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m11294(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m10761_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11295(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m10762_gshared((Collection_1_t2208 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11296(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m10763_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11297(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m10764_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11298(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m10765_gshared((Collection_1_t2208 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m11299(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m10766_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m11300(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m10767_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Add(T)
#define Collection_1_Add_m11301(__this, ___item, method) (void)Collection_1_Add_m10768_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Clear()
#define Collection_1_Clear_m11302(__this, method) (void)Collection_1_Clear_m10769_gshared((Collection_1_t2208 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ClearItems()
#define Collection_1_ClearItems_m11303(__this, method) (void)Collection_1_ClearItems_m10770_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Contains(T)
#define Collection_1_Contains_m11304(__this, ___item, method) (bool)Collection_1_Contains_m10771_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m11305(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m10772_gshared((Collection_1_t2208 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::GetEnumerator()
#define Collection_1_GetEnumerator_m11306(__this, method) (Object_t*)Collection_1_GetEnumerator_m10773_gshared((Collection_1_t2208 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IndexOf(T)
#define Collection_1_IndexOf_m11307(__this, ___item, method) (int32_t)Collection_1_IndexOf_m10774_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Insert(System.Int32,T)
#define Collection_1_Insert_m11308(__this, ___index, ___item, method) (void)Collection_1_Insert_m10775_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m11309(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m10776_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Remove(T)
#define Collection_1_Remove_m11310(__this, ___item, method) (bool)Collection_1_Remove_m10777_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m11311(__this, ___index, method) (void)Collection_1_RemoveAt_m10778_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m11312(__this, ___index, method) (void)Collection_1_RemoveItem_m10779_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Count()
#define Collection_1_get_Count_m11313(__this, method) (int32_t)Collection_1_get_Count_m10780_gshared((Collection_1_t2208 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Item(System.Int32)
#define Collection_1_get_Item_m11314(__this, ___index, method) (Component_t248 *)Collection_1_get_Item_m10781_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m11315(__this, ___index, ___value, method) (void)Collection_1_set_Item_m10782_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m11316(__this, ___index, ___item, method) (void)Collection_1_SetItem_m10783_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m11317(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m10784_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m11318(__this/* static, unused */, ___item, method) (Component_t248 *)Collection_1_ConvertItem_m10785_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m11319(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m10786_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m11320(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m10787_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m11321(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m10788_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>
struct Collection_1_t2349;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t125;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// UnityEngine.Transform[]
struct TransformU5BU5D_t2341;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t2342;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t78;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m12026(__this, method) (void)Collection_1__ctor_m10753_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12027(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10754_gshared((Collection_1_t2208 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m12028(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m10755_gshared((Collection_1_t2208 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12029(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m10756_gshared((Collection_1_t2208 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m12030(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m10757_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m12031(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m10758_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m12032(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m10759_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m12033(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m10760_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m12034(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m10761_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12035(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m10762_gshared((Collection_1_t2208 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12036(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m10763_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12037(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m10764_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12038(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m10765_gshared((Collection_1_t2208 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m12039(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m10766_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m12040(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m10767_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Add(T)
#define Collection_1_Add_m12041(__this, ___item, method) (void)Collection_1_Add_m10768_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Clear()
#define Collection_1_Clear_m12042(__this, method) (void)Collection_1_Clear_m10769_gshared((Collection_1_t2208 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::ClearItems()
#define Collection_1_ClearItems_m12043(__this, method) (void)Collection_1_ClearItems_m10770_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Contains(T)
#define Collection_1_Contains_m12044(__this, ___item, method) (bool)Collection_1_Contains_m10771_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m12045(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m10772_gshared((Collection_1_t2208 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::GetEnumerator()
#define Collection_1_GetEnumerator_m12046(__this, method) (Object_t*)Collection_1_GetEnumerator_m10773_gshared((Collection_1_t2208 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IndexOf(T)
#define Collection_1_IndexOf_m12047(__this, ___item, method) (int32_t)Collection_1_IndexOf_m10774_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Insert(System.Int32,T)
#define Collection_1_Insert_m12048(__this, ___index, ___item, method) (void)Collection_1_Insert_m10775_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m12049(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m10776_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Remove(T)
#define Collection_1_Remove_m12050(__this, ___item, method) (bool)Collection_1_Remove_m10777_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m12051(__this, ___index, method) (void)Collection_1_RemoveAt_m10778_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m12052(__this, ___index, method) (void)Collection_1_RemoveItem_m10779_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::get_Count()
#define Collection_1_get_Count_m12053(__this, method) (int32_t)Collection_1_get_Count_m10780_gshared((Collection_1_t2208 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::get_Item(System.Int32)
#define Collection_1_get_Item_m12054(__this, ___index, method) (Transform_t125 *)Collection_1_get_Item_m10781_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m12055(__this, ___index, ___value, method) (void)Collection_1_set_Item_m10782_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m12056(__this, ___index, ___item, method) (void)Collection_1_SetItem_m10783_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m12057(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m10784_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m12058(__this/* static, unused */, ___item, method) (Transform_t125 *)Collection_1_ConvertItem_m10785_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m12059(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m10786_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m12060(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m10787_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m12061(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m10788_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Collection_1_t2398;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t90;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// UnityEngine.EventSystems.PointerInputModule/ButtonState[]
struct ButtonStateU5BU5D_t2388;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IEnumerator_1_t2389;
// System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IList_1_t2397;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m12347(__this, method) (void)Collection_1__ctor_m10753_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12348(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10754_gshared((Collection_1_t2208 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m12349(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m10755_gshared((Collection_1_t2208 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12350(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m10756_gshared((Collection_1_t2208 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m12351(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m10757_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m12352(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m10758_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m12353(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m10759_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m12354(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m10760_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m12355(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m10761_gshared((Collection_1_t2208 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12356(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m10762_gshared((Collection_1_t2208 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12357(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m10763_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12358(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m10764_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12359(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m10765_gshared((Collection_1_t2208 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m12360(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m10766_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m12361(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m10767_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
#define Collection_1_Add_m12362(__this, ___item, method) (void)Collection_1_Add_m10768_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
#define Collection_1_Clear_m12363(__this, method) (void)Collection_1_Clear_m10769_gshared((Collection_1_t2208 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ClearItems()
#define Collection_1_ClearItems_m12364(__this, method) (void)Collection_1_ClearItems_m10770_gshared((Collection_1_t2208 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
#define Collection_1_Contains_m12365(__this, ___item, method) (bool)Collection_1_Contains_m10771_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m12366(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m10772_gshared((Collection_1_t2208 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
#define Collection_1_GetEnumerator_m12367(__this, method) (Object_t*)Collection_1_GetEnumerator_m10773_gshared((Collection_1_t2208 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
#define Collection_1_IndexOf_m12368(__this, ___item, method) (int32_t)Collection_1_IndexOf_m10774_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
#define Collection_1_Insert_m12369(__this, ___index, ___item, method) (void)Collection_1_Insert_m10775_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m12370(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m10776_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
#define Collection_1_Remove_m12371(__this, ___item, method) (bool)Collection_1_Remove_m10777_gshared((Collection_1_t2208 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m12372(__this, ___index, method) (void)Collection_1_RemoveAt_m10778_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m12373(__this, ___index, method) (void)Collection_1_RemoveItem_m10779_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
#define Collection_1_get_Count_m12374(__this, method) (int32_t)Collection_1_get_Count_m10780_gshared((Collection_1_t2208 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
#define Collection_1_get_Item_m12375(__this, ___index, method) (ButtonState_t90 *)Collection_1_get_Item_m10781_gshared((Collection_1_t2208 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m12376(__this, ___index, ___value, method) (void)Collection_1_set_Item_m10782_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m12377(__this, ___index, ___item, method) (void)Collection_1_SetItem_m10783_gshared((Collection_1_t2208 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m12378(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m10784_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m12379(__this/* static, unused */, ___item, method) (ButtonState_t90 *)Collection_1_ConvertItem_m10785_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m12380(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m10786_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m12381(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m10787_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m12382(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m10788_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)

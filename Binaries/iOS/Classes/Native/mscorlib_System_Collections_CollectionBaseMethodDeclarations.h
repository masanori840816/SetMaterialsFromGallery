#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t833;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t772;
// System.Collections.IList
struct IList_t902;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;

// System.Void System.Collections.CollectionBase::.ctor()
 void CollectionBase__ctor_m4305 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void CollectionBase_System_Collections_ICollection_CopyTo_m4283 (CollectionBase_t833 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
 Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m4282 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
 bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m4281 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
 int32_t CollectionBase_System_Collections_IList_Add_m4288 (CollectionBase_t833 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
 bool CollectionBase_System_Collections_IList_Contains_m4290 (CollectionBase_t833 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
 int32_t CollectionBase_System_Collections_IList_IndexOf_m4291 (CollectionBase_t833 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_Insert_m4292 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
 void CollectionBase_System_Collections_IList_Remove_m4293 (CollectionBase_t833 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
 bool CollectionBase_System_Collections_IList_get_IsFixedSize_m4284 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
 bool CollectionBase_System_Collections_IList_get_IsReadOnly_m4285 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
 Object_t * CollectionBase_System_Collections_IList_get_Item_m4286 (CollectionBase_t833 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_set_Item_m4287 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
 int32_t CollectionBase_get_Count_m4246 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
 Object_t * CollectionBase_GetEnumerator_m4280 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
 void CollectionBase_Clear_m4289 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
 void CollectionBase_RemoveAt_m4294 (CollectionBase_t833 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
 ArrayList_t772 * CollectionBase_get_InnerList_m4273 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
 Object_t * CollectionBase_get_List_m4418 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
 void CollectionBase_OnClear_m4295 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
 void CollectionBase_OnClearComplete_m4296 (CollectionBase_t833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
 void CollectionBase_OnInsert_m4297 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
 void CollectionBase_OnInsertComplete_m4298 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
 void CollectionBase_OnRemove_m4299 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
 void CollectionBase_OnRemoveComplete_m4300 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSet_m4301 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSetComplete_m4302 (CollectionBase_t833 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
 void CollectionBase_OnValidate_m4303 (CollectionBase_t833 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

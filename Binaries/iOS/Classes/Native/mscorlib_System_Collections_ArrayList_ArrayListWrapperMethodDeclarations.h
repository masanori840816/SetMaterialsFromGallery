#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t1279;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t772;
// System.Collections.ICollection
struct ICollection_t715;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.IComparer
struct IComparer_t767;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
 void ArrayListWrapper__ctor_m6729 (ArrayListWrapper_t1279 * __this, ArrayList_t772 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
 Object_t * ArrayListWrapper_get_Item_m6730 (ArrayListWrapper_t1279 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
 void ArrayListWrapper_set_Item_m6731 (ArrayListWrapper_t1279 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
 int32_t ArrayListWrapper_get_Count_m6732 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
 bool ArrayListWrapper_get_IsFixedSize_m6733 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
 bool ArrayListWrapper_get_IsReadOnly_m6734 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
 bool ArrayListWrapper_get_IsSynchronized_m6735 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
 Object_t * ArrayListWrapper_get_SyncRoot_m6736 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
 int32_t ArrayListWrapper_Add_m6737 (ArrayListWrapper_t1279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
 void ArrayListWrapper_Clear_m6738 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
 bool ArrayListWrapper_Contains_m6739 (ArrayListWrapper_t1279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
 int32_t ArrayListWrapper_IndexOf_m6740 (ArrayListWrapper_t1279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m6741 (ArrayListWrapper_t1279 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m6742 (ArrayListWrapper_t1279 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
 void ArrayListWrapper_Insert_m6743 (ArrayListWrapper_t1279 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayListWrapper_InsertRange_m6744 (ArrayListWrapper_t1279 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
 void ArrayListWrapper_Remove_m6745 (ArrayListWrapper_t1279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
 void ArrayListWrapper_RemoveAt_m6746 (ArrayListWrapper_t1279 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
 void ArrayListWrapper_CopyTo_m6747 (ArrayListWrapper_t1279 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
 void ArrayListWrapper_CopyTo_m6748 (ArrayListWrapper_t1279 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayListWrapper_CopyTo_m6749 (ArrayListWrapper_t1279 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
 Object_t * ArrayListWrapper_GetEnumerator_m6750 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
 void ArrayListWrapper_AddRange_m6751 (ArrayListWrapper_t1279 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
 void ArrayListWrapper_Sort_m6752 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
 void ArrayListWrapper_Sort_m6753 (ArrayListWrapper_t1279 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
 ObjectU5BU5D_t295* ArrayListWrapper_ToArray_m6754 (ArrayListWrapper_t1279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
 Array_t * ArrayListWrapper_ToArray_m6755 (ArrayListWrapper_t1279 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2436;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t322;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Predicate`1<System.Object>
struct Predicate_1_t2199;
// System.Comparison`1<System.Object>
struct Comparison_1_t2201;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
 void IndexedSet_1__ctor_m12527_gshared (IndexedSet_1_t2436 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m12527(__this, method) (void)IndexedSet_1__ctor_m12527_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12529_gshared (IndexedSet_1_t2436 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12529(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12529_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
 void IndexedSet_1_Add_m12530_gshared (IndexedSet_1_t2436 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m12530(__this, ___item, method) (void)IndexedSet_1_Add_m12530_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
 bool IndexedSet_1_Remove_m12531_gshared (IndexedSet_1_t2436 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m12531(__this, ___item, method) (bool)IndexedSet_1_Remove_m12531_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
 Object_t* IndexedSet_1_GetEnumerator_m12533_gshared (IndexedSet_1_t2436 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12533(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m12533_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
 void IndexedSet_1_Clear_m12534_gshared (IndexedSet_1_t2436 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m12534(__this, method) (void)IndexedSet_1_Clear_m12534_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
 bool IndexedSet_1_Contains_m12536_gshared (IndexedSet_1_t2436 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m12536(__this, ___item, method) (bool)IndexedSet_1_Contains_m12536_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
 void IndexedSet_1_CopyTo_m12538_gshared (IndexedSet_1_t2436 * __this, ObjectU5BU5D_t295* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m12538(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m12538_gshared((IndexedSet_1_t2436 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
 int32_t IndexedSet_1_get_Count_m12539_gshared (IndexedSet_1_t2436 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m12539(__this, method) (int32_t)IndexedSet_1_get_Count_m12539_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
 bool IndexedSet_1_get_IsReadOnly_m12541_gshared (IndexedSet_1_t2436 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12541(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m12541_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
 int32_t IndexedSet_1_IndexOf_m12543_gshared (IndexedSet_1_t2436 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m12543(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m12543_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
 void IndexedSet_1_Insert_m12545_gshared (IndexedSet_1_t2436 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m12545(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m12545_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
 void IndexedSet_1_RemoveAt_m12547_gshared (IndexedSet_1_t2436 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12547(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m12547_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
 Object_t * IndexedSet_1_get_Item_m12548_gshared (IndexedSet_1_t2436 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m12548(__this, ___index, method) (Object_t *)IndexedSet_1_get_Item_m12548_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
 void IndexedSet_1_set_Item_m12550_gshared (IndexedSet_1_t2436 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m12550(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m12550_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 void IndexedSet_1_RemoveAll_m12551_gshared (IndexedSet_1_t2436 * __this, Predicate_1_t2199 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12551(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m12551_gshared((IndexedSet_1_t2436 *)__this, (Predicate_1_t2199 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
 void IndexedSet_1_Sort_m12552_gshared (IndexedSet_1_t2436 * __this, Comparison_1_t2201 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m12552(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m12552_gshared((IndexedSet_1_t2436 *)__this, (Comparison_1_t2201 *)___sortLayoutFunction, method)

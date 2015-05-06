#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t342;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t2571;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2570;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2574;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t144;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1610(__this, method) (void)IndexedSet_1__ctor_m12527_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13833(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12529_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m1609(__this, ___item, method) (void)IndexedSet_1_Add_m12530_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m1612(__this, ___item, method) (bool)IndexedSet_1_Remove_m12531_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m13834(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m12533_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m13835(__this, method) (void)IndexedSet_1_Clear_m12534_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m13836(__this, ___item, method) (bool)IndexedSet_1_Contains_m12536_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m13837(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m12538_gshared((IndexedSet_1_t2436 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m13838(__this, method) (int32_t)IndexedSet_1_get_Count_m12539_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m13839(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m12541_gshared((IndexedSet_1_t2436 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m13840(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m12543_gshared((IndexedSet_1_t2436 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m13841(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m12545_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m13842(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m12547_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m13843(__this, ___index, method) (Graphic_t139 *)IndexedSet_1_get_Item_m12548_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m13844(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m12550_gshared((IndexedSet_1_t2436 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m13845(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m12551_gshared((IndexedSet_1_t2436 *)__this, (Predicate_1_t2199 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m13846(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m12552_gshared((IndexedSet_1_t2436 *)__this, (Comparison_1_t2201 *)___sortLayoutFunction, method)

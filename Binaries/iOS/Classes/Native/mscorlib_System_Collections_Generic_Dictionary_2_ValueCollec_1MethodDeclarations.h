#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t631;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t476;
// UnityEngine.GUIStyle
struct GUIStyle_t459;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUIStyle>
struct IEnumerator_1_t2949;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t475;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_2.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9MethodDeclarations.h"
#define ValueCollection__ctor_m16108(__this, ___dictionary, method) (void)ValueCollection__ctor_m12999_gshared((ValueCollection_t2486 *)__this, (Dictionary_2_t2482 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16109(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13000_gshared((ValueCollection_t2486 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16110(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13001_gshared((ValueCollection_t2486 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16111(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13002_gshared((ValueCollection_t2486 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16112(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13003_gshared((ValueCollection_t2486 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16113(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13004_gshared((ValueCollection_t2486 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m16114(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m13005_gshared((ValueCollection_t2486 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16115(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13006_gshared((ValueCollection_t2486 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16116(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13007_gshared((ValueCollection_t2486 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16117(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13008_gshared((ValueCollection_t2486 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m16118(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m13009_gshared((ValueCollection_t2486 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m16119(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m13010_gshared((ValueCollection_t2486 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
 Enumerator_t630  ValueCollection_GetEnumerator_m3010 (ValueCollection_t631 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::get_Count()
#define ValueCollection_get_Count_m16120(__this, method) (int32_t)ValueCollection_get_Count_m13012_gshared((ValueCollection_t2486 *)__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t3334;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3338;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.String[]
struct StringU5BU5D_t9;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3331;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m18516(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m10723_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m18517(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10724_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m18518(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m10725_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m18519(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m10726_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m18520(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m10727_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m18521(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m10728_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m18522(__this, ___index, method) (String_t*)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10729_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m18523(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m10730_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18524(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10731_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m18525(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10732_gshared((ReadOnlyCollection_1_t2205 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m18526(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m10733_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m18527(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m10734_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m18528(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m10735_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m18529(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m10736_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m18530(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m10737_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m18531(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m10738_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m18532(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m10739_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m18533(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m10740_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m18534(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m10741_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m18535(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m10742_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m18536(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m10743_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m18537(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m10744_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m18538(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m10745_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m18539(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m10746_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::Contains(T)
#define ReadOnlyCollection_1_Contains_m18540(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m10747_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m18541(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m10748_gshared((ReadOnlyCollection_1_t2205 *)__this, (ObjectU5BU5D_t295*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m18542(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m10749_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m18543(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m10750_gshared((ReadOnlyCollection_1_t2205 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Count()
#define ReadOnlyCollection_1_get_Count_m18544(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m10751_gshared((ReadOnlyCollection_1_t2205 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m18545(__this, ___index, method) (String_t*)ReadOnlyCollection_1_get_Item_m10752_gshared((ReadOnlyCollection_1_t2205 *)__this, (int32_t)___index, method)

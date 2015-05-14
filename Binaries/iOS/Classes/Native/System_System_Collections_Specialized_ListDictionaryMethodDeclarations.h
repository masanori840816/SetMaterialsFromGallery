#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t760;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t767;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t764;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t763;

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
 void ListDictionary__ctor_m3251 (ListDictionary_t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
 void ListDictionary__ctor_m3252 (ListDictionary_t760 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m3253 (ListDictionary_t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
 DictionaryNode_t764 * ListDictionary_FindEntry_m3254 (ListDictionary_t760 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
 DictionaryNode_t764 * ListDictionary_FindEntry_m3255 (ListDictionary_t760 * __this, Object_t * ___key, DictionaryNode_t764 ** ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
 void ListDictionary_AddImpl_m3256 (ListDictionary_t760 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t764 * ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
 int32_t ListDictionary_get_Count_m3257 (ListDictionary_t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
 bool ListDictionary_get_IsSynchronized_m3258 (ListDictionary_t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
 Object_t * ListDictionary_get_SyncRoot_m3259 (ListDictionary_t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
 void ListDictionary_CopyTo_m3260 (ListDictionary_t760 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
 Object_t * ListDictionary_get_Item_m3261 (ListDictionary_t760 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
 void ListDictionary_set_Item_m3262 (ListDictionary_t760 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
 void ListDictionary_Add_m3263 (ListDictionary_t760 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
 void ListDictionary_Clear_m3264 (ListDictionary_t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
 Object_t * ListDictionary_GetEnumerator_m3265 (ListDictionary_t760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
 void ListDictionary_Remove_m3266 (ListDictionary_t760 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;

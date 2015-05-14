#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
struct Enumerator_t2966;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t479;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void Enumerator__ctor_m16260 (Enumerator_t2966 * __this, Dictionary_2_t479 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16261 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
 DictionaryEntry_t766  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16262 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16263 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16264 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::MoveNext()
 bool Enumerator_MoveNext_m16265 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_Current()
 KeyValuePair_2_t2964  Enumerator_get_Current_m16266 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentKey()
 String_t* Enumerator_get_CurrentKey_m16267 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentValue()
 int32_t Enumerator_get_CurrentValue_m16268 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyState()
 void Enumerator_VerifyState_m16269 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyCurrent()
 void Enumerator_VerifyCurrent_m16270 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::Dispose()
 void Enumerator_Dispose_m16271 (Enumerator_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
struct Enumerator_t3251;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t808;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void Enumerator__ctor_m18078 (Enumerator_t3251 * __this, Dictionary_2_t808 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18079 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
 DictionaryEntry_t766  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18080 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18081 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18082 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::MoveNext()
 bool Enumerator_MoveNext_m18083 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_Current()
 KeyValuePair_2_t3249  Enumerator_get_Current_m18084 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_CurrentKey()
 String_t* Enumerator_get_CurrentKey_m18085 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_CurrentValue()
 bool Enumerator_get_CurrentValue_m18086 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::VerifyState()
 void Enumerator_VerifyState_m18087 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::VerifyCurrent()
 void Enumerator_VerifyCurrent_m18088 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::Dispose()
 void Enumerator_Dispose_m18089 (Enumerator_t3251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

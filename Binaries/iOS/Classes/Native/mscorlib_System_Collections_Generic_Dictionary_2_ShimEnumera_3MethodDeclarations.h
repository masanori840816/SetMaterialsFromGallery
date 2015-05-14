#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2495;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2483;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ShimEnumerator__ctor_m13047_gshared (ShimEnumerator_t2495 * __this, Dictionary_2_t2483 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13047(__this, ___host, method) (void)ShimEnumerator__ctor_m13047_gshared((ShimEnumerator_t2495 *)__this, (Dictionary_2_t2483 *)___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
 bool ShimEnumerator_MoveNext_m13048_gshared (ShimEnumerator_t2495 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13048(__this, method) (bool)ShimEnumerator_MoveNext_m13048_gshared((ShimEnumerator_t2495 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
 DictionaryEntry_t766  ShimEnumerator_get_Entry_m13049_gshared (ShimEnumerator_t2495 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13049(__this, method) (DictionaryEntry_t766 )ShimEnumerator_get_Entry_m13049_gshared((ShimEnumerator_t2495 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
 Object_t * ShimEnumerator_get_Key_m13050_gshared (ShimEnumerator_t2495 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13050(__this, method) (Object_t *)ShimEnumerator_get_Key_m13050_gshared((ShimEnumerator_t2495 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
 Object_t * ShimEnumerator_get_Value_m13051_gshared (ShimEnumerator_t2495 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13051(__this, method) (Object_t *)ShimEnumerator_get_Value_m13051_gshared((ShimEnumerator_t2495 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
 Object_t * ShimEnumerator_get_Current_m13052_gshared (ShimEnumerator_t2495 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13052(__this, method) (Object_t *)ShimEnumerator_get_Current_m13052_gshared((ShimEnumerator_t2495 *)__this, method)

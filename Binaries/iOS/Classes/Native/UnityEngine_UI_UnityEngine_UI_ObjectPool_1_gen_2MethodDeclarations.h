#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t259;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t260;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t247;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2015(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m11137_gshared((ObjectPool_1_t2250 *)__this, (UnityAction_1_t2157 *)___actionOnGet, (UnityAction_1_t2157 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m15322(__this, method) (int32_t)ObjectPool_1_get_countAll_m11139_gshared((ObjectPool_1_t2250 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15323(__this, ___value, method) (void)ObjectPool_1_set_countAll_m11141_gshared((ObjectPool_1_t2250 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m15324(__this, method) (int32_t)ObjectPool_1_get_countActive_m11143_gshared((ObjectPool_1_t2250 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15325(__this, method) (int32_t)ObjectPool_1_get_countInactive_m11145_gshared((ObjectPool_1_t2250 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2016(__this, method) (List_1_t247 *)ObjectPool_1_Get_m11147_gshared((ObjectPool_1_t2250 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2017(__this, ___element, method) (void)ObjectPool_1_Release_m11149_gshared((ObjectPool_1_t2250 *)__this, (Object_t *)___element, method)

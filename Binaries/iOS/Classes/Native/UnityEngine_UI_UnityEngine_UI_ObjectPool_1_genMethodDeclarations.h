#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t57;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t59;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t79;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1329(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m11142_gshared((ObjectPool_1_t2251 *)__this, (UnityAction_1_t2157 *)___actionOnGet, (UnityAction_1_t2157 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m11143(__this, method) (int32_t)ObjectPool_1_get_countAll_m11144_gshared((ObjectPool_1_t2251 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11145(__this, ___value, method) (void)ObjectPool_1_set_countAll_m11146_gshared((ObjectPool_1_t2251 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m11147(__this, method) (int32_t)ObjectPool_1_get_countActive_m11148_gshared((ObjectPool_1_t2251 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11149(__this, method) (int32_t)ObjectPool_1_get_countInactive_m11150_gshared((ObjectPool_1_t2251 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m11151(__this, method) (List_1_t79 *)ObjectPool_1_Get_m11152_gshared((ObjectPool_1_t2251 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m11153(__this, ___element, method) (void)ObjectPool_1_Release_m11154_gshared((ObjectPool_1_t2251 *)__this, (Object_t *)___element, method)

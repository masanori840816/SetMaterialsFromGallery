﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t132;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t138;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t141;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1540(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m11142_gshared((ObjectPool_1_t2251 *)__this, (UnityAction_1_t2157 *)___actionOnGet, (UnityAction_1_t2157 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m13318(__this, method) (int32_t)ObjectPool_1_get_countAll_m11144_gshared((ObjectPool_1_t2251 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13319(__this, ___value, method) (void)ObjectPool_1_set_countAll_m11146_gshared((ObjectPool_1_t2251 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m13320(__this, method) (int32_t)ObjectPool_1_get_countActive_m11148_gshared((ObjectPool_1_t2251 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13321(__this, method) (int32_t)ObjectPool_1_get_countInactive_m11150_gshared((ObjectPool_1_t2251 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m1548(__this, method) (List_1_t141 *)ObjectPool_1_Get_m11152_gshared((ObjectPool_1_t2251 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m1554(__this, ___element, method) (void)ObjectPool_1_Release_m11154_gshared((ObjectPool_1_t2251 *)__this, (Object_t *)___element, method)

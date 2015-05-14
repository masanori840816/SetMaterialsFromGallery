#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t248;
// UnityEngine.Transform
struct Transform_t125;
// UnityEngine.GameObject
struct GameObject_t6;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t247;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Component::.ctor()
 void Component__ctor_m2618 (Component_t248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
 Transform_t125 * Component_get_transform_m1448 (Component_t248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
 GameObject_t6 * Component_get_gameObject_m1364 (Component_t248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
 Component_t248 * Component_GetComponent_m1974 (Component_t248 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
 void Component_GetComponentFastPath_m2619 (Component_t248 * __this, Type_t * ___type, IntPtr_t173 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
 void Component_GetComponentsForListInternal_m2620 (Component_t248 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
 void Component_GetComponents_m1532 (Component_t248 * __this, Type_t * ___type, List_1_t247 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;

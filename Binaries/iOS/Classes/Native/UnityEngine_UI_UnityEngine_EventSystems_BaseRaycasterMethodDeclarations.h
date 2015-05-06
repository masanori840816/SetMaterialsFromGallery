#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t83;
// UnityEngine.Camera
struct Camera_t88;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t28;

// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
 void BaseRaycaster__ctor_m289 (BaseRaycaster_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
// UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera()
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_priority()
 int32_t BaseRaycaster_get_priority_m290 (BaseRaycaster_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_sortOrderPriority()
 int32_t BaseRaycaster_get_sortOrderPriority_m291 (BaseRaycaster_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_renderOrderPriority()
 int32_t BaseRaycaster_get_renderOrderPriority_m292 (BaseRaycaster_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnEnable()
 void BaseRaycaster_OnEnable_m293 (BaseRaycaster_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnDisable()
 void BaseRaycaster_OnDisable_m294 (BaseRaycaster_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

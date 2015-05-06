#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t100;
// UnityEngine.Camera
struct Camera_t88;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t28;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
 void PhysicsRaycaster__ctor_m297 (PhysicsRaycaster_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
 Camera_t88 * PhysicsRaycaster_get_eventCamera_m298 (PhysicsRaycaster_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
 int32_t PhysicsRaycaster_get_depth_m299 (PhysicsRaycaster_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
 int32_t PhysicsRaycaster_get_finalEventMask_m300 (PhysicsRaycaster_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
 LayerMask_t102  PhysicsRaycaster_get_eventMask_m301 (PhysicsRaycaster_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
 void PhysicsRaycaster_set_eventMask_m302 (PhysicsRaycaster_t100 * __this, LayerMask_t102  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void PhysicsRaycaster_Raycast_m303 (PhysicsRaycaster_t100 * __this, PointerEventData_t27 * ___eventData, List_1_t28 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
 int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m304 (Object_t * __this/* static, unused */, RaycastHit_t103  ___r1, RaycastHit_t103  ___r2, MethodInfo* method) IL2CPP_METHOD_ATTR;

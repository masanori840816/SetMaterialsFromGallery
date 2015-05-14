#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t35;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t25;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void AxisEventData__ctor_m148 (AxisEventData_t35 * __this, EventSystem_t25 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
 Vector2_t84  AxisEventData_get_moveVector_m149 (AxisEventData_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
 void AxisEventData_set_moveVector_m150 (AxisEventData_t35 * __this, Vector2_t84  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
 int32_t AxisEventData_get_moveDir_m151 (AxisEventData_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
 void AxisEventData_set_moveDir_m152 (AxisEventData_t35 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t23;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t22;
// UnityEngine.GameObject
struct GameObject_t6;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t25;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void BaseEventData__ctor_m153 (BaseEventData_t23 * __this, EventSystem_t25 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
 void BaseEventData_Reset_m154 (BaseEventData_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
 void BaseEventData_Use_m155 (BaseEventData_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
 bool BaseEventData_get_used_m156 (BaseEventData_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
 BaseInputModule_t22 * BaseEventData_get_currentInputModule_m157 (BaseEventData_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
 GameObject_t6 * BaseEventData_get_selectedObject_m158 (BaseEventData_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
 void BaseEventData_set_selectedObject_m159 (BaseEventData_t23 * __this, GameObject_t6 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t22;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t25;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t28;
// UnityEngine.GameObject
struct GameObject_t6;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t35;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t23;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
 void BaseInputModule__ctor_m206 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
 EventSystem_t25 * BaseInputModule_get_eventSystem_m207 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
 void BaseInputModule_OnEnable_m208 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
 void BaseInputModule_OnDisable_m209 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::Process()
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 RaycastResult_t29  BaseInputModule_FindFirstRaycast_m210 (Object_t * __this/* static, unused */, List_1_t28 * ___candidates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m211 (Object_t * __this/* static, unused */, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m212 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___deadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
 GameObject_t6 * BaseInputModule_FindCommonRoot_m213 (Object_t * __this/* static, unused */, GameObject_t6 * ___g1, GameObject_t6 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
 void BaseInputModule_HandlePointerExitAndEnter_m214 (BaseInputModule_t22 * __this, PointerEventData_t27 * ___currentPointerData, GameObject_t6 * ___newEnterTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
 AxisEventData_t35 * BaseInputModule_GetAxisEventData_m215 (BaseInputModule_t22 * __this, float ___x, float ___y, float ___moveDeadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
 BaseEventData_t23 * BaseInputModule_GetBaseEventData_m216 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
 bool BaseInputModule_IsPointerOverGameObject_m217 (BaseInputModule_t22 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
 bool BaseInputModule_ShouldActivateModule_m218 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
 void BaseInputModule_DeactivateModule_m219 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
 void BaseInputModule_ActivateModule_m220 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
 void BaseInputModule_UpdateModule_m221 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
 bool BaseInputModule_IsModuleSupported_m222 (BaseInputModule_t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

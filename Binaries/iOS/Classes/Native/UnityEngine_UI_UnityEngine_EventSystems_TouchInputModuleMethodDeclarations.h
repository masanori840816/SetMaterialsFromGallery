#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t98;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
 void TouchInputModule__ctor_m279 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
 bool TouchInputModule_get_allowActivationOnStandalone_m280 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
 void TouchInputModule_set_allowActivationOnStandalone_m281 (TouchInputModule_t98 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
 void TouchInputModule_UpdateModule_m282 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
 bool TouchInputModule_IsModuleSupported_m283 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
 bool TouchInputModule_ShouldActivateModule_m284 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
 bool TouchInputModule_UseFakeInput_m285 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
 void TouchInputModule_Process_m286 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
 void TouchInputModule_FakeTouches_m287 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
 void TouchInputModule_ProcessTouchEvents_m288 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
 void TouchInputModule_ProcessTouchPress_m289 (TouchInputModule_t98 * __this, PointerEventData_t27 * ___pointerEvent, bool ___pressed, bool ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
 void TouchInputModule_DeactivateModule_m290 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
 String_t* TouchInputModule_ToString_m291 (TouchInputModule_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t116;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t114;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t23;
// System.Collections.IEnumerator
struct IEnumerator_t112;

// System.Void UnityEngine.UI.Button::.ctor()
 void Button__ctor_m337 (Button_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
 ButtonClickedEvent_t114 * Button_get_onClick_m338 (Button_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
 void Button_set_onClick_m339 (Button_t116 * __this, ButtonClickedEvent_t114 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
 void Button_Press_m340 (Button_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void Button_OnPointerClick_m341 (Button_t116 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void Button_OnSubmit_m342 (Button_t116 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
 Object_t * Button_OnFinishSubmit_m343 (Button_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

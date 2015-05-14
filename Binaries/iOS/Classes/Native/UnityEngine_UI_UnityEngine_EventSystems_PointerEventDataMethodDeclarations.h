#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// UnityEngine.GameObject
struct GameObject_t6;
// UnityEngine.Camera
struct Camera_t88;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t25;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void PointerEventData__ctor_m160 (PointerEventData_t27 * __this, EventSystem_t25 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
 GameObject_t6 * PointerEventData_get_pointerEnter_m161 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
 void PointerEventData_set_pointerEnter_m162 (PointerEventData_t27 * __this, GameObject_t6 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
 GameObject_t6 * PointerEventData_get_lastPress_m163 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
 void PointerEventData_set_lastPress_m164 (PointerEventData_t27 * __this, GameObject_t6 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
 GameObject_t6 * PointerEventData_get_rawPointerPress_m165 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
 void PointerEventData_set_rawPointerPress_m166 (PointerEventData_t27 * __this, GameObject_t6 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
 GameObject_t6 * PointerEventData_get_pointerDrag_m167 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
 void PointerEventData_set_pointerDrag_m168 (PointerEventData_t27 * __this, GameObject_t6 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
 RaycastResult_t29  PointerEventData_get_pointerCurrentRaycast_m169 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerCurrentRaycast_m170 (PointerEventData_t27 * __this, RaycastResult_t29  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
 RaycastResult_t29  PointerEventData_get_pointerPressRaycast_m171 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerPressRaycast_m172 (PointerEventData_t27 * __this, RaycastResult_t29  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
 bool PointerEventData_get_eligibleForClick_m173 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
 void PointerEventData_set_eligibleForClick_m174 (PointerEventData_t27 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
 int32_t PointerEventData_get_pointerId_m175 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
 void PointerEventData_set_pointerId_m176 (PointerEventData_t27 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
 Vector2_t84  PointerEventData_get_position_m177 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
 void PointerEventData_set_position_m178 (PointerEventData_t27 * __this, Vector2_t84  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
 Vector2_t84  PointerEventData_get_delta_m179 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
 void PointerEventData_set_delta_m180 (PointerEventData_t27 * __this, Vector2_t84  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
 Vector2_t84  PointerEventData_get_pressPosition_m181 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
 void PointerEventData_set_pressPosition_m182 (PointerEventData_t27 * __this, Vector2_t84  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
 Vector3_t87  PointerEventData_get_worldPosition_m183 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
 void PointerEventData_set_worldPosition_m184 (PointerEventData_t27 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
 Vector3_t87  PointerEventData_get_worldNormal_m185 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
 void PointerEventData_set_worldNormal_m186 (PointerEventData_t27 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
 float PointerEventData_get_clickTime_m187 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
 void PointerEventData_set_clickTime_m188 (PointerEventData_t27 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
 int32_t PointerEventData_get_clickCount_m189 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
 void PointerEventData_set_clickCount_m190 (PointerEventData_t27 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
 Vector2_t84  PointerEventData_get_scrollDelta_m191 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
 void PointerEventData_set_scrollDelta_m192 (PointerEventData_t27 * __this, Vector2_t84  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
 bool PointerEventData_get_useDragThreshold_m193 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
 void PointerEventData_set_useDragThreshold_m194 (PointerEventData_t27 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
 bool PointerEventData_get_dragging_m195 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
 void PointerEventData_set_dragging_m196 (PointerEventData_t27 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
 int32_t PointerEventData_get_button_m197 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
 void PointerEventData_set_button_m198 (PointerEventData_t27 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
 bool PointerEventData_IsPointerMoving_m199 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
 bool PointerEventData_IsScrolling_m200 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
 Camera_t88 * PointerEventData_get_enterEventCamera_m201 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
 Camera_t88 * PointerEventData_get_pressEventCamera_m202 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
 GameObject_t6 * PointerEventData_get_pointerPress_m203 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
 void PointerEventData_set_pointerPress_m204 (PointerEventData_t27 * __this, GameObject_t6 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
 String_t* PointerEventData_ToString_m205 (PointerEventData_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

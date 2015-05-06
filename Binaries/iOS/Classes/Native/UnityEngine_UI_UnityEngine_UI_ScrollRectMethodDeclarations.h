#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ScrollRect
struct ScrollRect_t200;
// UnityEngine.RectTransform
struct RectTransform_t133;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t193;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t197;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// UnityEngine.Transform
struct Transform_t125;
// UnityEngine.UI.ScrollRect/MovementType
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
 void ScrollRect__ctor_m740 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
 RectTransform_t133 * ScrollRect_get_content_m741 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
 void ScrollRect_set_content_m742 (ScrollRect_t200 * __this, RectTransform_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
 bool ScrollRect_get_horizontal_m743 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
 void ScrollRect_set_horizontal_m744 (ScrollRect_t200 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
 bool ScrollRect_get_vertical_m745 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
 void ScrollRect_set_vertical_m746 (ScrollRect_t200 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
 int32_t ScrollRect_get_movementType_m747 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
 void ScrollRect_set_movementType_m748 (ScrollRect_t200 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
 float ScrollRect_get_elasticity_m749 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
 void ScrollRect_set_elasticity_m750 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
 bool ScrollRect_get_inertia_m751 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
 void ScrollRect_set_inertia_m752 (ScrollRect_t200 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
 float ScrollRect_get_decelerationRate_m753 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
 void ScrollRect_set_decelerationRate_m754 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
 float ScrollRect_get_scrollSensitivity_m755 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
 void ScrollRect_set_scrollSensitivity_m756 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
 Scrollbar_t193 * ScrollRect_get_horizontalScrollbar_m757 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_horizontalScrollbar_m758 (ScrollRect_t200 * __this, Scrollbar_t193 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
 Scrollbar_t193 * ScrollRect_get_verticalScrollbar_m759 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_verticalScrollbar_m760 (ScrollRect_t200 * __this, Scrollbar_t193 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
 ScrollRectEvent_t197 * ScrollRect_get_onValueChanged_m761 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
 void ScrollRect_set_onValueChanged_m762 (ScrollRect_t200 * __this, ScrollRectEvent_t197 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
 RectTransform_t133 * ScrollRect_get_viewRect_m763 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
 Vector2_t84  ScrollRect_get_velocity_m764 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
 void ScrollRect_set_velocity_m765 (ScrollRect_t200 * __this, Vector2_t84  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
 void ScrollRect_Rebuild_m766 (ScrollRect_t200 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
 void ScrollRect_OnEnable_m767 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
 void ScrollRect_OnDisable_m768 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
 bool ScrollRect_IsActive_m769 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
 void ScrollRect_EnsureLayoutHasRebuilt_m770 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
 void ScrollRect_StopMovement_m771 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnScroll_m772 (ScrollRect_t200 * __this, PointerEventData_t27 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnInitializePotentialDrag_m773 (ScrollRect_t200 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnBeginDrag_m774 (ScrollRect_t200 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnEndDrag_m775 (ScrollRect_t200 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnDrag_m776 (ScrollRect_t200 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
 void ScrollRect_SetContentAnchoredPosition_m777 (ScrollRect_t200 * __this, Vector2_t84  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
 void ScrollRect_LateUpdate_m778 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
 void ScrollRect_UpdatePrevData_m779 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
 void ScrollRect_UpdateScrollbars_m780 (ScrollRect_t200 * __this, Vector2_t84  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
 Vector2_t84  ScrollRect_get_normalizedPosition_m781 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
 void ScrollRect_set_normalizedPosition_m782 (ScrollRect_t200 * __this, Vector2_t84  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
 float ScrollRect_get_horizontalNormalizedPosition_m783 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
 void ScrollRect_set_horizontalNormalizedPosition_m784 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
 float ScrollRect_get_verticalNormalizedPosition_m785 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
 void ScrollRect_set_verticalNormalizedPosition_m786 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
 void ScrollRect_SetHorizontalNormalizedPosition_m787 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
 void ScrollRect_SetVerticalNormalizedPosition_m788 (ScrollRect_t200 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
 void ScrollRect_SetNormalizedPosition_m789 (ScrollRect_t200 * __this, float ___value, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
 float ScrollRect_RubberDelta_m790 (Object_t * __this/* static, unused */, float ___overStretching, float ___viewSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
 void ScrollRect_UpdateBounds_m791 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
 Bounds_t201  ScrollRect_GetBounds_m792 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
 Vector2_t84  ScrollRect_CalculateOffset_m793 (ScrollRect_t200 * __this, Vector2_t84  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m794 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t125 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m795 (ScrollRect_t200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

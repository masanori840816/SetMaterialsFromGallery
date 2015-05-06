#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Slider
struct Slider_t212;
// UnityEngine.RectTransform
struct RectTransform_t133;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t210;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// UnityEngine.Camera
struct Camera_t88;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t35;
// UnityEngine.UI.Selectable
struct Selectable_t118;
// UnityEngine.Transform
struct Transform_t125;
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.UI.Slider/Axis
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Slider::.ctor()
 void Slider__ctor_m858 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
 RectTransform_t133 * Slider_get_fillRect_m859 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
 void Slider_set_fillRect_m860 (Slider_t212 * __this, RectTransform_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
 RectTransform_t133 * Slider_get_handleRect_m861 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
 void Slider_set_handleRect_m862 (Slider_t212 * __this, RectTransform_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
 int32_t Slider_get_direction_m863 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
 void Slider_set_direction_m864 (Slider_t212 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
 float Slider_get_minValue_m865 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
 void Slider_set_minValue_m866 (Slider_t212 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
 float Slider_get_maxValue_m867 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
 void Slider_set_maxValue_m868 (Slider_t212 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
 bool Slider_get_wholeNumbers_m869 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
 void Slider_set_wholeNumbers_m870 (Slider_t212 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
 float Slider_get_value_m871 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
 void Slider_set_value_m872 (Slider_t212 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
 float Slider_get_normalizedValue_m873 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
 void Slider_set_normalizedValue_m874 (Slider_t212 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
 SliderEvent_t210 * Slider_get_onValueChanged_m875 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
 void Slider_set_onValueChanged_m876 (Slider_t212 * __this, SliderEvent_t210 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
 float Slider_get_stepSize_m877 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Slider_Rebuild_m878 (Slider_t212 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
 void Slider_OnEnable_m879 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
 void Slider_OnDisable_m880 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
 void Slider_UpdateCachedReferences_m881 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
 void Slider_Set_m882 (Slider_t212 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
 void Slider_Set_m883 (Slider_t212 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
 void Slider_OnRectTransformDimensionsChange_m884 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
 int32_t Slider_get_axis_m885 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
 bool Slider_get_reverseValue_m886 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
 void Slider_UpdateVisuals_m887 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
 void Slider_UpdateDrag_m888 (Slider_t212 * __this, PointerEventData_t27 * ___eventData, Camera_t88 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool Slider_MayDrag_m889 (Slider_t212 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnPointerDown_m890 (Slider_t212 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnDrag_m891 (Slider_t212 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Slider_OnMove_m892 (Slider_t212 * __this, AxisEventData_t35 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
 Selectable_t118 * Slider_FindSelectableOnLeft_m893 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
 Selectable_t118 * Slider_FindSelectableOnRight_m894 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
 Selectable_t118 * Slider_FindSelectableOnUp_m895 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
 Selectable_t118 * Slider_FindSelectableOnDown_m896 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnInitializePotentialDrag_m897 (Slider_t212 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
 void Slider_SetDirection_m898 (Slider_t212 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m899 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t125 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m900 (Slider_t212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Selectable
struct Selectable_t118;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t204;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t113;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// UnityEngine.UI.Image
struct Image_t158;
// UnityEngine.Animator
struct Animator_t207;
// UnityEngine.RectTransform
struct RectTransform_t133;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t35;
// UnityEngine.Sprite
struct Sprite_t156;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t23;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// UnityEngine.UI.Navigation
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
// UnityEngine.UI.Selectable/Transition
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
// UnityEngine.UI.ColorBlock
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
// UnityEngine.UI.SpriteState
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
 void Selectable__ctor_m799 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
 void Selectable__cctor_m800 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
 List_1_t204 * Selectable_get_allSelectables_m801 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
 Navigation_t187  Selectable_get_navigation_m802 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
 void Selectable_set_navigation_m803 (Selectable_t118 * __this, Navigation_t187  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
 int32_t Selectable_get_transition_m804 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
 void Selectable_set_transition_m805 (Selectable_t118 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
 ColorBlock_t126  Selectable_get_colors_m806 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
 void Selectable_set_colors_m807 (Selectable_t118 * __this, ColorBlock_t126  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
 SpriteState_t206  Selectable_get_spriteState_m808 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
 void Selectable_set_spriteState_m809 (Selectable_t118 * __this, SpriteState_t206  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
 AnimationTriggers_t113 * Selectable_get_animationTriggers_m810 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
 void Selectable_set_animationTriggers_m811 (Selectable_t118 * __this, AnimationTriggers_t113 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
 Graphic_t139 * Selectable_get_targetGraphic_m812 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
 void Selectable_set_targetGraphic_m813 (Selectable_t118 * __this, Graphic_t139 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
 bool Selectable_get_interactable_m814 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
 void Selectable_set_interactable_m815 (Selectable_t118 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
 bool Selectable_get_isPointerInside_m816 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
 void Selectable_set_isPointerInside_m817 (Selectable_t118 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
 bool Selectable_get_isPointerDown_m818 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
 void Selectable_set_isPointerDown_m819 (Selectable_t118 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
 bool Selectable_get_hasSelection_m820 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
 void Selectable_set_hasSelection_m821 (Selectable_t118 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
 Image_t158 * Selectable_get_image_m822 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
 void Selectable_set_image_m823 (Selectable_t118 * __this, Image_t158 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
 Animator_t207 * Selectable_get_animator_m824 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
 void Selectable_Awake_m825 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
 void Selectable_OnCanvasGroupChanged_m826 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
 bool Selectable_IsInteractable_m827 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
 void Selectable_OnDidApplyAnimationProperties_m828 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
 void Selectable_OnEnable_m829 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
 void Selectable_OnSetProperty_m830 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
 void Selectable_OnDisable_m831 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
 int32_t Selectable_get_currentSelectionState_m832 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
 void Selectable_InstantClearState_m833 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void Selectable_DoStateTransition_m834 (Selectable_t118 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
 Selectable_t118 * Selectable_FindSelectable_m835 (Selectable_t118 * __this, Vector3_t87  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
 Vector3_t87  Selectable_GetPointOnRectEdge_m836 (Object_t * __this/* static, unused */, RectTransform_t133 * ___rect, Vector2_t84  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
 void Selectable_Navigate_m837 (Selectable_t118 * __this, AxisEventData_t35 * ___eventData, Selectable_t118 * ___sel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
 Selectable_t118 * Selectable_FindSelectableOnLeft_m838 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
 Selectable_t118 * Selectable_FindSelectableOnRight_m839 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
 Selectable_t118 * Selectable_FindSelectableOnUp_m840 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
 Selectable_t118 * Selectable_FindSelectableOnDown_m841 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Selectable_OnMove_m842 (Selectable_t118 * __this, AxisEventData_t35 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
 void Selectable_StartColorTween_m843 (Selectable_t118 * __this, Color_t108  ___targetColor, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
 void Selectable_DoSpriteSwap_m844 (Selectable_t118 * __this, Sprite_t156 * ___newSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
 void Selectable_TriggerAnimation_m845 (Selectable_t118 * __this, String_t* ___triggername, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsHighlighted_m846 (Selectable_t118 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsPressed_m847 (Selectable_t118 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
 bool Selectable_IsPressed_m848 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_UpdateSelectionState_m849 (Selectable_t118 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_EvaluateAndTransitionToSelectionState_m850 (Selectable_t118 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
 void Selectable_InternalEvaluateAndTransitionToSelectionState_m851 (Selectable_t118 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerDown_m852 (Selectable_t118 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerUp_m853 (Selectable_t118 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerEnter_m854 (Selectable_t118 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerExit_m855 (Selectable_t118 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnSelect_m856 (Selectable_t118 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnDeselect_m857 (Selectable_t118 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
 void Selectable_Select_m858 (Selectable_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t174;
// UnityEngine.TextGenerator
struct TextGenerator_t180;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t131;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t166;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t168;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t171;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t27;
// UnityEngine.Event
struct Event_t182;
struct Event_t182_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t23;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t141;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t183;
// UnityEngine.Transform
struct Transform_t125;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
 void InputField__ctor_m542 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
 void InputField__cctor_m543 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
 TextGenerator_t180 * InputField_get_cachedInputTextGenerator_m544 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
 void InputField_set_shouldHideMobileInput_m545 (InputField_t174 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
 bool InputField_get_shouldHideMobileInput_m546 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
 String_t* InputField_get_text_m547 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
 void InputField_set_text_m548 (InputField_t174 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
 bool InputField_get_isFocused_m549 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
 float InputField_get_caretBlinkRate_m550 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
 void InputField_set_caretBlinkRate_m551 (InputField_t174 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
 Text_t131 * InputField_get_textComponent_m552 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
 void InputField_set_textComponent_m553 (InputField_t174 * __this, Text_t131 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
 Graphic_t139 * InputField_get_placeholder_m554 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
 void InputField_set_placeholder_m555 (InputField_t174 * __this, Graphic_t139 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
 Color_t108  InputField_get_selectionColor_m556 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
 void InputField_set_selectionColor_m557 (InputField_t174 * __this, Color_t108  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
 SubmitEvent_t166 * InputField_get_onEndEdit_m558 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
 void InputField_set_onEndEdit_m559 (InputField_t174 * __this, SubmitEvent_t166 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
 OnChangeEvent_t168 * InputField_get_onValueChange_m560 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
 void InputField_set_onValueChange_m561 (InputField_t174 * __this, OnChangeEvent_t168 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
 OnValidateInput_t171 * InputField_get_onValidateInput_m562 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
 void InputField_set_onValidateInput_m563 (InputField_t174 * __this, OnValidateInput_t171 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
 int32_t InputField_get_characterLimit_m564 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
 void InputField_set_characterLimit_m565 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
 int32_t InputField_get_contentType_m566 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
 void InputField_set_contentType_m567 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
 int32_t InputField_get_lineType_m568 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
 void InputField_set_lineType_m569 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
 int32_t InputField_get_inputType_m570 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
 void InputField_set_inputType_m571 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
 int32_t InputField_get_keyboardType_m572 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
 void InputField_set_keyboardType_m573 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
 int32_t InputField_get_characterValidation_m574 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
 void InputField_set_characterValidation_m575 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
 bool InputField_get_multiLine_m576 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
 uint16_t InputField_get_asteriskChar_m577 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
 void InputField_set_asteriskChar_m578 (InputField_t174 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
 bool InputField_get_wasCanceled_m579 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
 void InputField_ClampPos_m580 (InputField_t174 * __this, int32_t* ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
 int32_t InputField_get_caretPosition_m581 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
 void InputField_set_caretPosition_m582 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPos()
 int32_t InputField_get_caretSelectPos_m583 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPos(System.Int32)
 void InputField_set_caretSelectPos_m584 (InputField_t174 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
 bool InputField_get_hasSelection_m585 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
 void InputField_OnEnable_m586 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
 void InputField_OnDisable_m587 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
 Object_t * InputField_CaretBlink_m588 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
 void InputField_SetCaretVisible_m589 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
 void InputField_SetCaretActive_m590 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
 void InputField_OnFocus_m591 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
 void InputField_SelectAll_m592 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
 void InputField_MoveTextEnd_m593 (InputField_t174 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
 void InputField_MoveTextStart_m594 (InputField_t174 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
 String_t* InputField_get_clipboard_m595 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
 void InputField_set_clipboard_m596 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
 bool InputField_InPlaceEditing_m597 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
 void InputField_LateUpdate_m598 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
 Vector2_t84  InputField_ScreenToLocal_m599 (InputField_t174 * __this, Vector2_t84  ___screen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
 int32_t InputField_GetUnclampedCharacterLineFromPosition_m600 (InputField_t174 * __this, Vector2_t84  ___pos, TextGenerator_t180 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
 int32_t InputField_GetCharacterIndexFromPosition_m601 (InputField_t174 * __this, Vector2_t84  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool InputField_MayDrag_m602 (InputField_t174 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnBeginDrag_m603 (InputField_t174 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnDrag_m604 (InputField_t174 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
 Object_t * InputField_MouseDragOutsideRect_m605 (InputField_t174 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnEndDrag_m606 (InputField_t174 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerDown_m607 (InputField_t174 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
 int32_t InputField_KeyPressed_m608 (InputField_t174 * __this, Event_t182 * ___evt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
 bool InputField_IsValidChar_m609 (InputField_t174 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
 void InputField_ProcessEvent_m610 (InputField_t174 * __this, Event_t182 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnUpdateSelected_m611 (InputField_t174 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
 String_t* InputField_GetSelectedString_m612 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
 int32_t InputField_FindtNextWordBegin_m613 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
 void InputField_MoveRight_m614 (InputField_t174 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
 int32_t InputField_FindtPrevWordBegin_m615 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
 void InputField_MoveLeft_m616 (InputField_t174 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
 int32_t InputField_DetermineCharacterLine_m617 (InputField_t174 * __this, int32_t ___charPos, TextGenerator_t180 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineUpCharacterPosition_m618 (InputField_t174 * __this, int32_t ___originalPos, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineDownCharacterPosition_m619 (InputField_t174 * __this, int32_t ___originalPos, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
 void InputField_MoveDown_m620 (InputField_t174 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
 void InputField_MoveDown_m621 (InputField_t174 * __this, bool ___shift, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
 void InputField_MoveUp_m622 (InputField_t174 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
 void InputField_MoveUp_m623 (InputField_t174 * __this, bool ___shift, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
 void InputField_Delete_m624 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
 void InputField_ForwardSpace_m625 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
 void InputField_Backspace_m626 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
 void InputField_Insert_m627 (InputField_t174 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
 void InputField_SendOnValueChangedAndUpdateLabel_m628 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
 void InputField_SendOnValueChanged_m629 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
 void InputField_SendOnSubmit_m630 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
 void InputField_Append_m631 (InputField_t174 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
 void InputField_Append_m632 (InputField_t174 * __this, uint16_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
 void InputField_UpdateLabel_m633 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
 bool InputField_IsSelectionVisible_m634 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineStartPosition_m635 (Object_t * __this/* static, unused */, TextGenerator_t180 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineEndPosition_m636 (Object_t * __this/* static, unused */, TextGenerator_t180 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
 void InputField_SetDrawRangeToContainCaretPosition_m637 (InputField_t174 * __this, TextGenerator_t180 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
 void InputField_MarkGeometryAsDirty_m638 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
 void InputField_Rebuild_m639 (InputField_t174 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
 void InputField_UpdateGeometry_m640 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
 void InputField_AssignPositioningIfNeeded_m641 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void InputField_OnFillVBO_m642 (InputField_t174 * __this, List_1_t141 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateCursor_m643 (InputField_t174 * __this, List_1_t141 * ___vbo, Vector2_t84  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
 void InputField_CreateCursorVerts_m644 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
 float InputField_SumLineHeights_m645 (InputField_t174 * __this, int32_t ___endLine, TextGenerator_t180 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateHightlight_m646 (InputField_t174 * __this, List_1_t141 * ___vbo, Vector2_t84  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
 uint16_t InputField_Validate_m647 (InputField_t174 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
 void InputField_ActivateInputField_m648 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
 void InputField_ActivateInputFieldInternal_m649 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSelect_m650 (InputField_t174 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerClick_m651 (InputField_t174 * __this, PointerEventData_t27 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
 void InputField_DeactivateInputField_m652 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnDeselect_m653 (InputField_t174 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSubmit_m654 (InputField_t174 * __this, BaseEventData_t23 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
 void InputField_EnforceContentType_m655 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
 void InputField_SetToCustomIfContentTypeIsNot_m656 (InputField_t174 * __this, ContentTypeU5BU5D_t183* ___allowedContentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
 void InputField_SetToCustom_m657 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void InputField_DoStateTransition_m658 (InputField_t174 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m659 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t125 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m660 (InputField_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

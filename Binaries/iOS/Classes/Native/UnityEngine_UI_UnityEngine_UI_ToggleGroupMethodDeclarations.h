#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t220;
// UnityEngine.UI.Toggle
struct Toggle_t221;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t225;

// System.Void UnityEngine.UI.ToggleGroup::.ctor()
 void ToggleGroup__ctor_m980 (ToggleGroup_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
 bool ToggleGroup_get_allowSwitchOff_m981 (ToggleGroup_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
 void ToggleGroup_set_allowSwitchOff_m982 (ToggleGroup_t220 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
 void ToggleGroup_ValidateToggleIsInGroup_m983 (ToggleGroup_t220 * __this, Toggle_t221 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
 void ToggleGroup_NotifyToggleOn_m984 (ToggleGroup_t220 * __this, Toggle_t221 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
 void ToggleGroup_UnregisterToggle_m985 (ToggleGroup_t220 * __this, Toggle_t221 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
 void ToggleGroup_RegisterToggle_m986 (ToggleGroup_t220 * __this, Toggle_t221 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
 bool ToggleGroup_AnyTogglesOn_m987 (ToggleGroup_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
 Object_t* ToggleGroup_ActiveToggles_m988 (ToggleGroup_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
 void ToggleGroup_SetAllTogglesOff_m989 (ToggleGroup_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__7(UnityEngine.UI.Toggle)
 bool ToggleGroup_U3CAnyTogglesOnU3Em__7_m990 (Object_t * __this/* static, unused */, Toggle_t221 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__8(UnityEngine.UI.Toggle)
 bool ToggleGroup_U3CActiveTogglesU3Em__8_m991 (Object_t * __this/* static, unused */, Toggle_t221 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;

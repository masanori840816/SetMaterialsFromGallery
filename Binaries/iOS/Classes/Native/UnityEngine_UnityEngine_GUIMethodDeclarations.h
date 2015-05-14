#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t14;
// UnityEngine.GUISkin
struct GUISkin_t456;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t354;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t455;
// UnityEngine.GUIStyle
struct GUIStyle_t459;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
 void GUI__cctor_m2186 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
 void GUI_set_nextScrollStepTime_m2187 (Object_t * __this/* static, unused */, DateTime_t458  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
 void GUI_set_skin_m2188 (Object_t * __this/* static, unused */, GUISkin_t456 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
 GUISkin_t456 * GUI_get_skin_m2189 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
 void GUI_set_changed_m2190 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
 bool GUI_Button_m32 (Object_t * __this/* static, unused */, Rect_t13  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_DoButton_m2191 (Object_t * __this/* static, unused */, Rect_t13  ___position, GUIContent_t354 * ___content, IntPtr_t173 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_INTERNAL_CALL_DoButton_m2192 (Object_t * __this/* static, unused */, Rect_t13 * ___position, GUIContent_t354 * ___content, IntPtr_t173 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUI_CallWindowDelegate_m2193 (Object_t * __this/* static, unused */, WindowFunction_t455 * ___func, int32_t ___id, GUISkin_t456 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t459 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;

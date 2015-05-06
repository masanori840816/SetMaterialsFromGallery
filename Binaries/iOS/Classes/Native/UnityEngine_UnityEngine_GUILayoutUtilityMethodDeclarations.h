#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t465;
// UnityEngine.GUIStyle
struct GUIStyle_t459;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t463;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t466;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t462;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
 void GUILayoutUtility__cctor_m2193 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
 LayoutCache_t463 * GUILayoutUtility_SelectIDList_m2194 (Object_t * __this/* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
 void GUILayoutUtility_Begin_m2195 (Object_t * __this/* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutUtility_BeginWindow_m2196 (Object_t * __this/* static, unused */, int32_t ___windowID, GUIStyle_t459 * ___style, GUILayoutOptionU5BU5D_t466* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
 void GUILayoutUtility_Layout_m2197 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
 void GUILayoutUtility_LayoutFromEditorWindow_m2198 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutFreeGroup_m2199 (Object_t * __this/* static, unused */, GUILayoutGroup_t462 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutSingleGroup_m2200 (Object_t * __this/* static, unused */, GUILayoutGroup_t462 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
 Rect_t13  GUILayoutUtility_Internal_GetWindowRect_m2201 (Object_t * __this/* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
 void GUILayoutUtility_Internal_MoveWindow_m2202 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t13  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
 void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2203 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t13 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
 GUIStyle_t459 * GUILayoutUtility_get_spaceStyle_m2204 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

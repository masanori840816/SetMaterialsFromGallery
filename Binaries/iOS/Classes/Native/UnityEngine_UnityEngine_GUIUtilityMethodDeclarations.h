#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIUtility
struct GUIUtility_t472;
// System.String
struct String_t;
// UnityEngine.GUISkin
struct GUISkin_t456;
// System.Exception
struct Exception_t304;

// System.Void UnityEngine.GUIUtility::.cctor()
 void GUIUtility__cctor_m2233 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
 String_t* GUIUtility_get_systemCopyBuffer_m2234 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
 void GUIUtility_set_systemCopyBuffer_m2235 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
 GUISkin_t456 * GUIUtility_GetDefaultSkin_m2236 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
 GUISkin_t456 * GUIUtility_Internal_GetDefaultSkin_m2237 (Object_t * __this/* static, unused */, int32_t ___skinMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
 void GUIUtility_BeginGUI_m2238 (Object_t * __this/* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
 void GUIUtility_Internal_ExitGUI_m2239 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
 void GUIUtility_EndGUI_m2240 (Object_t * __this/* static, unused */, int32_t ___layoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
 bool GUIUtility_EndGUIFromException_m2241 (Object_t * __this/* static, unused */, Exception_t304 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
 void GUIUtility_CheckOnGUI_m2242 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
 int32_t GUIUtility_Internal_GetGUIDepth_m2243 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

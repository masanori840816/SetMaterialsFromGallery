#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyle
struct GUIStyle_t459;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t477;
// UnityEngine.RectOffset
struct RectOffset_t242;
// UnityEngine.Font
struct Font_t127;
// UnityEngine.GUIContent
struct GUIContent_t354;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIStyle::.ctor()
 void GUIStyle__ctor_m2334 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
 void GUIStyle__cctor_m2335 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
 void GUIStyle_Finalize_m2336 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
 void GUIStyle_Init_m2337 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
 void GUIStyle_Cleanup_m2338 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
 String_t* GUIStyle_get_name_m2339 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
 void GUIStyle_set_name_m2340 (GUIStyle_t459 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
 GUIStyleState_t477 * GUIStyle_get_normal_m2341 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
 IntPtr_t173 GUIStyle_GetStyleStatePtr_m2342 (GUIStyle_t459 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
 RectOffset_t242 * GUIStyle_get_margin_m2343 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
 RectOffset_t242 * GUIStyle_get_padding_m2344 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
 IntPtr_t173 GUIStyle_GetRectOffsetPtr_m2345 (GUIStyle_t459 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
 float GUIStyle_get_fixedWidth_m2346 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
 float GUIStyle_get_fixedHeight_m2347 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
 bool GUIStyle_get_stretchWidth_m2348 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
 void GUIStyle_set_stretchWidth_m2349 (GUIStyle_t459 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
 bool GUIStyle_get_stretchHeight_m2350 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
 void GUIStyle_set_stretchHeight_m2351 (GUIStyle_t459 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
 float GUIStyle_Internal_GetLineHeight_m2352 (Object_t * __this/* static, unused */, IntPtr_t173 ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
 float GUIStyle_get_lineHeight_m2353 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
 void GUIStyle_SetDefaultFont_m2354 (Object_t * __this/* static, unused */, Font_t127 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
 GUIStyle_t459 * GUIStyle_get_none_m2355 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 Vector2_t84  GUIStyle_GetCursorPixelPosition_m2356 (GUIStyle_t459 * __this, Rect_t13  ___position, GUIContent_t354 * ___content, int32_t ___cursorStringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_Internal_GetCursorPixelPosition_m2357 (Object_t * __this/* static, unused */, IntPtr_t173 ___target, Rect_t13  ___position, GUIContent_t354 * ___content, int32_t ___cursorStringIndex, Vector2_t84 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2358 (Object_t * __this/* static, unused */, IntPtr_t173 ___target, Rect_t13 * ___position, GUIContent_t354 * ___content, int32_t ___cursorStringIndex, Vector2_t84 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
 Vector2_t84  GUIStyle_CalcSize_m2359 (GUIStyle_t459 * __this, GUIContent_t354 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
 void GUIStyle_Internal_CalcSize_m2360 (Object_t * __this/* static, unused */, IntPtr_t173 ___target, GUIContent_t354 * ___content, Vector2_t84 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
 float GUIStyle_CalcHeight_m2361 (GUIStyle_t459 * __this, GUIContent_t354 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
 float GUIStyle_Internal_CalcHeight_m2362 (Object_t * __this/* static, unused */, IntPtr_t173 ___target, GUIContent_t354 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
 String_t* GUIStyle_ToString_m2363 (GUIStyle_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

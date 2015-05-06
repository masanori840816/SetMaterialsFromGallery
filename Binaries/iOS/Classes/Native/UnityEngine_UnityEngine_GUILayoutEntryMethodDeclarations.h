#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t467;
// UnityEngine.GUIStyle
struct GUIStyle_t459;
// UnityEngine.RectOffset
struct RectOffset_t242;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t466;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUILayoutEntry__ctor_m2205 (GUILayoutEntry_t467 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t459 * ____style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
 void GUILayoutEntry__cctor_m2206 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
 GUIStyle_t459 * GUILayoutEntry_get_style_m2207 (GUILayoutEntry_t467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
 void GUILayoutEntry_set_style_m2208 (GUILayoutEntry_t467 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
 RectOffset_t242 * GUILayoutEntry_get_margin_m2209 (GUILayoutEntry_t467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
 void GUILayoutEntry_CalcWidth_m2210 (GUILayoutEntry_t467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
 void GUILayoutEntry_CalcHeight_m2211 (GUILayoutEntry_t467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
 void GUILayoutEntry_SetHorizontal_m2212 (GUILayoutEntry_t467 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
 void GUILayoutEntry_SetVertical_m2213 (GUILayoutEntry_t467 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
 void GUILayoutEntry_ApplyStyleSettings_m2214 (GUILayoutEntry_t467 * __this, GUIStyle_t459 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
 void GUILayoutEntry_ApplyOptions_m2215 (GUILayoutEntry_t467 * __this, GUILayoutOptionU5BU5D_t466* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
 String_t* GUILayoutEntry_ToString_m2216 (GUILayoutEntry_t467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

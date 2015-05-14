#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t456;
// UnityEngine.Font
struct Font_t127;
// UnityEngine.GUIStyle
struct GUIStyle_t459;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t475;
// UnityEngine.GUISettings
struct GUISettings_t473;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t112;

// System.Void UnityEngine.GUISkin::.ctor()
 void GUISkin__ctor_m2253 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
 void GUISkin_OnEnable_m2254 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
 Font_t127 * GUISkin_get_font_m2255 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
 void GUISkin_set_font_m2256 (GUISkin_t456 * __this, Font_t127 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
 GUIStyle_t459 * GUISkin_get_box_m2257 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
 void GUISkin_set_box_m2258 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
 GUIStyle_t459 * GUISkin_get_label_m2259 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
 void GUISkin_set_label_m2260 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
 GUIStyle_t459 * GUISkin_get_textField_m2261 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
 void GUISkin_set_textField_m2262 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
 GUIStyle_t459 * GUISkin_get_textArea_m2263 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
 void GUISkin_set_textArea_m2264 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
 GUIStyle_t459 * GUISkin_get_button_m2265 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
 void GUISkin_set_button_m2266 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
 GUIStyle_t459 * GUISkin_get_toggle_m2267 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
 void GUISkin_set_toggle_m2268 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
 GUIStyle_t459 * GUISkin_get_window_m2269 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
 void GUISkin_set_window_m2270 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
 GUIStyle_t459 * GUISkin_get_horizontalSlider_m2271 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSlider_m2272 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
 GUIStyle_t459 * GUISkin_get_horizontalSliderThumb_m2273 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSliderThumb_m2274 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
 GUIStyle_t459 * GUISkin_get_verticalSlider_m2275 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSlider_m2276 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
 GUIStyle_t459 * GUISkin_get_verticalSliderThumb_m2277 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSliderThumb_m2278 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
 GUIStyle_t459 * GUISkin_get_horizontalScrollbar_m2279 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbar_m2280 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
 GUIStyle_t459 * GUISkin_get_horizontalScrollbarThumb_m2281 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarThumb_m2282 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
 GUIStyle_t459 * GUISkin_get_horizontalScrollbarLeftButton_m2283 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarLeftButton_m2284 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
 GUIStyle_t459 * GUISkin_get_horizontalScrollbarRightButton_m2285 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarRightButton_m2286 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
 GUIStyle_t459 * GUISkin_get_verticalScrollbar_m2287 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbar_m2288 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
 GUIStyle_t459 * GUISkin_get_verticalScrollbarThumb_m2289 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarThumb_m2290 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
 GUIStyle_t459 * GUISkin_get_verticalScrollbarUpButton_m2291 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarUpButton_m2292 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
 GUIStyle_t459 * GUISkin_get_verticalScrollbarDownButton_m2293 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarDownButton_m2294 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
 GUIStyle_t459 * GUISkin_get_scrollView_m2295 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
 void GUISkin_set_scrollView_m2296 (GUISkin_t456 * __this, GUIStyle_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
 GUIStyleU5BU5D_t475* GUISkin_get_customStyles_m2297 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
 void GUISkin_set_customStyles_m2298 (GUISkin_t456 * __this, GUIStyleU5BU5D_t475* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
 GUISettings_t473 * GUISkin_get_settings_m2299 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
 GUIStyle_t459 * GUISkin_get_error_m2300 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
 void GUISkin_Apply_m2301 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
 void GUISkin_BuildStyleCache_m2302 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
 GUIStyle_t459 * GUISkin_GetStyle_m2303 (GUISkin_t456 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
 GUIStyle_t459 * GUISkin_FindStyle_m2304 (GUISkin_t456 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
 void GUISkin_MakeCurrent_m2305 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
 Object_t * GUISkin_GetEnumerator_m2306 (GUISkin_t456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

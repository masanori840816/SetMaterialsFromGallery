#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t130;
// UnityEngine.UI.Text
struct Text_t131;
// UnityEngine.Font
struct Font_t127;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
 void FontUpdateTracker__cctor_m401 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_TrackText_m402 (Object_t * __this/* static, unused */, Text_t131 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
 void FontUpdateTracker_RebuildForFont_m403 (Object_t * __this/* static, unused */, Font_t127 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_UntrackText_m404 (Object_t * __this/* static, unused */, Text_t131 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;

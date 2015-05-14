#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application
struct Application_t497;
// System.String
struct String_t;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Boolean UnityEngine.Application::get_isPlaying()
 bool Application_get_isPlaying_m1804 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
 bool Application_get_isEditor_m1808 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
 int32_t Application_get_platform_m1690 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
 void Application_CallLogCallback_m2546 (Object_t * __this/* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method) IL2CPP_METHOD_ATTR;

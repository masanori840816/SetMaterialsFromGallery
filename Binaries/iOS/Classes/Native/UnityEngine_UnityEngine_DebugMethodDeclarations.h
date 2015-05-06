#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t500;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t185;
struct Object_t185_marshaled;
// System.Exception
struct Exception_t304;
// System.Object
struct Object_t;

// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
 void Debug_Internal_Log_m2564 (Object_t * __this/* static, unused */, int32_t ___level, String_t* ___msg, Object_t185 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
 void Debug_Internal_LogException_m2565 (Object_t * __this/* static, unused */, Exception_t304 * ___exception, Object_t185 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
 void Debug_Log_m36 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
 void Debug_LogError_m1263 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
 void Debug_LogError_m1663 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t185 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
 void Debug_LogException_m2566 (Object_t * __this/* static, unused */, Exception_t304 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
 void Debug_LogException_m1504 (Object_t * __this/* static, unused */, Exception_t304 * ___exception, Object_t185 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
 void Debug_LogWarning_m2567 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
 void Debug_LogWarning_m1887 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t185 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;

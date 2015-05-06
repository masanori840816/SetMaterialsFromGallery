#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1398;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t677;
// System.Reflection.MemberInfo
struct MemberInfo_t666;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
 void MonoMethodInfo_get_method_info_m7760 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MonoMethodInfo_t1398 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
 MonoMethodInfo_t1398  MonoMethodInfo_GetMethodInfo_m7761 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
 Type_t * MonoMethodInfo_GetDeclaringType_m7762 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
 Type_t * MonoMethodInfo_GetReturnType_m7763 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
 int32_t MonoMethodInfo_GetAttributes_m7764 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
 int32_t MonoMethodInfo_GetCallingConvention_m7765 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
 ParameterInfoU5BU5D_t677* MonoMethodInfo_get_parameter_info_m7766 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MemberInfo_t666 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
 ParameterInfoU5BU5D_t677* MonoMethodInfo_GetParametersInfo_m7767 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MemberInfo_t666 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;

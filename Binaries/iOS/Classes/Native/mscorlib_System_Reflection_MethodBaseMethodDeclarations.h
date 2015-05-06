#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodBase
struct MethodBase_t676;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t677;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Reflection.Binder
struct Binder_t671;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.Type[]
struct TypeU5BU5D_t546;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.MethodBase::.ctor()
 void MethodBase__ctor_m7689 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
 MethodBase_t676 * MethodBase_GetMethodFromHandleNoGenericCheck_m7690 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t1360  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
 MethodBase_t676 * MethodBase_GetMethodFromIntPtr_m7691 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, IntPtr_t173 ___declaringType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
 MethodBase_t676 * MethodBase_GetMethodFromHandle_m7692 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t1360  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
 MethodBase_t676 * MethodBase_GetMethodFromHandleInternalType_m7693 (Object_t * __this/* static, unused */, IntPtr_t173 ___method_handle, IntPtr_t173 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
 Object_t * MethodBase_Invoke_m7694 (MethodBase_t676 * __this, Object_t * ___obj, ObjectU5BU5D_t295* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
 int32_t MethodBase_get_CallingConvention_m7695 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
 bool MethodBase_get_IsPublic_m7696 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
 bool MethodBase_get_IsStatic_m3102 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
 bool MethodBase_get_IsVirtual_m7697 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
 TypeU5BU5D_t546* MethodBase_GetGenericArguments_m7698 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
 bool MethodBase_get_ContainsGenericParameters_m7699 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
 bool MethodBase_get_IsGenericMethodDefinition_m7700 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
 bool MethodBase_get_IsGenericMethod_m7701 (MethodBase_t676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t546;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MethodInfo::.ctor()
 void MethodInfo__ctor_m7707 (MethodInfo_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
 int32_t MethodInfo_get_MemberType_m7708 (MethodInfo_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
 Type_t * MethodInfo_get_ReturnType_m7709 (MethodInfo_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
 MethodInfo_t582 * MethodInfo_MakeGenericMethod_m7710 (MethodInfo_t582 * __this, TypeU5BU5D_t546* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
 TypeU5BU5D_t546* MethodInfo_GetGenericArguments_m7711 (MethodInfo_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
 bool MethodInfo_get_IsGenericMethod_m7712 (MethodInfo_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
 bool MethodInfo_get_IsGenericMethodDefinition_m7713 (MethodInfo_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
 bool MethodInfo_get_ContainsGenericParameters_m7714 (MethodInfo_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

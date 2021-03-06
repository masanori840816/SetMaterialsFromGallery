﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1364;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1160;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t677;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t671;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.Exception
struct Exception_t304;
// System.Type[]
struct TypeU5BU5D_t546;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
 bool MethodBuilder_get_ContainsGenericParameters_m7532 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
 RuntimeMethodHandle_t1360  MethodBuilder_get_MethodHandle_m7533 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
 Type_t * MethodBuilder_get_ReturnType_m7534 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
 Type_t * MethodBuilder_get_ReflectedType_m7535 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
 Type_t * MethodBuilder_get_DeclaringType_m7536 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
 String_t* MethodBuilder_get_Name_m7537 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
 int32_t MethodBuilder_get_Attributes_m7538 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
 int32_t MethodBuilder_get_CallingConvention_m7539 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
 MethodInfo_t582 * MethodBuilder_GetBaseDefinition_m7540 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
 ParameterInfoU5BU5D_t677* MethodBuilder_GetParameters_m7541 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MethodBuilder_Invoke_m7542 (MethodBuilder_t1364 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t671 * ___binder, ObjectU5BU5D_t295* ___parameters, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
 bool MethodBuilder_IsDefined_m7543 (MethodBuilder_t1364 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t295* MethodBuilder_GetCustomAttributes_m7544 (MethodBuilder_t1364 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t295* MethodBuilder_GetCustomAttributes_m7545 (MethodBuilder_t1364 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
 String_t* MethodBuilder_ToString_m7546 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
 bool MethodBuilder_Equals_m7547 (MethodBuilder_t1364 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
 int32_t MethodBuilder_GetHashCode_m7548 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
 Exception_t304 * MethodBuilder_NotSupported_m7549 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
 MethodInfo_t582 * MethodBuilder_MakeGenericMethod_m7550 (MethodBuilder_t1364 * __this, TypeU5BU5D_t546* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
 bool MethodBuilder_get_IsGenericMethodDefinition_m7551 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
 bool MethodBuilder_get_IsGenericMethod_m7552 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
 TypeU5BU5D_t546* MethodBuilder_GetGenericArguments_m7553 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
 Module_t1160 * MethodBuilder_get_Module_m7554 (MethodBuilder_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

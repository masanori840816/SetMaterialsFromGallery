#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1359;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1357;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1160;
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
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
 int32_t ConstructorBuilder_get_CallingConvention_m7416 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
 TypeBuilder_t1357 * ConstructorBuilder_get_TypeBuilder_m7417 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
 ParameterInfoU5BU5D_t677* ConstructorBuilder_GetParameters_m7418 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
 ParameterInfoU5BU5D_t677* ConstructorBuilder_GetParametersInternal_m7419 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m7420 (ConstructorBuilder_t1359 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t671 * ___binder, ObjectU5BU5D_t295* ___parameters, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m7421 (ConstructorBuilder_t1359 * __this, int32_t ___invokeAttr, Binder_t671 * ___binder, ObjectU5BU5D_t295* ___parameters, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
 RuntimeMethodHandle_t1360  ConstructorBuilder_get_MethodHandle_m7422 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
 int32_t ConstructorBuilder_get_Attributes_m7423 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
 Type_t * ConstructorBuilder_get_ReflectedType_m7424 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
 Type_t * ConstructorBuilder_get_DeclaringType_m7425 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
 String_t* ConstructorBuilder_get_Name_m7426 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
 bool ConstructorBuilder_IsDefined_m7427 (ConstructorBuilder_t1359 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t295* ConstructorBuilder_GetCustomAttributes_m7428 (ConstructorBuilder_t1359 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t295* ConstructorBuilder_GetCustomAttributes_m7429 (ConstructorBuilder_t1359 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
 Module_t1160 * ConstructorBuilder_get_Module_m7430 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
 String_t* ConstructorBuilder_ToString_m7431 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
 bool ConstructorBuilder_get_IsCompilerContext_m7432 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
 Exception_t304 * ConstructorBuilder_not_supported_m7433 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
 Exception_t304 * ConstructorBuilder_not_created_m7434 (ConstructorBuilder_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

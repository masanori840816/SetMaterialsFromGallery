#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1361;
// System.Reflection.Assembly
struct Assembly_t960;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1160;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t701;
// System.Reflection.Binder
struct Binder_t671;
// System.Type[]
struct TypeU5BU5D_t546;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t672;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1165;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Reflection.EventInfo
struct EventInfo_t1161;
// System.Reflection.FieldInfo
struct FieldInfo_t1162;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1163;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1164;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.String[]
struct StringU5BU5D_t9;
// System.Exception
struct Exception_t304;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t960 * EnumBuilder_get_Assembly_m7435 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m7436 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m7437 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m7438 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m7439 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t1160 * EnumBuilder_get_Module_m7440 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m7441 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m7442 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m7443 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t1159  EnumBuilder_get_TypeHandle_m7444 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m7445 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m7446 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t701 * EnumBuilder_GetConstructorImpl_m7447 (EnumBuilder_t1361 * __this, int32_t ___bindingAttr, Binder_t671 * ___binder, int32_t ___callConvention, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1165* EnumBuilder_GetConstructors_m7448 (EnumBuilder_t1361 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t295* EnumBuilder_GetCustomAttributes_m7449 (EnumBuilder_t1361 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t295* EnumBuilder_GetCustomAttributes_m7450 (EnumBuilder_t1361 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m7451 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1161 * EnumBuilder_GetEvent_m7452 (EnumBuilder_t1361 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t1162 * EnumBuilder_GetField_m7453 (EnumBuilder_t1361 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t546* EnumBuilder_GetInterfaces_m7454 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t582 * EnumBuilder_GetMethodImpl_m7455 (EnumBuilder_t1361 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t671 * ___binder, int32_t ___callConvention, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1163* EnumBuilder_GetMethods_m7456 (EnumBuilder_t1361 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1164 * EnumBuilder_GetPropertyImpl_m7457 (EnumBuilder_t1361 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t671 * ___binder, Type_t * ___returnType, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m7458 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m7459 (EnumBuilder_t1361 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t671 * ___binder, Object_t * ___target, ObjectU5BU5D_t295* ___args, ParameterModifierU5BU5D_t672* ___modifiers, CultureInfo_t674 * ___culture, StringU5BU5D_t9* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m7460 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m7461 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m7462 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m7463 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m7464 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m7465 (EnumBuilder_t1361 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t304 * EnumBuilder_CreateNotSupportedException_m7466 (EnumBuilder_t1361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

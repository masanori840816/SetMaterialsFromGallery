#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t960;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1160;
// System.Reflection.MemberInfo
struct MemberInfo_t666;
// System.Object
struct Object_t;
// System.Type[]
struct TypeU5BU5D_t546;
// System.Reflection.EventInfo
struct EventInfo_t1161;
// System.Reflection.FieldInfo
struct FieldInfo_t1162;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.Reflection.Binder
struct Binder_t671;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t672;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1163;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1164;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t701;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1165;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.String[]
struct StringU5BU5D_t9;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
 void Type__ctor_m6138 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
 void Type__cctor_m6139 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterName_impl_m6140 (Object_t * __this/* static, unused */, MemberInfo_t666 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterNameIgnoreCase_impl_m6141 (Object_t * __this/* static, unused */, MemberInfo_t666 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
 bool Type_FilterAttribute_impl_m6142 (Object_t * __this/* static, unused */, MemberInfo_t666 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Type::get_Assembly()
// System.String System.Type::get_AssemblyQualifiedName()
// System.Reflection.TypeAttributes System.Type::get_Attributes()
 int32_t Type_get_Attributes_m6143 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_BaseType()
// System.Type System.Type::get_DeclaringType()
 Type_t * Type_get_DeclaringType_m6144 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::get_FullName()
// System.Boolean System.Type::get_HasElementType()
 bool Type_get_HasElementType_m6145 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
 bool Type_get_IsAbstract_m6146 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
 bool Type_get_IsArray_m6147 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
 bool Type_get_IsByRef_m6148 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
 bool Type_get_IsClass_m6149 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
 bool Type_get_IsContextful_m6150 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
 bool Type_get_IsEnum_m6151 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
 bool Type_get_IsExplicitLayout_m6152 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
 bool Type_get_IsInterface_m6153 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
 bool Type_get_IsMarshalByRef_m6154 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
 bool Type_get_IsPointer_m6155 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
 bool Type_get_IsPrimitive_m3155 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
 bool Type_get_IsSealed_m6156 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
 bool Type_get_IsSerializable_m6157 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
 bool Type_get_IsValueType_m6158 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
 int32_t Type_get_MemberType_m6159 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Type::get_Module()
// System.String System.Type::get_Namespace()
// System.Type System.Type::get_ReflectedType()
 Type_t * Type_get_ReflectedType_m6160 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
 RuntimeTypeHandle_t1159  Type_get_TypeHandle_m6161 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_UnderlyingSystemType()
// System.Boolean System.Type::Equals(System.Object)
 bool Type_Equals_m6162 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
 bool Type_Equals_m6163 (Type_t * __this, Type_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
 bool Type_EqualsInternal_m6164 (Type_t * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
 Type_t * Type_internal_from_handle_m6165 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
 Type_t * Type_internal_from_name_m6166 (Object_t * __this/* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
 Type_t * Type_GetType_m6167 (Object_t * __this/* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
 Type_t * Type_GetType_m3133 (Object_t * __this/* static, unused */, String_t* ___typeName, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
 int32_t Type_GetTypeCodeInternal_m6168 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
 int32_t Type_GetTypeCode_m6169 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
 Type_t * Type_GetTypeFromHandle_m1531 (Object_t * __this/* static, unused */, RuntimeTypeHandle_t1159  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
 RuntimeTypeHandle_t1159  Type_GetTypeHandle_m6170 (Object_t * __this/* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
 bool Type_type_is_subtype_of_m6171 (Object_t * __this/* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
 bool Type_type_is_assignable_from_m6172 (Object_t * __this/* static, unused */, Type_t * ___a, Type_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
 bool Type_IsSubclassOf_m6173 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetInterfaces()
// System.Boolean System.Type::IsAssignableFrom(System.Type)
 bool Type_IsAssignableFrom_m3136 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
 bool Type_IsInstanceOfType_m6174 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetElementType()
// System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags)
// System.Int32 System.Type::GetHashCode()
 int32_t Type_GetHashCode_m6175 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
 MethodInfo_t582 * Type_GetMethod_m6176 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
 MethodInfo_t582 * Type_GetMethod_m6177 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t582 * Type_GetMethod_m3154 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t671 * ___binder, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t582 * Type_GetMethod_m6178 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t671 * ___binder, int32_t ___callConvention, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
 PropertyInfo_t1164 * Type_GetProperty_m6179 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
 PropertyInfo_t1164 * Type_GetProperty_m6180 (Type_t * __this, String_t* ___name, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
 PropertyInfo_t1164 * Type_GetProperty_m6181 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t546* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1164 * Type_GetProperty_m6182 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t671 * ___binder, Type_t * ___returnType, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.ConstructorInfo System.Type::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.TypeAttributes System.Type::GetAttributeFlagsImpl()
// System.Boolean System.Type::HasElementTypeImpl()
// System.Boolean System.Type::IsArrayImpl()
// System.Boolean System.Type::IsByRefImpl()
// System.Boolean System.Type::IsPointerImpl()
// System.Boolean System.Type::IsPrimitiveImpl()
// System.Boolean System.Type::IsArrayImpl(System.Type)
 bool Type_IsArrayImpl_m6183 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
 bool Type_IsValueTypeImpl_m6184 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
 bool Type_IsContextfulImpl_m6185 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
 bool Type_IsMarshalByRefImpl_m6186 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
 ConstructorInfo_t701 * Type_GetConstructor_m3135 (Type_t * __this, TypeU5BU5D_t546* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t701 * Type_GetConstructor_m6187 (Type_t * __this, int32_t ___bindingAttr, Binder_t671 * ___binder, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t701 * Type_GetConstructor_m6188 (Type_t * __this, int32_t ___bindingAttr, Binder_t671 * ___binder, int32_t ___callConvention, TypeU5BU5D_t546* ___types, ParameterModifierU5BU5D_t672* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags)
// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
// System.String System.Type::ToString()
 String_t* Type_ToString_m6189 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
 bool Type_get_IsSystemType_m6190 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
 TypeU5BU5D_t546* Type_GetGenericArguments_m6191 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
 bool Type_get_ContainsGenericParameters_m6192 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
 bool Type_get_IsGenericTypeDefinition_m6193 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
 Type_t * Type_GetGenericTypeDefinition_impl_m6194 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
 Type_t * Type_GetGenericTypeDefinition_m6195 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
 bool Type_get_IsGenericType_m6196 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
 Type_t * Type_MakeGenericType_m6197 (Object_t * __this/* static, unused */, Type_t * ___gt, TypeU5BU5D_t546* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
 Type_t * Type_MakeGenericType_m3134 (Type_t * __this, TypeU5BU5D_t546* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
 bool Type_get_IsGenericParameter_m6198 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
 bool Type_get_IsNested_m6199 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
 ObjectU5BU5D_t295* Type_GetPseudoCustomAttributes_m6200 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

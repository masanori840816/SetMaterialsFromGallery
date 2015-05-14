#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t490;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t666;
// System.Reflection.ParameterInfo
struct ParameterInfo_t678;

// System.Void System.Attribute::.ctor()
 void Attribute__ctor_m3031 (Attribute_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
 void Attribute_CheckParameters_m5442 (Object_t * __this/* static, unused */, Object_t * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
 Attribute_t490 * Attribute_GetCustomAttribute_m5443 (Object_t * __this/* static, unused */, MemberInfo_t666 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
 Attribute_t490 * Attribute_GetCustomAttribute_m5444 (Object_t * __this/* static, unused */, MemberInfo_t666 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
 int32_t Attribute_GetHashCode_m3033 (Attribute_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
 bool Attribute_IsDefined_m5445 (Object_t * __this/* static, unused */, ParameterInfo_t678 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
 bool Attribute_IsDefined_m5446 (Object_t * __this/* static, unused */, MemberInfo_t666 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m5447 (Object_t * __this/* static, unused */, MemberInfo_t666 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m5448 (Object_t * __this/* static, unused */, ParameterInfo_t678 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
 bool Attribute_Equals_m3032 (Attribute_t490 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;

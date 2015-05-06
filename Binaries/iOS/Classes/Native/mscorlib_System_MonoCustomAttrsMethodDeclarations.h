#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs
struct MonoCustomAttrs_t1690;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t1691;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t490;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1164;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t668;

// System.Void System.MonoCustomAttrs::.cctor()
 void MonoCustomAttrs__cctor_m9458 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
 bool MonoCustomAttrs_IsUserCattrProvider_m9459 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t295* MonoCustomAttrs_GetCustomAttributesInternal_m9460 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t295* MonoCustomAttrs_GetPseudoCustomAttributes_m9461 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t295* MonoCustomAttrs_GetCustomAttributesBase_m9462 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 Attribute_t490 * MonoCustomAttrs_GetCustomAttribute_m9463 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t295* MonoCustomAttrs_GetCustomAttributes_m9464 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
 ObjectU5BU5D_t295* MonoCustomAttrs_GetCustomAttributes_m9465 (Object_t * __this/* static, unused */, Object_t * ___obj, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 bool MonoCustomAttrs_IsDefined_m9466 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
 bool MonoCustomAttrs_IsDefinedInternal_m9467 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
 PropertyInfo_t1164 * MonoCustomAttrs_GetBasePropertyDefinition_m9468 (Object_t * __this/* static, unused */, PropertyInfo_t1164 * ___property, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
 Object_t * MonoCustomAttrs_GetBase_m9469 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
 AttributeUsageAttribute_t668 * MonoCustomAttrs_RetrieveAttributeUsage_m9470 (Object_t * __this/* static, unused */, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;

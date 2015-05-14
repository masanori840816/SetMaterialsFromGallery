#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement
struct SecurityElement_t1248;
// System.Collections.ArrayList
struct ArrayList_t772;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t274;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t1594;

// System.Void System.Security.SecurityElement::.ctor(System.String)
 void SecurityElement__ctor_m8653 (SecurityElement_t1248 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
 void SecurityElement__ctor_m8654 (SecurityElement_t1248 * __this, String_t* ___tag, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
 void SecurityElement__cctor_m8655 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
 ArrayList_t772 * SecurityElement_get_Children_m8656 (SecurityElement_t1248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
 String_t* SecurityElement_get_Tag_m8657 (SecurityElement_t1248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
 void SecurityElement_set_Text_m8658 (SecurityElement_t1248 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
 void SecurityElement_AddAttribute_m8659 (SecurityElement_t1248 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
 void SecurityElement_AddChild_m8660 (SecurityElement_t1248 * __this, SecurityElement_t1248 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
 String_t* SecurityElement_Escape_m8661 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
 String_t* SecurityElement_Unescape_m8662 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
 bool SecurityElement_IsValidAttributeName_m8663 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
 bool SecurityElement_IsValidAttributeValue_m8664 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
 bool SecurityElement_IsValidTag_m8665 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
 bool SecurityElement_IsValidText_m8666 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
 SecurityElement_t1248 * SecurityElement_SearchForChildByTag_m8667 (SecurityElement_t1248 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
 String_t* SecurityElement_ToString_m8668 (SecurityElement_t1248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
 void SecurityElement_ToXml_m8669 (SecurityElement_t1248 * __this, StringBuilder_t274 ** ___s, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
 SecurityAttribute_t1594 * SecurityElement_GetAttribute_m8670 (SecurityElement_t1248 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;

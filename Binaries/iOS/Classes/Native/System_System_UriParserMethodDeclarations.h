#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriParser
struct UriParser_t928;
// System.String
struct String_t;
// System.Uri
struct Uri_t786;
// System.UriFormatException
struct UriFormatException_t932;
// System.Collections.Hashtable
struct Hashtable_t759;

// System.Void System.UriParser::.ctor()
 void UriParser__ctor_m4078 (UriParser_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
 void UriParser__cctor_m4079 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
 void UriParser_InitializeAndValidate_m4080 (UriParser_t928 * __this, Uri_t786 * ___uri, UriFormatException_t932 ** ___parsingError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
 void UriParser_OnRegister_m4081 (UriParser_t928 * __this, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
 void UriParser_set_SchemeName_m4082 (UriParser_t928 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
 int32_t UriParser_get_DefaultPort_m4083 (UriParser_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
 void UriParser_set_DefaultPort_m4084 (UriParser_t928 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
 void UriParser_CreateDefaults_m4085 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
 void UriParser_InternalRegister_m4086 (Object_t * __this/* static, unused */, Hashtable_t759 * ___table, UriParser_t928 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
 UriParser_t928 * UriParser_GetParser_m4087 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t488;
// UnityEngine.Object
struct Object_t185;
struct Object_t185_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t412;
struct AsyncOperation_t412_marshaled;

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
 Object_t185 * Resources_Load_m2508 (Object_t * __this/* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
 AsyncOperation_t412 * Resources_UnloadUnusedAssets_m35 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

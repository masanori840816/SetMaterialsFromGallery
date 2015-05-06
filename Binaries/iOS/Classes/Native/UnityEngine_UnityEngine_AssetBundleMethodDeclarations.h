#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t413;
// UnityEngine.Object
struct Object_t185;
struct Object_t185_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t415;

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
 Object_t185 * AssetBundle_LoadAsset_m2046 (AssetBundle_t413 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
 Object_t185 * AssetBundle_LoadAsset_Internal_m2047 (AssetBundle_t413 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
 ObjectU5BU5D_t415* AssetBundle_LoadAssetWithSubAssets_Internal_m2048 (AssetBundle_t413 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t11;
// UnityEngine.Texture
struct Texture_t140;
// System.String
struct String_t;

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
 void Material__ctor_m1894 (Material_t11 * __this, Material_t11 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
 Texture_t140 * Material_get_mainTexture_m1902 (Material_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
 void Material_set_mainTexture_m36 (Material_t11 * __this, Texture_t140 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
 void Material_SetTexture_m2511 (Material_t11 * __this, String_t* ___propertyName, Texture_t140 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
 void Material_SetTexture_m2512 (Material_t11 * __this, int32_t ___nameID, Texture_t140 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
 Texture_t140 * Material_GetTexture_m2513 (Material_t11 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
 Texture_t140 * Material_GetTexture_m2514 (Material_t11 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
 void Material_SetFloat_m2515 (Material_t11 * __this, String_t* ___propertyName, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
 void Material_SetFloat_m2516 (Material_t11 * __this, int32_t ___nameID, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
 void Material_SetInt_m1896 (Material_t11 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
 bool Material_HasProperty_m1890 (Material_t11 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
 bool Material_HasProperty_m2517 (Material_t11 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
 void Material_Internal_CreateWithMaterial_m2518 (Object_t * __this/* static, unused */, Material_t11 * ___mono, Material_t11 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;

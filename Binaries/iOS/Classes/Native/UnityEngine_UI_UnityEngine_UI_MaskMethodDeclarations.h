#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t253;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// UnityEngine.RectTransform
struct RectTransform_t133;
// UnityEngine.Camera
struct Camera_t88;
// UnityEngine.Material
struct Material_t11;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
 void Mask__ctor_m1177 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
 Graphic_t139 * Mask_get_graphic_m1178 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
 bool Mask_get_showMaskGraphic_m1179 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
 void Mask_set_showMaskGraphic_m1180 (Mask_t253 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
 RectTransform_t133 * Mask_get_rectTransform_m1181 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
 bool Mask_MaskEnabled_m1182 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
 void Mask_OnSiblingGraphicEnabledDisabled_m1183 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
 void Mask_NotifyMaskStateChanged_m1184 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
 void Mask_ClearCachedMaterial_m1185 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
 void Mask_OnEnable_m1186 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
 void Mask_OnDisable_m1187 (Mask_t253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
 bool Mask_IsRaycastLocationValid_m1188 (Mask_t253 * __this, Vector2_t84  ___sp, Camera_t88 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
 Material_t11 * Mask_GetModifiedMaterial_m1189 (Mask_t253 * __this, Material_t11 * ___baseMaterial, MethodInfo* method) IL2CPP_METHOD_ATTR;

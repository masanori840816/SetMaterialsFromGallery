#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t11;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// UnityEngine.RectTransform
struct RectTransform_t133;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct Mask_t253  : public UIBehaviour_t26
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t11 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t139 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t133 * ___m_RectTransform_5;
};

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Canvas
struct Canvas_t135;
// UnityEngine.Camera
struct Camera_t88;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t323;
// UnityEngine.Material
struct Material_t11;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_add_willRenderCanvases_m1498 (Object_t * __this/* static, unused */, WillRenderCanvases_t323 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_remove_willRenderCanvases_m2781 (Object_t * __this/* static, unused */, WillRenderCanvases_t323 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
 int32_t Canvas_get_renderMode_m1579 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
 bool Canvas_get_isRootCanvas_m1930 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
 Camera_t88 * Canvas_get_worldCamera_m1583 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
 float Canvas_get_scaleFactor_m1900 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
 void Canvas_set_scaleFactor_m1934 (Canvas_t135 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
 float Canvas_get_referencePixelsPerUnit_m1624 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
 void Canvas_set_referencePixelsPerUnit_m1935 (Canvas_t135 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
 bool Canvas_get_pixelPerfect_m1562 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
 int32_t Canvas_get_renderOrder_m1581 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
 int32_t Canvas_get_sortingOrder_m1580 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
 int32_t Canvas_get_sortingLayerID_m1599 (Canvas_t135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
 Material_t11 * Canvas_GetDefaultCanvasMaterial_m1524 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
 Material_t11 * Canvas_GetDefaultCanvasTextMaterial_m1896 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
 void Canvas_SendWillRenderCanvases_m2782 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
 void Canvas_ForceUpdateCanvases_m1829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

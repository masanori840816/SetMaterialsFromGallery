#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t134;
// UnityEngine.Material
struct Material_t11;
// UnityEngine.Texture
struct Texture_t140;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t141;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t179;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
 void CanvasRenderer_SetColor_m1570 (CanvasRenderer_t134 * __this, Color_t108  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
 void CanvasRenderer_INTERNAL_CALL_SetColor_m2791 (Object_t * __this/* static, unused */, CanvasRenderer_t134 * ___self, Color_t108 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
 Color_t108  CanvasRenderer_GetColor_m1568 (CanvasRenderer_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
 void CanvasRenderer_set_isMask_m1992 (CanvasRenderer_t134 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
 void CanvasRenderer_SetMaterial_m1555 (CanvasRenderer_t134 * __this, Material_t11 * ___material, Texture_t140 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void CanvasRenderer_SetVertices_m1553 (CanvasRenderer_t134 * __this, List_1_t141 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
 void CanvasRenderer_SetVerticesInternal_m2792 (CanvasRenderer_t134 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVertices_m1718 (CanvasRenderer_t134 * __this, UIVertexU5BU5D_t179* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVerticesInternalArray_m2793 (CanvasRenderer_t134 * __this, UIVertexU5BU5D_t179* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
 void CanvasRenderer_Clear_m1546 (CanvasRenderer_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
 int32_t CanvasRenderer_get_absoluteDepth_m1528 (CanvasRenderer_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

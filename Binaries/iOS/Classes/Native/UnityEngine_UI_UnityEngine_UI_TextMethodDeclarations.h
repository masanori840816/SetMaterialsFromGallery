#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Text
struct Text_t131;
// UnityEngine.TextGenerator
struct TextGenerator_t180;
// UnityEngine.Material
struct Material_t11;
// UnityEngine.Texture
struct Texture_t140;
// UnityEngine.Font
struct Font_t127;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t141;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Text::.ctor()
 void Text__ctor_m914 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::.cctor()
 void Text__cctor_m915 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
 TextGenerator_t180 * Text_get_cachedTextGenerator_m916 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGeneratorForLayout()
 TextGenerator_t180 * Text_get_cachedTextGeneratorForLayout_m917 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Text::get_defaultMaterial()
 Material_t11 * Text_get_defaultMaterial_m918 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Text::get_mainTexture()
 Texture_t140 * Text_get_mainTexture_m919 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::FontTextureChanged()
 void Text_FontTextureChanged_m920 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
 Font_t127 * Text_get_font_m921 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
 void Text_set_font_m922 (Text_t131 * __this, Font_t127 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Text::get_text()
 String_t* Text_get_text_m923 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_text(System.String)
 void Text_set_text_m924 (Text_t131 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
 bool Text_get_supportRichText_m925 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
 void Text_set_supportRichText_m926 (Text_t131 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
 bool Text_get_resizeTextForBestFit_m927 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
 void Text_set_resizeTextForBestFit_m928 (Text_t131 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMinSize()
 int32_t Text_get_resizeTextMinSize_m929 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
 void Text_set_resizeTextMinSize_m930 (Text_t131 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
 int32_t Text_get_resizeTextMaxSize_m931 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
 void Text_set_resizeTextMaxSize_m932 (Text_t131 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
 int32_t Text_get_alignment_m933 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
 void Text_set_alignment_m934 (Text_t131 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
 int32_t Text_get_fontSize_m935 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
 void Text_set_fontSize_m936 (Text_t131 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
 int32_t Text_get_horizontalOverflow_m937 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
 void Text_set_horizontalOverflow_m938 (Text_t131 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.Text::get_verticalOverflow()
 int32_t Text_get_verticalOverflow_m939 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_verticalOverflow(UnityEngine.VerticalWrapMode)
 void Text_set_verticalOverflow_m940 (Text_t131 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
 float Text_get_lineSpacing_m941 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
 void Text_set_lineSpacing_m942 (Text_t131 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
 int32_t Text_get_fontStyle_m943 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
 void Text_set_fontStyle_m944 (Text_t131 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_pixelsPerUnit()
 float Text_get_pixelsPerUnit_m945 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnEnable()
 void Text_OnEnable_m946 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnDisable()
 void Text_OnDisable_m947 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::UpdateGeometry()
 void Text_UpdateGeometry_m948 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
 TextGenerationSettings_t216  Text_GetGenerationSettings_m949 (Text_t131 * __this, Vector2_t84  ___extents, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Text::GetTextAnchorPivot(UnityEngine.TextAnchor)
 Vector2_t84  Text_GetTextAnchorPivot_m950 (Object_t * __this/* static, unused */, int32_t ___anchor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Text_OnFillVBO_m951 (Text_t131 * __this, List_1_t141 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputHorizontal()
 void Text_CalculateLayoutInputHorizontal_m952 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputVertical()
 void Text_CalculateLayoutInputVertical_m953 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minWidth()
 float Text_get_minWidth_m954 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredWidth()
 float Text_get_preferredWidth_m955 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleWidth()
 float Text_get_flexibleWidth_m956 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minHeight()
 float Text_get_minHeight_m957 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredHeight()
 float Text_get_preferredHeight_m958 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleHeight()
 float Text_get_flexibleHeight_m959 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_layoutPriority()
 int32_t Text_get_layoutPriority_m960 (Text_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

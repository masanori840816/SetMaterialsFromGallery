#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Match
struct Match_t864;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t871;
// System.Text.RegularExpressions.Regex
struct Regex_t865;
// System.Text.RegularExpressions.IMachine
struct IMachine_t872;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Match::.ctor()
 void Match__ctor_m3686 (Match_t864 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void Match__ctor_m3687 (Match_t864 * __this, Regex_t865 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void Match__ctor_m3688 (Match_t864 * __this, Regex_t865 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
 void Match__cctor_m3689 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
 Match_t864 * Match_get_Empty_m3690 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
 GroupCollection_t871 * Match_get_Groups_m3691 (Match_t864 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
 Match_t864 * Match_NextMatch_m3692 (Match_t864 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
 Regex_t865 * Match_get_Regex_m3693 (Match_t864 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

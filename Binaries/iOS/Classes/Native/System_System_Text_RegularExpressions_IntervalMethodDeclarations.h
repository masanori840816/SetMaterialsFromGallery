#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interval
struct Interval_t901;
struct Interval_t901_marshaled;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
 void Interval__ctor_m3838 (Interval_t901 * __this, int32_t ___low, int32_t ___high, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
 Interval_t901  Interval_get_Empty_m3839 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
 bool Interval_get_IsDiscontiguous_m3840 (Interval_t901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
 bool Interval_get_IsSingleton_m3841 (Interval_t901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
 bool Interval_get_IsEmpty_m3842 (Interval_t901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
 int32_t Interval_get_Size_m3843 (Interval_t901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
 bool Interval_IsDisjoint_m3844 (Interval_t901 * __this, Interval_t901  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
 bool Interval_IsAdjacent_m3845 (Interval_t901 * __this, Interval_t901  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
 bool Interval_Contains_m3846 (Interval_t901 * __this, Interval_t901  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
 bool Interval_Contains_m3847 (Interval_t901 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
 bool Interval_Intersects_m3848 (Interval_t901 * __this, Interval_t901  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
 void Interval_Merge_m3849 (Interval_t901 * __this, Interval_t901  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
 int32_t Interval_CompareTo_m3850 (Interval_t901 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Interval_t901_marshal(const Interval_t901& unmarshaled, Interval_t901_marshaled& marshaled);
void Interval_t901_marshal_back(const Interval_t901_marshaled& marshaled, Interval_t901& unmarshaled);
void Interval_t901_marshal_cleanup(Interval_t901_marshaled& marshaled);

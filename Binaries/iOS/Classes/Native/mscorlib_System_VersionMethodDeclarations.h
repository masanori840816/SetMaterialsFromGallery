﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Version
struct Version_t797;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Version::.ctor()
 void Version__ctor_m9741 (Version_t797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
 void Version__ctor_m9742 (Version_t797 * __this, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
 void Version__ctor_m4154 (Version_t797 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
 void Version__ctor_m9743 (Version_t797 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void Version_CheckedSet_m9744 (Version_t797 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
 int32_t Version_get_Build_m9745 (Version_t797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
 int32_t Version_get_Major_m9746 (Version_t797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
 int32_t Version_get_Minor_m9747 (Version_t797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
 int32_t Version_get_Revision_m9748 (Version_t797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
 int32_t Version_CompareTo_m9749 (Version_t797 * __this, Object_t * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
 bool Version_Equals_m9750 (Version_t797 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
 int32_t Version_CompareTo_m9751 (Version_t797 * __this, Version_t797 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
 bool Version_Equals_m9752 (Version_t797 * __this, Version_t797 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
 int32_t Version_GetHashCode_m9753 (Version_t797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
 String_t* Version_ToString_m9754 (Version_t797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
 Version_t797 * Version_CreateFromString_m9755 (Object_t * __this/* static, unused */, String_t* ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
 bool Version_op_Equality_m9756 (Object_t * __this/* static, unused */, Version_t797 * ___v1, Version_t797 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
 bool Version_op_Inequality_m9757 (Object_t * __this/* static, unused */, Version_t797 * ___v1, Version_t797 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;

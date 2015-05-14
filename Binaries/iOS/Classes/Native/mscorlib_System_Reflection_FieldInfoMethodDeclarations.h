#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.FieldInfo
struct FieldInfo_t1162;
// System.Type
struct Type_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t1362;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t671;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.FieldInfo::.ctor()
 void FieldInfo__ctor_m7677 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
 int32_t FieldInfo_get_MemberType_m7678 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
 bool FieldInfo_get_IsLiteral_m7679 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
 bool FieldInfo_get_IsStatic_m7680 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
 bool FieldInfo_get_IsNotSerialized_m7681 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
 void FieldInfo_SetValue_m7682 (FieldInfo_t1162 * __this, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
 FieldInfo_t1162 * FieldInfo_internal_from_handle_type_m7683 (Object_t * __this/* static, unused */, IntPtr_t173 ___field_handle, IntPtr_t173 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
 FieldInfo_t1162 * FieldInfo_GetFieldFromHandle_m7684 (Object_t * __this/* static, unused */, RuntimeFieldHandle_t1166  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
 int32_t FieldInfo_GetFieldOffset_m7685 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
 UnmanagedMarshal_t1362 * FieldInfo_GetUnmanagedMarshal_m7686 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
 UnmanagedMarshal_t1362 * FieldInfo_get_UMarshal_m7687 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t295* FieldInfo_GetPseudoCustomAttributes_m7688 (FieldInfo_t1162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

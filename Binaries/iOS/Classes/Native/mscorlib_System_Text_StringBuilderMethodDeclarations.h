#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.StringBuilder
struct StringBuilder_t274;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t178;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m8809 (StringBuilder_t274 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m8810 (StringBuilder_t274 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
 void StringBuilder__ctor_m1281 (StringBuilder_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
 void StringBuilder__ctor_m3077 (StringBuilder_t274 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
 void StringBuilder__ctor_m1405 (StringBuilder_t274 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
 void StringBuilder__ctor_m4147 (StringBuilder_t274 * __this, String_t* ___value, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder__ctor_m8811 (StringBuilder_t274 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m8812 (StringBuilder_t274 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
 int32_t StringBuilder_get_Capacity_m8813 (StringBuilder_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
 void StringBuilder_set_Capacity_m8814 (StringBuilder_t274 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
 int32_t StringBuilder_get_Length_m4339 (StringBuilder_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
 void StringBuilder_set_Length_m4440 (StringBuilder_t274 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
 uint16_t StringBuilder_get_Chars_m8815 (StringBuilder_t274 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
 void StringBuilder_set_Chars_m8816 (StringBuilder_t274 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
 String_t* StringBuilder_ToString_m1285 (StringBuilder_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
 String_t* StringBuilder_ToString_m8817 (StringBuilder_t274 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
 StringBuilder_t274 * StringBuilder_Remove_m8818 (StringBuilder_t274 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
 StringBuilder_t274 * StringBuilder_Replace_m8819 (StringBuilder_t274 * __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
 StringBuilder_t274 * StringBuilder_Replace_m8820 (StringBuilder_t274 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
 StringBuilder_t274 * StringBuilder_Append_m3081 (StringBuilder_t274 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
 StringBuilder_t274 * StringBuilder_Append_m4232 (StringBuilder_t274 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
 StringBuilder_t274 * StringBuilder_Append_m4168 (StringBuilder_t274 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
 StringBuilder_t274 * StringBuilder_Append_m4148 (StringBuilder_t274 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
 StringBuilder_t274 * StringBuilder_Append_m1742 (StringBuilder_t274 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
 StringBuilder_t274 * StringBuilder_Append_m8821 (StringBuilder_t274 * __this, uint16_t ___value, int32_t ___repeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
 StringBuilder_t274 * StringBuilder_Append_m8822 (StringBuilder_t274 * __this, CharU5BU5D_t178* ___value, int32_t ___startIndex, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
 StringBuilder_t274 * StringBuilder_Append_m8823 (StringBuilder_t274 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
 StringBuilder_t274 * StringBuilder_AppendLine_m1284 (StringBuilder_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
 StringBuilder_t274 * StringBuilder_AppendLine_m1283 (StringBuilder_t274 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
 StringBuilder_t274 * StringBuilder_AppendFormat_m5260 (StringBuilder_t274 * __this, String_t* ___format, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
 StringBuilder_t274 * StringBuilder_AppendFormat_m8824 (StringBuilder_t274 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
 StringBuilder_t274 * StringBuilder_AppendFormat_m4167 (StringBuilder_t274 * __this, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
 StringBuilder_t274 * StringBuilder_AppendFormat_m4260 (StringBuilder_t274 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
 StringBuilder_t274 * StringBuilder_AppendFormat_m4263 (StringBuilder_t274 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
 StringBuilder_t274 * StringBuilder_Insert_m8825 (StringBuilder_t274 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
 StringBuilder_t274 * StringBuilder_Insert_m8826 (StringBuilder_t274 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
 StringBuilder_t274 * StringBuilder_Insert_m8827 (StringBuilder_t274 * __this, int32_t ___index, String_t* ___value, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
 void StringBuilder_InternalEnsureCapacity_m8828 (StringBuilder_t274 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;

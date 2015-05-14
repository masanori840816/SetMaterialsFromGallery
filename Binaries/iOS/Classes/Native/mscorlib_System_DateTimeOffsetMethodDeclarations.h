#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeOffset
struct DateTimeOffset_t1657;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
 void DateTimeOffset__ctor_m9335 (DateTimeOffset_t1657 * __this, DateTime_t458  ___dateTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
 void DateTimeOffset__ctor_m9336 (DateTimeOffset_t1657 * __this, DateTime_t458  ___dateTime, TimeSpan_t846  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
 void DateTimeOffset__ctor_m9337 (DateTimeOffset_t1657 * __this, int64_t ___ticks, TimeSpan_t846  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset__ctor_m9338 (DateTimeOffset_t1657 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
 void DateTimeOffset__cctor_m9339 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
 int32_t DateTimeOffset_System_IComparable_CompareTo_m9340 (DateTimeOffset_t1657 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m9341 (DateTimeOffset_t1657 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m9342 (DateTimeOffset_t1657 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
 int32_t DateTimeOffset_CompareTo_m9343 (DateTimeOffset_t1657 * __this, DateTimeOffset_t1657  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
 bool DateTimeOffset_Equals_m9344 (DateTimeOffset_t1657 * __this, DateTimeOffset_t1657  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
 bool DateTimeOffset_Equals_m9345 (DateTimeOffset_t1657 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
 int32_t DateTimeOffset_GetHashCode_m9346 (DateTimeOffset_t1657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
 String_t* DateTimeOffset_ToString_m9347 (DateTimeOffset_t1657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
 String_t* DateTimeOffset_ToString_m9348 (DateTimeOffset_t1657 * __this, String_t* ___format, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
 DateTime_t458  DateTimeOffset_get_DateTime_m9349 (DateTimeOffset_t1657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
 TimeSpan_t846  DateTimeOffset_get_Offset_m9350 (DateTimeOffset_t1657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
 DateTime_t458  DateTimeOffset_get_UtcDateTime_m9351 (DateTimeOffset_t1657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

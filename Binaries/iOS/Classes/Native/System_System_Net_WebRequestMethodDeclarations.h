﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebRequest
struct WebRequest_t785;
// System.Net.IWebProxy
struct IWebProxy_t788;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.String
struct String_t;
// System.Exception
struct Exception_t304;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
 void WebRequest__ctor_m3424 (WebRequest_t785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest__ctor_m3425 (WebRequest_t785 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
 void WebRequest__cctor_m3426 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3427 (WebRequest_t785 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
 void WebRequest_AddDynamicPrefix_m3428 (Object_t * __this/* static, unused */, String_t* ___protocol, String_t* ___implementor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
 Exception_t304 * WebRequest_GetMustImplement_m3429 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
 Object_t * WebRequest_get_DefaultWebProxy_m3430 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
 Object_t * WebRequest_GetDefaultWebProxy_m3431 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_GetObjectData_m3432 (WebRequest_t785 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
 void WebRequest_AddPrefix_m3433 (Object_t * __this/* static, unused */, String_t* ___prefix, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;

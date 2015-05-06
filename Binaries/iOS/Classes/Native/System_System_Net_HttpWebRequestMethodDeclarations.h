#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t800;
// System.Uri
struct Uri_t786;
// System.Net.ServicePoint
struct ServicePoint_t783;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
 void HttpWebRequest__ctor_m3323 (HttpWebRequest_t800 * __this, Uri_t786 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest__ctor_m3324 (HttpWebRequest_t800 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
 void HttpWebRequest__cctor_m3325 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3326 (HttpWebRequest_t800 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
 Uri_t786 * HttpWebRequest_get_Address_m3327 (HttpWebRequest_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
 ServicePoint_t783 * HttpWebRequest_get_ServicePoint_m3328 (HttpWebRequest_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
 ServicePoint_t783 * HttpWebRequest_GetServicePoint_m3329 (HttpWebRequest_t800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_GetObjectData_m3330 (HttpWebRequest_t800 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;

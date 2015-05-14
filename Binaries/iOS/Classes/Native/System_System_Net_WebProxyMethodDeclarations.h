#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t811;
// System.Uri
struct Uri_t786;
// System.String[]
struct StringU5BU5D_t9;
// System.Net.ICredentials
struct ICredentials_t810;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
 void WebProxy__ctor_m3415 (WebProxy_t811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
 void WebProxy__ctor_m3416 (WebProxy_t811 * __this, Uri_t786 * ___address, bool ___bypassOnLocal, StringU5BU5D_t9* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy__ctor_m3417 (WebProxy_t811 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m3418 (WebProxy_t811 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
 bool WebProxy_get_UseDefaultCredentials_m3419 (WebProxy_t811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
 Uri_t786 * WebProxy_GetProxy_m3420 (WebProxy_t811 * __this, Uri_t786 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
 bool WebProxy_IsBypassed_m3421 (WebProxy_t811 * __this, Uri_t786 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_GetObjectData_m3422 (WebProxy_t811 * __this, SerializationInfo_t572 * ___serializationInfo, StreamingContext_t573  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
 void WebProxy_CheckBypassList_m3423 (WebProxy_t811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

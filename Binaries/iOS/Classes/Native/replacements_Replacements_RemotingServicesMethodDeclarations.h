#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Replacements.RemotingServices
struct RemotingServices_t990;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t991;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t295;

// System.Runtime.Remoting.Messaging.IMessageSink Replacements.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
 Object_t * RemotingServices_GetClientChannelSinkChain_m4441 (Object_t * __this/* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Replacements.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
 Object_t * RemotingServices_CreateClientProxy_m4442 (Object_t * __this/* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t295* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;

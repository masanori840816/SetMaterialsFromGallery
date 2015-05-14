#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1464;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1474;
// System.Reflection.MethodBase
struct MethodBase_t676;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t304;

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
 ObjectU5BU5D_t295* MonoMethodMessage_get_Args_m8062 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
 LogicalCallContext_t1474 * MonoMethodMessage_get_LogicalCallContext_m8063 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
 MethodBase_t676 * MonoMethodMessage_get_MethodBase_m8064 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
 String_t* MonoMethodMessage_get_MethodName_m8065 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
 Object_t * MonoMethodMessage_get_MethodSignature_m8066 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
 String_t* MonoMethodMessage_get_TypeName_m8067 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
 String_t* MonoMethodMessage_get_Uri_m8068 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
 void MonoMethodMessage_set_Uri_m8069 (MonoMethodMessage_t1464 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
 Exception_t304 * MonoMethodMessage_get_Exception_m8070 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
 int32_t MonoMethodMessage_get_OutArgCount_m8071 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
 ObjectU5BU5D_t295* MonoMethodMessage_get_OutArgs_m8072 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
 Object_t * MonoMethodMessage_get_ReturnValue_m8073 (MonoMethodMessage_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

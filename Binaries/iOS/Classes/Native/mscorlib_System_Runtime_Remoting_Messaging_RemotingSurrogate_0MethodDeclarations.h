#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t1484;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1485;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1482;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
 void RemotingSurrogateSelector__ctor_m8078 (RemotingSurrogateSelector_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
 void RemotingSurrogateSelector__cctor_m8079 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
 Object_t * RemotingSurrogateSelector_GetSurrogate_m8080 (RemotingSurrogateSelector_t1484 * __this, Type_t * ___type, StreamingContext_t573  ___context, Object_t ** ___ssout, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t1460;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1448;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1449;

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
 void SynchronizationAttribute__ctor_m7958 (SynchronizationAttribute_t1460 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
 void SynchronizationAttribute__ctor_m7959 (SynchronizationAttribute_t1460 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
 void SynchronizationAttribute_set_Locked_m7960 (SynchronizationAttribute_t1460 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
 void SynchronizationAttribute_ReleaseLock_m7961 (SynchronizationAttribute_t1460 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void SynchronizationAttribute_GetPropertiesForNewContext_m7962 (SynchronizationAttribute_t1460 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool SynchronizationAttribute_IsContextOK_m7963 (SynchronizationAttribute_t1460 * __this, Context_t1449 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
 void SynchronizationAttribute_ExitContext_m7964 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
 void SynchronizationAttribute_EnterContext_m7965 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t991;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1441;
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t1494  : public RealProxy_t1489
{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	Object_t * ____sink_7;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_8;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t1441 * ____ctorCall_9;
};
struct RemotingProxy_t1494_StaticFields{
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t582 * ____cache_GetTypeMethod_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t582 * ____cache_GetHashCodeMethod_6;
};

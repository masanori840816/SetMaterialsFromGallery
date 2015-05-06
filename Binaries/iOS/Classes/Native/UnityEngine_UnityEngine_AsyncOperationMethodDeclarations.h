#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t412;
struct AsyncOperation_t412_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
 void AsyncOperation__ctor_m2535 (AsyncOperation_t412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
 void AsyncOperation_InternalDestroy_m2536 (AsyncOperation_t412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
 void AsyncOperation_Finalize_m2537 (AsyncOperation_t412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t412_marshal(const AsyncOperation_t412& unmarshaled, AsyncOperation_t412_marshaled& marshaled);
void AsyncOperation_t412_marshal_back(const AsyncOperation_t412_marshaled& marshaled, AsyncOperation_t412& unmarshaled);
void AsyncOperation_t412_marshal_cleanup(AsyncOperation_t412_marshaled& marshaled);

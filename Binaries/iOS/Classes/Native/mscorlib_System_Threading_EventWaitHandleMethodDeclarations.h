#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.EventWaitHandle
struct EventWaitHandle_t1626;
// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetMode.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
 void EventWaitHandle__ctor_m8925 (EventWaitHandle_t1626 * __this, bool ___initialState, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
 bool EventWaitHandle_IsManualReset_m8926 (EventWaitHandle_t1626 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
 bool EventWaitHandle_Reset_m5384 (EventWaitHandle_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
 bool EventWaitHandle_Set_m5382 (EventWaitHandle_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

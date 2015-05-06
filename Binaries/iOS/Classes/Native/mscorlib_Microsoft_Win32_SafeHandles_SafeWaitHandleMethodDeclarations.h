#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1186;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
 void SafeWaitHandle__ctor_m6235 (SafeWaitHandle_t1186 * __this, IntPtr_t173 ___existingHandle, bool ___ownsHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.SafeHandles.SafeWaitHandle::ReleaseHandle()
 bool SafeWaitHandle_ReleaseHandle_m6236 (SafeWaitHandle_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

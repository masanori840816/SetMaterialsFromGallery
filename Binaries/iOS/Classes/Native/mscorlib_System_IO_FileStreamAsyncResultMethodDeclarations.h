#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1335;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1074;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IAsyncResult
struct IAsyncResult_t38;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m7217 (FileStreamAsyncResult_t1335 * __this, AsyncCallback_t39 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m7218 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m7219 (FileStreamAsyncResult_t1335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1074 * FileStreamAsyncResult_get_AsyncWaitHandle_m7220 (FileStreamAsyncResult_t1335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m7221 (FileStreamAsyncResult_t1335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

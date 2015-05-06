#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackTrace
struct StackTrace_t571;
// System.Exception
struct Exception_t304;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1304;
// System.Diagnostics.StackFrame
struct StackFrame_t675;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
 void StackTrace__ctor_m6932 (StackTrace_t571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
 void StackTrace__ctor_m3069 (StackTrace_t571 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
 void StackTrace__ctor_m6933 (StackTrace_t571 * __this, Exception_t304 * ___e, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
 void StackTrace__ctor_m6934 (StackTrace_t571 * __this, Exception_t304 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
 void StackTrace__ctor_m6935 (StackTrace_t571 * __this, Exception_t304 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
 void StackTrace_init_frames_m6936 (StackTrace_t571 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
 StackFrameU5BU5D_t1304* StackTrace_get_trace_m6937 (Object_t * __this/* static, unused */, Exception_t304 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
 int32_t StackTrace_get_FrameCount_m3093 (StackTrace_t571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
 StackFrame_t675 * StackTrace_GetFrame_m3084 (StackTrace_t571 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
 String_t* StackTrace_ToString_m6938 (StackTrace_t571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

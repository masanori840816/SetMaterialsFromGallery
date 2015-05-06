#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream/WriteDelegate
struct WriteDelegate_t1334;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
 void WriteDelegate__ctor_m7174 (WriteDelegate_t1334 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
 void WriteDelegate_Invoke_m7175 (WriteDelegate_t1334 * __this, ByteU5BU5D_t17* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WriteDelegate_BeginInvoke_m7176 (WriteDelegate_t1334 * __this, ByteU5BU5D_t17* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
 void WriteDelegate_EndInvoke_m7177 (WriteDelegate_t1334 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;

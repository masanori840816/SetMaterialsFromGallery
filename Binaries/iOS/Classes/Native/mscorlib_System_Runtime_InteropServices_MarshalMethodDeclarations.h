#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.Marshal
struct Marshal_t1433;
// System.Array
struct Array_t;
// System.Char[]
struct CharU5BU5D_t178;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
 void Marshal__cctor_m7900 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
 void Marshal_copy_from_unmanaged_m7901 (Object_t * __this/* static, unused */, IntPtr_t173 ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
 void Marshal_Copy_m7902 (Object_t * __this/* static, unused */, IntPtr_t173 ___source, CharU5BU5D_t178* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;

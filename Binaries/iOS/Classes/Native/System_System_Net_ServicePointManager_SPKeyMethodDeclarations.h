#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/SPKey
struct SPKey_t805;
// System.Uri
struct Uri_t786;
// System.Object
struct Object_t;

// System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Boolean)
 void SPKey__ctor_m3387 (SPKey_t805 * __this, Uri_t786 * ___uri, bool ___use_connect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
 int32_t SPKey_GetHashCode_m3388 (SPKey_t805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
 bool SPKey_Equals_m3389 (SPKey_t805 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;

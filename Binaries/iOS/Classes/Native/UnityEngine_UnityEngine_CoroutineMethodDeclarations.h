#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t181;
struct Coroutine_t181_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
 void Coroutine__ctor_m2059 (Coroutine_t181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
 void Coroutine_ReleaseCoroutine_m2060 (Coroutine_t181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
 void Coroutine_Finalize_m2061 (Coroutine_t181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t181_marshal(const Coroutine_t181& unmarshaled, Coroutine_t181_marshaled& marshaled);
void Coroutine_t181_marshal_back(const Coroutine_t181_marshaled& marshaled, Coroutine_t181& unmarshaled);
void Coroutine_t181_marshal_cleanup(Coroutine_t181_marshaled& marshaled);

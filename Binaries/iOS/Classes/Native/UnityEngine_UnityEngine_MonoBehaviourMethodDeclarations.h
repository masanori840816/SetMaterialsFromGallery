#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.Coroutine
struct Coroutine_t181;
struct Coroutine_t181_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t112;

// System.Void UnityEngine.MonoBehaviour::.ctor()
 void MonoBehaviour__ctor_m5 (MonoBehaviour_t2 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
 Coroutine_t181 * MonoBehaviour_StartCoroutine_m1491 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
 Coroutine_t181 * MonoBehaviour_StartCoroutine_Auto_m2600 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutine_m2601 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_m1810 (MonoBehaviour_t2 * __this, Coroutine_t181 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2602 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_Auto_m2603 (MonoBehaviour_t2 * __this, Coroutine_t181 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;

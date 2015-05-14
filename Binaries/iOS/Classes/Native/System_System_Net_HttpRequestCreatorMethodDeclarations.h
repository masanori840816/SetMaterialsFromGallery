#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t796;
// System.Net.WebRequest
struct WebRequest_t785;
// System.Uri
struct Uri_t786;

// System.Void System.Net.HttpRequestCreator::.ctor()
 void HttpRequestCreator__ctor_m3325 (HttpRequestCreator_t796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
 WebRequest_t785 * HttpRequestCreator_Create_m3326 (HttpRequestCreator_t796 * __this, Uri_t786 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t930;
struct UriScheme_t930_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
 void UriScheme__ctor_m4025 (UriScheme_t930 * __this, String_t* ___s, String_t* ___d, int32_t ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t930_marshal(const UriScheme_t930& unmarshaled, UriScheme_t930_marshaled& marshaled);
void UriScheme_t930_marshal_back(const UriScheme_t930_marshaled& marshaled, UriScheme_t930& unmarshaled);
void UriScheme_t930_marshal_cleanup(UriScheme_t930_marshaled& marshaled);

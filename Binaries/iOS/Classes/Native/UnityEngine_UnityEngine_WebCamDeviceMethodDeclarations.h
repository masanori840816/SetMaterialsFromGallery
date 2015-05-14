#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t519;
struct WebCamDevice_t519_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
 String_t* WebCamDevice_get_name_m2686 (WebCamDevice_t519 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
 bool WebCamDevice_get_isFrontFacing_m2687 (WebCamDevice_t519 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t519_marshal(const WebCamDevice_t519& unmarshaled, WebCamDevice_t519_marshaled& marshaled);
void WebCamDevice_t519_marshal_back(const WebCamDevice_t519_marshaled& marshaled, WebCamDevice_t519& unmarshaled);
void WebCamDevice_t519_marshal_cleanup(WebCamDevice_t519_marshaled& marshaled);

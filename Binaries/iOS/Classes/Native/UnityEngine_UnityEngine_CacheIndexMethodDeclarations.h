#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t494;
struct CacheIndex_t494_marshaled;

void CacheIndex_t494_marshal(const CacheIndex_t494& unmarshaled, CacheIndex_t494_marshaled& marshaled);
void CacheIndex_t494_marshal_back(const CacheIndex_t494_marshaled& marshaled, CacheIndex_t494& unmarshaled);
void CacheIndex_t494_marshal_cleanup(CacheIndex_t494_marshaled& marshaled);

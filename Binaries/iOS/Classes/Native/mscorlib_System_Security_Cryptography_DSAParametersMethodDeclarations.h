#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t966;
struct DSAParameters_t966_marshaled;

void DSAParameters_t966_marshal(const DSAParameters_t966& unmarshaled, DSAParameters_t966_marshaled& marshaled);
void DSAParameters_t966_marshal_back(const DSAParameters_t966_marshaled& marshaled, DSAParameters_t966& unmarshaled);
void DSAParameters_t966_marshal_cleanup(DSAParameters_t966_marshaled& marshaled);

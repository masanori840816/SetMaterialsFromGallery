#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t964;
struct RSAParameters_t964_marshaled;

void RSAParameters_t964_marshal(const RSAParameters_t964& unmarshaled, RSAParameters_t964_marshaled& marshaled);
void RSAParameters_t964_marshal_back(const RSAParameters_t964_marshaled& marshaled, RSAParameters_t964& unmarshaled);
void RSAParameters_t964_marshal_cleanup(RSAParameters_t964_marshaled& marshaled);

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t1227;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
 void EncryptedPrivateKeyInfo__ctor_m6522 (EncryptedPrivateKeyInfo_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
 void EncryptedPrivateKeyInfo__ctor_m6523 (EncryptedPrivateKeyInfo_t1227 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
 String_t* EncryptedPrivateKeyInfo_get_Algorithm_m6524 (EncryptedPrivateKeyInfo_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
 ByteU5BU5D_t17* EncryptedPrivateKeyInfo_get_EncryptedData_m6525 (EncryptedPrivateKeyInfo_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
 ByteU5BU5D_t17* EncryptedPrivateKeyInfo_get_Salt_m6526 (EncryptedPrivateKeyInfo_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
 int32_t EncryptedPrivateKeyInfo_get_IterationCount_m6527 (EncryptedPrivateKeyInfo_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
 void EncryptedPrivateKeyInfo_Decode_m6528 (EncryptedPrivateKeyInfo_t1227 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;

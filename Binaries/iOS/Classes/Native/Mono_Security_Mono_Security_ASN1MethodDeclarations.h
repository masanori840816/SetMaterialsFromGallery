#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1
struct ASN1_t829;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
 void ASN1__ctor_m4227 (ASN1_t829 * __this, uint8_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
 void ASN1__ctor_m4228 (ASN1_t829 * __this, uint8_t ___tag, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
 void ASN1__ctor_m4211 (ASN1_t829 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
 int32_t ASN1_get_Count_m4215 (ASN1_t829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
 uint8_t ASN1_get_Tag_m4212 (ASN1_t829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
 int32_t ASN1_get_Length_m4245 (ASN1_t829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
 ByteU5BU5D_t17* ASN1_get_Value_m4214 (ASN1_t829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
 void ASN1_set_Value_m4525 (ASN1_t829 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
 bool ASN1_CompareArray_m4526 (ASN1_t829 * __this, ByteU5BU5D_t17* ___array1, ByteU5BU5D_t17* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
 bool ASN1_CompareValue_m4244 (ASN1_t829 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
 ASN1_t829 * ASN1_Add_m4229 (ASN1_t829 * __this, ASN1_t829 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
 ByteU5BU5D_t17* ASN1_GetBytes_m4231 (ASN1_t829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
 void ASN1_Decode_m4527 (ASN1_t829 * __this, ByteU5BU5D_t17* ___asn1, int32_t* ___anPos, int32_t ___anLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
 void ASN1_DecodeTLV_m4528 (ASN1_t829 * __this, ByteU5BU5D_t17* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t17** ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
 ASN1_t829 * ASN1_get_Item_m4216 (ASN1_t829 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
 ASN1_t829 * ASN1_Element_m4529 (ASN1_t829 * __this, int32_t ___index, uint8_t ___anTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
 String_t* ASN1_ToString_m4530 (ASN1_t829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

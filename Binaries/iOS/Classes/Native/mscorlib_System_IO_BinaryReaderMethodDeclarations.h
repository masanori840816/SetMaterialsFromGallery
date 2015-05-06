#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryReader
struct BinaryReader_t1320;
// System.IO.Stream
struct Stream_t1057;
// System.Text.Encoding
struct Encoding_t970;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Char[]
struct CharU5BU5D_t178;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
 void BinaryReader__ctor_m7120 (BinaryReader_t1320 * __this, Stream_t1057 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void BinaryReader__ctor_m7121 (BinaryReader_t1320 * __this, Stream_t1057 * ___input, Encoding_t970 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
 void BinaryReader_System_IDisposable_Dispose_m7122 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
 void BinaryReader_Dispose_m7123 (BinaryReader_t1320 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
 void BinaryReader_FillBuffer_m7124 (BinaryReader_t1320 * __this, int32_t ___numBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
 int32_t BinaryReader_Read_m7125 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m7126 (BinaryReader_t1320 * __this, ByteU5BU5D_t17* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m7127 (BinaryReader_t1320 * __this, CharU5BU5D_t178* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
 int32_t BinaryReader_ReadCharBytes_m7128 (BinaryReader_t1320 * __this, CharU5BU5D_t178* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
 int32_t BinaryReader_Read7BitEncodedInt_m7129 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
 bool BinaryReader_ReadBoolean_m7130 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
 uint8_t BinaryReader_ReadByte_m7131 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
 uint16_t BinaryReader_ReadChar_m7132 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
 Decimal_t1145  BinaryReader_ReadDecimal_m7133 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
 double BinaryReader_ReadDouble_m7134 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
 int16_t BinaryReader_ReadInt16_m7135 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
 int32_t BinaryReader_ReadInt32_m7136 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
 int64_t BinaryReader_ReadInt64_m7137 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
 int8_t BinaryReader_ReadSByte_m7138 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
 String_t* BinaryReader_ReadString_m7139 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
 float BinaryReader_ReadSingle_m7140 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
 uint16_t BinaryReader_ReadUInt16_m7141 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
 uint32_t BinaryReader_ReadUInt32_m7142 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
 uint64_t BinaryReader_ReadUInt64_m7143 (BinaryReader_t1320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
 void BinaryReader_CheckBuffer_m7144 (BinaryReader_t1320 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;

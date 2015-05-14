#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1059;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
 void TlsStream__ctor_m5141 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
 void TlsStream__ctor_m5142 (TlsStream_t1059 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
 bool TlsStream_get_EOF_m5143 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
 bool TlsStream_get_CanWrite_m5144 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
 bool TlsStream_get_CanRead_m5145 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
 bool TlsStream_get_CanSeek_m5146 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
 int64_t TlsStream_get_Position_m5147 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
 void TlsStream_set_Position_m5148 (TlsStream_t1059 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
 int64_t TlsStream_get_Length_m5149 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
 ByteU5BU5D_t17* TlsStream_ReadSmallValue_m5150 (TlsStream_t1059 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
 uint8_t TlsStream_ReadByte_m5151 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
 int16_t TlsStream_ReadInt16_m5152 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
 int32_t TlsStream_ReadInt24_m5153 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
 ByteU5BU5D_t17* TlsStream_ReadBytes_m5154 (TlsStream_t1059 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
 void TlsStream_Write_m5155 (TlsStream_t1059 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
 void TlsStream_Write_m5156 (TlsStream_t1059 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
 void TlsStream_WriteInt24_m5157 (TlsStream_t1059 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
 void TlsStream_Write_m5158 (TlsStream_t1059 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
 void TlsStream_Write_m5159 (TlsStream_t1059 * __this, ByteU5BU5D_t17* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
 void TlsStream_Reset_m5160 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
 ByteU5BU5D_t17* TlsStream_ToArray_m5161 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
 void TlsStream_Flush_m5162 (TlsStream_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
 void TlsStream_SetLength_m5163 (TlsStream_t1059 * __this, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t TlsStream_Seek_m5164 (TlsStream_t1059 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t TlsStream_Read_m5165 (TlsStream_t1059 * __this, ByteU5BU5D_t17* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
 void TlsStream_Write_m5166 (TlsStream_t1059 * __this, ByteU5BU5D_t17* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1056;
// Mono.Security.Protocol.Tls.Context
struct Context_t1047;
// System.IO.Stream
struct Stream_t1057;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1059;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1058;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1045;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1048;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
 void RecordProtocol__ctor_m4947 (RecordProtocol_t1056 * __this, Stream_t1057 * ___innerStream, Context_t1047 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
 void RecordProtocol__cctor_m4948 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
 Context_t1047 * RecordProtocol_get_Context_m4949 (RecordProtocol_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void RecordProtocol_SendRecord_m4950 (RecordProtocol_t1056 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
 void RecordProtocol_ProcessChangeCipherSpec_m4951 (RecordProtocol_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t1058 * RecordProtocol_GetMessage_m4952 (RecordProtocol_t1056 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginReceiveRecord_m4953 (RecordProtocol_t1056 * __this, Stream_t1057 * ___record, AsyncCallback_t39 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalReceiveRecordCallback_m4954 (RecordProtocol_t1056 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
 ByteU5BU5D_t17* RecordProtocol_EndReceiveRecord_m4955 (RecordProtocol_t1056 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
 ByteU5BU5D_t17* RecordProtocol_ReceiveRecord_m4956 (RecordProtocol_t1056 * __this, Stream_t1057 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
 ByteU5BU5D_t17* RecordProtocol_ReadRecordBuffer_m4957 (RecordProtocol_t1056 * __this, int32_t ___contentType, Stream_t1057 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
 ByteU5BU5D_t17* RecordProtocol_ReadClientHelloV2_m4958 (RecordProtocol_t1056 * __this, Stream_t1057 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
 ByteU5BU5D_t17* RecordProtocol_ReadStandardRecordBuffer_m4959 (RecordProtocol_t1056 * __this, Stream_t1057 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_ProcessAlert_m4960 (RecordProtocol_t1056 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m4961 (RecordProtocol_t1056 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m4962 (RecordProtocol_t1056 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
 void RecordProtocol_SendAlert_m4963 (RecordProtocol_t1056 * __this, Alert_t1045 * ___alert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
 void RecordProtocol_SendChangeCipherSpec_m4964 (RecordProtocol_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m4965 (RecordProtocol_t1056 * __this, uint8_t ___handshakeType, AsyncCallback_t39 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalSendRecordCallback_m4966 (RecordProtocol_t1056 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m4967 (RecordProtocol_t1056 * __this, uint8_t ___contentType, ByteU5BU5D_t17* ___recordData, AsyncCallback_t39 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
 void RecordProtocol_EndSendRecord_m4968 (RecordProtocol_t1056 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 void RecordProtocol_SendRecord_m4969 (RecordProtocol_t1056 * __this, uint8_t ___contentType, ByteU5BU5D_t17* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t17* RecordProtocol_EncodeRecord_m4970 (RecordProtocol_t1056 * __this, uint8_t ___contentType, ByteU5BU5D_t17* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t17* RecordProtocol_EncodeRecord_m4971 (RecordProtocol_t1056 * __this, uint8_t ___contentType, ByteU5BU5D_t17* ___recordData, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t17* RecordProtocol_encryptRecordFragment_m4972 (RecordProtocol_t1056 * __this, uint8_t ___contentType, ByteU5BU5D_t17* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t17* RecordProtocol_decryptRecordFragment_m4973 (RecordProtocol_t1056 * __this, uint8_t ___contentType, ByteU5BU5D_t17* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
 bool RecordProtocol_Compare_m4974 (RecordProtocol_t1056 * __this, ByteU5BU5D_t17* ___array1, ByteU5BU5D_t17* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
 void RecordProtocol_ProcessCipherSpecV2Buffer_m4975 (RecordProtocol_t1056 * __this, int32_t ___protocol, ByteU5BU5D_t17* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
 CipherSuite_t1048 * RecordProtocol_MapV2CipherCode_m4976 (RecordProtocol_t1056 * __this, String_t* ___prefix, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;

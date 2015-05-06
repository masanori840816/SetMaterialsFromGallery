#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1506;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1482;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t1518;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1057;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1519;
// System.IO.BinaryReader
struct BinaryReader_t1320;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
 void BinaryFormatter__ctor_m8185 (BinaryFormatter_t1506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void BinaryFormatter__ctor_m8186 (BinaryFormatter_t1506 * __this, Object_t * ___selector, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
 Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m8187 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
 void BinaryFormatter_set_AssemblyFormat_m8188 (BinaryFormatter_t1506 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
 SerializationBinder_t1518 * BinaryFormatter_get_Binder_m8189 (BinaryFormatter_t1506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
 StreamingContext_t573  BinaryFormatter_get_Context_m8190 (BinaryFormatter_t1506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
 Object_t * BinaryFormatter_get_SurrogateSelector_m8191 (BinaryFormatter_t1506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
 int32_t BinaryFormatter_get_FilterLevel_m8192 (BinaryFormatter_t1506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
 Object_t * BinaryFormatter_Deserialize_m8193 (BinaryFormatter_t1506 * __this, Stream_t1057 * ___serializationStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
 Object_t * BinaryFormatter_NoCheckDeserialize_m8194 (BinaryFormatter_t1506 * __this, Stream_t1057 * ___serializationStream, HeaderHandler_t1519 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
 void BinaryFormatter_ReadBinaryHeader_m8195 (BinaryFormatter_t1506 * __this, BinaryReader_t1320 * ___reader, bool* ___hasHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;

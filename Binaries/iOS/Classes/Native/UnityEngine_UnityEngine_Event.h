#pragma once
#include <stdint.h>
// UnityEngine.Event
struct Event_t182;
struct Event_t182_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t479;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Event
struct Event_t182  : public Object_t
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t173 ___m_Ptr_0;
};
struct Event_t182_StaticFields{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t182 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t182 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t479 * ___U3CU3Ef__switch$map0_3;
};
// Native definition for marshalling of: UnityEngine.Event
struct Event_t182_marshaled
{
	IntPtr_t173 ___m_Ptr_0;
};

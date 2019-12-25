//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "i.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::os::Build;
				using android::view::MotionEvent;
e *const i::a;

				i::StaticConstructor::StaticConstructor()
				{
										if (Build::VERSION::SDK_INT >= 12)
										{
										  a_Renamed = new d();
										  return;
										}
										if (Build::VERSION::SDK_INT >= 9)
										{
										  a_Renamed = new c();
										  return;
										}
										if (Build::VERSION::SDK_INT >= 5)
										{
										  a_Renamed = new b();
										  return;
										}
										a_Renamed = new a();
				}

i::StaticConstructor i::staticConstructor;

				int i::a(MotionEvent *paramMotionEvent)
				{
					return paramMotionEvent->getAction() & 0xFF;
				}
			}
		}
	}
}

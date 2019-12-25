//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "../c/a.h"
#include "c.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::os::Build;
android::support::v4::h::a *const b::a;

				b::StaticConstructor::StaticConstructor()
				{
										if (Build::VERSION::SDK_INT >= 17)
										{
										  a_Renamed = new c();
										  return;
										}
										a_Renamed = new b();
				}

b::StaticConstructor b::staticConstructor;

				int b::a(int paramInt1, int paramInt2)
				{
					return a_Renamed->a(paramInt1, paramInt2);
				}

				int b::b::a(int param1Int1, int param1Int2)
				{
					return 0xFF7FFFFF & param1Int1;
				}

				int b::c::a(int param1Int1, int param1Int2)
				{
					return c::a(param1Int1, param1Int2);
				}
			}
		}
	}
}

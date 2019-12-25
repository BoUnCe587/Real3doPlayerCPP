//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "s.h"
#include "t.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::os::Build;
				using android::view::ViewConfiguration;
e *const s::a;

				s::StaticConstructor::StaticConstructor()
				{
										if (Build::VERSION::SDK_INT >= 14)
										{
										  a_Renamed = new d();
										  return;
										}
										if (Build::VERSION::SDK_INT >= 11)
										{
										  a_Renamed = new c();
										  return;
										}
										if (Build::VERSION::SDK_INT >= 8)
										{
										  a_Renamed = new b();
										  return;
										}
										a_Renamed = new a();
				}

s::StaticConstructor s::staticConstructor;

				bool s::a(ViewConfiguration *paramViewConfiguration)
				{
					return a_Renamed->a(paramViewConfiguration);
				}

				bool s::a::a(ViewConfiguration *param1ViewConfiguration)
				{
					return true;
				}

				bool s::c::a(ViewConfiguration *param1ViewConfiguration)
				{
					return false;
				}

				bool s::d::a(ViewConfiguration *param1ViewConfiguration)
				{
					return t::a(param1ViewConfiguration);
				}
			}
		}
	}
}

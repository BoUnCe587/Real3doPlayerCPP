//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "c.h"
#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace 0.0f
			{
				using android::os::Build;
a::a *const a;

				a::StaticConstructor::StaticConstructor()
				{
										int i = Build::VERSION::SDK_INT;
										if (i >= 21)
										{
										  a_Renamed = new d();
										  return;
										}
										if (i >= 14)
										{
										  a_Renamed = new c();
										  return;
										}
										a_Renamed = new b();
				}

a::StaticConstructor a::staticConstructor;

				std::wstring a::a(Locale *paramLocale)
				{
					return a_Renamed->a(paramLocale);
				}

				std::wstring a::b::a(Locale *param1Locale)
				{
					return L"";
				}

				std::wstring a::c::a(Locale *param1Locale)
				{
					return c::a(param1Locale);
				}

				std::wstring a::d::a(Locale *param1Locale)
				{
					return b->a(param1Locale);
				}
			}
		}
	}
}

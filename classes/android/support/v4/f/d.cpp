//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "../b/a.h"
#include "../e/a.h"
#include "e.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace 0.0f
			{
				using android::os::Build;
java::util::Locale *const d::a;
android::support::v4::0.0f::a *const d::b;
std::wstring d::c;
std::wstring d::d;

				d::StaticConstructor::StaticConstructor()
				{
										if (Build::VERSION::SDK_INT >= 17)
										{
										  b = new b(nullptr);
										}
										else
										{
										  b = new a(nullptr);
										}
										a_Renamed = new Locale(L"", L"");
										c = L"Arab";
										d_Renamed = L"Hebr";
				}

d::StaticConstructor d::staticConstructor;

				int d::a(Locale *paramLocale)
				{
					return b->a(paramLocale);
				}

				d::a::a()
				{
				}

				int d::a::b(Locale *param1Locale)
				{
				  switch (Character::getDirectionality(param1Locale->getDisplayName(param1Locale)->charAt(0)))
				  {
					default:
					  return 0;
					case 1:
					case 2:
					  break;
				  }
				  return 1;
				}

				int d::a::a(Locale *param1Locale)
				{
				  if (param1Locale != nullptr && !param1Locale->equals(d_Renamed.a_Renamed))
				  {
					std::wstring str = a_Renamed->a(param1Locale);
					if (str == L"")
					{
					  return b(param1Locale);
					}
					if (str.equalsIgnoreCase(d_Renamed.a()) || str.equalsIgnoreCase(d_Renamed.b()))
					{
					  return 1;
					}
				  }
				  return 0;
				}

				d::b::b() : a(nullptr)
				{
				}

				int d::b::a(Locale *param1Locale)
				{
					return e::a(param1Locale);
				}
			}
		}
	}
}

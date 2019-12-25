//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "../e/b.h"
#include "e.h"
#include "../e/a.h"
#include "../a/b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::os::Build;
				using android::view::ViewGroup;
android::support::v4::h::a *const d::a;

				d::StaticConstructor::StaticConstructor()
				{
										if (Build::VERSION::SDK_INT >= 17)
										{
										  a_Renamed = new c();
										  return;
										}
										a_Renamed = new b();
				}

d::StaticConstructor d::staticConstructor;

				int d::a(ViewGroup::MarginLayoutParams *paramMarginLayoutParams)
				{
					return a_Renamed->a(paramMarginLayoutParams);
				}

				int d::b(ViewGroup::MarginLayoutParams *paramMarginLayoutParams)
				{
					return a_Renamed->b(paramMarginLayoutParams);
				}

				int d::b::a(ViewGroup::MarginLayoutParams *param1MarginLayoutParams)
				{
					return param1MarginLayoutParams->leftMargin;
				}

				int d::b::b(ViewGroup::MarginLayoutParams *param1MarginLayoutParams)
				{
					return param1MarginLayoutParams->rightMargin;
				}

				int d::c::a(ViewGroup::MarginLayoutParams *param1MarginLayoutParams)
				{
					return e::a(param1MarginLayoutParams);
				}

				int d::c::b(ViewGroup::MarginLayoutParams *param1MarginLayoutParams)
				{
					return e::b(param1MarginLayoutParams);
				}
			}
		}
	}
}

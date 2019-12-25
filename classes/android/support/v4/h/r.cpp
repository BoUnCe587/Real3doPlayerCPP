//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "r.h"
#include "a.h"
#include "u.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::content::res::ColorStateList;
				using android::graphics::PorterDuff;
				using android::view::View;

				void r::a(View *paramView)
				{
					paramView->requestApplyInsets();
				}

				void r::a(View *paramView, ColorStateList *paramColorStateList)
				{
					paramView->setBackgroundTintList(paramColorStateList);
				}

				void r::a(View *paramView, PorterDuff::Mode *paramMode)
				{
					paramView->setBackgroundTintMode(paramMode);
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "h.h"
#include "a.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::view::View;
				using android::widget::PopupWindow;

				void h::a(PopupWindow *paramPopupWindow, View *paramView, int paramInt1, int paramInt2, int paramInt3)
				{
					paramPopupWindow->showAsDropDown(paramView, paramInt1, paramInt2, paramInt3);
				}
			}
		}
	}
}

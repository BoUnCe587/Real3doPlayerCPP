//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "e.h"
#include "../h/u.h"
#include "i.h"
#include "../g/a.h"
#include "../h/a.h"
#include "h.h"
#include "g.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::os::Build;
				using android::view::View;
				using android::widget::PopupWindow;
android::support::v4::widget::f *const e::a;

				e::StaticConstructor::StaticConstructor()
				{
										int i = Build::VERSION::SDK_INT;
										if (i >= 23)
										{
										  a_Renamed = new b();
										  return;
										}
										if (i >= 21)
										{
										  a_Renamed = new a();
										  return;
										}
										if (i >= 19)
										{
										  a_Renamed = new e();
										  return;
										}
										if (i >= 9)
										{
										  a_Renamed = new d();
										  return;
										}
										a_Renamed = new c();
				}

e::StaticConstructor e::staticConstructor;

				void e::a(PopupWindow *paramPopupWindow, View *paramView, int paramInt1, int paramInt2, int paramInt3)
				{
					a_Renamed->a(paramPopupWindow, paramView, paramInt1, paramInt2, paramInt3);
				}

				void e::a(PopupWindow *paramPopupWindow, bool paramBoolean)
				{
					a_Renamed->a(paramPopupWindow, paramBoolean);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void e::a::a_Renamed(PopupWindow *param1PopupWindow, bool param1Boolean)
				{
					f::a(param1PopupWindow, param1Boolean);
				}

				void e::b::a(PopupWindow *param1PopupWindow, bool param1Boolean)
				{
					g::a(param1PopupWindow, param1Boolean);
				}

				void e::c::a(PopupWindow *param1PopupWindow, View *param1View, int param1Int1, int param1Int2, int param1Int3)
				{
					param1PopupWindow->showAsDropDown(param1View, param1Int1, param1Int2);
				}

				void e::c::a(PopupWindow *param1PopupWindow, bool param1Boolean)
				{
				}

				void e::e::a(PopupWindow *param1PopupWindow, View *param1View, int param1Int1, int param1Int2, int param1Int3)
				{
					h::a(param1PopupWindow, param1View, param1Int1, param1Int2, param1Int3);
				}
			}
		}
	}
}

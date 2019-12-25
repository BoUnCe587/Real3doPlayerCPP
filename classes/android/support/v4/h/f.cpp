//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"
#include "g.h"
#include "i.h"
#include "../g/a.h"
#include "h.h"
#include "../g/b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::os::Build;
				using b = android::support::v4::d::a::b;
				using android::util::Log;
				using android::view::MenuItem;
				using android::view::View;
android::support::v4::h::d *const f::a;

				f::StaticConstructor::StaticConstructor()
				{
										int i = Build::VERSION::SDK_INT;
										if (i >= 14)
										{
										  a_Renamed = new c();
										  return;
										}
										if (i >= 11)
										{
										  a_Renamed = new b();
										  return;
										}
										a_Renamed = new a();
				}

f::StaticConstructor f::staticConstructor;

				MenuItem *f::a(MenuItem *paramMenuItem, android::support::v4::h::a *parama)
				{
				  if (dynamic_cast<b*>(paramMenuItem) != nullptr)
				  {
					return (static_cast<b*>(paramMenuItem))->a(parama);
				  }
				  Log::w(L"MenuItemCompat", L"setActionProvider: item does not implement SupportMenuItem; ignoring");
				  return paramMenuItem;
				}

				MenuItem *f::a(MenuItem *paramMenuItem, View *paramView)
				{
					return (dynamic_cast<b*>(paramMenuItem) != nullptr) ? (static_cast<b*>(paramMenuItem))->setActionView(paramView) : a_Renamed->a(paramMenuItem, paramView);
				}

				void f::a(MenuItem *paramMenuItem, int paramInt)
				{
				  if (dynamic_cast<b*>(paramMenuItem) != nullptr)
				  {
					(static_cast<b*>(paramMenuItem))->setShowAsAction(paramInt);
					return;
				  }
				  a_Renamed->a(paramMenuItem, paramInt);
				}

				bool f::a(MenuItem *paramMenuItem)
				{
					return (dynamic_cast<b*>(paramMenuItem) != nullptr) ? (static_cast<b*>(paramMenuItem))->expandActionView() : a_Renamed->a(paramMenuItem);
				}

				MenuItem *f::b(MenuItem *paramMenuItem, int paramInt)
				{
					return (dynamic_cast<b*>(paramMenuItem) != nullptr) ? (static_cast<b*>(paramMenuItem))->setActionView(paramInt) : a_Renamed->b(paramMenuItem, paramInt);
				}

				MenuItem f::a::a(MenuItem *param1MenuItem, View *param1View)
				{
					return param1MenuItem;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void f::a::a_Renamed(MenuItem *param1MenuItem, int param1Int)
				{
				}

				bool f::a::a(MenuItem *param1MenuItem)
				{
					return false;
				}

				MenuItem *f::a::b(MenuItem *param1MenuItem, int param1Int)
				{
					return param1MenuItem;
				}

				MenuItem *f::b::a(MenuItem *param1MenuItem, View *param1View)
				{
					return g::a(param1MenuItem, param1View);
				}

				void f::b::a(MenuItem *param1MenuItem, int param1Int)
				{
					g::a(param1MenuItem, param1Int);
				}

				bool f::b::a(MenuItem *param1MenuItem)
				{
					return false;
				}

				MenuItem *f::b::b(MenuItem *param1MenuItem, int param1Int)
				{
					return g::b(param1MenuItem, param1Int);
				}

				bool f::c::a(MenuItem *param1MenuItem)
				{
					return h::a(param1MenuItem);
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "m.h"
#include "k.h"

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
Field *m::a;
bool m::b = false;

				int m::a(View *paramView)
				{
				  if (!b_Renamed)
				  {
					try
					{
					  a_Renamed = View::typeid->getDeclaredField(L"mMinHeight");
					  a_Renamed->setAccessible(true);
					}
					catch (const NoSuchFieldException &noSuchFieldException)
					{
					}
					b_Renamed = true;
				  }
				  if (a_Renamed != nullptr)
				  {
					try
					{
					  return (static_cast<Integer>(a_Renamed->get(paramView))).intValue();
					}
					catch (const std::exception &paramView)
					{
					}
				  }
				  return 0;
				}

				void m::a(View *paramView, ColorStateList *paramColorStateList)
				{
				  if (dynamic_cast<k*>(paramView) != nullptr)
				  {
					(static_cast<k*>(paramView))->setSupportBackgroundTintList(paramColorStateList);
				  }
				}

				void m::a(View *paramView, PorterDuff::Mode *paramMode)
				{
				  if (dynamic_cast<k*>(paramView) != nullptr)
				  {
					(static_cast<k*>(paramView))->setSupportBackgroundTintMode(paramMode);
				  }
				}

				bool m::b(View *paramView)
				{
					return (paramView->getWindowToken() != nullptr);
				}
			}
		}
	}
}

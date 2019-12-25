//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::util::Log;
				using android::widget::PopupWindow;
Field *f::a;

				f::StaticConstructor::StaticConstructor()
				{
										try
										{
										  a_Renamed = PopupWindow::typeid->getDeclaredField(L"mOverlapAnchor");
										  a_Renamed->setAccessible(true);
										  return;
										}
										catch (const NoSuchFieldException &noSuchFieldException)
										{
										  Log::i(L"PopupWindowCompatApi21", L"Could not fetch mOverlapAnchor field from PopupWindow", noSuchFieldException);
										  return;
										}
				}

f::StaticConstructor f::staticConstructor;

				void f::a(PopupWindow *paramPopupWindow, bool paramBoolean)
				{
				  if (a_Renamed != nullptr)
				  {
					try
					{
					  a_Renamed->set(paramPopupWindow, static_cast<Boolean>(paramBoolean));
					  return;
					}
					catch (const IllegalAccessException &paramPopupWindow)
					{
					  Log::i(L"PopupWindowCompatApi21", L"Could not set overlap anchor field in PopupWindow", paramPopupWindow);
					  return;
					}
				  }
				}
			}
		}
	}
}

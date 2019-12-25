//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "r.h"
#include "../../../v4/h/l.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace widget
				{
					using android::graphics::Rect;
					using android::os::Build;
					using l = android::support::v4::h::l;
					using android::util::Log;
					using android::view::View;
Method *r::a;

					r::StaticConstructor::StaticConstructor()
					{
												if (Build::VERSION::SDK_INT >= 18)
												{
												  try
												  {
													a_Renamed = View::typeid->getDeclaredMethod(L"computeFitSystemWindows", std::vector<std::type_info*> {Rect::typeid, Rect::typeid});
													if (!l::a_Renamed::isAccessible())
													{
													  l::a_Renamed::setAccessible(true);
													}
													return;
												  }
												  catch (const NoSuchMethodException &noSuchMethodException)
												  {
													Log::d(L"ViewUtils", L"Could not find method computeFitSystemWindows. Oh well.");
													return;
												  }
												}
					}

r::StaticConstructor r::staticConstructor;

					int r::a(int paramInt1, int paramInt2)
					{
						return paramInt1 | paramInt2;
					}

					void r::a(View *paramView, Rect *paramRect1, Rect *paramRect2)
					{
					  if (a_Renamed != nullptr)
					  {
						try
						{
						  a_Renamed->invoke(paramView, std::vector<void*> {paramRect1, paramRect2});
						  return;
						}
						catch (const std::exception &paramView)
						{
						  Log::d(L"ViewUtils", L"Could not invoke computeFitSystemWindows", paramView);
						  return;
						}
					  }
					}

					bool r::a(View *paramView)
					{
						return (l::a(paramView) == 1);
					}
				}
			}
		}
	}
}

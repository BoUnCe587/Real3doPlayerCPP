#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include <vector>
#include <stdexcept>
#include <typeinfo>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class a; } } } } }

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
					using android::view::View;

					class r
					{
				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static Method *a_Renamed;

									  private:
										  class StaticConstructor
										  {
										  public:
											  StaticConstructor();
										  };

									  private:
										  static r::StaticConstructor staticConstructor;


				  public:
					  static int a(int paramInt1, int paramInt2);

					  static void a(View *paramView, Rect *paramRect1, Rect *paramRect2);

					  static bool a(View *paramView);
					};

				}
			}
		}
	}
}

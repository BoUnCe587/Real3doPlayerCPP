#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "u.h"
#include "b.h"
#include <stdexcept>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v4 { namespace h { class b; } } } }

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

				class m
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static Field *a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static bool b_Renamed;

			  public:
				  static int a(View *paramView);

				  static void a(View *paramView, ColorStateList *paramColorStateList);

				  static void a(View *paramView, PorterDuff::Mode *paramMode);

				  static bool b(View *paramView);
				};
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "u.h"
#include "d.h"
#include "b.h"
#include "../d/a/b.h"
#include "c.h"
#include "e.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{

				using b = android::support::v4::d::a::b;
				using android::view::MenuItem;
				using android::view::View;

				class f
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static android::support::v4::h::d *const a_Renamed;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static f::StaticConstructor staticConstructor;


			  public:
				  static MenuItem *a(MenuItem *paramMenuItem, android::support::v4::h::a *parama);

				  static MenuItem *a(MenuItem *paramMenuItem, View *paramView);

				  static void a(MenuItem *paramMenuItem, int paramInt);

				  static bool a(MenuItem *paramMenuItem);

				  static MenuItem *b(MenuItem *paramMenuItem, int paramInt);

			  public:
				  class a : public d
				  {
				public:
					MenuItem a(MenuItem *param1MenuItem, View *param1View);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(MenuItem *param1MenuItem, int param1Int);

					bool a(MenuItem *param1MenuItem);

					virtual MenuItem *b(MenuItem *param1MenuItem, int param1Int);
				  };

			  public:
				  class b : public d
				  {
				public:
					virtual MenuItem *a(MenuItem *param1MenuItem, View *param1View);

					virtual void a(MenuItem *param1MenuItem, int param1Int);

					virtual bool a(MenuItem *param1MenuItem);

					virtual MenuItem *b(MenuItem *param1MenuItem, int param1Int);
				  };

			  public:
				  class c : public b
				  {
				public:
					virtual bool a(MenuItem *param1MenuItem);
				  };

			  public:
				  class d
				  {
				public:
					virtual MenuItem *a(MenuItem *param1MenuItem, View *param1View) = 0;

					virtual void a(MenuItem *param1MenuItem, int param1Int) = 0;

					virtual bool a(MenuItem *param1MenuItem) = 0;

					virtual MenuItem *b(MenuItem *param1MenuItem, int param1Int) = 0;
				  };

			  public:
				  class e
				  {
				public:
					virtual bool a(MenuItem *param1MenuItem) = 0;

					virtual bool b(MenuItem *param1MenuItem) = 0;
				  };
				};
			}
		}
	}
}

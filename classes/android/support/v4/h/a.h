#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "u.h"
#include "c.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class b; } } } }
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v4 { namespace h { class c; } } } }
namespace android { namespace support { namespace v4 { namespace h { class d; } } } }
namespace android { namespace support { namespace v4 { namespace h { class e; } } } }
namespace android { namespace support { namespace v4 { namespace h { class f; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{

				using android::content::Context;
				using android::view::MenuItem;
				using android::view::SubMenu;
				using android::view::View;

				class a
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  Context *const a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  android::support::v4::h::a *b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  android::support::v4::h::b *c_Renamed;

			  public:
				  virtual ~a()
				  {
					  delete a;
					  delete b;
					  delete c;
					  delete a;
					  delete b;
					  delete a;
				  }

				  a(Context *paramContext);

				  View a()

				  View a(MenuItem *paramMenuItem);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void a_Renamed(android::support::v4::h::a *parama);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void a_Renamed(android::support::v4::h::b *paramb);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void a_Renamed(SubMenu *paramSubMenu);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void a_Renamed(bool paramBoolean);

				  virtual bool b();

				  virtual bool c();

				  virtual bool d();

				  virtual bool e();

				  virtual void f();

			  public:
				  class a
				  {
				public:
					virtual void a(bool param1Boolean) = 0;
				  };

			  public:
				  class b
				  {
				public:
					virtual void a(bool param1Boolean) = 0;
				  };
				};

			}
		}
	}
}

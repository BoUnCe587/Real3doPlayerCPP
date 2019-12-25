#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "../a.h"
#include "a.h"
#include <string>
#include <vector>
#include <limits>
#include <stdexcept>
#include <typeinfo>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class b; } } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{

					using android::content::Context;
					using a = android::support::v4::h::a;
					using f = android::support::v4::h::f;
					using a = android::support::v7::b::a;
					using g = android::support::v7::internal_Renamed::view::menu::g;
					using android::util::AttributeSet;
					using android::view::Menu;
					using android::view::MenuInflater;
					using android::view::MenuItem;
					using android::view::SubMenu;
					using android::view::View;
					using org::xmlpull::v1::XmlPullParser;

					class c : public android.view::MenuInflater
					{
				  private:
					  static std::vector<std::type_info> const android;

					  static std::vector<std::type_info> const b;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  std::vector<void*> const c_Renamed;

					  std::vector<void*> const d;

					  Context *e;

					  void *android;

				  public:
					  virtual ~c()
					  {
						  delete e;
						  delete android;
					  }

					  c(Context *paramContext);

				  private:
					  void *android.support::v4::h::a(void *paramObject);

					  void android.support::v4::h::a(XmlPullParser *paramXmlPullParser, AttributeSet *paramAttributeSet, Menu *paramMenu);

					  Object c();

				  public:
					  virtual void inflate(int paramInt, Menu *paramMenu);

				  private:
					  class a : public android.view::MenuItem::OnMenuItemClickListener
					  {
					private:
						static std::vector<std::type_info> const android;

						void *b;

						Method *c;

					public:
						virtual ~a()
						{
							delete b;
							delete c;
						}

						virtual internal *android.support::v4::h::a(void *param1Object, const std::wstring &param1String);

						virtual bool onMenuItemClick(MenuItem *param1MenuItem);
					  };

				  private:
					  class b
					  {
									  private:
										  android::support::v7::internal_Renamed::view::c *outerInstance;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						Menu *b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						int c_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						int d_Renamed = 0;

						int e = 0;

						int android = 0;

						bool android = false;

						bool h = false;

						bool i = false;

						int j = 0;

						int k = 0;

						CharSequence *l;

						CharSequence *m;

						int n = 0;

						wchar_t o = L'\0';

						wchar_t p = L'\0';

						int q = 0;

						bool r = false;

						bool s = false;

						bool t = false;

						int u = 0;

						int v = 0;

						std::wstring w;

						std::wstring x;

						std::wstring y;

						a *z;

					public:
						virtual ~b()
						{
							delete b;
							delete l;
							delete m;
							delete z;
							delete outerInstance;
						}

						b(c *outerInstance, android::support::v7::internal_Renamed::view::c *this$0, Menu *param1Menu);

					private:
						wchar_t android.support::v4::h::a(const std::wstring &param1String);

						template<typename T>
						T android.support::v4::h::a(const std::wstring &param1String, std::vector<std::type_info> &param1ArrayOfClass, std::vector<void*> &param1ArrayOfObject);

						void android.support::v4::h::a(MenuItem *param1MenuItem);

					public:
						virtual void android.support::v4::h::a();

						virtual void android.support::v4::h::a(AttributeSet *param1AttributeSet);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void b_Renamed();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void b_Renamed(AttributeSet *param1AttributeSet);

						virtual SubMenu *c();

						virtual bool d();
					  };
					};
				}
			}
		}
	}
}

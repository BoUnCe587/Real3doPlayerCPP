#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../../../../v4/d/a/b.h"
#include "../c.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include "k.h"
#include "l.h"
#include "m.h"
#include "n.h"
#include "../../../../v4/h/u.h"
#include <string>
#include <cctype>
#include <stdexcept>
#include "exceptionhelper.h"
#include "stringbuilder.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v4 { namespace h { class e; } } } }
namespace android { namespace support { namespace v4 { namespace h { class f; } } } }
namespace android { namespace support { namespace v4 { namespace d { namespace a { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class k; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class n; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class c; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class d; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class g; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class h; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class i; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class j; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class l; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class m; } } } } } }

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
					namespace menu
					{

						using android::content::Context;
						using android::content::Intent;
						using android::graphics::drawable::Drawable;
						using b = android::support::v4::d::a::b;
						using a = android::support::v4::h::a;
						using f = android::support::v4::h::f;
						using o = android::support::v7::internal_Renamed::widget::o;
						using android::view::ActionProvider;
						using android::view::ContextMenu;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;

						class f final : public android.support::v4::d::a::b
						{
					  private:
						  static std::wstring w;

						  static std::wstring x;

						  static std::wstring y;

						  static std::wstring z;

						  const int android;

						  const int android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  const int c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  const int d_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  CharSequence *e_Renamed;

						  CharSequence *android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  Intent *g_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  wchar_t h_Renamed = L'\0';

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  wchar_t i_Renamed = L'\0';

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  Drawable *j_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  int k_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  android::support::v7::internal_Renamed::view::menu::e *l_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  android::support::v7::internal_Renamed::view::menu::n *m_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  Runnable n_Renamed;

						  MenuItem::OnMenuItemClickListener *android;

						  int p = 16;

						  int q = 0;

						  View *r;

						  a *s;

						  f::e *t;

						  bool u = false;

						  ContextMenu::ContextMenuInfo *v;

					  public:
						  virtual ~f()
						  {
							  delete e;
							  delete android;
							  delete g;
							  delete j;
							  delete l;
							  delete m;
							  delete android;
							  delete r;
							  delete s;
							  delete t;
							  delete v;
						  }

						  internal *android.support::v4::h::f(android::support::v7::internal_Renamed::view::menu::e *parame, int paramInt1, int paramInt2, int paramInt3, int paramInt4, CharSequence *paramCharSequence, int paramInt5);

						  b *android.support::v4::h::a(int paramInt);

						  b *android.support::v4::h::a(a *parama);

						  b *android.support::v4::h::a(f::e *parame);

						  b *android.support::v4::h::a(View *paramView);

						  a *android.support::v4::h::a();

						  CharSequence *android.support::v4::h::a(k::a *parama);

						  void android.support::v4::h::a(android::support::v7::internal_Renamed::view::menu::n *paramn);

						  void android.support::v4::h::a(ContextMenu::ContextMenuInfo *paramContextMenuInfo);

						  void android.support::v4::h::a(bool paramBoolean);

						  b *android.support::v4::d::a::b(int paramInt);

						  void android.support::v4::d::a::b(bool paramBoolean);

						  bool android.support::v4::d::a::b();

						  int c();

						  bool c(bool paramBoolean);

						  bool collapseActionView();

						  wchar_t d();

						  void d(bool paramBoolean);

						  std::wstring e();

						  void e(bool paramBoolean);

						  bool expandActionView();

						  bool android.support::v4::h::f();

						  bool g();

						  ActionProvider *getActionProvider();

						  View *getActionView();

						  wchar_t getAlphabeticShortcut();

						  int getGroupId();

						  Drawable *getIcon();

						  Intent *getIntent();

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @CapturedViewProperty public int getItemId()
						  int getItemId();

						  ContextMenu::ContextMenuInfo *getMenuInfo();

						  wchar_t getNumericShortcut();

						  int getOrder();

						  SubMenu *getSubMenu();

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @CapturedViewProperty public CharSequence getTitle()
						  CharSequence *getTitle();

						  CharSequence *getTitleCondensed();

						  void h();

						  bool hasSubMenu();

						  bool i();

						  bool isActionViewExpanded();

						  bool isCheckable();

						  bool isChecked();

						  bool isEnabled();

						  bool isVisible();

						  bool j();

						  bool k();

						  bool l();

						  bool m();

						  bool n();

						  MenuItem *setActionProvider(ActionProvider *paramActionProvider);

						  MenuItem *setAlphabeticShortcut(wchar_t paramChar);

						  MenuItem *setCheckable(bool paramBoolean);

						  MenuItem *setChecked(bool paramBoolean);

						  MenuItem *setEnabled(bool paramBoolean);

						  MenuItem *setIcon(int paramInt);

						  MenuItem *setIcon(Drawable *paramDrawable);

						  MenuItem *setIntent(Intent *paramIntent);

						  MenuItem *setNumericShortcut(wchar_t paramChar);

						  MenuItem *setOnActionExpandListener(MenuItem::OnActionExpandListener *paramOnActionExpandListener);

						  MenuItem *setOnMenuItemClickListener(MenuItem::OnMenuItemClickListener *paramOnMenuItemClickListener);

						  MenuItem *setShortcut(wchar_t paramChar1, wchar_t paramChar2);

						  void setShowAsAction(int paramInt);

						  MenuItem *setTitle(int paramInt);

						  MenuItem *setTitle(CharSequence *paramCharSequence);

						  MenuItem *setTitleCondensed(CharSequence *paramCharSequence);

						  MenuItem *setVisible(bool paramBoolean);

						  std::wstring toString() override;
						};
					}
				}
			}
		}
	}
}

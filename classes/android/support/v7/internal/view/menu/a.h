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

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace b { class a; } } } }
namespace android { namespace support { namespace v4 { namespace d { namespace a { class b; } } } } }
namespace android { namespace support { namespace v4 { namespace h { class f; } } } }
namespace android { namespace support { namespace v4 { namespace h { class e; } } } }

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
						using a = android::support::v4::b::a;
						using b = android::support::v4::d::a::b;
						using f = android::support::v4::h::f;
						using android::view::ActionProvider;
						using android::view::ContextMenu;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;

						class a : public android.support::v4::d::a::b
						{
					  private:
						  const int android;

						  const int android;

						  const int c;

						  const int d;

						  CharSequence *e;

						  CharSequence *android;

						  Intent *g;

						  wchar_t h = L'\0';

						  wchar_t i = L'\0';

						  Drawable *j;

						  int k = 0;

						  Context *l;

						  MenuItem::OnMenuItemClickListener *m;

						  int n = 16;

					  public:
						  virtual ~a()
						  {
							  delete e;
							  delete android;
							  delete g;
							  delete j;
							  delete l;
							  delete m;
						  }

						  virtual internal *android.support::v4::b::a(Context *paramContext, int paramInt1, int paramInt2, int paramInt3, int paramInt4, CharSequence *paramCharSequence);

						  virtual b *android.support::v4::b::a(int paramInt);

						  virtual b *android.support::v4::b::a(a *parama);

						  virtual b *android.support::v4::b::a(f::e *parame);

						  virtual b *android.support::v4::b::a(View *paramView);

						  virtual a *android.support::v4::b::a();

						  virtual b *android.support::v4::d::a::b(int paramInt);

						  virtual bool collapseActionView();

						  virtual bool expandActionView();

						  virtual ActionProvider *getActionProvider();

						  virtual View *getActionView();

						  virtual wchar_t getAlphabeticShortcut();

						  virtual int getGroupId();

						  virtual Drawable *getIcon();

						  virtual Intent *getIntent();

						  virtual int getItemId();

						  virtual ContextMenu::ContextMenuInfo *getMenuInfo();

						  virtual wchar_t getNumericShortcut();

						  virtual int getOrder();

						  virtual SubMenu *getSubMenu();

						  virtual CharSequence *getTitle();

						  virtual CharSequence *getTitleCondensed();

						  virtual bool hasSubMenu();

						  virtual bool isActionViewExpanded();

						  virtual bool isCheckable();

						  virtual bool isChecked();

						  virtual bool isEnabled();

						  virtual bool isVisible();

						  virtual MenuItem *setActionProvider(ActionProvider *paramActionProvider);

						  virtual MenuItem *setAlphabeticShortcut(wchar_t paramChar);

						  virtual MenuItem *setCheckable(bool paramBoolean);

						  virtual MenuItem *setChecked(bool paramBoolean);

						  virtual MenuItem *setEnabled(bool paramBoolean);

						  virtual MenuItem *setIcon(int paramInt);

						  virtual MenuItem *setIcon(Drawable *paramDrawable);

						  virtual MenuItem *setIntent(Intent *paramIntent);

						  virtual MenuItem *setNumericShortcut(wchar_t paramChar);

						  virtual MenuItem *setOnActionExpandListener(MenuItem::OnActionExpandListener *paramOnActionExpandListener);

						  virtual MenuItem *setOnMenuItemClickListener(MenuItem::OnMenuItemClickListener *paramOnMenuItemClickListener);

						  virtual MenuItem *setShortcut(wchar_t paramChar1, wchar_t paramChar2);

						  virtual void setShowAsAction(int paramInt);

						  virtual MenuItem *setTitle(int paramInt);

						  virtual MenuItem *setTitle(CharSequence *paramCharSequence);

						  virtual MenuItem *setTitleCondensed(CharSequence *paramCharSequence);

						  virtual MenuItem *setVisible(bool paramBoolean);
						};
					}
				}
			}
		}
	}
}

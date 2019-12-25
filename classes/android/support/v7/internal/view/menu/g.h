#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../c.h"
#include "c.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"
#include "../../../../v4/h/a.h"
#include "../../../../v4/h/u.h"
#include "../b.h"
#include "b.h"
#include "../../../../v4/h/f.h"
#include "d.h"
#include <vector>
#include <stdexcept>
#include <typeinfo>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace d { namespace a { class b; } } } } }
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class d; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class c; } } } } } }

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
						using android::view::ActionProvider;
						using android::view::CollapsibleActionView;
						using android::view::ContextMenu;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;
						using android::widget::FrameLayout;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(14) public class g extends c<android.support.v4.d.a.b> implements android.view.MenuItem
						class g : public c<b*>, public android->view.MenuItem
						{
					  private:
						  Method *c;

					  public:
						  virtual ~g()
						  {
							  delete c;
						  }

						  g(Context *paramContext, b *paramb);

						  virtual a *android->support.v4.h.a(ActionProvider *paramActionProvider);

						  void android->support.v4.h.a(bool paramBoolean) override;

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

						  virtual MenuItem *setActionView(int paramInt);

						  virtual MenuItem *setActionView(View *paramView);

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

						  virtual MenuItem *setShowAsActionFlags(int paramInt);

						  virtual MenuItem *setTitle(int paramInt);

						  virtual MenuItem *setTitle(CharSequence *paramCharSequence);

						  virtual MenuItem *setTitleCondensed(CharSequence *paramCharSequence);

						  virtual MenuItem *setVisible(bool paramBoolean);

					  public:
						  class a : public android->support.v4.h.a
						  {
											  private:
												  g *outerInstance;

						public:
							ActionProvider *const android;

							virtual ~a()
							{
								delete android;
								delete outerInstance;
							}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual internal *android->support.v4.h.a(g *this$0, Context *param1Context, ActionProvider *param1ActionProvider);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual View *android->support.v4.h.a();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual void android->support.v4.h.a(SubMenu *param1SubMenu);

							bool d() override;

							bool e() override;
						  };

					  public:
						  class b : public android->widget.FrameLayout, public android->support.v4.h.a
						  {
						public:
							CollapsibleActionView *const android;

							virtual ~b()
							{
								delete android;
							}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual internal *android->support.v4.d.a.b(View *param1View);

							virtual void android->support.v4.h.a();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual void android->support.v4.d.a.b();

							virtual View *c();
						  };

					  private:
						  class c : public d<MenuItem::OnActionExpandListener*>, public android->support.v4.h.f::e
						  {
											  private:
												  g *outerInstance;

						public:
							virtual ~c()
							{
								delete outerInstance;
							}

							c(g *outerInstance, g *this$0, MenuItem::OnActionExpandListener *param1OnActionExpandListener);

							bool android->support.v4.h.a(MenuItem *param1MenuItem) override;

							virtual bool android->support.v4.d.a.b(MenuItem *param1MenuItem);
						  };

					  private:
						  class d : public d<MenuItem::OnMenuItemClickListener*>, public android->view.MenuItem.OnMenuItemClickListener
						  {
											  private:
												  g *outerInstance;

						public:
							virtual ~d()
							{
								delete outerInstance;
							}

							d(g *outerInstance, g *this$0, MenuItem::OnMenuItemClickListener *param1OnMenuItemClickListener);

							virtual bool onMenuItemClick(MenuItem *param1MenuItem);
						  };
						};
					}
				}
			}
		}
	}
}

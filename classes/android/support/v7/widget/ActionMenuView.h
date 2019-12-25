#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../internal/view/menu/e.h"
#include "../internal/view/menu/k.h"
#include "g.h"
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "../internal/view/menu/j.h"
#include "h.h"
#include "i.h"
#include "../internal/view/menu/g.h"
#include "../internal/widget/g.h"
#include "e.h"
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class j; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class b; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class d; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::Context;
				using android::content::res::Configuration;
				using android::graphics::drawable::Drawable;
				using e = android::support::v7::internal_Renamed::view::menu::e;
				using f = android::support::v7::internal_Renamed::view::menu::f;
				using j = android::support::v7::internal_Renamed::view::menu::j;
				using k = android::support::v7::internal_Renamed::view::menu::k;
				using android::util::AttributeSet;
				using android::view::Menu;
				using android::view::MenuItem;
				using android::view::View;
				using android::view::ViewGroup;
				using android::view::accessibility::AccessibilityEvent;

				class ActionMenuView : public g, public android->support.v7.internal_Renamed.view.menu.e::b, public android->support.v7.internal_Renamed.view.menu.k
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  e *a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Context *b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int c_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  bool d_Renamed = false;

				  android::support::v7::widget::a *android;

				  j::a *android;

				  e::a *g;

				  bool h = false;

				  int i = 0;

				  int android = 0;

				  int android = 0;

				  e *l;

			  public:
				  virtual ~ActionMenuView()
				  {
					  delete a;
					  delete b;
					  delete android;
					  delete android;
					  delete g;
					  delete l;
				  }

				  ActionMenuView(Context *paramContext);

				  ActionMenuView(Context *paramContext, AttributeSet *paramAttributeSet);

				  static int a(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

			  private:
				  void c(int paramInt1, int paramInt2);

			  protected:
				  android::support::v7::widget::ActionMenuView::c *a() override;

			  public:
				  virtual android::support::v7::widget::ActionMenuView::c *a(AttributeSet *paramAttributeSet);

			  protected:
				  virtual android::support::v7::widget::ActionMenuView::c *a(ViewGroup::LayoutParams *paramLayoutParams);

			  public:
				  virtual void a(e *parame);

				  virtual void a(j::a *parama, e::a *parama1);

			  protected:
				  virtual bool a(int paramInt);

			  public:
				  virtual bool a(f *paramf);

				  virtual android::support::v7::widget::ActionMenuView::c *b();

				  virtual e *c();

			  protected:
				  virtual bool checkLayoutParams(ViewGroup::LayoutParams *paramLayoutParams);

			  public:
				  virtual bool d();

				  virtual bool dispatchPopulateAccessibilityEvent(AccessibilityEvent *paramAccessibilityEvent);

				  virtual bool android->support.v7.internal_Renamed.view.menu.e();

				  virtual void android->support.v7.internal_Renamed.view.menu.f();

				  virtual Menu *getMenu();

				  virtual Drawable *getOverflowIcon();

				  virtual int getPopupTheme();

				  virtual int getWindowAnimations();

				  virtual void onConfigurationChanged(Configuration *paramConfiguration);

				  virtual void onDetachedFromWindow();

			  protected:
				  virtual void onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

				  virtual void onMeasure(int paramInt1, int paramInt2);

			  public:
				  virtual void setExpandedActionViewsExclusive(bool paramBoolean);

				  virtual void setOnMenuItemClickListener(e *parame);

				  virtual void setOverflowIcon(Drawable *paramDrawable);

				  virtual void setOverflowReserved(bool paramBoolean);

				  virtual void setPopupTheme(int paramInt);

				  virtual void setPresenter(android::support::v7::widget::a *parama);

			  public:
				  class a
				  {
				public:
					virtual bool c() = 0;

					virtual bool d() = 0;
				  };

			  private:
				  class b : public android->support.v7.internal_Renamed.view.menu.j::a
				  {
							  private:
								  ActionMenuView *outerInstance;

				public:
					virtual ~b()
					{
						delete outerInstance;
					}

				private:
					b(ActionMenuView *outerInstance, ActionMenuView *this$0);

				public:
					virtual void a(e *param1e, bool param1Boolean);

					virtual bool a(e *param1e);
				  };

			  public:
				  class c : public g->a
				  {
				public:
//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @ExportedProperty public boolean a;
					bool a = false;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @ExportedProperty public int b;
					int b = 0;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @ExportedProperty public int c;
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					int c_Renamed = 0;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @ExportedProperty public boolean d;
					bool d = false;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @ExportedProperty public boolean android.support.v7.internal.view.menu.e;
					bool android = false;

					bool android = false;

					c(int param1Int1, int param1Int2);

					c(Context *param1Context, AttributeSet *param1AttributeSet);

					c(const c &param1c);

					c(ViewGroup::LayoutParams *param1LayoutParams);
				  };

			  private:
				  class d : public android->support.v7.internal_Renamed.view.menu.e::a
				  {
							  private:
								  ActionMenuView *outerInstance;

				public:
					virtual ~d()
					{
						delete outerInstance;
					}

				private:
					d(ActionMenuView *outerInstance, ActionMenuView *this$0);

				public:
					virtual void a(e *param1e);

					virtual bool a(e *param1e, MenuItem *param1MenuItem);
				  };

			  public:
				  class e
				  {
				public:
					virtual bool a(MenuItem *param1MenuItem) = 0;
				  };
				};
			}
		}
	}
}

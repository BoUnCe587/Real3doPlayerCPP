#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "k.h"
#include "m.h"
#include "n.h"
#include "o.h"
#include "p.h"
#include "q.h"
#include "r.h"
#include "../../../v4/h/y.h"
#include "../a.h"
#include "a.h"
#include "../../b/a.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class j; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class ContentFrameLayout; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class ActionBarContainer; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class f; } } } } }
namespace android { namespace support { namespace v4 { namespace h { class u; } } } }
namespace android { namespace support { namespace v4 { namespace h { class x; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class d; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class e; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class g; } } } } }

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

					using android::content::Context;
					using android::content::res::Configuration;
					using android::graphics::Canvas;
					using android::graphics::Rect;
					using android::graphics::drawable::Drawable;
					using j = android::support::v4::h::j;
					using l = android::support::v4::h::l;
					using u = android::support::v4::h::u;
					using x = android::support::v4::h::x;
					using a = android::support::v7::b::a;
					using android::util::AttributeSet;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::Window;

					class ActionBarOverlayLayout : public android.view::ViewGroup
					{
				  public:
					  static std::vector<int> const android;

				  private:
					  const Runnable A = new RunnableAnonymousInnerClass();

				  private:
					  class RunnableAnonymousInnerClass : public Runnable
					  {
					  public:
//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
						  RunnableAnonymousInnerClass(); //super(outerInstance);

						  virtual void run();
					  };

				  private:
					  j *const B;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  int b_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  int c_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  ContentFrameLayout *d_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  ActionBarContainer *e_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  android::support::v7::internal_Renamed::widget::f *f_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Drawable *g_Renamed;

					  bool h = false;

					  bool i = false;

					  bool android = false;

					  bool k = false;

					  bool android = false;

					  int m = 0;

					  int n = 0;

					  Rect *const o = new android.graphics::Rect();

					  Rect *const p = new android.graphics::Rect();

					  Rect *const q = new android.graphics::Rect();

					  Rect *const r = new android.graphics::Rect();

					  Rect *const s = new android.graphics::Rect();

					  Rect *const t = new android.graphics::Rect();

					  a *android;

					  const int v = 600;

					  j *w;

					  u *android;

					  x *const android;

				  private:
					  class yAnonymousInnerClass : public android.support::v4::h::y
					  {
					  public:
						  yAnonymousInnerClass();

						  void b(View *param1View) override;

						  void c(View *param1View) override;
					  };

				  private:
					  const Runnable z = new RunnableAnonymousInnerClass2();

				  private:
					  class RunnableAnonymousInnerClass2 : public Runnable
					  {
					  public:
//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
						  RunnableAnonymousInnerClass2(); //super(outerInstance);

						  virtual void run();
					  };

				  public:
					  virtual ~ActionBarOverlayLayout()
					  {
						  delete B;
						  delete d;
						  delete e;
						  delete f;
						  delete g;
						  delete o;
						  delete p;
						  delete q;
						  delete r;
						  delete s;
						  delete t;
						  delete android;
						  delete w;
						  delete android;
					  }

					  ActionBarOverlayLayout(Context *paramContext);

					  ActionBarOverlayLayout(Context *paramContext, AttributeSet *paramAttributeSet);

				  private:
					  android::support::v7::internal_Renamed::widget::f *android.support::v7::b::a(View *paramView);

					  void android.support::v7::b::a(Context *paramContext);

					  bool android.support::v7::b::a(float paramFloat1, float paramFloat2);

					  bool android.support::v7::b::a(View *paramView, Rect *paramRect, bool paramBoolean1, bool paramBoolean2, bool paramBoolean3, bool paramBoolean4);

					  void c();

					  void d();

					  void e();

					  void f();

					  void g();

				  protected:
					  virtual android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b *android.support::v7::b::a();

				  public:
					  virtual android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b *android.support::v7::b::a(AttributeSet *paramAttributeSet);

					  virtual void b();

				  protected:
					  virtual bool checkLayoutParams(ViewGroup::LayoutParams *paramLayoutParams);

				  public:
					  virtual void draw(Canvas *paramCanvas);

				  protected:
					  virtual bool fitSystemWindows(Rect *paramRect);

					  virtual ViewGroup::LayoutParams *generateLayoutParams(ViewGroup::LayoutParams *paramLayoutParams);

				  public:
					  virtual int getActionBarHideOffset();

					  virtual int getNestedScrollAxes();

					  virtual CharSequence *getTitle();

				  protected:
					  virtual void onConfigurationChanged(Configuration *paramConfiguration);

					  virtual void onDetachedFromWindow();

					  virtual void onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

					  virtual void onMeasure(int paramInt1, int paramInt2);

				  public:
					  virtual bool onNestedFling(View *paramView, float paramFloat1, float paramFloat2, bool paramBoolean);

					  virtual bool onNestedPreFling(View *paramView, float paramFloat1, float paramFloat2);

					  virtual void onNestedPreScroll(View *paramView, int paramInt1, int paramInt2, std::vector<int> &paramArrayOfInt);

					  virtual void onNestedScroll(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

					  virtual void onNestedScrollAccepted(View *paramView1, View *paramView2, int paramInt);

					  virtual bool onStartNestedScroll(View *paramView1, View *paramView2, int paramInt);

					  virtual void onStopNestedScroll(View *paramView);

					  virtual void onWindowSystemUiVisibilityChanged(int paramInt);

				  protected:
					  virtual void onWindowVisibilityChanged(int paramInt);

				  public:
					  virtual void setActionBarHideOffset(int paramInt);

					  virtual void setActionBarVisibilityCallback(a *parama);

					  virtual void setHasNonEmbeddedTabs(bool paramBoolean);

					  virtual void setHideOnContentScrollEnabled(bool paramBoolean);

					  virtual void setIcon(int paramInt);

					  virtual void setIcon(Drawable *paramDrawable);

					  virtual void setLogo(int paramInt);

					  virtual void setOverlayMode(bool paramBoolean);

					  virtual void setShowingForActionMode(bool paramBoolean);

					  virtual void setUiOptions(int paramInt);

					  virtual void setWindowCallback(Window::Callback *paramCallback);

					  virtual void setWindowTitle(CharSequence *paramCharSequence);

					  virtual bool shouldDelayChildPressedState();

				  public:
					  class a
					  {
					public:
						virtual void a() = 0;

						virtual void a(int param1Int) = 0;

						virtual void a(bool param1Boolean) = 0;

						virtual void b() = 0;

						virtual void c() = 0;

						virtual void d() = 0;
					  };

				  public:
					  class b : public android.view::ViewGroup::MarginLayoutParams
					  {
					public:
						b(int param1Int1, int param1Int2);

						b(Context *param1Context, AttributeSet *param1AttributeSet);

						b(ViewGroup::LayoutParams *param1LayoutParams);
					  };
					};
				}
			}
		}
	}
}

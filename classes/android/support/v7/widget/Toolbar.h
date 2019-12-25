#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ActionMenuView.h"
#include "../internal/view/menu/j.h"
#include "../internal/view/menu/e.h"
#include "g.h"
#include "h.h"
#include <vector>
#include <algorithm>
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class e; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class q; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class a; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class o; } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class ActionMenuView; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class j; } } } } } }
namespace android { namespace support { namespace v4 { namespace h { class b; } } } }
namespace android { namespace support { namespace v4 { namespace h { class d; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class g; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class h; } } } }
namespace android { namespace support { namespace v4 { namespace h { class i; } } } }
namespace android { namespace support { namespace v4 { namespace h { class l; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v4 { namespace h { class f; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::Context;
				using android::graphics::drawable::Drawable;
				using b = android::support::v4::h::b;
				using d = android::support::v4::h::d;
				using f = android::support::v4::h::f;
				using i = android::support::v4::h::i;
				using l = android::support::v4::h::l;
				using a = android::support::v7::a::a;
				using c = android::support::v7::internal_Renamed::view::c;
				using e = android::support::v7::internal_Renamed::view::menu::e;
				using j = android::support::v7::internal_Renamed::view::menu::j;
				using n = android::support::v7::internal_Renamed::view::menu::n;
				using o = android::support::v7::internal_Renamed::widget::o;
				using p = android::support::v7::internal_Renamed::widget::p;
				using q = android::support::v7::internal_Renamed::widget::q;
				using r = android::support::v7::internal_Renamed::widget::r;
				using android::util::AttributeSet;
				using android::view::Menu;
				using android::view::MenuInflater;
				using android::view::MotionEvent;
				using android::view::View;
				using android::view::ViewGroup;
				using android::widget::ImageButton;
				using android::widget::ImageView;
				using android::widget::TextView;

				class Toolbar : public android->view.ViewGroup
				{
			  private:
				  bool A = false;

				  const std::vector<View*> B = std::vector();

				  const std::vector<View*> C = std::vector();

				  std::vector<int> const D = std::vector<int>(2);

				  c *E;

				  ActionMenuView::e *const F = new eAnonymousInnerClass();

			  private:
				  class eAnonymousInnerClass : public ActionMenuView::e
				  {
				  public:
//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
					  eAnonymousInnerClass(); //super(outerInstance);

					  virtual bool android->support.v7.a.a(MenuItem *param1MenuItem);
				  };

			  private:
				  q *G;

				  a *H;

				  j::a *I;

				  e::a *J;

				  bool K = false;

				  const Runnable L = new RunnableAnonymousInnerClass();

			  private:
				  class RunnableAnonymousInnerClass : public Runnable
				  {
				  public:
//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
					  RunnableAnonymousInnerClass(); //super(outerInstance);

					  virtual void run();
				  };

			  private:
				  o *const M;

			  public:
				  View *android;

			  private:
				  ActionMenuView *android;

				  TextView *android;

				  TextView *android;

				  ImageButton *android;

				  ImageView *android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Drawable *g_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  CharSequence *h_Renamed;

				  ImageButton *android;

				  Context *android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int k_Renamed = 0;

				  int android = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int m_Renamed = 0;

				  int android = 0;

				  int android = 0;

				  int android = 0;

				  int android = 0;

				  int android = 0;

				  int s = 0;

				  j *const t = new android->support.v7.internal_Renamed.view.menu.j();

				  int u = 8388627;

				  CharSequence *v;

				  CharSequence *w;

				  int x = 0;

				  int y = 0;

				  bool z = false;

			  public:
				  virtual ~Toolbar()
				  {
					  delete E;
					  delete G;
					  delete H;
					  delete I;
					  delete J;
					  delete M;
					  delete android;
					  delete android;
					  delete android;
					  delete android;
					  delete android;
					  delete android;
					  delete g;
					  delete h;
					  delete android;
					  delete android;
					  delete t;
					  delete v;
					  delete w;
				  }

				  Toolbar(Context *paramContext);

				  Toolbar(Context *paramContext, AttributeSet *paramAttributeSet);

				  Toolbar(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

			  private:
				  int android->support.v7.a.a(int paramInt);

				  int android->support.v7.a.a(View *paramView, int paramInt);

				  int android->support.v7.a.a(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4, std::vector<int> &paramArrayOfInt);

				  int android->support.v7.a.a(View *paramView, int paramInt1, std::vector<int> &paramArrayOfInt, int paramInt2);

				  int android->support.v7.a.a(std::vector<View*> &paramList, std::vector<int> &paramArrayOfInt);

				  void android->support.v7.a.a(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5);

				  void android->support.v7.a.a(View *paramView, bool paramBoolean);

				  void android->support.v7.a.a(std::vector<View*> &paramList, int paramInt);

				  bool android->support.v7.a.a(View *paramView);

				  int android->support.v4.h.b(int paramInt);

				  int android->support.v4.h.b(View *paramView);

				  int android->support.v4.h.b(View *paramView, int paramInt1, std::vector<int> &paramArrayOfInt, int paramInt2);

				  int android->support.v7.internal_Renamed.view.c(View *paramView);

				  bool android->support.v4.h.d(View *paramView);

				  void g();

				  MenuInflater *getMenuInflater();

				  void h();

				  void android->support.v4.h.i();

				  void android->support.v7.internal_Renamed.view.menu.j();

				  void k();

			  private:
				  class OnClickListenerAnonymousInnerClass : public android->view.View.OnClickListener
				  {
				  private:
					  Toolbar *outerInstance;

				  public:
					  OnClickListenerAnonymousInnerClass(Toolbar *outerInstance);

					  virtual void onClick(View *param1View);
				  };

			  private:
				  void android->support.v4.h.l();

				  bool m();

			  public:
				  virtual b *android->support.v7.a.a(AttributeSet *paramAttributeSet);

			  protected:
				  virtual b *android->support.v7.a.a(ViewGroup::LayoutParams *paramLayoutParams);

			  public:
				  virtual void android->support.v7.a.a(int paramInt1, int paramInt2);

				  virtual void android->support.v7.a.a(Context *paramContext, int paramInt);

				  virtual bool android->support.v7.a.a();

				  virtual void android->support.v4.h.b(Context *paramContext, int paramInt);

				  virtual bool android->support.v4.h.b();

				  virtual void android->support.v7.internal_Renamed.view.c();

			  protected:
				  virtual bool checkLayoutParams(ViewGroup::LayoutParams *paramLayoutParams);

				  virtual b *android->support.v4.h.d();

			  public:
				  virtual void android->support.v7.internal_Renamed.view.menu.e();

				  virtual void android->support.v4.h.f();

				  virtual int getContentInsetEnd();

				  virtual int getContentInsetLeft();

				  virtual int getContentInsetRight();

				  virtual int getContentInsetStart();

				  virtual Drawable *getLogo();

				  virtual CharSequence *getLogoDescription();

				  virtual Menu *getMenu();

				  virtual CharSequence *getNavigationContentDescription();

				  virtual Drawable *getNavigationIcon();

				  virtual Drawable *getOverflowIcon();

				  virtual int getPopupTheme();

				  virtual CharSequence *getSubtitle();

				  virtual CharSequence *getTitle();

				  virtual f *getWrapper();

			  protected:
				  virtual void onDetachedFromWindow();

			  public:
				  virtual bool onHoverEvent(MotionEvent *paramMotionEvent);

			  protected:
				  virtual void onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

			private:
				class CreatorAnonymousInnerClass : public android->os.Parcelable.Creator<d*>
				{
				private:
					Toolbar *outerInstance;

				public:
					CreatorAnonymousInnerClass(Toolbar *outerInstance);

					virtual Toolbar::d *android->support.v7.a.a(Parcel *param2Parcel);

					virtual std::vector<Toolbar::d*> android->support.v7.a.a(int param2Int);
				};
				}
			}
		}
	}

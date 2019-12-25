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
#include "f.h"
#include "g.h"
#include "h.h"
#include "../../../v4/h/x.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class ActionMenuView; } } } }
namespace android { namespace support { namespace v4 { namespace h { class u; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }

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
					using i = android::support::v4::h::i;
					using u = android::support::v4::h::u;
					using x = android::support::v4::h::x;
					using a = android::support::v7::b::a;
					using ActionMenuView = android::support::v7::widget::ActionMenuView;
					using android::util::AttributeSet;
					using android::view::MotionEvent;
					using android::view::View;
					using android::view::ViewGroup;

					class a : public android->view.ViewGroup
					{
				  protected:
					  a *const android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Context *const b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  ActionMenuView *c_Renamed;

					  a *d;

					  int e = 0;

					  u *f;

				  private:
					  bool g = false;

					  bool h = false;

				  public:
					  virtual ~a()
					  {
						  delete android;
						  delete b;
						  delete c;
						  delete d;
						  delete f;
					  }

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual internal *android->support.v7.b.a(Context *paramContext);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual internal *android->support.v7.b.a(Context *paramContext, AttributeSet *paramAttributeSet);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual internal *android->support.v7.b.a(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

				  protected:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static int android->support.v7.b.a(int paramInt1, int paramInt2, bool paramBoolean);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual int android->support.v7.b.a(View *paramView, int paramInt1, int paramInt2, int paramInt3);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual int android->support.v7.b.a(View *paramView, int paramInt1, int paramInt2, int paramInt3, bool paramBoolean);

				  public:
					  virtual int getAnimatedVisibility();

					  virtual int getContentHeight();

				  protected:
					  virtual void onConfigurationChanged(Configuration *paramConfiguration);

				  public:
					  virtual bool onHoverEvent(MotionEvent *paramMotionEvent);

					  virtual bool onTouchEvent(MotionEvent *paramMotionEvent);

					  virtual void setContentHeight(int paramInt);

					  virtual void setVisibility(int paramInt);

				  protected:
					  class a : public android->support.v4.h.x
					  {
									  private:
										  *e;

					public:
						int android = 0;

					private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						bool c_Renamed = false;

					protected:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual *android->support.v7.b.a(a *this$0);

					public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void android->support.v7.b.a(View *param1View);

						virtual void b(View *param1View);

						virtual void c(View *param1View);
					  };
					};
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../internal/view/menu/b.h"
#include "g.h"
#include "h.h"
#include "../../v4/h/b.h"
#include "../../v4/h/u.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class b; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class d; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v4 { namespace c { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class k; } } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class ActionMenuView; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class n; } } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class h; } } } }

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
				using a = android::support::v4::c::a::a;
				using a = android::support::v7::b::a;
				using b = android::support::v7::internal_Renamed::view::menu::b;
				using e = android::support::v7::internal_Renamed::view::menu::e;
				using f = android::support::v7::internal_Renamed::view::menu::f;
				using i = android::support::v7::internal_Renamed::view::menu::i;
				using j = android::support::v7::internal_Renamed::view::menu::j;
				using k = android::support::v7::internal_Renamed::view::menu::k;
				using n = android::support::v7::internal_Renamed::view::menu::n;
				using android::util::SparseBooleanArray;
				using android::view::MenuItem;
				using android::view::View;
				using android::view::ViewGroup;

				class a : public android->support.v7.internal_Renamed.view.menu.b, public android->support.v4.c.a::a::a
				{
			  private:
				  b *A;

			  public:
				  f *const g = new android->support.v7.internal_Renamed.view.menu.f(this, nullptr);

				  int h = 0;

			  private:
				  d *android;

				  Drawable *android;

				  bool android = false;

				  bool l = false;

				  bool m = false;

				  int android = 0;

				  int o = 0;

				  int p = 0;

				  bool q = false;

				  bool r = false;

				  bool s = false;

				  bool t = false;

				  int u = 0;

				  SparseBooleanArray *const v = new android->util.SparseBooleanArray();

				  View *w;

				  e *x;

				  a *y;

				  c *z;

			  public:
				  virtual ~a()
				  {
					  delete A;
					  delete g;
					  delete android;
					  delete android;
					  delete v;
					  delete w;
					  delete x;
					  delete y;
					  delete z;
				  }

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual internal *android->support.v4.c.a::a(Context *paramContext);

			  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  View *android->support.v4.c.a::a(MenuItem *paramMenuItem);

			  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual View *android->support.v4.c.a::a(f *paramf, View *paramView, ViewGroup *paramViewGroup);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void android->support.v4.c.a::a(Context *paramContext, e *parame);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void android->support.v4.c.a::a(Configuration *paramConfiguration);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void android->support.v4.c.a::a(Drawable *paramDrawable);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void android->support.v4.c.a::a(e *parame, bool paramBoolean);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void android->support.v4.c.a::a(f *paramf, k::a *parama);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void android->support.v4.c.a::a(ActionMenuView *paramActionMenuView);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void android->support.v4.c.a::a(bool paramBoolean);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual bool android->support.v4.c.a::a(int paramInt, f *paramf);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual bool android->support.v4.c.a::a(n *paramn);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual bool android->support.v4.c.a::a(ViewGroup *paramViewGroup, int paramInt);

				  void android->support.v7.internal_Renamed.view.menu.b(bool paramBoolean) override;

				  bool android->support.v7.internal_Renamed.view.menu.b() override;

			private:
				class bAnonymousInnerClass : public h.b
				{
				private:
					a *outerInstance;

				public:
//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
					bAnonymousInnerClass(a *outerInstance, UnknownType *this$0); //super(outerInstance, outerInstance, this$0);

					virtual h *android->support.v4.c.a::a();

					virtual bool android->support.v7.internal_Renamed.view.menu.b();

					virtual bool c();
				};
				}
			}
		}
	}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"
#include "b.h"
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
#include "o.h"
#include "p.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace widget { class Toolbar; } } } }
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class d; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class e; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class f; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }

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
					using android::graphics::drawable::Drawable;
					using a = android::support::v7::b::a;
					using Toolbar = android::support::v7::widget::Toolbar;
					using android::view::View;
					using android::view::Window;

					class q : public f
					{
				  private:
					  Toolbar *android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  int b_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  View *c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Drawable *d_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Drawable *e_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Drawable *f_Renamed;

					  bool g = false;

					  CharSequence *h;

					  CharSequence *i;

					  CharSequence *j;

					  Window::Callback *k;

					  bool l = false;

					  int m = 0;

					  o *const n;

					  int o = 0;

					  Drawable *p;

				  public:
					  virtual ~q()
					  {
						  delete android;
						  delete c;
						  delete d;
						  delete e;
						  delete f;
						  delete h;
						  delete i;
						  delete j;
						  delete k;
						  delete n;
						  delete p;
					  }

					  q(Toolbar *paramToolbar, bool paramBoolean);

					  q(Toolbar *paramToolbar, bool paramBoolean, int paramInt1, int paramInt2);

				  private:
					  class OnClickListenerAnonymousInnerClass : public android->view.View.OnClickListener
					  {
					  private:
						  q *outerInstance;

					  public:
						  OnClickListenerAnonymousInnerClass(q *outerInstance);

						  a *const outerInstance->android;

						  virtual void onClick(View *param1View);
					  };

				  private:
					  int c();

					  void d();

					  void e();

					  void e(CharSequence *paramCharSequence);

					  void f();

				  public:
					  virtual CharSequence *android->support.v7.b.a();

					  virtual void android->support.v7.b.a(int paramInt);

					  virtual void android->support.v7.b.a(Drawable *paramDrawable);

					  virtual void android->support.v7.b.a(View *paramView);

					  virtual void android->support.v7.b.a(Window::Callback *paramCallback);

					  virtual void android->support.v7.b.a(CharSequence *paramCharSequence);

					  virtual Context *b();

					  virtual void b(int paramInt);

					  virtual void b(Drawable *paramDrawable);

					  virtual void b(CharSequence *paramCharSequence);

					  virtual void c(int paramInt);

					  virtual void c(Drawable *paramDrawable);

					  virtual void c(CharSequence *paramCharSequence);

					  virtual void d(int paramInt);

					  virtual void d(Drawable *paramDrawable);

					  virtual void d(CharSequence *paramCharSequence);

					  virtual void e(int paramInt);
					};
				}
			}
		}
	}
}

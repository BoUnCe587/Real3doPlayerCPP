#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"
#include "f.h"
#include "g.h"
#include "j.h"
#include <vector>
#include <limits>
#include <stdexcept>
#include <typeinfo>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class g; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class f; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class e; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class h; } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class b; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::Context;
				using android::database::DataSetObserver;
				using android::graphics::Rect;
				using android::graphics::drawable::Drawable;
				using android::os::Handler;
				using d = android::support::v4::0.0f::d;
				using i = android::support::v4::h::i;
				using u = android::support::v4::h::u;
				using e = android::support::v4::widget::e;
				using a = android::support::v7::b::a;
				using h = android::support::v7::internal_Renamed::widget::h;
				using android::util::AttributeSet;
				using android::view::View;
				using android::widget::AdapterView;
				using android::widget::ListAdapter;
				using android::widget::ListView;
				using android::widget::PopupWindow;

				class h
				{
			  private:
				  static Method *android;

				  Handler *A = new android->os.Handler();

				  Rect *B = new android->graphics.Rect();

				  bool C = false;

				  int D = 0;

			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int b_Renamed = std::numeric_limits<int>::max();

			  private:
				  Context *c;

				  PopupWindow *android;

				  ListAdapter *android;

				  a *f;

				  int g = -2;

				  int android = 0;

				  int android = 0;

				  int j = 0;

				  bool k = false;

				  int l = 0;

				  bool m = false;

				  bool n = false;

				  View *o;

				  int p = 0;

				  DataSetObserver *q;

				  View *r;

				  Drawable *s;

				  AdapterView::OnItemClickListener *t;

				  AdapterView::OnItemSelectedListener *android;

				  g *const v = new g(this, nullptr);

				  f *const w = new f(this, nullptr);

				  e *const x = new android->support.v4.widget.e(this, nullptr);

				  c *const y = new c(this, nullptr);

				  Runnable z;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static h::StaticConstructor staticConstructor;


			  public:
				  virtual ~h()
				  {
					  delete A;
					  delete B;
					  delete c;
					  delete android;
					  delete android;
					  delete f;
					  delete o;
					  delete q;
					  delete r;
					  delete s;
					  delete t;
					  delete android;
					  delete v;
					  delete w;
					  delete x;
					  delete y;
				  }

				  virtual internal *android->support.v7.internal_Renamed.widget.h(Context *paramContext);

				  virtual internal *android->support.v7.internal_Renamed.widget.h(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

				  virtual internal *android->support.v7.internal_Renamed.widget.h(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt1, int paramInt2);

			  private:
				  void android->support.v7.b.a();

				  int b();

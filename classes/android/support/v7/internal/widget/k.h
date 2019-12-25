#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "h.h"
#include "i.h"
#include "../a.h"
#include "a.h"
#include "../../widget/g.h"
#include <vector>
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class d; } } } }

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
					using android::graphics::drawable::Drawable;
					using a = android::support::v7::a::a;
					using d = android::support::v7::widget::d;
					using f = android::support::v7::widget::f;
					using g = android::support::v7::widget::g;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::accessibility::AccessibilityEvent;
					using android::view::accessibility::AccessibilityNodeInfo;
					using android::view::animation::DecelerateInterpolator;
					using android::view::animation::Interpolator;
					using android::widget::AdapterView;
					using android::widget::BaseAdapter;
					using android::widget::HorizontalScrollView;
					using android::widget::ImageView;
					using android::widget::Spinner;
					using android::widget::TextView;

					class k : public android->widget.HorizontalScrollView, public android->widget.AdapterView.OnItemSelectedListener
					{
				  private:
					  static Interpolator *const j;

				  public:
					  Runnable android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  int b_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  int c_Renamed = 0;

				  private:
					  android::support::v7::internal_Renamed::widget::b *android;

					  g *e;

					  Spinner *android;

					  bool android = false;

					  int h = 0;

					  int i = 0;

				  public:
					  virtual ~k()
					  {
						  delete android;
						  delete e;
						  delete android;
					  }

				  private:
					  android::support::v7::internal_Renamed::widget::c *android->support.v7.a.a(a::b *paramb, bool paramBoolean);

					  bool android->support.v7.a.a();

					  void b();

					  bool c();

					  Spinner *android->support.v7.widget.d();

				  public:
					  virtual void android->support.v7.a.a(int paramInt);

					  virtual void onAttachedToWindow();

				  protected:
					  virtual void onConfigurationChanged(Configuration *paramConfiguration);

				  public:
					  virtual void onDetachedFromWindow();

					  template<typename T1>
					  void onItemSelected(AdapterView<T1> *paramAdapterView, View *paramView, int paramInt, long long paramLong);

					  virtual void onMeasure(int paramInt1, int paramInt2);

					  template<typename T1>
					  void onNothingSelected(AdapterView<T1> *paramAdapterView);

					  virtual void setAllowCollapse(bool paramBoolean);

					  virtual void setContentHeight(int paramInt);

					  virtual void setTabSelected(int paramInt);

				  private:
					  class a : public android->widget.BaseAdapter
					  {
									  private:
										  k *outerInstance;

					public:
						virtual ~a()
						{
							delete outerInstance;
						}

					private:
						internal *android->support.v7.a.a(k *this$0);

					public:
						virtual int getCount();

						virtual void *getItem(int param1Int);

						virtual long long getItemId(int param1Int);

						virtual View *getView(int param1Int, View *param1View, ViewGroup *param1ViewGroup);
					  };

				  private:
					  class b : public android->view.View.OnClickListener
					  {
									  private:
										  k *outerInstance;

					public:
						virtual ~b()
						{
							delete outerInstance;
						}

					private:
						b(k *outerInstance, k *this$0);

					public:
						virtual void onClick(View *param1View);
					  };

				  private:
					  class c : public android->support.v7.widget.g, public android->view.View.OnLongClickListener
					  {
									  private:
										  k *outerInstance;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						std::vector<int> const b_Renamed = {16842964};

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						a::b *c_Renamed;

						TextView *android;

						ImageView *e;

						View *android;

					public:
						virtual ~c()
						{
							delete c;
							delete android;
							delete e;
							delete android;
							delete outerInstance;
						}

						c(k *outerInstance, k *this$0, Context *param1Context, a::b *param1b, bool param1Boolean);

						virtual void android->support.v7.a.a();

						virtual void android->support.v7.a.a(a::b *param1b);

						virtual a::b *b();

						virtual void onInitializeAccessibilityEvent(AccessibilityEvent *param1AccessibilityEvent);

						virtual void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo *param1AccessibilityNodeInfo);

						virtual bool onLongClick(View *param1View);

						virtual void onMeasure(int param1Int1, int param1Int2);

						virtual void setSelected(bool param1Boolean);
					  };
					};
				}
			}
		}
	}
}

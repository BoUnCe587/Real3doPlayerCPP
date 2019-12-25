#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../../v4/h/k.h"
#include "a.h"
#include "b.h"
#include "c.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include "../../v4/h/l.h"
#include <vector>
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class o; } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v4 { namespace h { class b; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class b; } } } }
namespace android { namespace support { namespace v4 { namespace h { class d; } } } }
namespace android { namespace support { namespace v4 { namespace h { class l; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::Context;
				using android::content::res::Resources;
				using android::graphics::Rect;
				using android::graphics::drawable::Drawable;
				using k = android::support::v4::h::k;
				using l = android::support::v4::h::l;
				using o = android::support::v7::internal_Renamed::widget::o;
				using android::util::AttributeSet;
				using android::view::ViewGroup;
				using android::widget::Spinner;
				using android::widget::SpinnerAdapter;

				class d : public android.widget::Spinner, public android.support::v4::h::k
				{
			  private:
				  static const bool a = false;

				  static const bool b = false;

				  static std::vector<int> const c;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  o *d_Renamed;

				  c *e;

				  Context *f;

				  h::b *g;

				  SpinnerAdapter *h;

				  bool i = false;

				  b *j;

				  int android = 0;

				  Rect *const android;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static d::StaticConstructor staticConstructor;


			  public:
				  virtual ~d()
				  {
					  delete d;
					  delete e;
					  delete f;
					  delete g;
					  delete h;
					  delete j;
					  delete android;
				  }

				  d(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

				  d(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt1, int paramInt2);

				  d(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt1, int paramInt2, Resources::Theme *paramTheme);

			private:
				class OnItemClickListenerAnonymousInnerClass : public android.widget::AdapterView::OnItemClickListener
				{
				private:
					android.support::v4::h::l::d *outerInstance;

				public:
					OnItemClickListenerAnonymousInnerClass(android.support::v4::h::l::d *outerInstance, UnknownType *this$0);

					template<typename T1>
					void onItemClick(AdapterView<T1> *param2AdapterView, View *param2View, int param2Int, long long param2Long);
				};

			private:
				class OnGlobalLayoutListenerAnonymousInnerClass : public android.view::ViewTreeObserver::OnGlobalLayoutListener
				{
				private:
					android.support::v4::h::l::d *outerInstance;

				public:
					OnGlobalLayoutListenerAnonymousInnerClass(android.support::v4::h::l::d *outerInstance);

					virtual void onGlobalLayout();
				};

			private:
				class OnDismissListenerAnonymousInnerClass : public android.widget::PopupWindow::OnDismissListener
				{
				private:
					android.support::v4::h::l::d *outerInstance;

					ViewTreeObserver *viewTreeObserver;

				public:
					virtual ~OnDismissListenerAnonymousInnerClass()
					{
						delete viewTreeObserver;
					}

					OnDismissListenerAnonymousInnerClass(android.support::v4::h::l::d *outerInstance, ViewTreeObserver::OnGlobalLayoutListener *onGlobalLayoutListener, ViewTreeObserver *viewTreeObserver);

					virtual void onDismiss();
				};
				}
			}
		}
	}

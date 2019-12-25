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
#include "i.h"
#include "j.h"
#include "k.h"
#include "l.h"
#include "m.h"
#include "n.h"
#include "o.h"
#include "p.h"
#include "../../widget/g.h"
#include "../a.h"
#include "a.h"
#include <string>
#include <vector>
#include <limits>
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class e; } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class h; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class d; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class h; } } } } }

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
					using android::content::pm::ResolveInfo;
					using android::database::DataSetObserver;
					using android::graphics::drawable::Drawable;
					using a = android::support::v4::h::a;
					using g = android::support::v7::widget::g;
					using h = android::support::v7::widget::h;
					using android::util::AttributeSet;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::ViewTreeObserver;
					using android::widget::AdapterView;
					using android::widget::BaseAdapter;
					using android::widget::FrameLayout;
					using android::widget::ImageView;
					using android::widget::PopupWindow;

					class ActivityChooserView : public android->view.ViewGroup
					{
				  public:
					  a *android;

				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  a *const b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  android::support::v7::internal_Renamed::widget::b *const c_Renamed;

					  g *const d;

					  FrameLayout *const e;

					  ImageView *const f;

					  FrameLayout *const android;

					  const int android;

					  DataSetObserver *const i;

					  ViewTreeObserver::OnGlobalLayoutListener *const j;

					  h *k;

					  PopupWindow::OnDismissListener *l;

					  bool m = false;

					  int n = 0;

					  bool o = false;

					  int p = 0;

				  public:
					  virtual ~ActivityChooserView()
					  {
						  delete android;
						  delete b;
						  delete c;
						  delete d;
						  delete e;
						  delete f;
						  delete android;
						  delete i;
						  delete j;
						  delete k;
						  delete l;
					  }

				  private:
					  void android->support.v4.h.a(int paramInt);

					  h *getListPopupWindow();

				  public:
					  virtual bool android->support.v4.h.a();

					  virtual bool b();

					  virtual bool c();

					  virtual d *getDataModel();

				  protected:
					  virtual void onAttachedToWindow();

					  virtual void onDetachedFromWindow();

					  virtual void onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

					  virtual void onMeasure(int paramInt1, int paramInt2);

				  public:
					  virtual void setActivityChooserModel(d *paramd);

					  virtual void setDefaultActionButtonContentDescription(int paramInt);

					  virtual void setExpandActivityOverflowButtonContentDescription(int paramInt);

					  virtual void setExpandActivityOverflowButtonDrawable(Drawable *paramDrawable);

					  virtual void setInitialActivityCount(int paramInt);

					  virtual void setOnDismissListener(PopupWindow::OnDismissListener *paramOnDismissListener);

					  virtual void setProvider(a *parama);

				  public:
					  class InnerLayout : public android.support::v7::widget::g
					  {
					private:
						static std::vector<int> const android;

					public:
						InnerLayout(Context *param1Context, AttributeSet *param1AttributeSet);
					  };

				  private:
					  class a : public android->widget.BaseAdapter
					  {
									  private:
										  ActivityChooserView *outerInstance;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						android::support::v7::internal_Renamed::widget::d *b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						int c_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						bool d_Renamed = false;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						bool e_Renamed = false;

						bool f = false;

					public:
						virtual ~a()
						{
							delete b;
							delete outerInstance;
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual int android->support.v4.h.a();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void android->support.v4.h.a(int param1Int);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void android->support.v4.h.a(android::support::v7::internal_Renamed::widget::d *param1d);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void android->support.v4.h.a(bool param1Boolean);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void android->support.v4.h.a(bool param1Boolean1, bool param1Boolean2);

						virtual ResolveInfo *b();

						virtual int c();

						virtual android::support::v7::internal_Renamed::widget::d *d();

						virtual bool e();

						virtual int getCount();

						virtual void *getItem(int param1Int);

						virtual long long getItemId(int param1Int);

						virtual int getItemViewType(int param1Int);

						virtual View *getView(int param1Int, View *param1View, ViewGroup *param1ViewGroup);

				  private:
					  class b : public View::OnClickListener, public View::OnLongClickListener, public AdapterView::OnItemClickListener, public PopupWindow::OnDismissListener
					  {
									  private:
										  ActivityChooserView::a *outerInstance;

									  public:
										  virtual ~b()
										  {
											  delete outerInstance;
										  }

										  b(ActivityChooserView::a *outerInstance);

					private:
						void h::android::support::v4::h::a();

					public:
						virtual void onClick(h::android::view::View *param1View);

						virtual void onDismiss();

						template<typename T1>
						void onItemClick(h::android::widget::AdapterView<T1> *param1AdapterView, h::android::view::View *param1View, int param1Int, long long param1Long);

						virtual bool onLongClick(h::android::view::View *param1View);
					  };
					  };
					}
				}
			}
		}
	}

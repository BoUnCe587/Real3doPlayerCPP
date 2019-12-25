#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"
#include "../b.h"
#include "b.h"
#include "../c.h"
#include "c.h"
#include "d.h"
#include "f.h"
#include "g.h"
#include "k.h"
#include "l.h"
#include "m.h"
#include "n.h"
#include "o.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class h; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class a; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class g; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class j; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class n; } } } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{
					namespace menu
					{

						using android::content::Context;
						using android::content::res::Resources;
						using a = android::support::v7::b::a;
						using h = android::support::v7::widget::h;
						using android::view::LayoutInflater;
						using android::view::View;
						using android::view::ViewGroup;
						using android::view::ViewTreeObserver;
						using android::widget::AdapterView;
						using android::widget::PopupWindow;

						class i : public j, public android.view::View::OnKeyListener, public android.view::ViewTreeObserver::OnGlobalLayoutListener, public android.widget::AdapterView::OnItemClickListener, public android.widget::PopupWindow::OnDismissListener
						{
					  public:
						  static constexpr int android = 0;

						  bool b = false;

					  private:
						  Context *const c;

						  LayoutInflater *const d;

						  e *const e;

						  a *const f;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  const bool g_Renamed;

						  const int android;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  const int i_Renamed;

						  const int j;

						  View *k;

						  h *l;

						  ViewTreeObserver *m;

						  j::a *n;

						  ViewGroup *o;

						  bool p = false;

						  int q = 0;

						  int r = 0;

					  public:
						  virtual ~i()
						  {
							  delete c;
							  delete d;
							  delete e;
							  delete f;
							  delete k;
							  delete l;
							  delete m;
							  delete n;
							  delete o;
						  }

						  i(Context *paramContext, e *parame, View *paramView);

						  i(Context *paramContext, e *parame, View *paramView, bool paramBoolean, int paramInt);

						  i(Context *paramContext, e *parame, View *paramView, bool paramBoolean, int paramInt1, int paramInt2);

					  private:
						  int g();

					  public:
						  virtual void android.support::v7::b::a();

						  virtual void android.support::v7::b::a(int paramInt);

						  virtual void android.support::v7::b::a(Context *paramContext, e *parame);

						  virtual void android.support::v7::b::a(e *parame, bool paramBoolean);

						  virtual void android.support::v7::b::a(j::a *parama);

						  virtual void android.support::v7::b::a(View *paramView);

						  virtual void android.support::v7::b::a(bool paramBoolean);

						  virtual bool android.support::v7::b::a(e *parame, f *paramf);

						  virtual bool android.support::v7::b::a(n *paramn);
						}
					}
				}
			}
		}
	}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "k.h"
#include "../../../widget/ActionMenuView.h"
#include "../../../widget/f.h"
#include "../b.h"
#include "b.h"
#include "../c.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "../../../widget/h.h"
#include "g.h"
#include "i.h"
#include "j.h"
#include <vector>
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace widget { class f; } } } }
namespace android { namespace support { namespace v4 { namespace e { class b; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class b; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }

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
						using android::graphics::drawable::Drawable;
						using a = android::support::v7::b::a;
						using ActionMenuView = android::support::v7::widget::ActionMenuView;
						using f = android::support::v7::widget::f;
						using h = android::support::v7::widget::h;
						using android::util::AttributeSet;
						using android::view::View;

						class ActionMenuItemView : public android->support.v7.widget.f, public k.a, public android->support.v7.widget.ActionMenuView::a, public android->view.View.OnClickListener, public android->view.View.OnLongClickListener
						{
					  private:
						  f *android;

						  CharSequence *b;

						  Drawable *c;

						  e::b *d;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  h::b *e_Renamed;

						  b *android;

						  bool g = false;

						  bool android = false;

						  int i = 0;

						  int j = 0;

						  int k = 0;

					  public:
						  virtual ~ActionMenuItemView()
						  {
							  delete android;
							  delete b;
							  delete c;
							  delete d;
							  delete e;
							  delete android;
						  }

						  ActionMenuItemView(Context *paramContext);

						  ActionMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet);

						  ActionMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

					  private:
						  void e();
						}
					}
				}
			}
		}
	}

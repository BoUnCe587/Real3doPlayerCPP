#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../../b/a.h"
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
#include "q.h"
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }

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
					using a = android::support::v7::b::a;
					using android::util::AttributeSet;
					using android::view::View;
					using android::widget::LinearLayout;
					using android::widget::TextView;

					class ActionBarContextView : public a
					{
				  private:
					  CharSequence *g;

					  CharSequence *h;

					  View *i;

					  View *j;

					  LinearLayout *k;

					  TextView *l;

					  TextView *m;

					  int n = 0;

					  int o = 0;

					  bool p = false;

					  int q = 0;

				  public:
					  virtual ~ActionBarContextView()
					  {
						  delete g;
						  delete h;
						  delete i;
						  delete j;
						  delete k;
						  delete l;
						  delete m;
					  }

					  ActionBarContextView(Context *paramContext);

					  ActionBarContextView(Context *paramContext, AttributeSet *paramAttributeSet);

					  ActionBarContextView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

				  private:
					  void a();

					}
				}
			}
		}
	}

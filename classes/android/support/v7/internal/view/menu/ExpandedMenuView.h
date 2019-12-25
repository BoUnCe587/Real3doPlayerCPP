#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "e.h"
#include "k.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"
#include "../b.h"
#include "b.h"
#include "../c.h"
#include "c.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class a; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class a; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }

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
						using android::util::AttributeSet;
						using android::view::View;
						using android::widget::AdapterView;
						using android::widget::ListView;

						class ExpandedMenuView final : public ListView, public e::b, public k, public AdapterView::OnItemClickListener
						{
					  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  static std::vector<int> const a_Renamed = {16842964, 16843049};

						  e *b;

						  int c = 0;

					  public:
						  virtual ~ExpandedMenuView()
						  {
							  delete b;
						  }

						  ExpandedMenuView(Context *paramContext, AttributeSet *paramAttributeSet);

						  ExpandedMenuView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

						  bool a(f *paramf);

						  int getWindowAnimations();

					  protected:
						  void onDetachedFromWindow();

					  public:
						  void onItemClick(AdapterView *paramAdapterView, View *paramView, int paramInt, long long paramLong);
						};
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ExpandedMenuView.h"
#include "../../widget/p.h"
#include "f.h"

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
						using p = android::support::v7::internal_Renamed::widget::p;
						using android::util::AttributeSet;
						using android::view::View;
						using android::widget::AdapterView;
						using android::widget::ListView;

						ExpandedMenuView::ExpandedMenuView(Context *paramContext, AttributeSet *paramAttributeSet) : ExpandedMenuView(paramContext, paramAttributeSet, 16842868)
						{
						}

						ExpandedMenuView::ExpandedMenuView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android::widget::ListView(paramContext, paramAttributeSet)
						{
						  setOnItemClickListener(this);
						  p p = p::a(paramContext, paramAttributeSet, a_Renamed, paramInt, 0);
						  if (p::d(0))
						  {
							setBackgroundDrawable(p::a(0));
						  }
						  if (p::d(1))
						  {
							setDivider(p::a(1));
						  }
						  p::b();
						}

						bool ExpandedMenuView::a(f *paramf)
						{
							return this->b->a(paramf, 0);
						}

						int ExpandedMenuView::getWindowAnimations()
						{
							return this->c;
						}

						void ExpandedMenuView::onDetachedFromWindow()
						{
						  ListView::onDetachedFromWindow();
						  setChildrenDrawingCacheEnabled(false);
						}

						void ExpandedMenuView::onItemClick(AdapterView *paramAdapterView, View *paramView, int paramInt, long long paramLong)
						{
							a(static_cast<f*>(getAdapter().getItem(paramInt)));
						}
					}
				}
			}
		}
	}
}

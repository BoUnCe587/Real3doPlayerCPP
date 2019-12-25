//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "TintImageView.h"
#include "o.h"
#include "p.h"

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
					using android::util::AttributeSet;
					using android::widget::ImageView;

					TintImageView::TintImageView(Context *paramContext) : TintImageView(paramContext, nullptr)
					{
					}

					TintImageView::TintImageView(Context *paramContext, AttributeSet *paramAttributeSet) : TintImageView(paramContext, paramAttributeSet, 0)
					{
					}

					TintImageView::TintImageView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android::widget::ImageView(paramContext, paramAttributeSet, paramInt), b(p::c())
					{
					  p *p = p::a(getContext(), paramAttributeSet, a, paramInt, 0);
					  if (p->a() > 0)
					  {
						if (p->d(0))
						{
						  setBackgroundDrawable(p->a(0));
						}
						if (p->d(1))
						{
						  setImageDrawable(p->a(1));
						}
					  }
					  p->b();
					}

					void TintImageView::setImageResource(int paramInt)
					{
						setImageDrawable(this->b->a(paramInt));
					}
				}
			}
		}
	}
}

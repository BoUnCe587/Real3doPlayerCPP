//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "k.h"
#include "a.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::content::Context;
				using android::view::animation::Interpolator;
				using android::widget::OverScroller;

				int k::a(void *paramObject)
				{
					return (static_cast<OverScroller*>(paramObject))->getFinalY();
				}

				void *k::a(Context *paramContext, Interpolator *paramInterpolator)
				{
					return (paramInterpolator != nullptr) ? new OverScroller(paramContext, paramInterpolator) : new OverScroller(paramContext);
				}

				void k::a(void *paramObject, int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5, int paramInt6, int paramInt7, int paramInt8)
				{
					(static_cast<OverScroller*>(paramObject))->fling(paramInt1, paramInt2, paramInt3, paramInt4, paramInt5, paramInt6, paramInt7, paramInt8);
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "n.h"
#include "a.h"
#include "u.h"
#include "b.h"
#include "c.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::animation::ValueAnimator;
				using android::graphics::Paint;
				using android::view::View;

				int n::a(int paramInt1, int paramInt2, int paramInt3)
				{
					return View::resolveSizeAndState(paramInt1, paramInt2, paramInt3);
				}

				int n::a(View *paramView)
				{
					return paramView->getMeasuredState();
				}

				long long n::a()
				{
					return ValueAnimator::getFrameDelay();
				}

				void n::a(View *paramView, float paramFloat)
				{
					paramView->setTranslationY(paramFloat);
				}

				void n::a(View *paramView, int paramInt, Paint *paramPaint)
				{
					paramView->setLayerType(paramInt, paramPaint);
				}

				void n::a(View *paramView, bool paramBoolean)
				{
					paramView->setActivated(paramBoolean);
				}

				float n::b(View *paramView)
				{
					return paramView->getTranslationY();
				}

				void n::c(View *paramView)
				{
					paramView->jumpDrawablesToCurrentState();
				}
			}
		}
	}
}

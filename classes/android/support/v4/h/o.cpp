//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "o.h"
#include "a.h"
#include "u.h"
#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::view::View;

				int o::a(View *paramView)
				{
					return paramView->getMinimumHeight();
				}

				void o::a(View *paramView, Runnable paramRunnable)
				{
					paramView->postOnAnimation(paramRunnable);
				}

				void o::a(View *paramView, Runnable paramRunnable, long long paramLong)
				{
					paramView->postOnAnimationDelayed(paramRunnable, paramLong);
				}

				void o::b(View *paramView)
				{
					paramView->requestFitSystemWindows();
				}
			}
		}
	}
}

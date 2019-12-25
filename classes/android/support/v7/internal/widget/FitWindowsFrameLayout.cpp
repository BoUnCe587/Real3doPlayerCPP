//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "FitWindowsFrameLayout.h"

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
					using android::graphics::Rect;
					using android::util::AttributeSet;
					using android::widget::FrameLayout;

					FitWindowsFrameLayout::FitWindowsFrameLayout(Context *paramContext) : android::widget::FrameLayout(paramContext)
					{
					}

					FitWindowsFrameLayout::FitWindowsFrameLayout(Context *paramContext, AttributeSet *paramAttributeSet) : android::widget::FrameLayout(paramContext, paramAttributeSet)
					{
					}

					bool FitWindowsFrameLayout::fitSystemWindows(Rect *paramRect)
					{
					  if (this->a != nullptr)
					  {
						this->a->a_Renamed(paramRect);
					  }
					  return FrameLayout::fitSystemWindows(paramRect);
					}

					void FitWindowsFrameLayout::setOnFitSystemWindowsListener(g::a *parama)
					{
						this->a = parama;
					}
				}
			}
		}
	}
}

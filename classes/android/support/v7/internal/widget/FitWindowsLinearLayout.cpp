//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "FitWindowsLinearLayout.h"

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
					using android::widget::LinearLayout;

					FitWindowsLinearLayout::FitWindowsLinearLayout(Context *paramContext) : android::widget::LinearLayout(paramContext)
					{
					}

					FitWindowsLinearLayout::FitWindowsLinearLayout(Context *paramContext, AttributeSet *paramAttributeSet) : android::widget::LinearLayout(paramContext, paramAttributeSet)
					{
					}

					bool FitWindowsLinearLayout::fitSystemWindows(Rect *paramRect)
					{
					  if (this->a != nullptr)
					  {
						this->a->a_Renamed(paramRect);
					  }
					  return LinearLayout::fitSystemWindows(paramRect);
					}

					void FitWindowsLinearLayout::setOnFitSystemWindowsListener(g::a *parama)
					{
						this->a = parama;
					}
				}
			}
		}
	}
}

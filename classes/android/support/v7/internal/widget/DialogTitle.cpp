//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "DialogTitle.h"
#include "i.h"
#include "../../b/a.h"

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
					using android::content::res::TypedArray;
					using a = android::support::v7::b::a;
					using android::text::Layout;
					using android::util::AttributeSet;
					using android::widget::TextView;

					DialogTitle::DialogTitle(Context *paramContext) : android::widget::TextView(paramContext)
					{
					}

					DialogTitle::DialogTitle(Context *paramContext, AttributeSet *paramAttributeSet) : android::widget::TextView(paramContext, paramAttributeSet)
					{
					}

					DialogTitle::DialogTitle(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android::widget::TextView(paramContext, paramAttributeSet, paramInt)
					{
					}

					void DialogTitle::onMeasure(int paramInt1, int paramInt2)
					{
					  TextView::onMeasure(paramInt1, paramInt2);
					  Layout *layout = getLayout();
					  if (layout != nullptr)
					  {
						int i = layout->getLineCount();
						if (i > 0 && layout->getEllipsisCount(i - 1) > 0)
						{
						  setSingleLine(false);
						  setMaxLines(2);
						  TypedArray *typedArray = getContext().obtainStyledAttributes(nullptr, a::j::TextAppearance, 16842817, 16973892);
						  i = typedArray->getDimensionPixelSize(a::j::TextAppearance_android_textSize, 0);
						  if (i != 0)
						  {
							setTextSize(0, i);
						  }
						  typedArray->recycle();
						  TextView::onMeasure(paramInt1, paramInt2);
						}
					  }
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "Space.h"
#include "a.h"
#include "i.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::content::Context;
				using android::graphics::Canvas;
				using android::util::AttributeSet;
				using android::view::View;

				Space::Space(Context *paramContext) : Space(paramContext, nullptr)
				{
				}

				Space::Space(Context *paramContext, AttributeSet *paramAttributeSet) : Space(paramContext, paramAttributeSet, 0)
				{
				}

				Space::Space(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android::view::View(paramContext, paramAttributeSet, paramInt)
				{
				  if (getVisibility() == 0)
				  {
					setVisibility(4);
				  }
				}

				int Space::a(int paramInt1, int paramInt2)
				{
				  int i = View::MeasureSpec::getMode(paramInt2);
				  paramInt2 = View::MeasureSpec::getSize(paramInt2);
				  switch (i)
				  {
					default:
					  return paramInt1;
					case -2147483648:
					  return std::min(paramInt1, paramInt2);
					case 1073741824:
					  break;
				  }
				  return paramInt2;
				}

				void Space::draw(Canvas *paramCanvas)
				{
				}

				void Space::onMeasure(int paramInt1, int paramInt2)
				{
					setMeasuredDimension(a(getSuggestedMinimumWidth(), paramInt1), a(getSuggestedMinimumHeight(), paramInt2));
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"
#include "e.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::content::Context;
				using android::util::AttributeSet;
				using android::widget::TextView;

				f::f(Context *paramContext) : f(paramContext, nullptr)
				{
				}

				f::f(Context *paramContext, AttributeSet *paramAttributeSet) : f(paramContext, paramAttributeSet, 16842884)
				{
				}

				f::f(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android::widget::TextView(paramContext, paramAttributeSet, paramInt)
				{
				  this->a->a(paramAttributeSet, paramInt);
				}

				void f::setTextAppearance(Context *paramContext, int paramInt)
				{
				  TextView::setTextAppearance(paramContext, paramInt);
				  if (this->a != nullptr)
				  {
					this->a->a(paramContext, paramInt);
				  }
				}
			}
		}
	}
}

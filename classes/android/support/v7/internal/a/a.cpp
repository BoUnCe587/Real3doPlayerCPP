//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace a
				{
					using android::content::Context;
					using android::graphics::Rect;
					using android::text::method::TransformationMethod;
					using android::view::View;

					a::a(Context *paramContext)
					{
						this->a_Renamed = (paramContext->getResources().getConfiguration()).locale;
					}

					CharSequence *a::getTransformation(CharSequence *paramCharSequence, View *paramView)
					{
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
						return (paramCharSequence != nullptr) ? paramCharSequence->toString()->toUpperCase(this->a_Renamed) : nullptr;
					}

					void a::onFocusChanged(View *paramView, CharSequence *paramCharSequence, bool paramBoolean, int paramInt, Rect *paramRect)
					{
					}
				}
			}
		}
	}
}

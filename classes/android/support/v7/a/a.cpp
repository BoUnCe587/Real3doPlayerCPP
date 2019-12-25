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
			namespace a
			{
				using android::content::Context;
				using android::content::res::TypedArray;
				using android::graphics::drawable::Drawable;
				using a = android::support::v7::b::a;
				using android::util::AttributeSet;
				using android::view::View;
				using android::view::ViewGroup;

				internal *a::a::android.support::v7::b::a(int param1Int1, int param1Int2)
				{
				  ViewGroup::MarginLayoutParams(param1Int1, param1Int2);
				  this->a = 8388627;
				}

				internal *a::a::android.support::v7::b::a(Context *param1Context, AttributeSet *param1AttributeSet)
				{
				  ViewGroup::MarginLayoutParams(param1Context, param1AttributeSet);
				  TypedArray *typedArray = param1Context->obtainStyledAttributes(param1AttributeSet, android.support::v7::b::a::j::ActionBarLayout);
				  this->a = typedArray->getInt(android.support::v7::b::a::j::ActionBarLayout_android_layout_gravity, 0);
				  typedArray->recycle();
				}

				internal *a::a::android.support::v7::b::a(a *param1a)
				{
				  ViewGroup::MarginLayoutParams(param1a);
				  this->a = param1a->a;
				}

				internal *a::a::android.support::v7::b::a(ViewGroup::LayoutParams *param1LayoutParams)
				{
					ViewGroup::MarginLayoutParams(param1LayoutParams);
				}
			}
		}
	}
}

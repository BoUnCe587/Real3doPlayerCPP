//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "e.h"
#include "i.h"
#include "../internal/widget/l.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::content::Context;
				using android::content::res::ColorStateList;
				using android::content::res::TypedArray;
				using android::os::Build;
				using a = android::support::v7::b::a;
				using a = android::support::v7::internal_Renamed::a::a;
				using l = android::support::v7::internal_Renamed::widget::l;
				using android::text::method::TransformationMethod;
				using android::util::AttributeSet;
				using android::widget::TextView;

				e::e(TextView *paramTextView) : c(paramTextView)
				{
				}

				void e::android.support::v7::b::a(Context *paramContext, int paramInt)
				{
				  TypedArray *typedArray = paramContext->obtainStyledAttributes(paramInt, b);
				  if (typedArray->hasValue(0))
				  {
					android.support::v7::b::a(typedArray->getBoolean(0, false));
				  }
				  typedArray->recycle();
				}

				void e::android.support::v7::b::a(AttributeSet *paramAttributeSet, int paramInt)
				{
				  Context *context = this->c->getContext();
				  TypedArray *typedArray2 = context->obtainStyledAttributes(paramAttributeSet, android.support::v7::b::a, paramInt, 0);
				  int i = typedArray2->getResourceId(0, -1);
				  typedArray2->recycle();
				  if (i != -1)
				  {
					typedArray2 = context->obtainStyledAttributes(i, android.support::v7::b::a::j::TextAppearance);
					if (typedArray2->hasValue(android.support::v7::b::a::j::TextAppearance_textAllCaps))
					{
					  android.support::v7::b::a(typedArray2->getBoolean(android.support::v7::b::a::j::TextAppearance_textAllCaps, false));
					}
					typedArray2->recycle();
				  }
				  TypedArray *typedArray1 = context->obtainStyledAttributes(paramAttributeSet, b, paramInt, 0);
				  if (typedArray1->hasValue(0))
				  {
					android.support::v7::b::a(typedArray1->getBoolean(0, false));
				  }
				  typedArray1->recycle();
				  ColorStateList *colorStateList = this->c->getTextColors();
				  if (colorStateList != nullptr && !colorStateList->isStateful())
				  {
					if (android.os::Build::VERSION::SDK_INT < 21)
					{
					  paramInt = android.support::v7::internal_Renamed::widget::l::c(context, 16842808);
					}
					else
					{
					  paramInt = android.support::v7::internal_Renamed::widget::l::a(context, 16842808);
					}
					this->c->setTextColor(android.support::v7::internal_Renamed::widget::l::a(colorStateList->getDefaultColor(), paramInt));
				  }
				}

				void e::android.support::v7::b::a(bool paramBoolean)
				{
				  TransformationMethod *transformationMethod;
				  TextView *textView = this->c;
				  if (paramBoolean)
				  {
					transformationMethod = new android.support::v7::b::a(this->c->getContext());
				  }
				  else
				  {
					transformationMethod = nullptr;
				  }
				  textView->setTransformationMethod(transformationMethod);
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "../internal/widget/o.h"
#include "c.h"
#include "e.h"
#include "../internal/widget/p.h"

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
				using android::graphics::PorterDuff;
				using android::graphics::drawable::Drawable;
				using k = android::support::v4::h::k;
				using a = android::support::v7::b::a;
				using m = android::support::v7::internal_Renamed::widget::m;
				using o = android::support::v7::internal_Renamed::widget::o;
				using p = android::support::v7::internal_Renamed::widget::p;
				using android::util::AttributeSet;
				using android::widget::AutoCompleteTextView;

				b::b(Context *paramContext) : b(paramContext, nullptr)
				{
				}

				b::b(Context *paramContext, AttributeSet *paramAttributeSet) : b(paramContext, paramAttributeSet, a::a::autoCompleteTextViewStyle)
				{
				}

				b::b(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android.widget::AutoCompleteTextView(m::a(paramContext), paramAttributeSet, paramInt)
				{
				  android.support::v7::internal_Renamed::widget::p android.support::v7::internal_Renamed::widget::p = android.support::v7::internal_Renamed::widget::p::a(getContext(), paramAttributeSet, android.support::v7::b::a, paramInt, 0);
				  this->b_Renamed = android.support::v7::internal_Renamed::widget::p::c();
				  if (android.support::v7::internal_Renamed::widget::p::d(0))
				  {
					setDropDownBackgroundDrawable(android.support::v7::internal_Renamed::widget::p::a(0));
				  }
				  android.support::v7::internal_Renamed::widget::p::b();
				  this->c = new c(this, this->b_Renamed);
				  this->c->a(paramAttributeSet, paramInt);
				  this->d = new e(this);
				  this->d->a(paramAttributeSet, paramInt);
				}

				void b::drawableStateChanged()
				{
				  AutoCompleteTextView::drawableStateChanged();
				  if (this->c != nullptr)
				  {
					this->c->c_Renamed();
				  }
				}

				ColorStateList *b::getSupportBackgroundTintList()
				{
					return (this->c != nullptr) ? this->c->a() : nullptr;
				}

				PorterDuff::Mode *b::getSupportBackgroundTintMode()
				{
					return (this->c != nullptr) ? this->c->b() : nullptr;
				}

				void b::setBackgroundDrawable(Drawable *paramDrawable)
				{
				  AutoCompleteTextView::setBackgroundDrawable(paramDrawable);
				  if (this->c != nullptr)
				  {
					this->c->a(paramDrawable);
				  }
				}

				void b::setBackgroundResource(int paramInt)
				{
				  AutoCompleteTextView::setBackgroundResource(paramInt);
				  if (this->c != nullptr)
				  {
					this->c->a(paramInt);
				  }
				}

				void b::setDropDownBackgroundResource(int paramInt)
				{
				  if (this->b_Renamed != nullptr)
				  {
					setDropDownBackgroundDrawable(this->b_Renamed->a(paramInt));
					return;
				  }
				  AutoCompleteTextView::setDropDownBackgroundResource(paramInt);
				}

				void b::setSupportBackgroundTintList(ColorStateList *paramColorStateList)
				{
				  if (this->c != nullptr)
				  {
					this->c->a(paramColorStateList);
				  }
				}

				void b::setSupportBackgroundTintMode(PorterDuff::Mode *paramMode)
				{
				  if (this->c != nullptr)
				  {
					this->c->a(paramMode);
				  }
				}

				void b::setTextAppearance(Context *paramContext, int paramInt)
				{
				  AutoCompleteTextView::setTextAppearance(paramContext, paramInt);
				  if (this->d != nullptr)
				  {
					this->d->a(paramContext, paramInt);
				  }
				}
			}
		}
	}
}

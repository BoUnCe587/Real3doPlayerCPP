//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"
#include "../internal/widget/o.h"
#include "../internal/widget/n.h"
#include "../b/a.h"
#include "../../v4/h/l.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::content::res::ColorStateList;
				using android::content::res::TypedArray;
				using android::graphics::PorterDuff;
				using android::graphics::drawable::Drawable;
				using l = android::support::v4::h::l;
				using a = android::support::v7::b::a;
				using a = android::support::v7::c::a::a;
				using n = android::support::v7::internal_Renamed::widget::n;
				using o = android::support::v7::internal_Renamed::widget::o;
				using android::util::AttributeSet;
				using android::view::View;

				c::c(View *paramView, o *paramo) : b(paramo)
				{
				  this->a = paramView;
				}

				ColorStateList *c::android->support.v7.b.a()
				{
					return (this->d != nullptr) ? this->d->a : nullptr;
				}

				void c::android->support.v7.b.a(int paramInt)
				{
				  ColorStateList *colorStateList;
				  if (this->b_Renamed != nullptr)
				  {
					colorStateList = this->b_Renamed->c(paramInt);
				  }
				  else
				  {
					colorStateList = nullptr;
				  }
				  b(colorStateList);
				}

				void c::android->support.v7.b.a(ColorStateList *paramColorStateList)
				{
				  if (this->d == nullptr)
				  {
					this->d = new android->support.v7.internal_Renamed.widget.n();
				  }
				  this->d->a = paramColorStateList;
				  this->d->d = true;
				  c_Renamed();
				}

				void c::android->support.v7.b.a(PorterDuff::Mode *paramMode)
				{
				  if (this->d == nullptr)
				  {
					this->d = new android->support.v7.internal_Renamed.widget.n();
				  }
				  this->d->b = paramMode;
				  this->d->c = true;
				  c_Renamed();
				}

				void c::android->support.v7.b.a(Drawable *paramDrawable)
				{
					b(nullptr);
				}

				void c::android->support.v7.b.a(AttributeSet *paramAttributeSet, int paramInt)
				{
				  typedArray = this->a.getContext().obtainStyledAttributes(paramAttributeSet, android->support.v7.b.a::j.ViewBackgroundHelper, paramInt, 0);
				  try
				  {
					if (typedArray::hasValue(android->support.v7.b.a::j.ViewBackgroundHelper_android_background))
					{
					  ColorStateList *colorStateList = this->b_Renamed->c(typedArray::getResourceId(android->support.v7.b.a::j.ViewBackgroundHelper_android_background, -1));
					  if (colorStateList != nullptr)
					  {
						b(colorStateList);
					  }
					}
					if (typedArray::hasValue(android->support.v7.b.a::j.ViewBackgroundHelper_backgroundTint))
					{
					  android->support.v4.h.l::a(this->a, typedArray::getColorStateList(android->support.v7.b.a::j.ViewBackgroundHelper_backgroundTint));
					}
					if (typedArray::hasValue(android->support.v7.b.a::j.ViewBackgroundHelper_backgroundTintMode))
					{
					  android->support.v4.h.l::a(this->a, android->support.v7.b.a::a(typedArray::getInt(android->support.v7.b.a::j.ViewBackgroundHelper_backgroundTintMode, -1), nullptr));
					}
					return;
				  }
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
				  finally
				  {
					typedArray::recycle();
				  }
				}

				PorterDuff::Mode *c::b()
				{
					return (this->d != nullptr) ? this->d->b : nullptr;
				}

				void c::b(ColorStateList *paramColorStateList)
				{
				  if (paramColorStateList != nullptr)
				  {
					if (this->c_Renamed == nullptr)
					{
					  this->c_Renamed = new android->support.v7.internal_Renamed.widget.n();
					}
					this->c_Renamed->a = paramColorStateList;
					this->c_Renamed->d = true;
				  }
				  else
				  {
					this->c_Renamed = nullptr;
				  }
				  c_Renamed();
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void c::c_Renamed()
				{
				  if (this->a.getBackground() != nullptr)
				  {
					if (this->d != nullptr)
					{
					  android->support.v7.internal_Renamed.widget.o::a(this->a, this->d);
					  return;
					}
				  }
				  else
				  {
					return;
				  }
				  if (this->c_Renamed != nullptr)
				  {
					android->support.v7.internal_Renamed.widget.o::a(this->a, this->c_Renamed);
					return;
				  }
				}
			}
		}
	}
}

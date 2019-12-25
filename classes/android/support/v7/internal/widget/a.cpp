//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "../../widget/ActionMenuView.h"
#include "../../../v4/h/u.h"
#include "../../../v4/h/i.h"
#include "j.h"

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
					using android::content::res::Configuration;
					using android::content::res::TypedArray;
					using android::os::Build;
					using i = android::support::v4::h::i;
					using u = android::support::v4::h::u;
					using x = android::support::v4::h::x;
					using a = android::support::v7::b::a;
					using ActionMenuView = android::support::v7::widget::ActionMenuView;
					using a = android::support::v7::widget::a;
					using android::util::AttributeSet;
					using android::util::TypedValue;
					using android::view::ContextThemeWrapper;
					using android::view::MotionEvent;
					using android::view::View;
					using android::view::ViewGroup;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					internal *a::android->support.v7.b.a(Context *paramContext)
					{
						this(paramContext, nullptr);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					internal *a::android->support.v7.b.a(Context *paramContext, AttributeSet *paramAttributeSet)
					{
						this(paramContext, paramAttributeSet, 0);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					internal *a::android->support.v7.b.a(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt)
					{
					  ViewGroup(paramContext, paramAttributeSet, paramInt);
					  TypedValue *typedValue = new android->util.TypedValue();
					  if (paramContext->getTheme().resolveAttribute(android->support.v7.b.a::a.actionBarPopupTheme, typedValue, true) && typedValue->resourceId != 0)
					  {
						this->b_Renamed = new android->view.ContextThemeWrapper(paramContext, typedValue->resourceId);
						return;
					  }
					  this->b_Renamed = paramContext;
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					int a::android->support.v7.b.a(int paramInt1, int paramInt2, bool paramBoolean)
					{
						return paramBoolean ? (paramInt1 - paramInt2) : (paramInt1 + paramInt2);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					int a::android->support.v7.b.a(View *paramView, int paramInt1, int paramInt2, int paramInt3)
					{
					  paramView->measure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt1, -2147483648), paramInt2);
					  return std::max(0, paramInt1 - paramView->getMeasuredWidth() - paramInt3);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					int a::android->support.v7.b.a(View *paramView, int paramInt1, int paramInt2, int paramInt3, bool paramBoolean)
					{
					  int android->support.v4.h->i = paramView->getMeasuredWidth();
					  int j = paramView->getMeasuredHeight();
					  paramInt2 = (paramInt3 - j) / 2 + paramInt2;
					  if (paramBoolean)
					  {
						paramView->layout(paramInt1 - android->support.v4.h.i, paramInt2, paramInt1, j + paramInt2);
					  }
					  else
					  {
						paramView->layout(paramInt1, paramInt2, paramInt1 + android->support.v4.h.i, j + paramInt2);
					  }
					  paramInt1 = android->support.v4.h.i;
					  if (paramBoolean)
					  {
						paramInt1 = -android->support.v4.h.i;
					  }
					  return paramInt1;
					}

					int a::getAnimatedVisibility()
					{
						return (this->f != nullptr) ? this->a.a : getVisibility();
					}

					int a::getContentHeight()
					{
						return this->e;
					}

					void a::onConfigurationChanged(Configuration *paramConfiguration)
					{
					  if (android->os.Build.VERSION.SDK_INT >= 8)
					  {
						ViewGroup::onConfigurationChanged(paramConfiguration);
					  }
					  TypedArray *typedArray = getContext().obtainStyledAttributes(nullptr, android->support.v7.b.a::j.ActionBar, android->support.v7.b.a::a.actionBarStyle, 0);
					  setContentHeight(typedArray->getLayoutDimension(android->support.v7.b.a::j.ActionBar_height, 0));
					  typedArray->recycle();
					  if (this->d != nullptr)
					  {
						this->d->a(paramConfiguration);
					  }
					}

					bool a::onHoverEvent(MotionEvent *paramMotionEvent)
					{
					  int android->support.v4.h->i = android->support.v4.h.i::a(paramMotionEvent);
					  if (android->support.v4.h->i == 9)
					  {
						this->h = false;
					  }
					  if (!this->h)
					  {
						bool bool_Renamed = ViewGroup::onHoverEvent(paramMotionEvent);
						if (android->support.v4.h->i == 9 && !bool_Renamed)
						{
						  this->h = true;
						}
					  }
					  if (android->support.v4.h->i == 10 || android->support.v4.h->i == 3)
					  {
						this->h = false;
					  }
					  return true;
					}

					bool a::onTouchEvent(MotionEvent *paramMotionEvent)
					{
					  int android->support.v4.h->i = android->support.v4.h.i::a(paramMotionEvent);
					  if (android->support.v4.h->i == 0)
					  {
						this->g = false;
					  }
					  if (!this->g)
					  {
						bool bool_Renamed = ViewGroup::onTouchEvent(paramMotionEvent);
						if (android->support.v4.h->i == 0 && !bool_Renamed)
						{
						  this->g = true;
						}
					  }
					  if (android->support.v4.h->i == 1 || android->support.v4.h->i == 3)
					  {
						this->g = false;
					  }
					  return true;
					}

					void a::setContentHeight(int paramInt)
					{
					  this->e = paramInt;
					  requestLayout();
					}

					void a::setVisibility(int paramInt)
					{
					  if (paramInt != getVisibility())
					  {
						if (this->f != nullptr)
						{
						  this->f->a();
						}
						ViewGroup::setVisibility(paramInt);
					  }
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					*a::a::android->support.v7.b.a(a *this$0)
					{
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::android->support.v7.b.a(View *param1View)
					{
					  android->support.v7.b.a::a(this->b_Renamed, 0);
					  this->c_Renamed = false;
					}

					void a::a::b(View *param1View)
					{
					  if (this->c_Renamed)
					  {
						return;
					  }
					  this->b_Renamed->f = nullptr;
					  android->support.v7.b.a::b(this->b_Renamed, this->a);
					}

					void a::a::c(View *param1View)
					{
						this->c_Renamed = true;
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ActionBarOverlayLayout.h"
#include "../../../v4/h/l.h"
#include "../../../v4/h/j.h"
#include "ContentFrameLayout.h"
#include "ActionBarContainer.h"
#include "f.h"
#include "../../../v4/h/u.h"
#include "../../../v4/h/x.h"
#include "../../widget/Toolbar.h"

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
					using android::graphics::Canvas;
					using android::graphics::Rect;
					using android::graphics::drawable::Drawable;
					using android::os::Build;
					using j = android::support::v4::h::j;
					using l = android::support::v4::h::l;
					using u = android::support::v4::h::u;
					using x = android::support::v4::h::x;
					using y = android::support::v4::h::y;
					using j = android::support::v4::widget::j;
					using a = android::support::v7::b::a;
					using Toolbar = android::support::v7::widget::Toolbar;
					using android::util::AttributeSet;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::Window;

//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
					ActionBarOverlayLayout::RunnableAnonymousInnerClass::RunnableAnonymousInnerClass()
					{
					}

					void ActionBarOverlayLayout::RunnableAnonymousInnerClass::run()
					{
					  ActionBarOverlayLayout::a(this->a);
					  ActionBarOverlayLayout::a(this->a, outerInstance->android.support.v4.h.l.e(ActionBarOverlayLayout::c(this->a)).a(-ActionBarOverlayLayout::c(this->a).getHeight()).a(ActionBarOverlayLayout::b(this->a)));
					}

					ActionBarOverlayLayout::yAnonymousInnerClass::yAnonymousInnerClass() : android.support::v4::h::y(outerInstance)
					{
					}

					void ActionBarOverlayLayout::yAnonymousInnerClass::b(View *param1View)
					{
					  ActionBarOverlayLayout::a(this->a, nullptr);
					  ActionBarOverlayLayout::a(this->a, false);
					}

					void ActionBarOverlayLayout::yAnonymousInnerClass::c(View *param1View)
					{
					  ActionBarOverlayLayout::a(this->a, nullptr);
					  ActionBarOverlayLayout::a(this->a, false);
					}

//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
					ActionBarOverlayLayout::RunnableAnonymousInnerClass2::RunnableAnonymousInnerClass2()
					{
					}

					void ActionBarOverlayLayout::RunnableAnonymousInnerClass2::run()
					{
					  ActionBarOverlayLayout::a(this->a);
					  ActionBarOverlayLayout::a(this->a, outerInstance->android.support.v4.h.l.e(ActionBarOverlayLayout::c(this->a)).a(0.0F).a(ActionBarOverlayLayout::b(this->a)));
					}

					ActionBarOverlayLayout::ActionBarOverlayLayout(Context *paramContext) : ActionBarOverlayLayout(paramContext, nullptr)
					{
					}

					ActionBarOverlayLayout::ActionBarOverlayLayout(Context *paramContext, AttributeSet *paramAttributeSet) : android.view::ViewGroup(paramContext, paramAttributeSet), B(new android.support::v4::h::l::j(this))
					{
					  android.support::v7::b::a(paramContext);
					}

					android::support::v7::internal_Renamed::widget::f *ActionBarOverlayLayout::android.support::v7::b::a(View *paramView)
					{
					  if (dynamic_cast<android::support::v7::internal_Renamed::widget::f*>(paramView) != nullptr)
					  {
						return static_cast<android::support::v7::internal_Renamed::widget::f*>(paramView);
					  }
					  if (dynamic_cast<Toolbar*>(paramView) != nullptr)
					  {
						return (static_cast<Toolbar*>(paramView))->getWrapper();
					  }
					  throw IllegalStateException(L"Can't make a decor toolbar out of " + paramView->getClass().getSimpleName());
					}

					void ActionBarOverlayLayout::android.support::v7::b::a(Context *paramContext)
					{
					  bool bool_Renamed;
					  bool bool1 = true;
					  TypedArray *typedArray = getContext().getTheme().obtainStyledAttributes(android.support::v7::b::a);
					  this->b_Renamed = typedArray->getDimensionPixelSize(0, 0);
					  this->g_Renamed = typedArray->getDrawable(1);
					  if (this->g_Renamed == nullptr)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  setWillNotDraw(bool_Renamed);
					  typedArray->recycle();
					  if ((paramContext->getApplicationInfo()).targetSdkVersion < 19)
					  {
						bool_Renamed = bool1;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  this->h = bool_Renamed;
					  this->w = android.support::v4::h::j::a(paramContext);
					}

					bool ActionBarOverlayLayout::android.support::v7::b::a(float paramFloat1, float paramFloat2)
					{
					  bool bool_Renamed = false;
					  this->w->a(0, 0, 0, static_cast<int>(paramFloat2), 0, 0, -2147483648, 2147483647);
					  if (this->w->a() > this->e_Renamed->getHeight())
					  {
						bool_Renamed = true;
					  }
					  return bool_Renamed;
					}

					bool ActionBarOverlayLayout::android.support::v7::b::a(View *paramView, Rect *paramRect, bool paramBoolean1, bool paramBoolean2, bool paramBoolean3, bool paramBoolean4)
					{
					  char b4 = 0;
					  android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b *b1 = static_cast<android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b*>(paramView->getLayoutParams());
					  char b3 = b4;
					  if (paramBoolean1)
					  {
						b3 = b4;
						if (b1->leftMargin != paramRect->left)
						{
						  b1->leftMargin = paramRect->left;
						  b3 = 1;
						}
					  }
					  char b2 = b3;
					  if (paramBoolean2)
					  {
						b2 = b3;
						if (b1->topMargin != paramRect->top)
						{
						  b1->topMargin = paramRect->top;
						  b2 = 1;
						}
					  }
					  int i1 = b2;
					  if (paramBoolean4)
					  {
						i1 = b2;
						if (b1->rightMargin != paramRect->right)
						{
						  b1->rightMargin = paramRect->right;
						  i1 = 1;
						}
					  }
					  if (paramBoolean3 && b1->bottomMargin != paramRect->bottom)
					  {
						b1->bottomMargin = paramRect->bottom;
						return true;
					  }
					  return i1;
					}

					void ActionBarOverlayLayout::c()
					{
					  removeCallbacks(this->z);
					  removeCallbacks(this->A);
					  if (this->x != nullptr)
					  {
						this->x.a();
					  }
					}

					void ActionBarOverlayLayout::d()
					{
					  c();
					  postDelayed(this->z, 600LL);
					}

					void ActionBarOverlayLayout::e()
					{
					  c();
					  postDelayed(this->A, 600LL);
					}

					void ActionBarOverlayLayout::f()
					{
					  c();
					  this->z.run();
					}

					void ActionBarOverlayLayout::g()
					{
					  c();
					  this->A.run();
					}

					android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b *ActionBarOverlayLayout::android.support::v7::b::a()
					{
						return new b(-1, -1);
					}

					android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b *ActionBarOverlayLayout::android.support::v7::b::a(AttributeSet *paramAttributeSet)
					{
						return new b(getContext(), paramAttributeSet);
					}

					void ActionBarOverlayLayout::b()
					{
					  if (this->d_Renamed == nullptr)
					  {
						this->d_Renamed = static_cast<ContentFrameLayout*>(findViewById(android.support::v7::b::a::e::action_bar_activity_content));
						this->e_Renamed = static_cast<ActionBarContainer*>(findViewById(android.support::v7::b::a::e::action_bar_container));
						this->f_Renamed = android.support::v7::b::a(findViewById(android.support::v7::b::a::e::action_bar));
					  }
					}

					bool ActionBarOverlayLayout::checkLayoutParams(ViewGroup::LayoutParams *paramLayoutParams)
					{
						return dynamic_cast<android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b*>(paramLayoutParams) != nullptr;
					}

					void ActionBarOverlayLayout::draw(Canvas *paramCanvas)
					{
					  ViewGroup::draw(paramCanvas);
					  if (this->g_Renamed != nullptr && !this->h)
					  {
						int i1;
						if (this->e_Renamed->getVisibility() == 0)
						{
						  i1 = static_cast<int>(this->e_Renamed->getBottom() + android.support::v4::h::l::c(this->e_Renamed) + 0.5F);
						}
						else
						{
						  i1 = 0;
						}
						this->g_Renamed->setBounds(0, i1, getWidth(), this->g_Renamed->getIntrinsicHeight() + i1);
						this->g_Renamed->draw(paramCanvas);
					  }
					}

					bool ActionBarOverlayLayout::fitSystemWindows(Rect *paramRect)
					{
					  b();
					  if ((android.support::v4::h::l::f(this) & 0x100) != 0)
					  {
						  ;
					  }
					  bool bool_Renamed = android.support::v7::b::a(this->e_Renamed, paramRect, true, true, false, true);
					  this->r->set(paramRect);
					  r::a(this, this->r, this->o);
					  if (!this->p->equals(this->o))
					  {
						this->p->set(this->o);
						bool_Renamed = true;
					  }
					  if (bool_Renamed)
					  {
						requestLayout();
					  }
					  return true;
					}

					ViewGroup::LayoutParams *ActionBarOverlayLayout::generateLayoutParams(ViewGroup::LayoutParams *paramLayoutParams)
					{
						return new b(paramLayoutParams);
					}

					int ActionBarOverlayLayout::getActionBarHideOffset()
					{
						return (this->e_Renamed != nullptr) ? -(static_cast<int>(android.support::v4::h::l::c(this->e_Renamed))) : 0;
					}

					int ActionBarOverlayLayout::getNestedScrollAxes()
					{
						return this->B->a();
					}

					CharSequence *ActionBarOverlayLayout::getTitle()
					{
					  b();
					  return this->f_Renamed->a();
					}

					void ActionBarOverlayLayout::onConfigurationChanged(Configuration *paramConfiguration)
					{
					  if (android.os::Build::VERSION::SDK_INT >= 8)
					  {
						ViewGroup::onConfigurationChanged(paramConfiguration);
					  }
					  android.support::v7::b::a(getContext());
					  android.support::v4::h::l::g(this);
					}

					void ActionBarOverlayLayout::onDetachedFromWindow()
					{
					  ViewGroup::onDetachedFromWindow();
					  c();
					}

					void ActionBarOverlayLayout::onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
					  paramInt2 = getChildCount();
					  paramInt3 = getPaddingLeft();
					  getPaddingRight();
					  paramInt4 = getPaddingTop();
					  getPaddingBottom();
					  for (paramInt1 = 0; paramInt1 < paramInt2; paramInt1++)
					  {
						View *view = getChildAt(paramInt1);
						if (view->getVisibility() != 8)
						{
						  android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b *b1 = static_cast<android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b*>(view->getLayoutParams());
						  int i1 = view->getMeasuredWidth();
						  int i2 = view->getMeasuredHeight();
						  int i3 = b1->leftMargin + paramInt3;
						  int i4 = b1->topMargin + paramInt4;
						  view->layout(i3, i4, i1 + i3, i2 + i4);
						}
					  }
					}

					void ActionBarOverlayLayout::onMeasure(int paramInt1, int paramInt2)
					{
					  b();
					  measureChildWithMargins(this->e_Renamed, paramInt1, 0, paramInt2, 0);
					  android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b *b1 = static_cast<android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b*>(this->e_Renamed->getLayoutParams());
					  int i6 = std::max(0, this->e_Renamed->getMeasuredWidth() + b1->leftMargin + b1->rightMargin);
					  int i1 = this->e_Renamed->getMeasuredHeight();
					  int i2 = b1->topMargin;
					  int i5 = std::max(0, b1->bottomMargin + i1 + i2);
					  int i4 = r::a(0, android.support::v4::h::l::b(this->e_Renamed));
					  if ((android.support::v4::h::l::f(this) & 0x100) != 0)
					  {
						i2 = 1;
					  }
					  else
					  {
						i2 = 0;
					  }
					  if (i2 != 0)
					  {
						int i7 = this->b_Renamed;
						i1 = i7;
						if (this->j)
						{
						  i1 = i7;
						  if (this->e_Renamed->getTabContainer() != nullptr)
						  {
							i1 = i7 + this->b_Renamed;
						  }
						}
					  }
					  else if (this->e_Renamed->getVisibility() != 8)
					  {
						i1 = this->e_Renamed->getMeasuredHeight();
					  }
					  else
					  {
						i1 = 0;
					  }
					  this->q->set(this->o);
					  this->s->set(this->r);
					  if (!this->i && i2 == 0)
					  {
						Rect *rect = this->q;
						rect->top = i1 + rect->top;
						rect = this->q;
						rect->bottom += 0;
					  }
					  else
					  {
						Rect *rect = this->s;
						rect->top = i1 + rect->top;
						rect = this->s;
						rect->bottom += 0;
					  }
					  android.support::v7::b::a(this->d_Renamed, this->q, true, true, true, true);
					  if (!this->t->equals(this->s))
					  {
						this->t->set(this->s);
						this->d_Renamed->a(this->s);
					  }
					  measureChildWithMargins(this->d_Renamed, paramInt1, 0, paramInt2, 0);
					  b1 = static_cast<android::support::v7::internal_Renamed::widget::ActionBarOverlayLayout::b*>(this->d_Renamed->getLayoutParams());
					  i1 = std::max(i6, this->d_Renamed->getMeasuredWidth() + b1->leftMargin + b1->rightMargin);
					  i2 = this->d_Renamed->getMeasuredHeight();
					  int i3 = b1->topMargin;
					  i2 = std::max(i5, b1->bottomMargin + i2 + i3);
					  i3 = r::a(i4, android.support::v4::h::l::b(this->d_Renamed));
					  i4 = getPaddingLeft();
					  i5 = getPaddingRight();
					  i2 = std::max(i2 + getPaddingTop() + getPaddingBottom(), getSuggestedMinimumHeight());
					  setMeasuredDimension(android.support::v4::h::l::a(std::max(i1 + i4 + i5, getSuggestedMinimumWidth()), paramInt1, i3), android.support::v4::h::l::a(i2, paramInt2, i3 << 16));
					}

					bool ActionBarOverlayLayout::onNestedFling(View *paramView, float paramFloat1, float paramFloat2, bool paramBoolean)
					{
					  if (!this->k || !paramBoolean)
					  {
						return false;
					  }
					  if (android.support::v7::b::a(paramFloat1, paramFloat2))
					  {
						g();
						this->l = true;
						return true;
					  }
					  f();
					  this->l = true;
					  return true;
					}

					bool ActionBarOverlayLayout::onNestedPreFling(View *paramView, float paramFloat1, float paramFloat2)
					{
						return false;
					}

					void ActionBarOverlayLayout::onNestedPreScroll(View *paramView, int paramInt1, int paramInt2, std::vector<int> &paramArrayOfInt)
					{
					}

					void ActionBarOverlayLayout::onNestedScroll(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
					  this->m += paramInt2;
					  setActionBarHideOffset(this->m);
					}

					void ActionBarOverlayLayout::onNestedScrollAccepted(View *paramView1, View *paramView2, int paramInt)
					{
					  this->B->a(paramView1, paramView2, paramInt);
					  this->m = getActionBarHideOffset();
					  c();
					  if (this->u != nullptr)
					  {
						this->u.c();
					  }
					}

					bool ActionBarOverlayLayout::onStartNestedScroll(View *paramView1, View *paramView2, int paramInt)
					{
						return ((paramInt & 0x2) == 0 || this->e_Renamed->getVisibility() != 0) ? false : this->k;
					}

					void ActionBarOverlayLayout::onStopNestedScroll(View *paramView)
					{
					  if (this->k && !this->l)
					  {
						if (this->m <= this->e_Renamed->getHeight())
						{
						  d();
						}
						else
						{
						  e();
						}
					  }
					  if (this->u != nullptr)
					  {
						this->u.d();
					  }
					}

					void ActionBarOverlayLayout::onWindowSystemUiVisibilityChanged(int paramInt)
					{
					  bool bool2;
					  bool bool1;
					  bool bool_Renamed = true;
					  if (android.os::Build::VERSION::SDK_INT >= 16)
					  {
						ViewGroup::onWindowSystemUiVisibilityChanged(paramInt);
					  }
					  b();
					  int i1 = this->n;
					  this->n = paramInt;
					  if ((paramInt & 0x4) == 0)
					  {
						bool1 = true;
					  }
					  else
					  {
						bool1 = false;
					  }
					  if ((paramInt & 0x100) != 0)
					  {
						bool2 = true;
					  }
					  else
					  {
						bool2 = false;
					  }
					  if (this->u != nullptr)
					  {
						a *a1 = this->u;
						if (bool2)
						{
						  bool_Renamed = false;
						}
						a1->a(bool_Renamed);
						if (bool1 || !bool2)
						{
						  this->u.a();
						}
						else
						{
						  this->u.b();
						}
					  }
					  if (((i1 ^ paramInt) & 0x100) != 0 && this->u != nullptr)
					  {
						android.support::v4::h::l::g(this);
					  }
					}

					void ActionBarOverlayLayout::onWindowVisibilityChanged(int paramInt)
					{
					  ViewGroup::onWindowVisibilityChanged(paramInt);
					  this->c_Renamed = paramInt;
					  if (this->u != nullptr)
					  {
						this->u.a(paramInt);
					  }
					}

					void ActionBarOverlayLayout::setActionBarHideOffset(int paramInt)
					{
					  c();
					  paramInt = std::max(0, std::min(paramInt, this->e_Renamed->getHeight()));
					  android.support::v4::h::l::a(this->e_Renamed, -paramInt);
					}

					void ActionBarOverlayLayout::setActionBarVisibilityCallback(a *parama)
					{
					  this->u = parama;
					  if (getWindowToken() != nullptr)
					  {
						this->u.a(this->c_Renamed);
						if (this->n != 0)
						{
						  onWindowSystemUiVisibilityChanged(this->n);
						  android.support::v4::h::l::g(this);
						}
					  }
					}

					void ActionBarOverlayLayout::setHasNonEmbeddedTabs(bool paramBoolean)
					{
						this->j = paramBoolean;
					}

					void ActionBarOverlayLayout::setHideOnContentScrollEnabled(bool paramBoolean)
					{
					  if (paramBoolean != this->k)
					  {
						this->k = paramBoolean;
						if (!paramBoolean)
						{
						  c();
						  setActionBarHideOffset(0);
						}
					  }
					}

					void ActionBarOverlayLayout::setIcon(int paramInt)
					{
					  b();
					  this->f_Renamed->a(paramInt);
					}

					void ActionBarOverlayLayout::setIcon(Drawable *paramDrawable)
					{
					  b();
					  this->f_Renamed->a(paramDrawable);
					}

					void ActionBarOverlayLayout::setLogo(int paramInt)
					{
					  b();
					  this->f_Renamed->b(paramInt);
					}

					void ActionBarOverlayLayout::setOverlayMode(bool paramBoolean)
					{
					  this->i = paramBoolean;
					  if (paramBoolean && (getContext().getApplicationInfo()).targetSdkVersion < 19)
					  {
						paramBoolean = true;
					  }
					  else
					  {
						paramBoolean = false;
					  }
					  this->h = paramBoolean;
					}

					void ActionBarOverlayLayout::setShowingForActionMode(bool paramBoolean)
					{
					}

					void ActionBarOverlayLayout::setUiOptions(int paramInt)
					{
					}

					void ActionBarOverlayLayout::setWindowCallback(Window::Callback *paramCallback)
					{
					  b();
					  this->f_Renamed->a(paramCallback);
					}

					void ActionBarOverlayLayout::setWindowTitle(CharSequence *paramCharSequence)
					{
					  b();
					  this->f_Renamed->a(paramCharSequence);
					}

					bool ActionBarOverlayLayout::shouldDelayChildPressedState()
					{
						return false;
					}

					ActionBarOverlayLayout::b::b(int param1Int1, int param1Int2) : android.view::ViewGroup::MarginLayoutParams(param1Int1, param1Int2)
					{
					}

					ActionBarOverlayLayout::b::b(Context *param1Context, AttributeSet *param1AttributeSet) : android.view::ViewGroup::MarginLayoutParams(param1Context, param1AttributeSet)
					{
					}

					ActionBarOverlayLayout::b::b(ViewGroup::LayoutParams *param1LayoutParams) : android.view::ViewGroup::MarginLayoutParams(param1LayoutParams)
					{
					}
				}
			}
		}
	}
}

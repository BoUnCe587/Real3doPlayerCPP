//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ActionBarContainer.h"
#include "../../b/a.h"
#include "k.h"
#include "m.h"

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
					using android::graphics::drawable::Drawable;
					using android::os::Build;
					using a = android::support::v7::b::a;
					using android::support::v7::internal_Renamed::a;
					using android::util::AttributeSet;
					using android::view::ActionMode;
					using android::view::MotionEvent;
					using android::view::View;
					using android::view::ViewGroup;
					using android::widget::FrameLayout;

					ActionBarContainer::ActionBarContainer(Context *paramContext) : ActionBarContainer(paramContext, nullptr)
					{
					}

					ActionBarContainer::ActionBarContainer(Context *paramContext, AttributeSet *paramAttributeSet) : android->widget.FrameLayout(paramContext, paramAttributeSet)
					{
					  if (android->support.v7.b.a::a())
					  {
						b1 = new c(this);
					  }
					  else
					  {
						b1 = new b(this);
					  }
					  setBackgroundDrawable(b1);
					  TypedArray *typedArray = paramContext->obtainStyledAttributes(paramAttributeSet, android->support.v7.b.a::j.ActionBar);
					  this->a = typedArray->getDrawable(android->support.v7.b.a::j.ActionBar_background);
					  this->b_Renamed = typedArray->getDrawable(android->support.v7.b.a::j.ActionBar_backgroundStacked);
					  this->j = typedArray->getDimensionPixelSize(android->support.v7.b.a::j.ActionBar_height, -1);
					  if (getId() == android->support.v7.b.a::e.split_action_bar)
					  {
						this->d = true;
						this->c = typedArray->getDrawable(android->support.v7.b.a::j.ActionBar_backgroundSplit);
					  }
					  typedArray->recycle();
					  if (this->d)
					  {
						if (this->c == nullptr)
						{
						  bool_Renamed = true;
						}
						else
						{
						  bool_Renamed = false;
						}
					  }
					  else if (this->a == nullptr && this->b_Renamed == nullptr)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  setWillNotDraw(bool_Renamed);
					}

					bool ActionBarContainer::android->support.v7.b.a(View *paramView)
					{
						return (paramView == nullptr || paramView->getVisibility() == 8 || paramView->getMeasuredHeight() == 0);
					}

					int ActionBarContainer::b(View *paramView)
					{
					  FrameLayout::LayoutParams *layoutParams = static_cast<FrameLayout::LayoutParams*>(paramView->getLayoutParams());
					  int k = paramView->getMeasuredHeight();
					  int m = layoutParams->topMargin;
					  return layoutParams->bottomMargin + k + m;
					}

					void ActionBarContainer::drawableStateChanged()
					{
					  FrameLayout::drawableStateChanged();
					  if (this->a != nullptr && this->a.isStateful())
					  {
						this->a.setState(getDrawableState());
					  }
					  if (this->b_Renamed != nullptr && this->b_Renamed->isStateful())
					  {
						this->b_Renamed->setState(getDrawableState());
					  }
					  if (this->c != nullptr && this->c->isStateful())
					  {
						this->c->setState(getDrawableState());
					  }
					}

					View *ActionBarContainer::getTabContainer()
					{
						return this->g;
					}

					void ActionBarContainer::jumpDrawablesToCurrentState()
					{
					  if (android->os.Build.VERSION.SDK_INT >= 11)
					  {
						FrameLayout::jumpDrawablesToCurrentState();
						if (this->a != nullptr)
						{
						  this->a.jumpToCurrentState();
						}
						if (this->b_Renamed != nullptr)
						{
						  this->b_Renamed->jumpToCurrentState();
						}
						if (this->c != nullptr)
						{
						  this->c->jumpToCurrentState();
						}
					  }
					}

					void ActionBarContainer::onFinishInflate()
					{
					  FrameLayout::onFinishInflate();
					  this->h = findViewById(android->support.v7.b.a::e.action_bar);
					  this->i = findViewById(android->support.v7.b.a::e.action_context_bar);
					}

					bool ActionBarContainer::onInterceptTouchEvent(MotionEvent *paramMotionEvent)
					{
						return (this->f || FrameLayout::onInterceptTouchEvent(paramMotionEvent));
					}

					void ActionBarContainer::onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
					  int k = 1;
					  FrameLayout::onLayout(paramBoolean, paramInt1, paramInt2, paramInt3, paramInt4);
					  View *view = this->g;
					  if (view != nullptr && view->getVisibility() != 8)
					  {
						paramBoolean = true;
					  }
					  else
					  {
						paramBoolean = false;
					  }
					  if (view != nullptr && view->getVisibility() != 8)
					  {
						paramInt2 = getMeasuredHeight();
						FrameLayout::LayoutParams *layoutParams = static_cast<FrameLayout::LayoutParams*>(view->getLayoutParams());
						view->layout(paramInt1, paramInt2 - view->getMeasuredHeight() - layoutParams->bottomMargin, paramInt3, paramInt2 - layoutParams->bottomMargin);
					  }
					  if (this->d)
					  {
						if (this->c != nullptr)
						{
						  this->c->setBounds(0, 0, getMeasuredWidth(), getMeasuredHeight());
						  paramInt1 = k;
						}
						else
						{
						  paramInt1 = 0;
						}
					  }
					  else
					  {
						if (this->a != nullptr)
						{
						  if (this->h->getVisibility() == 0)
						  {
							this->a.setBounds(this->h->getLeft(), this->h->getTop(), this->h->getRight(), this->h->getBottom());
						  }
						  else if (this->i != nullptr && this->i->getVisibility() == 0)
						  {
							this->a.setBounds(this->i->getLeft(), this->i->getTop(), this->i->getRight(), this->i->getBottom());
						  }
						  else
						  {
							this->a.setBounds(0, 0, 0, 0);
						  }
						  paramInt1 = 1;
						}
						else
						{
						  paramInt1 = 0;
						}
						this->e = paramBoolean;
						if (paramBoolean && this->b_Renamed != nullptr)
						{
						  this->b_Renamed->setBounds(view->getLeft(), view->getTop(), view->getRight(), view->getBottom());
						  paramInt1 = k;
						}
					  }
					  if (paramInt1 != 0)
					  {
						invalidate();
					  }
					}

					void ActionBarContainer::onMeasure(int paramInt1, int paramInt2)
					{
					  int k = paramInt2;
					  if (this->h == nullptr)
					  {
						k = paramInt2;
						if (android->view.View.MeasureSpec.getMode(paramInt2) == std::numeric_limits<int>::min())
						{
						  k = paramInt2;
						  if (this->j >= 0)
						  {
							k = android->view.View.MeasureSpec.makeMeasureSpec(std::min(this->j, android->view.View.MeasureSpec.getSize(paramInt2)), -2147483648);
						  }
						}
					  }
					  FrameLayout::onMeasure(paramInt1, k);
					  if (this->h != nullptr)
					  {
						paramInt2 = android->view.View.MeasureSpec.getMode(k);
						if (this->g != nullptr && this->g->getVisibility() != 8 && paramInt2 != 1073741824)
						{
						  if (!android->support.v7.b.a(this->h))
						  {
							paramInt1 = b(this->h);
						  }
						  else if (!android->support.v7.b.a(this->i))
						  {
							paramInt1 = b(this->i);
						  }
						  else
						  {
							paramInt1 = 0;
						  }
						  if (paramInt2 == std::numeric_limits<int>::min())
						  {
							paramInt2 = android->view.View.MeasureSpec.getSize(k);
						  }
						  else
						  {
							paramInt2 = std::numeric_limits<int>::max();
						  }
						  setMeasuredDimension(getMeasuredWidth(), std::min(paramInt1 + b(this->g), paramInt2));
						  return;
						}
					  }
					}

					bool ActionBarContainer::onTouchEvent(MotionEvent *paramMotionEvent)
					{
					  FrameLayout::onTouchEvent(paramMotionEvent);
					  return true;
					}

					void ActionBarContainer::setPrimaryBackground(Drawable *paramDrawable)
					{
					  bool bool_Renamed = true;
					  if (this->a != nullptr)
					  {
						this->a.setCallback(nullptr);
						unscheduleDrawable(this->a);
					  }
					  this->a = paramDrawable;
					  if (paramDrawable != nullptr)
					  {
						paramDrawable->setCallback(this);
						if (this->h != nullptr)
						{
						  this->a.setBounds(this->h->getLeft(), this->h->getTop(), this->h->getRight(), this->h->getBottom());
						}
					  }
					  if (this->d)
					  {
						if (this->c != nullptr)
						{
						  bool_Renamed = false;
						}
					  }
					  else if (this->a != nullptr || this->b_Renamed != nullptr)
					  {
						bool_Renamed = false;
					  }
					  setWillNotDraw(bool_Renamed);
					  invalidate();
					}

					void ActionBarContainer::setSplitBackground(Drawable *paramDrawable)
					{
					  bool bool_Renamed = true;
					  if (this->c != nullptr)
					  {
						this->c->setCallback(nullptr);
						unscheduleDrawable(this->c);
					  }
					  this->c = paramDrawable;
					  if (paramDrawable != nullptr)
					  {
						paramDrawable->setCallback(this);
						if (this->d && this->c != nullptr)
						{
						  this->c->setBounds(0, 0, getMeasuredWidth(), getMeasuredHeight());
						}
					  }
					  if (this->d)
					  {
						if (this->c != nullptr)
						{
						  bool_Renamed = false;
						}
					  }
					  else if (this->a != nullptr || this->b_Renamed != nullptr)
					  {
						bool_Renamed = false;
					  }
					  setWillNotDraw(bool_Renamed);
					  invalidate();
					}

					void ActionBarContainer::setStackedBackground(Drawable *paramDrawable)
					{
					  bool bool_Renamed = true;
					  if (this->b_Renamed != nullptr)
					  {
						this->b_Renamed->setCallback(nullptr);
						unscheduleDrawable(this->b_Renamed);
					  }
					  this->b_Renamed = paramDrawable;
					  if (paramDrawable != nullptr)
					  {
						paramDrawable->setCallback(this);
						if (this->e && this->b_Renamed != nullptr)
						{
						  this->b_Renamed->setBounds(this->g->getLeft(), this->g->getTop(), this->g->getRight(), this->g->getBottom());
						}
					  }
					  if (this->d)
					  {
						if (this->c != nullptr)
						{
						  bool_Renamed = false;
						}
					  }
					  else if (this->a != nullptr || this->b_Renamed != nullptr)
					  {
						bool_Renamed = false;
					  }
					  setWillNotDraw(bool_Renamed);
					  invalidate();
					}

					void ActionBarContainer::setTabContainer(k *paramk)
					{
					  if (this->g != nullptr)
					  {
						removeView(this->g);
					  }
					  this->g = paramk;
					  if (paramk != nullptr)
					  {
						addView(paramk);
						ViewGroup::LayoutParams *layoutParams = paramk->getLayoutParams();
						layoutParams->width = -1;
						layoutParams->height = -2;
						paramk->setAllowCollapse(false);
					  }
					}

					void ActionBarContainer::setTransitioning(bool paramBoolean)
					{
					  int k;
					  this->f = paramBoolean;
					  if (paramBoolean)
					  {
						k = 393216;
					  }
					  else
					  {
						k = 262144;
					  }
					  setDescendantFocusability(k);
					}

					void ActionBarContainer::setVisibility(int paramInt)
					{
					  bool bool_Renamed;
					  FrameLayout::setVisibility(paramInt);
					  if (paramInt == 0)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  if (this->a != nullptr)
					  {
						this->a.setVisible(bool_Renamed, false);
					  }
					  if (this->b_Renamed != nullptr)
					  {
						this->b_Renamed->setVisible(bool_Renamed, false);
					  }
					  if (this->c != nullptr)
					  {
						this->c->setVisible(bool_Renamed, false);
					  }
					}

					ActionMode *ActionBarContainer::startActionModeForChild(View *paramView, ActionMode::Callback *paramCallback)
					{
						return nullptr;
					}

					bool ActionBarContainer::verifyDrawable(Drawable *paramDrawable)
					{
						return ((paramDrawable == this->a && !this->d) || (paramDrawable == this->b_Renamed && this->e) || (paramDrawable == this->c && this->d) || FrameLayout::verifyDrawable(paramDrawable));
					}
				}
			}
		}
	}
}

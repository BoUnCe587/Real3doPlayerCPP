//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ActionMenuView.h"
#include "../internal/view/menu/ActionMenuItemView.h"
#include "../internal/view/menu/f.h"
#include "../internal/widget/r.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::content::Context;
				using android::content::res::Configuration;
				using android::graphics::drawable::Drawable;
				using android::os::Build;
				using ActionMenuItemView = android::support::v7::internal_Renamed::view::menu::ActionMenuItemView;
				using e = android::support::v7::internal_Renamed::view::menu::e;
				using f = android::support::v7::internal_Renamed::view::menu::f;
				using j = android::support::v7::internal_Renamed::view::menu::j;
				using k = android::support::v7::internal_Renamed::view::menu::k;
				using r = android::support::v7::internal_Renamed::widget::r;
				using android::util::AttributeSet;
				using android::view::ContextThemeWrapper;
				using android::view::Menu;
				using android::view::MenuItem;
				using android::view::View;
				using android::view::ViewDebug::ExportedProperty;
				using android::view::ViewGroup;
				using android::view::accessibility::AccessibilityEvent;

				ActionMenuView::ActionMenuView(Context *paramContext) : ActionMenuView(paramContext, nullptr)
				{
				}

				ActionMenuView::ActionMenuView(Context *paramContext, AttributeSet *paramAttributeSet) : g(paramContext, paramAttributeSet)
				{
				  setBaselineAligned(false);
				  float f1 = (paramContext->getResources().getDisplayMetrics()).density;
				  this->j = static_cast<int>(56.0F * f1);
				  this->k = static_cast<int>(f1 * 4.0F);
				  this->b_Renamed = paramContext;
				  this->c_Renamed = 0;
				}

				int ActionMenuView::a(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
				{
				  void *object;
				  char b2 = 0;
				  android::support::v7::widget::ActionMenuView::c *c1 = static_cast<android::support::v7::widget::ActionMenuView::c*>(paramView->getLayoutParams());
				  int m = android->view.View.MeasureSpec.makeMeasureSpec(android->view.View.MeasureSpec.getSize(paramInt3) - paramInt4, android->view.View.MeasureSpec.getMode(paramInt3));
				  if (dynamic_cast<ActionMenuItemView*>(paramView) != nullptr)
				  {
					object = static_cast<ActionMenuItemView*>(paramView);
				  }
				  else
				  {
					object = nullptr;
				  }
				  if (object != nullptr && object->b())
				  {
					paramInt4 = 1;
				  }
				  else
				  {
					paramInt4 = 0;
				  }
				  if (paramInt2 > 0 && (paramInt4 == 0 || paramInt2 >= 2))
				  {
					paramView->measure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt1 * paramInt2, -2147483648), m);
					int n = paramView->getMeasuredWidth();
					paramInt3 = n / paramInt1;
					paramInt2 = paramInt3;
					if (n % paramInt1 != 0)
					{
					  paramInt2 = paramInt3 + 1;
					}
					paramInt3 = paramInt2;
					if (paramInt4 != 0)
					{
					  paramInt3 = paramInt2;
					  if (paramInt2 < 2)
					  {
						paramInt3 = 2;
					  }
					}
				  }
				  else
				  {
					paramInt3 = 0;
				  }
				  char b1 = b2;
				  if (!c1->a)
				  {
					b1 = b2;
					if (paramInt4 != 0)
					{
					  b1 = 1;
					}
				  }
				  c1->d = b1;
				  c1->b = paramInt3;
				  paramView->measure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt3 * paramInt1, 1073741824), m);
				  return paramInt3;
				}

				void ActionMenuView::c(int paramInt1, int paramInt2)
				{
				  int i8 = android->view.View.MeasureSpec.getMode(paramInt2);
				  paramInt1 = android->view.View.MeasureSpec.getSize(paramInt1);
				  int i7 = android->view.View.MeasureSpec.getSize(paramInt2);
				  int m = getPaddingLeft();
				  int n = getPaddingRight();
				  int i6 = getPaddingTop() + getPaddingBottom();
				  int i9 = getChildMeasureSpec(paramInt2, i6, -2);
				  int i10 = paramInt1 - m + n;
				  paramInt1 = i10 / this->j;
				  paramInt2 = this->j;
				  if (paramInt1 == 0)
				  {
					setMeasuredDimension(i10, 0);
					return;
				  }
				  int i11 = this->j + i10 % paramInt2 / paramInt1;
				  m = 0;
				  int i3 = 0;
				  int i2 = 0;
				  int i4 = 0;
				  int i1 = 0;
				  long long l1 = 0LL;
				  int i12 = getChildCount();
				  int i5 = 0;
				  while (true)
				  {
					if (i5 < i12)
					{
					  View *view = getChildAt(i5);
					  if (view->getVisibility() == 8)
					  {
						paramInt2 = i3;
						n = paramInt1;
						paramInt1 = i4;
					  }
					  else
					  {
						bool bool_Renamed = dynamic_cast<ActionMenuItemView*>(view) != nullptr;
						i4++;
						if (bool_Renamed)
						{
						  view->setPadding(this->k, 0, this->k, 0);
						}
						android::support::v7::widget::ActionMenuView::c *c1 = static_cast<android::support::v7::widget::ActionMenuView::c*>(view->getLayoutParams());
						c1.0f = false;
						c1->c_Renamed = 0;
						c1->b = 0;
						c1->d = false;
						c1->leftMargin = 0;
						c1->rightMargin = 0;
						if (bool_Renamed && (static_cast<ActionMenuItemView*>(view))->b())
						{
						  bool_Renamed = true;
						}
						else
						{
						  bool_Renamed = false;
						}
						c1->e = bool_Renamed;
						if (c1->a)
						{
						  paramInt2 = 1;
						}
						else
						{
						  paramInt2 = paramInt1;
						}
						int i14 = a(view, i11, paramInt2, i9, i6);
						i3 = std::max(i3, i14);
						if (c1->d)
						{
						  paramInt2 = i2 + true;
						}
						else
						{
						  paramInt2 = i2;
						}
						if (c1->a)
						{
						  n = 1;
						}
						else
						{
						  n = i1;
						}
						int i13 = paramInt1 - i14;
						m = std::max(m, view->getMeasuredHeight());
						if (i14 == 1)
						{
						  long long l2 = (1 << i5);
						  i2 = paramInt2;
						  l1 = l2 | l1;
						  paramInt2 = i3;
						  paramInt1 = i4;
						  i1 = n;
						  n = i13;
						}
						else
						{
						  paramInt1 = i4;
						  i1 = i3;
						  i3 = i13;
						  i2 = paramInt2;
						  paramInt2 = i1;
						  i1 = n;
						  n = i3;
						}
					  }
					  i5++;
					  i4 = paramInt1;
					  paramInt1 = n;
					  i3 = paramInt2;
					  continue;
					}
					if (i1 != 0 && i4 == 2)
					{
					  bool bool_Renamed = true;
					}
					else
					{
					  bool bool_Renamed = false;
					}
					n = 0;
					i5 = paramInt1;
					while (true)
					{
					  if (i2 > 0)
					  {
						if (i5 > 0)
						{
						  paramInt1 = std::numeric_limits<int>::max();
						  long long l2 = 0LL;
						  paramInt2 = 0;
						  for (i6 = 0;; i6 = i13)
						  {
							i13 = i6 + 1;
							i6 = paramInt2;
							paramInt2 = paramInt1;
							paramInt1 = i6;
						  }
						  break;
						}
						continue;
					  }
					  continue;
					}
					break;
				  }
				}

				android::support::v7::widget::ActionMenuView::c *ActionMenuView::a()
				{
				  android::support::v7::widget::ActionMenuView::c *c1 = new c(-2, -2);
				  c1->h = 16;
				  return c1;
				}

				android::support::v7::widget::ActionMenuView::c *ActionMenuView::a(AttributeSet *paramAttributeSet)
				{
					return new c(getContext(), paramAttributeSet);
				}

				android::support::v7::widget::ActionMenuView::c *ActionMenuView::a(ViewGroup::LayoutParams *paramLayoutParams)
				{
				  if (paramLayoutParams != nullptr)
				  {
					android::support::v7::widget::ActionMenuView::c *c1;
					if (dynamic_cast<android::support::v7::widget::ActionMenuView::c*>(paramLayoutParams) != nullptr)
					{
					  c1 = new c(static_cast<android::support::v7::widget::ActionMenuView::c*>(paramLayoutParams));
					}
					else
					{
					  c1 = new c(c1);
					}
					if (c1->h <= 0)
					{
					  c1->h = 16;
					}
					return c1;
				  }
				  return a();
				}

				void ActionMenuView::a(e *parame)
				{
					this->a_Renamed = parame;
				}

				void ActionMenuView::a(j::a *parama, e::a *parama1)
				{
				  this->f = parama;
				  this->g = parama1;
				}

				bool ActionMenuView::a(int paramInt)
				{
				  char b1 = 0;
				  if (paramInt == 0)
				  {
					return false;
				  }
				  View *view1 = getChildAt(paramInt - 1);
				  View *view2 = getChildAt(paramInt);
				  bool bool_Renamed = b1;
				  if (paramInt < getChildCount())
				  {
					bool_Renamed = b1;
					if (dynamic_cast<android::support::v7::widget::a*>(view1) != nullptr)
					{
					  bool_Renamed = false | (static_cast<android::support::v7::widget::a*>(view1))->d();
					}
				  }
				  return (paramInt > 0 && dynamic_cast<android::support::v7::widget::a*>(view2) != nullptr) ? ((static_cast<android::support::v7::widget::a*>(view2))->c() | bool_Renamed) : bool_Renamed;
				}

				bool ActionMenuView::a(f *paramf)
				{
					return this->a_Renamed->a(paramf, 0);
				}

				android::support::v7::widget::ActionMenuView::c *ActionMenuView::b()
				{
				  android::support::v7::widget::ActionMenuView::c *c1 = a();
				  c1->a = true;
				  return c1;
				}

				ActionMenuView::e *ActionMenuView::c()
				{
					return this->a_Renamed;
				}

				bool ActionMenuView::checkLayoutParams(ViewGroup::LayoutParams *paramLayoutParams)
				{
					return (paramLayoutParams != nullptr && dynamic_cast<android::support::v7::widget::ActionMenuView::c*>(paramLayoutParams) != nullptr);
				}

				bool ActionMenuView::d()
				{
					return (this->e != nullptr && this->e.d());
				}

				bool ActionMenuView::dispatchPopulateAccessibilityEvent(AccessibilityEvent *paramAccessibilityEvent)
				{
					return false;
				}

				bool ActionMenuView::android->support.v7.internal_Renamed.view.menu.e()
				{
					return (this->e != nullptr && this->e.h());
				}

				void ActionMenuView::android->support.v7.internal_Renamed.view.menu.f()
				{
				  if (this->e != nullptr)
				  {
					this->e.f();
				  }
				}

				Menu *ActionMenuView::getMenu()
				{
				  if (this->a_Renamed == nullptr)
				  {
					android::support::v7::widget::ActionMenuView::b *b1 = getContext();
					this->a_Renamed = new android->support.v7.internal_Renamed.view.menu.e(b1);
					android::support::v7::widget::ActionMenuView::d tempVar(this, this, nullptr);
					this->a_Renamed->a(&tempVar);
					this->e = new a(b1);
					this->e.c(true);
					android::support::v7::widget::a *a1 = this->e;
					if (this->f != nullptr)
					{
					  j::a *a2 = this->f;
					}
					else
					{
					  b1 = new b(this, this, nullptr);
					}
					a1->a(b1);
					this->a_Renamed->a(this->e, this->b_Renamed);
					this->e.a(this);
				  }
				  return this->a_Renamed;
				}

				Drawable *ActionMenuView::getOverflowIcon()
				{
				  getMenu();
				  return this->e.c();
				}

				int ActionMenuView::getPopupTheme()
				{
					return this->c_Renamed;
				}

				int ActionMenuView::getWindowAnimations()
				{
					return 0;
				}

				void ActionMenuView::onConfigurationChanged(Configuration *paramConfiguration)
				{
				  if (android->os.Build.VERSION.SDK_INT >= 8)
				  {
					g::onConfigurationChanged(paramConfiguration);
				  }
				  if (this->e != nullptr)
				  {
					this->e.b(false);
					if (this->e.h())
					{
					  this->e.e();
					  this->e.d();
					}
				  }
				}

				void ActionMenuView::onDetachedFromWindow()
				{
				  g::onDetachedFromWindow();
				  android->support.v7.internal_Renamed.view.menu.f();
				}

				void ActionMenuView::onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
				{
				  if (!this->h)
				  {
					g::onLayout(paramBoolean, paramInt1, paramInt2, paramInt3, paramInt4);
					return;
				  }
				  int i3 = getChildCount();
				  int i2 = (paramInt4 - paramInt2) / 2;
				  int i4 = getDividerWidth();
				  paramInt4 = 0;
				  paramInt2 = 0;
				  int n = paramInt3 - paramInt1 - getPaddingRight() - getPaddingLeft();
				  int m = 0;
				  paramBoolean = android->support.v7.internal_Renamed.widget.r::a(this);
				  for (int i1 = 0; i1 < i3; i1 = i6)
				  {
					View *view = getChildAt(i1);
					if (view->getVisibility() == 8)
					{
					  int i7 = m;
					  int i8 = n;
					  n = paramInt4;
					  m = paramInt2;
					  paramInt4 = i8;
					  paramInt2 = i7;
					}
					else
					{
					  android::support::v7::widget::ActionMenuView::c *c1 = static_cast<android::support::v7::widget::ActionMenuView::c*>(view->getLayoutParams());
					  if (c1->a)
					  {
						int i7 = view->getMeasuredWidth();
						m = i7;
						if (a(i1))
						{
						  m = i7 + i4;
						}
						int i9 = view->getMeasuredHeight();
						if (paramBoolean)
						{
						  i7 = getPaddingLeft();
						  i7 = c1->leftMargin + i7;
						  i8 = i7 + m;
						}
						else
						{
						  i8 = getWidth() - getPaddingRight() - c1->rightMargin;
						  i7 = i8 - m;
						}
						int i10 = i2 - i9 / 2;
						view->layout(i7, i10, i8, i9 + i10);
						i7 = n - m;
						int i8 = 1;
						m = paramInt2;
						n = paramInt4;
						paramInt2 = i8;
						paramInt4 = i7;
					  }
					  else
					  {
						int i8 = view->getMeasuredWidth() + c1->leftMargin + c1->rightMargin;
						int i7 = paramInt4 + i8;
						paramInt4 = i7;
						if (a(i1))
						{
						  paramInt4 = i7 + i4;
						}
						i7 = n - i8;
						i8 = paramInt2 + 1;
						n = paramInt4;
						paramInt2 = m;
						paramInt4 = i7;
						m = i8;
					  }
					}
					int i6 = i1 + 1;
					i1 = n;
					int i5 = m;
					m = paramInt2;
					n = paramInt4;
					paramInt2 = i5;
					paramInt4 = i1;
				  }
				  if (i3 == 1 && m == 0)
				  {
					View *view = getChildAt(0);
					paramInt2 = view->getMeasuredWidth();
					paramInt4 = view->getMeasuredHeight();
					paramInt1 = (paramInt3 - paramInt1) / 2 - paramInt2 / 2;
					paramInt3 = i2 - paramInt4 / 2;
					view->layout(paramInt1, paramInt3, paramInt2 + paramInt1, paramInt4 + paramInt3);
					return;
				  }
				  if (m != 0)
				  {
					paramInt1 = 0;
				  }
				  else
				  {
					paramInt1 = 1;
				  }
				  paramInt1 = paramInt2 - paramInt1;
				  if (paramInt1 > 0)
				  {
					paramInt1 = n / paramInt1;
				  }
				  else
				  {
					paramInt1 = 0;
				  }
				  paramInt3 = std::max(0, paramInt1);
				  if (paramBoolean)
				  {
					paramInt1 = getWidth() - getPaddingRight();
					paramInt2 = 0;
					while (true)
					{
					  if (paramInt2 < i3)
					  {
						View *view = getChildAt(paramInt2);
						android::support::v7::widget::ActionMenuView::c *c1 = static_cast<android::support::v7::widget::ActionMenuView::c*>(view->getLayoutParams());
						if (view->getVisibility() != 8 && !c1->a)
						{
						  paramInt1 -= c1->rightMargin;
						  paramInt4 = view->getMeasuredWidth();
						  m = view->getMeasuredHeight();
						  n = i2 - m / 2;
						  view->layout(paramInt1 - paramInt4, n, paramInt1, m + n);
						  paramInt1 -= c1->leftMargin + paramInt4 + paramInt3;
						}
						paramInt2++;
						continue;
					  }
					  return;
					}
				  }
				  paramInt1 = getPaddingLeft();
				  paramInt2 = 0;
				  while (true)
				  {
					if (paramInt2 < i3)
					{
					  View *view = getChildAt(paramInt2);
					  android::support::v7::widget::ActionMenuView::c *c1 = static_cast<android::support::v7::widget::ActionMenuView::c*>(view->getLayoutParams());
					  if (view->getVisibility() != 8 && !c1->a)
					  {
						paramInt1 += c1->leftMargin;
						paramInt4 = view->getMeasuredWidth();
						m = view->getMeasuredHeight();
						n = i2 - m / 2;
						view->layout(paramInt1, n, paramInt1 + paramInt4, m + n);
						paramInt1 = c1->rightMargin + paramInt4 + paramInt3 + paramInt1;
					  }
					  paramInt2++;
					  continue;
					}
					return;
				  }
				}

				void ActionMenuView::onMeasure(int paramInt1, int paramInt2)
				{
				  bool bool_Renamed;
				  bool bool1 = this->h;
				  if (android->view.View.MeasureSpec.getMode(paramInt1) == 1073741824)
				  {
					bool_Renamed = true;
				  }
				  else
				  {
					bool_Renamed = false;
				  }
				  this->h = bool_Renamed;
				  if (bool1 != this->h)
				  {
					this->i = 0;
				  }
				  int m = android->view.View.MeasureSpec.getSize(paramInt1);
				  if (this->h && this->a_Renamed != nullptr && m != this->i)
				  {
					this->i = m;
					this->a_Renamed->b(true);
				  }
				  int n = getChildCount();
				  if (this->h && n > 0)
				  {
					c(paramInt1, paramInt2);
					return;
				  }
				  for (m = 0; m < n; m++)
				  {
					android::support::v7::widget::ActionMenuView::c *c1 = static_cast<android::support::v7::widget::ActionMenuView::c*>(getChildAt(m).getLayoutParams());
					c1->rightMargin = 0;
					c1->leftMargin = 0;
				  }
				  g::onMeasure(paramInt1, paramInt2);
				}

				void ActionMenuView::setExpandedActionViewsExclusive(bool paramBoolean)
				{
					this->e.d(paramBoolean);
				}

				void ActionMenuView::setOnMenuItemClickListener(e *parame)
				{
					this->l = parame;
				}

				void ActionMenuView::setOverflowIcon(Drawable *paramDrawable)
				{
				  getMenu();
				  this->e.a(paramDrawable);
				}

				void ActionMenuView::setOverflowReserved(bool paramBoolean)
				{
					this->d_Renamed = paramBoolean;
				}

				void ActionMenuView::setPopupTheme(int paramInt)
				{
				  if (this->c_Renamed != paramInt)
				  {
					this->c_Renamed = paramInt;
					if (paramInt == 0)
					{
					  this->b_Renamed = getContext();
					  return;
					}
				  }
				  else
				  {
					return;
				  }
				  this->b_Renamed = new android->view.ContextThemeWrapper(getContext(), paramInt);
				}

				void ActionMenuView::setPresenter(android::support::v7::widget::a *parama)
				{
				  this->e = parama;
				  this->e.a(this);
				}

				ActionMenuView::b::b(ActionMenuView *outerInstance, ActionMenuView *this$0) : outerInstance(outerInstance)
				{
				}

				void ActionMenuView::b::a(e *param1e, bool param1Boolean)
				{
				}

				bool ActionMenuView::b::a(e *param1e)
				{
					return false;
				}

				ActionMenuView::c::c(int param1Int1, int param1Int2) : g->a(param1Int1, param1Int2)
				{
				  this->a = false;
				}

				ActionMenuView::c::c(Context *param1Context, AttributeSet *param1AttributeSet) : g->a(param1Context, param1AttributeSet)
				{
				}

				ActionMenuView::c::c(const c &param1c) : g->a(param1c)
				{
				  this->a = param1c->a;
				}

				ActionMenuView::c::c(ViewGroup::LayoutParams *param1LayoutParams) : g->a(param1LayoutParams)
				{
				}

				ActionMenuView::d::d(ActionMenuView *outerInstance, ActionMenuView *this$0) : outerInstance(outerInstance)
				{
				}

				void ActionMenuView::d::a(e *param1e)
				{
				  if (ActionMenuView::b(this->a) != nullptr)
				  {
					ActionMenuView::b(this->a).a(param1e);
				  }
				}

				bool ActionMenuView::d::a(e *param1e, MenuItem *param1MenuItem)
				{
					return (ActionMenuView::a(this->a) != nullptr && ActionMenuView::a(this->a).a(param1MenuItem));
				}
			}
		}
	}
}

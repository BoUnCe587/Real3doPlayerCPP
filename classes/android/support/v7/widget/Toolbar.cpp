//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "Toolbar.h"
#include "../internal/view/c.h"
#include "../internal/widget/q.h"
#include "../internal/widget/o.h"
#include "../internal/widget/p.h"
#include "../../v4/h/a.h"
#include "../../v4/h/b.h"
#include "../../v4/h/u.h"
#include "../../v4/h/d.h"
#include "../../v4/h/l.h"
#include "../../v4/h/i.h"
#include "../../v4/h/f.h"
#include "../internal/widget/r.h"
#include "a.h"
#include "../internal/view/menu/n.h"
#include "b.h"
#include "c.h"
#include "d.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::content::Context;
				using android::graphics::drawable::Drawable;
				using android::os::Build;
				using android::os::Parcel;
				using android::os::Parcelable;
				using b = android::support::v4::h::b;
				using d = android::support::v4::h::d;
				using f = android::support::v4::h::f;
				using i = android::support::v4::h::i;
				using l = android::support::v4::h::l;
				using a = android::support::v7::a::a;
				using a = android::support::v7::b::a;
				using a = android::support::v7::d::a;
				using c = android::support::v7::internal_Renamed::view::c;
				using e = android::support::v7::internal_Renamed::view::menu::e;
				using f = android::support::v7::internal_Renamed::view::menu::f;
				using j = android::support::v7::internal_Renamed::view::menu::j;
				using n = android::support::v7::internal_Renamed::view::menu::n;
				using f = android::support::v7::internal_Renamed::widget::f;
				using j = android::support::v7::internal_Renamed::widget::j;
				using o = android::support::v7::internal_Renamed::widget::o;
				using p = android::support::v7::internal_Renamed::widget::p;
				using q = android::support::v7::internal_Renamed::widget::q;
				using r = android::support::v7::internal_Renamed::widget::r;
				using android::text::TextUtils;
				using android::util::AttributeSet;
				using android::view::ContextThemeWrapper;
				using android::view::Menu;
				using android::view::MenuInflater;
				using android::view::MenuItem;
				using android::view::MotionEvent;
				using android::view::View;
				using android::view::ViewGroup;
				using android::widget::ImageButton;
				using android::widget::ImageView;
				using android::widget::TextView;

//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
				Toolbar::eAnonymousInnerClass::eAnonymousInnerClass()
				{
				}

				bool Toolbar::eAnonymousInnerClass::android->support.v7.a.a(MenuItem *param1MenuItem)
				{
					return (Toolbar::a(this->a) != nullptr) ? Toolbar::a(this->a).a(param1MenuItem) : 0;
				}

//JAVA TO C++ CONVERTER TODO TASK: No base class can be determined:
				Toolbar::RunnableAnonymousInnerClass::RunnableAnonymousInnerClass()
				{
				}

				void Toolbar::RunnableAnonymousInnerClass::run()
				{
					this->a.b();
				}

				Toolbar::Toolbar(Context *paramContext) : Toolbar(paramContext, nullptr)
				{
				}

				Toolbar::Toolbar(Context *paramContext, AttributeSet *paramAttributeSet) : Toolbar(paramContext, paramAttributeSet, a::a::toolbarStyle)
				{
				}

				Toolbar::Toolbar(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android->view.ViewGroup(paramContext, paramAttributeSet, paramInt), M(p1::c())
				{
				  p *p1 = android->support.v7.internal_Renamed.widget.p::a(getContext(), paramAttributeSet, android->support.v7.a.a::j.Toolbar, paramInt, 0);
				  this->l = p1->g(android->support.v7.a.a::j.Toolbar_titleTextAppearance, 0);
				  this->m_Renamed = p1->g(android->support.v7.a.a::j.Toolbar_subtitleTextAppearance, 0);
				  this->u = p1->c(android->support.v7.a.a::j.Toolbar_android_gravity, this->u);
				  this->n = 48;
				  paramInt = p1->d(android->support.v7.a.a::j.Toolbar_titleMargins, 0);
				  this->s = paramInt;
				  this->r = paramInt;
				  this->q = paramInt;
				  this->p = paramInt;
				  paramInt = p1->d(android->support.v7.a.a::j.Toolbar_titleMarginStart, -1);
				  if (paramInt >= 0)
				  {
					this->p = paramInt;
				  }
				  paramInt = p1->d(android->support.v7.a.a::j.Toolbar_titleMarginEnd, -1);
				  if (paramInt >= 0)
				  {
					this->q = paramInt;
				  }
				  paramInt = p1->d(android->support.v7.a.a::j.Toolbar_titleMarginTop, -1);
				  if (paramInt >= 0)
				  {
					this->r = paramInt;
				  }
				  paramInt = p1->d(android->support.v7.a.a::j.Toolbar_titleMarginBottom, -1);
				  if (paramInt >= 0)
				  {
					this->s = paramInt;
				  }
				  this->o = p1->e(android->support.v7.a.a::j.Toolbar_maxButtonHeight, -1);
				  paramInt = p1->d(android->support.v7.a.a::j.Toolbar_contentInsetStart, -2147483648);
				  int i1 = p1->d(android->support.v7.a.a::j.Toolbar_contentInsetEnd, -2147483648);
				  int i2 = p1->e(android->support.v7.a.a::j.Toolbar_contentInsetLeft, 0);
				  int i3 = p1->e(android->support.v7.a.a::j.Toolbar_contentInsetRight, 0);
				  this->t->b(i2, i3);
				  if (paramInt != std::numeric_limits<int>::min() || i1 != std::numeric_limits<int>::min())
				  {
					this->t->a(paramInt, i1);
				  }
				  this->g_Renamed = p1->a(android->support.v7.a.a::j.Toolbar_collapseIcon);
				  this->h_Renamed = p1->b(android->support.v7.a.a::j.Toolbar_collapseContentDescription);
				  CharSequence *charSequence3 = p1->b(android->support.v7.a.a::j.Toolbar_title);
				  if (!android->text.TextUtils->isEmpty(charSequence3))
				  {
					setTitle(charSequence3);
				  }
				  charSequence3 = p1->b(android->support.v7.a.a::j.Toolbar_subtitle);
				  if (!android->text.TextUtils->isEmpty(charSequence3))
				  {
					setSubtitle(charSequence3);
				  }
				  this->j = getContext();
				  setPopupTheme(p1->g(android->support.v7.a.a::j.Toolbar_popupTheme, 0));
				  Drawable *drawable2 = p1->a(android->support.v7.a.a::j.Toolbar_navigationIcon);
				  if (drawable2 != nullptr)
				  {
					setNavigationIcon(drawable2);
				  }
				  CharSequence *charSequence2 = p1->b(android->support.v7.a.a::j.Toolbar_navigationContentDescription);
				  if (!android->text.TextUtils->isEmpty(charSequence2))
				  {
					setNavigationContentDescription(charSequence2);
				  }
				  Drawable *drawable1 = p1->a(android->support.v7.a.a::j.Toolbar_logo);
				  if (drawable1 != nullptr)
				  {
					setLogo(drawable1);
				  }
				  CharSequence *charSequence1 = p1->b(android->support.v7.a.a::j.Toolbar_logoDescription);
				  if (!android->text.TextUtils->isEmpty(charSequence1))
				  {
					setLogoDescription(charSequence1);
				  }
				  if (p1->d(android->support.v7.a.a::j.Toolbar_titleTextColor))
				  {
					setTitleTextColor(p1->b(android->support.v7.a.a::j.Toolbar_titleTextColor, -1));
				  }
				  if (p1->d(android->support.v7.a.a::j.Toolbar_subtitleTextColor))
				  {
					setSubtitleTextColor(p1->b(android->support.v7.a.a::j.Toolbar_subtitleTextColor, -1));
				  }
				  p1->b();
				}

				int Toolbar::android->support.v7.a.a(int paramInt)
				{
				  int i1 = paramInt & 0x70;
				  paramInt = i1;
				  switch (i1)
				  {
					default:
					  paramInt = this->u & 0x70;
					  break;
					case 16:
					case 48:
					case 80:
					  break;
				  }
				  return paramInt;
				}

				int Toolbar::android->support.v7.a.a(View *paramView, int paramInt)
				{
				  int i4;
				  int i3;
				  int i1;
				  b *b1 = static_cast<b*>(paramView->getLayoutParams());
				  int i2 = paramView->getMeasuredHeight();
				  if (paramInt > 0)
				  {
					paramInt = (i2 - paramInt) / 2;
				  }
				  else
				  {
					paramInt = 0;
				  }
				  switch (android->support.v7.a.a(b1->a_Renamed))
				  {
					default:
					  i1 = getPaddingTop();
					  i3 = getPaddingBottom();
					  i4 = getHeight();
					  paramInt = (i4 - i1 - i3 - i2) / 2;
					  if (paramInt < b1->topMargin)
					  {
						paramInt = b1->topMargin;
						return paramInt + i1;
					  }
					  break;
					case 48:
					  return getPaddingTop() - paramInt;
					case 80:
					  return getHeight() - getPaddingBottom() - i2 - b1->bottomMargin - paramInt;
				  }
				  i2 = i4 - i3 - i2 - paramInt - i1;
				  if (i2 < b1->bottomMargin)
				  {
					paramInt = std::max(0, paramInt - b1->bottomMargin - i2);
				  }
				  return paramInt + i1;
				}

				int Toolbar::android->support.v7.a.a(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4, std::vector<int> &paramArrayOfInt)
				{
				  ViewGroup::MarginLayoutParams *marginLayoutParams = static_cast<ViewGroup::MarginLayoutParams*>(paramView->getLayoutParams());
				  int i1 = marginLayoutParams->leftMargin - paramArrayOfInt[0];
				  int i2 = marginLayoutParams->rightMargin - paramArrayOfInt[1];
				  int i3 = std::max(0, i1) + std::max(0, i2);
				  paramArrayOfInt[0] = std::max(0, -i1);
				  paramArrayOfInt[1] = std::max(0, -i2);
				  paramView->measure(getChildMeasureSpec(paramInt1, getPaddingLeft() + getPaddingRight() + i3 + paramInt2, marginLayoutParams->width), getChildMeasureSpec(paramInt3, getPaddingTop() + getPaddingBottom() + marginLayoutParams->topMargin + marginLayoutParams->bottomMargin + paramInt4, marginLayoutParams->height));
				  return paramView->getMeasuredWidth() + i3;
				}

				int Toolbar::android->support.v7.a.a(View *paramView, int paramInt1, std::vector<int> &paramArrayOfInt, int paramInt2)
				{
				  b *b1 = static_cast<b*>(paramView->getLayoutParams());
				  int i1 = b1->leftMargin - paramArrayOfInt[0];
				  paramInt1 = std::max(0, i1) + paramInt1;
				  paramArrayOfInt[0] = std::max(0, -i1);
				  paramInt2 = android->support.v7.a.a(paramView, paramInt2);
				  i1 = paramView->getMeasuredWidth();
				  paramView->layout(paramInt1, paramInt2, paramInt1 + i1, paramView->getMeasuredHeight() + paramInt2);
				  return b1->rightMargin + i1 + paramInt1;
				}

				int Toolbar::android->support.v7.a.a(std::vector<View*> &paramList, std::vector<int> &paramArrayOfInt)
				{
				  int i3 = paramArrayOfInt[0];
				  int i2 = paramArrayOfInt[1];
				  int i4 = paramList.size();
				  char b1 = 0;
				  int i1;
				  for (i1 = 0; b1 < i4; i1 += i7 + i5 + i6)
				  {
					View *view = static_cast<View*>(paramList[b1]);
					b *b2 = static_cast<b*>(view->getLayoutParams());
					i3 = b2->leftMargin - i3;
					i2 = b2->rightMargin - i2;
					int i5 = std::max(0, i3);
					int i6 = std::max(0, i2);
					i3 = std::max(0, -i3);
					i2 = std::max(0, -i2);
					int i7 = view->getMeasuredWidth();
					b1++;
				  }
				  return i1;
				}

				void Toolbar::android->support.v7.a.a(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5)
				{
				  ViewGroup::MarginLayoutParams *marginLayoutParams = static_cast<ViewGroup::MarginLayoutParams*>(paramView->getLayoutParams());
				  int i1 = getChildMeasureSpec(paramInt1, getPaddingLeft() + getPaddingRight() + marginLayoutParams->leftMargin + marginLayoutParams->rightMargin + paramInt2, marginLayoutParams->width);
				  paramInt2 = getChildMeasureSpec(paramInt3, getPaddingTop() + getPaddingBottom() + marginLayoutParams->topMargin + marginLayoutParams->bottomMargin + paramInt4, marginLayoutParams->height);
				  paramInt3 = android->view.View.MeasureSpec.getMode(paramInt2);
				  paramInt1 = paramInt2;
				  if (paramInt3 != 1073741824)
				  {
					paramInt1 = paramInt2;
					if (paramInt5 >= 0)
					{
					  paramInt1 = paramInt5;
					  if (paramInt3 != 0)
					  {
						paramInt1 = std::min(android->view.View.MeasureSpec.getSize(paramInt2), paramInt5);
					  }
					  paramInt1 = android->view.View.MeasureSpec.makeMeasureSpec(paramInt1, 1073741824);
					}
				  }
				  paramView->measure(i1, paramInt1);
				}

				void Toolbar::android->support.v7.a.a(View *paramView, bool paramBoolean)
				{
				  b *b1 = paramView->getLayoutParams();
				  if (b1 == nullptr)
				  {
					b1 = android->support.v4.h.d();
				  }
				  else if (!checkLayoutParams(b1))
				  {
					b1 = android->support.v7.a.a(b1);
				  }
				  else
				  {
					b1 = static_cast<b*>(b1);
				  }
				  b1->b_Renamed = 1;
				  if (paramBoolean && this->a != nullptr)
				  {
					paramView->setLayoutParams(b1);
					this->C.push_back(paramView);
					return;
				  }
				  addView(paramView, b1);
				}

				void Toolbar::android->support.v7.a.a(std::vector<View*> &paramList, int paramInt)
				{
				  bool bool_Renamed = true;
				  int i1 = 0;
				  if (android->support.v4.h.l::a(this) != 1)
				  {
					bool_Renamed = false;
				  }
				  int i3 = getChildCount();
				  int i2 = android->support.v4.h.b::a(paramInt, android->support.v4.h.l::a(this));
				  paramList.clear();
				  paramInt = i1;
				  if (bool_Renamed)
				  {
					for (paramInt = i3 - 1; paramInt >= 0; paramInt--)
					{
					  View *view = getChildAt(paramInt);
					  b *b1 = static_cast<b*>(view->getLayoutParams());
					  if (b1->b_Renamed == 0 && android->support.v7.a.a(view) && android->support.v4.h.b(b1->a_Renamed) == i2)
					  {
						paramList.push_back(view);
					  }
					}
				  }
				  else
				  {
					while (paramInt < i3)
					{
					  View *view = getChildAt(paramInt);
					  b *b1 = static_cast<b*>(view->getLayoutParams());
					  if (b1->b_Renamed == 0 && android->support.v7.a.a(view) && android->support.v4.h.b(b1->a_Renamed) == i2)
					  {
						paramList.push_back(view);
					  }
					  paramInt++;
					}
				  }
				}

				bool Toolbar::android->support.v7.a.a(View *paramView)
				{
					return (paramView != nullptr && paramView->getParent() == this && paramView->getVisibility() != 8);
				}

				int Toolbar::android->support.v4.h.b(int paramInt)
				{
				  int i2 = android->support.v4.h.l::a(this);
				  int i1 = android->support.v4.h.b::a(paramInt, i2) & 0x7;
				  paramInt = i1;
				  switch (i1)
				  {
					default:
					  if (i2 == 1)
					  {
						paramInt = 5;
						break;
					  }
					  return 3;
					case 1:
					case 3:
					case 5:
					  break;
				  }
				  return paramInt;
				}

				int Toolbar::android->support.v4.h.b(View *paramView)
				{
				  ViewGroup::MarginLayoutParams *marginLayoutParams = static_cast<ViewGroup::MarginLayoutParams*>(paramView->getLayoutParams());
				  int i1 = android->support.v4.h.d::a(marginLayoutParams);
				  return android->support.v4.h.d::b(marginLayoutParams) + i1;
				}

				int Toolbar::android->support.v4.h.b(View *paramView, int paramInt1, std::vector<int> &paramArrayOfInt, int paramInt2)
				{
				  b *b1 = static_cast<b*>(paramView->getLayoutParams());
				  int i1 = b1->rightMargin - paramArrayOfInt[1];
				  paramInt1 -= std::max(0, i1);
				  paramArrayOfInt[1] = std::max(0, -i1);
				  paramInt2 = android->support.v7.a.a(paramView, paramInt2);
				  i1 = paramView->getMeasuredWidth();
				  paramView->layout(paramInt1 - i1, paramInt2, paramInt1, paramView->getMeasuredHeight() + paramInt2);
				  return paramInt1 - b1->leftMargin + i1;
				}

				int Toolbar::android->support.v7.internal_Renamed.view.c(View *paramView)
				{
				  ViewGroup::MarginLayoutParams *marginLayoutParams = static_cast<ViewGroup::MarginLayoutParams*>(paramView->getLayoutParams());
				  int i1 = marginLayoutParams->topMargin;
				  return marginLayoutParams->bottomMargin + i1;
				}

				bool Toolbar::android->support.v4.h.d(View *paramView)
				{
					return (paramView->getParent() == this || std::find(this->C.begin(), this->C.end(), paramView) != this->C.end());
				}

				void Toolbar::g()
				{
				  if (this->f == nullptr)
				  {
					this->f = new android->widget.ImageView(getContext());
				  }
				}

				MenuInflater *Toolbar::getMenuInflater()
				{
					return new android->support.v7.internal_Renamed.view.c(getContext());
				}

				void Toolbar::h()
				{
				  android->support.v4.h.i();
				  if (this->b.c() == nullptr)
				  {
					e *e1 = static_cast<e*>(this->b.getMenu());
					if (this->H == nullptr)
					{
					  this->H = new android->support.v7.a.a(this, nullptr);
					}
					this->b.setExpandedActionViewsExclusive(true);
					e1->a(this->H, this->j);
				  }
				}

				void Toolbar::android->support.v4.h.i()
				{
				  if (this->b == nullptr)
				  {
					this->b = new ActionMenuView(getContext());
					this->b.setPopupTheme(this->k_Renamed);
					this->b.setOnMenuItemClickListener(this->F);
					this->b.a(this->I, this->J);
					b *b1 = android->support.v4.h.d();
					b1->a_Renamed = 0x800005 | this->n & 0x70;
					this->b.setLayoutParams(b1);
					android->support.v7.a.a(this->b, false);
				  }
				}

				void Toolbar::android->support.v7.internal_Renamed.view.menu.j()
				{
				  if (this->e == nullptr)
				  {
					this->e = new android->widget.ImageButton(getContext(), nullptr, android->support.v7.a.a::a.toolbarNavigationButtonStyle);
					b *b1 = android->support.v4.h.d();
					b1->a_Renamed = 0x800003 | this->n & 0x70;
					this->e.setLayoutParams(b1);
				  }
				}

				void Toolbar::k()
				{
				  if (this->i == nullptr)
				  {
					this->i = new android->widget.ImageButton(getContext(), nullptr, android->support.v7.a.a::a.toolbarNavigationButtonStyle);
					this->i.setImageDrawable(this->g_Renamed);
					this->i.setContentDescription(this->h_Renamed);
					b *b1 = android->support.v4.h.d();
					b1->a_Renamed = 0x800003 | this->n & 0x70;
					b1->b_Renamed = 2;
					this->i.setLayoutParams(b1);
					OnClickListenerAnonymousInnerClass tempVar(this);
					this->i.setOnClickListener(&tempVar);
				  }
				}

				Toolbar::OnClickListenerAnonymousInnerClass::OnClickListenerAnonymousInnerClass(Toolbar *outerInstance) : android->view.View.OnClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void Toolbar::OnClickListenerAnonymousInnerClass::onClick(View *param1View)
				{
					this->a.c();
				}

				void Toolbar::android->support.v4.h.l()
				{
				  removeCallbacks(this->L);
				  post(this->L);
				}

				bool Toolbar::m()
				{
				  if (this->K)
				  {
					int i1 = getChildCount();
					char b1 = 0;
					while (b1 < i1)
					{
					  View *view = getChildAt(b1);
					  if (!android->support.v7.a.a(view) || view->getMeasuredWidth() <= 0 || view->getMeasuredHeight() <= 0)
					  {
						b1++;
						continue;
					  }
					  return false;
					}
					return true;
				  }
				  return false;
				}

				b *Toolbar::android->support.v7.a.a(AttributeSet *paramAttributeSet)
				{
					return new android->support.v4.h.b(getContext(), paramAttributeSet);
				}

				b *Toolbar::android->support.v7.a.a(ViewGroup::LayoutParams *paramLayoutParams)
				{
					android->support::v4::h::b tempVar(paramLayoutParams);
					return (dynamic_cast<b*>(paramLayoutParams) != nullptr) ? new android->support.v4.h.b(static_cast<b*>(paramLayoutParams)) : ((dynamic_cast<a::a*>(paramLayoutParams) != nullptr) ? new android->support.v4.h.b(static_cast<a::a*>(paramLayoutParams)) : ((dynamic_cast<ViewGroup::MarginLayoutParams*>(paramLayoutParams) != nullptr) ? new android->support.v4.h.b(static_cast<ViewGroup::MarginLayoutParams*>(paramLayoutParams)) : &tempVar));
				}

				void Toolbar::android->support.v7.a.a(int paramInt1, int paramInt2)
				{
					this->t->a(paramInt1, paramInt2);
				}

				void Toolbar::android->support.v7.a.a(Context *paramContext, int paramInt)
				{
				  this->l = paramInt;
				  if (this->c != nullptr)
				  {
					this->c.setTextAppearance(paramContext, paramInt);
				  }
				}

				bool Toolbar::android->support.v7.a.a()
				{
					return (this->b != nullptr && this->b.e());
				}

				void Toolbar::android->support.v4.h.b(Context *paramContext, int paramInt)
				{
				  this->m_Renamed = paramInt;
				  if (this->d != nullptr)
				  {
					this->d.setTextAppearance(paramContext, paramInt);
				  }
				}

				bool Toolbar::android->support.v4.h.b()
				{
					return (this->b != nullptr && this->b.d());
				}

				void Toolbar::android->support.v7.internal_Renamed.view.c()
				{
				  f *f1;
				  if (this->H == nullptr)
				  {
					f1 = nullptr;
				  }
				  else
				  {
					f1 = this->H->b;
				  }
				  if (f1 != nullptr)
				  {
					f1->collapseActionView();
				  }
				}

				bool Toolbar::checkLayoutParams(ViewGroup::LayoutParams *paramLayoutParams)
				{
					return (ViewGroup::checkLayoutParams(paramLayoutParams) && dynamic_cast<b*>(paramLayoutParams) != nullptr);
				}

				b *Toolbar::android->support.v4.h.d()
				{
					return new android->support.v4.h.b(-2, -2);
				}

				void Toolbar::android->support.v7.internal_Renamed.view.menu.e()
				{
				  for (int i1 = getChildCount() - 1; i1 >= 0; i1--)
				  {
					View *view = getChildAt(i1);
					if ((static_cast<b*>(view->getLayoutParams()))->b_Renamed != 2 && view != this->b)
					{
					  removeViewAt(i1);
					  this->C.push_back(view);
					}
				  }
				}

				void Toolbar::android->support.v4.h.f()
				{
				  for (int i1 = this->C.size() - 1; i1 >= 0; i1--)
				  {
					addView(static_cast<View*>(this->C[i1]));
				  }
				  this->C.clear();
				}

				int Toolbar::getContentInsetEnd()
				{
					return this->t->d();
				}

				int Toolbar::getContentInsetLeft()
				{
					return this->t->a();
				}

				int Toolbar::getContentInsetRight()
				{
					return this->t->b();
				}

				int Toolbar::getContentInsetStart()
				{
					return this->t->c();
				}

				Drawable *Toolbar::getLogo()
				{
					return (this->f != nullptr) ? this->f.getDrawable() : nullptr;
				}

				CharSequence *Toolbar::getLogoDescription()
				{
					return (this->f != nullptr) ? this->f.getContentDescription() : nullptr;
				}

				Menu *Toolbar::getMenu()
				{
				  h();
				  return this->b.getMenu();
				}

				CharSequence *Toolbar::getNavigationContentDescription()
				{
					return (this->e != nullptr) ? this->e.getContentDescription() : nullptr;
				}

				Drawable *Toolbar::getNavigationIcon()
				{
					return (this->e != nullptr) ? this->e.getDrawable() : nullptr;
				}

				Drawable *Toolbar::getOverflowIcon()
				{
				  h();
				  return this->b.getOverflowIcon();
				}

				int Toolbar::getPopupTheme()
				{
					return this->k_Renamed;
				}

				CharSequence *Toolbar::getSubtitle()
				{
					return this->w;
				}

				CharSequence *Toolbar::getTitle()
				{
					return this->v;
				}

				f *Toolbar::getWrapper()
				{
				  if (this->G == nullptr)
				  {
					this->G = new android->support.v7.internal_Renamed.widget.q(this, true);
				  }
				  return this->G;
				}

				void Toolbar::onDetachedFromWindow()
				{
				  ViewGroup::onDetachedFromWindow();
				  removeCallbacks(this->L);
				}

				bool Toolbar::onHoverEvent(MotionEvent *paramMotionEvent)
				{
				  int i1 = android->support.v4.h.i::a(paramMotionEvent);
				  if (i1 == 9)
				  {
					this->A = false;
				  }
				  if (!this->A)
				  {
					bool bool_Renamed = ViewGroup::onHoverEvent(paramMotionEvent);
					if (i1 == 9 && !bool_Renamed)
					{
					  this->A = true;
					}
				  }
				  if (i1 == 10 || i1 == 3)
				  {
					this->A = false;
				  }
				  return true;
				}

				void Toolbar::onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
				{ // Byte code:
				  //   0: aload_0
				  //   1: invokestatic a : (Landroid/view/View;)I
				  //   4: iconst_1
				  //   5: if_icmpne -> 870
				  //   8: iconst_1
				  //   9: istore #8
				  //   11: aload_0
				  //   12: invokevirtual getWidth : ()I
				  //   15: istore #11
				  //   17: aload_0
				  //   18: invokevirtual getHeight : ()I
				  //   21: istore #14
				  //   23: aload_0
				  //   24: invokevirtual getPaddingLeft : ()I
				  //   27: istore #6
				  //   29: aload_0
				  //   30: invokevirtual getPaddingRight : ()I
				  //   33: istore #12
				  //   35: aload_0
				  //   36: invokevirtual getPaddingTop : ()I
				  //   39: istore #13
				  //   41: aload_0
				  //   42: invokevirtual getPaddingBottom : ()I
				  //   45: istore #15
				  //   47: iload #11
				  //   49: iload #12
				  //   51: isub
				  //   52: istore #5
				  //   54: aload_0
				  //   55: getfield D : [I
				  //   58: astore #19
				  //   60: aload #19
				  //   62: iconst_1
				  //   63: iconst_0
				  //   64: iastore
				  //   65: aload #19
				  //   67: iconst_0
				  //   68: iconst_0
				  //   69: iastore
				  //   70: aload_0
				  //   71: invokestatic d : (Landroid/view/View;)I
				  //   74: istore #10
				  //   76: aload_0
				  //   77: aload_0
				  //   78: getfield e : Landroid/widget/ImageButton;
				  //   81: invokespecial a : (Landroid/view/View;)Z
				  //   84: ifeq -> 1565
				  //   87: iload #8
				  //   89: ifeq -> 876
				  //   92: aload_0
				  //   93: aload_0
				  //   94: getfield e : Landroid/widget/ImageButton;
				  //   97: iload #5
				  //   99: aload #19
				  //   101: iload #10
				  //   103: invokespecial b : (Landroid/view/View;I[II)I
				  //   106: istore #5
				  //   108: iload #6
				  //   110: istore_2
				  //   111: iload #5
				  //   113: istore_3
				  //   114: iload_2
				  //   115: istore #4
				  //   117: aload_0
				  //   118: aload_0
				  //   119: getfield i : Landroid/widget/ImageButton;
				  //   122: invokespecial a : (Landroid/view/View;)Z
				  //   125: ifeq -> 151
				  //   128: iload #8
				  //   130: ifeq -> 894
				  //   133: aload_0
				  //   134: aload_0
				  //   135: getfield i : Landroid/widget/ImageButton;
				  //   138: iload #5
				  //   140: aload #19
				  //   142: iload #10
				  //   144: invokespecial b : (Landroid/view/View;I[II)I
				  //   147: istore_3
				  //   148: iload_2
				  //   149: istore #4
				  //   151: iload_3
				  //   152: istore_2
				  //   153: iload #4
				  //   155: istore #5
				  //   157: aload_0
				  //   158: aload_0
				  //   159: getfield b : Landroid/support/v7/widget/ActionMenuView;
				  //   162: invokespecial a : (Landroid/view/View;)Z
				  //   165: ifeq -> 191
				  //   168: iload #8
				  //   170: ifeq -> 915
				  //   173: aload_0
				  //   174: aload_0
				  //   175: getfield b : Landroid/support/v7/widget/ActionMenuView;
				  //   178: iload #4
				  //   180: aload #19
				  //   182: iload #10
				  //   184: invokespecial a : (Landroid/view/View;I[II)I
				  //   187: istore #5
				  //   189: iload_3
				  //   190: istore_2
				  //   191: aload #19
				  //   193: iconst_0
				  //   194: iconst_0
				  //   195: aload_0
				  //   196: invokevirtual getContentInsetLeft : ()I
				  //   199: iload #5
				  //   201: isub
				  //   202: invokestatic max : (II)I
				  //   205: iastore
				  //   206: aload #19
				  //   208: iconst_1
				  //   209: iconst_0
				  //   210: aload_0
				  //   211: invokevirtual getContentInsetRight : ()I
				  //   214: iload #11
				  //   216: iload #12
				  //   218: isub
				  //   219: iload_2
				  //   220: isub
				  //   221: isub
				  //   222: invokestatic max : (II)I
				  //   225: iastore
				  //   226: iload #5
				  //   228: aload_0
				  //   229: invokevirtual getContentInsetLeft : ()I
				  //   232: invokestatic max : (II)I
				  //   235: istore #4
				  //   237: iload_2
				  //   238: iload #11
				  //   240: iload #12
				  //   242: isub
				  //   243: aload_0
				  //   244: invokevirtual getContentInsetRight : ()I
				  //   247: isub
				  //   248: invokestatic min : (II)I
				  //   251: istore #5
				  //   253: iload #5
				  //   255: istore_3
				  //   256: iload #4
				  //   258: istore_2
				  //   259: aload_0
				  //   260: aload_0
				  //   261: getfield a : Landroid/view/View;
				  //   264: invokespecial a : (Landroid/view/View;)Z
				  //   267: ifeq -> 293
				  //   270: iload #8
				  //   272: ifeq -> 936
				  //   275: aload_0
				  //   276: aload_0
				  //   277: getfield a : Landroid/view/View;
				  //   280: iload #5
				  //   282: aload #19
				  //   284: iload #10
				  //   286: invokespecial b : (Landroid/view/View;I[II)I
				  //   289: istore_3
				  //   290: iload #4
				  //   292: istore_2
				  //   293: aload_0
				  //   294: aload_0
				  //   295: getfield f : Landroid/widget/ImageView;
				  //   298: invokespecial a : (Landroid/view/View;)Z
				  //   301: ifeq -> 1559
				  //   304: iload #8
				  //   306: ifeq -> 957
				  //   309: aload_0
				  //   310: aload_0
				  //   311: getfield f : Landroid/widget/ImageView;
				  //   314: iload_3
				  //   315: aload #19
				  //   317: iload #10
				  //   319: invokespecial b : (Landroid/view/View;I[II)I
				  //   322: istore_3
				  //   323: iload_2
				  //   324: istore #4
				  //   326: aload_0
				  //   327: aload_0
				  //   328: getfield c : Landroid/widget/TextView;
				  //   331: invokespecial a : (Landroid/view/View;)Z
				  //   334: istore_1
				  //   335: aload_0
				  //   336: aload_0
				  //   337: getfield d : Landroid/widget/TextView;
				  //   340: invokespecial a : (Landroid/view/View;)Z
				  //   343: istore #16
				  //   345: iconst_0
				  //   346: istore_2
				  //   347: iload_1
				  //   348: ifeq -> 391
				  //   351: aload_0
				  //   352: getfield c : Landroid/widget/TextView;
				  //   355: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   358: checkcast android/support/v7/widget/Toolbar$b
				  //   361: astore #17
				  //   363: aload #17
				  //   365: getfield topMargin : I
				  //   368: istore_2
				  //   369: aload_0
				  //   370: getfield c : Landroid/widget/TextView;
				  //   373: invokevirtual getMeasuredHeight : ()I
				  //   376: istore #5
				  //   378: iconst_0
				  //   379: aload #17
				  //   381: getfield bottomMargin : I
				  //   384: iload_2
				  //   385: iload #5
				  //   387: iadd
				  //   388: iadd
				  //   389: iadd
				  //   390: istore_2
				  //   391: iload #16
				  //   393: ifeq -> 1553
				  //   396: aload_0
				  //   397: getfield d : Landroid/widget/TextView;
				  //   400: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   403: checkcast android/support/v7/widget/Toolbar$b
				  //   406: astore #17
				  //   408: aload #17
				  //   410: getfield topMargin : I
				  //   413: istore #5
				  //   415: aload_0
				  //   416: getfield d : Landroid/widget/TextView;
				  //   419: invokevirtual getMeasuredHeight : ()I
				  //   422: istore #7
				  //   424: aload #17
				  //   426: getfield bottomMargin : I
				  //   429: iload #5
				  //   431: iload #7
				  //   433: iadd
				  //   434: iadd
				  //   435: iload_2
				  //   436: iadd
				  //   437: istore #9
				  //   439: iload_1
				  //   440: ifne -> 454
				  //   443: iload_3
				  //   444: istore #5
				  //   446: iload #4
				  //   448: istore_2
				  //   449: iload #16
				  //   451: ifeq -> 816
				  //   454: iload_1
				  //   455: ifeq -> 975
				  //   458: aload_0
				  //   459: getfield c : Landroid/widget/TextView;
				  //   462: astore #17
				  //   464: iload #16
				  //   466: ifeq -> 984
				  //   469: aload_0
				  //   470: getfield d : Landroid/widget/TextView;
				  //   473: astore #18
				  //   475: aload #17
				  //   477: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   480: checkcast android/support/v7/widget/Toolbar$b
				  //   483: astore #17
				  //   485: aload #18
				  //   487: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   490: checkcast android/support/v7/widget/Toolbar$b
				  //   493: astore #18
				  //   495: iload_1
				  //   496: ifeq -> 509
				  //   499: aload_0
				  //   500: getfield c : Landroid/widget/TextView;
				  //   503: invokevirtual getMeasuredWidth : ()I
				  //   506: ifgt -> 524
				  //   509: iload #16
				  //   511: ifeq -> 993
				  //   514: aload_0
				  //   515: getfield d : Landroid/widget/TextView;
				  //   518: invokevirtual getMeasuredWidth : ()I
				  //   521: ifle -> 993
				  //   524: iconst_1
				  //   525: istore #7
				  //   527: aload_0
				  //   528: getfield u : I
				  //   531: bipush #112
				  //   533: iand
				  //   534: lookupswitch default -> 560, 48 -> 999, 80 -> 1073
				  //   560: iload #14
				  //   562: iload #13
				  //   564: isub
				  //   565: iload #15
				  //   567: isub
				  //   568: iload #9
				  //   570: isub
				  //   571: iconst_2
				  //   572: idiv
				  //   573: istore_2
				  //   574: iload_2
				  //   575: aload #17
				  //   577: getfield topMargin : I
				  //   580: aload_0
				  //   581: getfield r : I
				  //   584: iadd
				  //   585: if_icmpge -> 1020
				  //   588: aload #17
				  //   590: getfield topMargin : I
				  //   593: aload_0
				  //   594: getfield r : I
				  //   597: iadd
				  //   598: istore_2
				  //   599: iload #13
				  //   601: iload_2
				  //   602: iadd
				  //   603: istore_2
				  //   604: iload #8
				  //   606: ifeq -> 1102
				  //   609: iload #7
				  //   611: ifeq -> 1096
				  //   614: aload_0
				  //   615: getfield p : I
				  //   618: istore #5
				  //   620: iload #5
				  //   622: aload #19
				  //   624: iconst_1
				  //   625: iaload
				  //   626: isub
				  //   627: istore #5
				  //   629: iload_3
				  //   630: iconst_0
				  //   631: iload #5
				  //   633: invokestatic max : (II)I
				  //   636: isub
				  //   637: istore_3
				  //   638: aload #19
				  //   640: iconst_1
				  //   641: iconst_0
				  //   642: iload #5
				  //   644: ineg
				  //   645: invokestatic max : (II)I
				  //   648: iastore
				  //   649: iload_1
				  //   650: ifeq -> 1544
				  //   653: aload_0
				  //   654: getfield c : Landroid/widget/TextView;
				  //   657: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   660: checkcast android/support/v7/widget/Toolbar$b
				  //   663: astore #17
				  //   665: iload_3
				  //   666: aload_0
				  //   667: getfield c : Landroid/widget/TextView;
				  //   670: invokevirtual getMeasuredWidth : ()I
				  //   673: isub
				  //   674: istore #5
				  //   676: aload_0
				  //   677: getfield c : Landroid/widget/TextView;
				  //   680: invokevirtual getMeasuredHeight : ()I
				  //   683: iload_2
				  //   684: iadd
				  //   685: istore #8
				  //   687: aload_0
				  //   688: getfield c : Landroid/widget/TextView;
				  //   691: iload #5
				  //   693: iload_2
				  //   694: iload_3
				  //   695: iload #8
				  //   697: invokevirtual layout : (IIII)V
				  //   700: aload_0
				  //   701: getfield q : I
				  //   704: istore #9
				  //   706: iload #8
				  //   708: aload #17
				  //   710: getfield bottomMargin : I
				  //   713: iadd
				  //   714: istore_2
				  //   715: iload #5
				  //   717: iload #9
				  //   719: isub
				  //   720: istore #5
				  //   722: iload #16
				  //   724: ifeq -> 1539
				  //   727: aload_0
				  //   728: getfield d : Landroid/widget/TextView;
				  //   731: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   734: checkcast android/support/v7/widget/Toolbar$b
				  //   737: astore #17
				  //   739: aload #17
				  //   741: getfield topMargin : I
				  //   744: iload_2
				  //   745: iadd
				  //   746: istore_2
				  //   747: aload_0
				  //   748: getfield d : Landroid/widget/TextView;
				  //   751: invokevirtual getMeasuredWidth : ()I
				  //   754: istore #8
				  //   756: aload_0
				  //   757: getfield d : Landroid/widget/TextView;
				  //   760: invokevirtual getMeasuredHeight : ()I
				  //   763: iload_2
				  //   764: iadd
				  //   765: istore #9
				  //   767: aload_0
				  //   768: getfield d : Landroid/widget/TextView;
				  //   771: iload_3
				  //   772: iload #8
				  //   774: isub
				  //   775: iload_2
				  //   776: iload_3
				  //   777: iload #9
				  //   779: invokevirtual layout : (IIII)V
				  //   782: aload_0
				  //   783: getfield q : I
				  //   786: istore_2
				  //   787: aload #17
				  //   789: getfield bottomMargin : I
				  //   792: istore #8
				  //   794: iload_3
				  //   795: iload_2
				  //   796: isub
				  //   797: istore_2
				  //   798: iload #7
				  //   800: ifeq -> 1534
				  //   803: iload #5
				  //   805: iload_2
				  //   806: invokestatic min : (II)I
				  //   809: istore_2
				  //   810: iload_2
				  //   811: istore #5
				  //   813: iload #4
				  //   815: istore_2
				  //   816: aload_0
				  //   817: aload_0
				  //   818: getfield B : Ljava/util/ArrayList;
				  //   821: iconst_3
				  //   822: invokespecial a : (Ljava/util/List;I)V
				  //   825: aload_0
				  //   826: getfield B : Ljava/util/ArrayList;
				  //   829: invokevirtual size : ()I
				  //   832: istore #4
				  //   834: iconst_0
				  //   835: istore_3
				  //   836: iload_3
				  //   837: iload #4
				  //   839: if_icmpge -> 1334
				  //   842: aload_0
				  //   843: aload_0
				  //   844: getfield B : Ljava/util/ArrayList;
				  //   847: iload_3
				  //   848: invokevirtual get : (I)Ljava/lang/Object;
				  //   851: checkcast android/view/View
				  //   854: iload_2
				  //   855: aload #19
				  //   857: iload #10
				  //   859: invokespecial a : (Landroid/view/View;I[II)I
				  //   862: istore_2
				  //   863: iload_3
				  //   864: iconst_1
				  //   865: iadd
				  //   866: istore_3
				  //   867: goto -> 836
				  //   870: iconst_0
				  //   871: istore #8
				  //   873: goto -> 11
				  //   876: aload_0
				  //   877: aload_0
				  //   878: getfield e : Landroid/widget/ImageButton;
				  //   881: iload #6
				  //   883: aload #19
				  //   885: iload #10
				  //   887: invokespecial a : (Landroid/view/View;I[II)I
				  //   890: istore_2
				  //   891: goto -> 111
				  //   894: aload_0
				  //   895: aload_0
				  //   896: getfield i : Landroid/widget/ImageButton;
				  //   899: iload_2
				  //   900: aload #19
				  //   902: iload #10
				  //   904: invokespecial a : (Landroid/view/View;I[II)I
				  //   907: istore #4
				  //   909: iload #5
				  //   911: istore_3
				  //   912: goto -> 151
				  //   915: aload_0
				  //   916: aload_0
				  //   917: getfield b : Landroid/support/v7/widget/ActionMenuView;
				  //   920: iload_3
				  //   921: aload #19
				  //   923: iload #10
				  //   925: invokespecial b : (Landroid/view/View;I[II)I
				  //   928: istore_2
				  //   929: iload #4
				  //   931: istore #5
				  //   933: goto -> 191
				  //   936: aload_0
				  //   937: aload_0
				  //   938: getfield a : Landroid/view/View;
				  //   941: iload #4
				  //   943: aload #19
				  //   945: iload #10
				  //   947: invokespecial a : (Landroid/view/View;I[II)I
				  //   950: istore_2
				  //   951: iload #5
				  //   953: istore_3
				  //   954: goto -> 293
				  //   957: aload_0
				  //   958: aload_0
				  //   959: getfield f : Landroid/widget/ImageView;
				  //   962: iload_2
				  //   963: aload #19
				  //   965: iload #10
				  //   967: invokespecial a : (Landroid/view/View;I[II)I
				  //   970: istore #4
				  //   972: goto -> 326
				  //   975: aload_0
				  //   976: getfield d : Landroid/widget/TextView;
				  //   979: astore #17
				  //   981: goto -> 464
				  //   984: aload_0
				  //   985: getfield c : Landroid/widget/TextView;
				  //   988: astore #18
				  //   990: goto -> 475
				  //   993: iconst_0
				  //   994: istore #7
				  //   996: goto -> 527
				  //   999: aload_0
				  //   1000: invokevirtual getPaddingTop : ()I
				  //   1003: istore_2
				  //   1004: aload #17
				  //   1006: getfield topMargin : I
				  //   1009: iload_2
				  //   1010: iadd
				  //   1011: aload_0
				  //   1012: getfield r : I
				  //   1015: iadd
				  //   1016: istore_2
				  //   1017: goto -> 604
				  //   1020: iload #14
				  //   1022: iload #15
				  //   1024: isub
				  //   1025: iload #9
				  //   1027: isub
				  //   1028: iload_2
				  //   1029: isub
				  //   1030: iload #13
				  //   1032: isub
				  //   1033: istore #5
				  //   1035: iload #5
				  //   1037: aload #17
				  //   1039: getfield bottomMargin : I
				  //   1042: aload_0
				  //   1043: getfield s : I
				  //   1046: iadd
				  //   1047: if_icmpge -> 1550
				  //   1050: iconst_0
				  //   1051: iload_2
				  //   1052: aload #18
				  //   1054: getfield bottomMargin : I
				  //   1057: aload_0
				  //   1058: getfield s : I
				  //   1061: iadd
				  //   1062: iload #5
				  //   1064: isub
				  //   1065: isub
				  //   1066: invokestatic max : (II)I
				  //   1069: istore_2
				  //   1070: goto -> 599
				  //   1073: iload #14
				  //   1075: iload #15
				  //   1077: isub
				  //   1078: aload #18
				  //   1080: getfield bottomMargin : I
				  //   1083: isub
				  //   1084: aload_0
				  //   1085: getfield s : I
				  //   1088: isub
				  //   1089: iload #9
				  //   1091: isub
				  //   1092: istore_2
				  //   1093: goto -> 604
				  //   1096: iconst_0
				  //   1097: istore #5
				  //   1099: goto -> 620
				  //   1102: iload #7
				  //   1104: ifeq -> 1328
				  //   1107: aload_0
				  //   1108: getfield p : I
				  //   1111: istore #5
				  //   1113: iload #5
				  //   1115: aload #19
				  //   1117: iconst_0
				  //   1118: iaload
				  //   1119: isub
				  //   1120: istore #5
				  //   1122: iload #4
				  //   1124: iconst_0
				  //   1125: iload #5
				  //   1127: invokestatic max : (II)I
				  //   1130: iadd
				  //   1131: istore #4
				  //   1133: aload #19
				  //   1135: iconst_0
				  //   1136: iconst_0
				  //   1137: iload #5
				  //   1139: ineg
				  //   1140: invokestatic max : (II)I
				  //   1143: iastore
				  //   1144: iload_1
				  //   1145: ifeq -> 1527
				  //   1148: aload_0
				  //   1149: getfield c : Landroid/widget/TextView;
				  //   1152: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   1155: checkcast android/support/v7/widget/Toolbar$b
				  //   1158: astore #17
				  //   1160: aload_0
				  //   1161: getfield c : Landroid/widget/TextView;
				  //   1164: invokevirtual getMeasuredWidth : ()I
				  //   1167: iload #4
				  //   1169: iadd
				  //   1170: istore #8
				  //   1172: aload_0
				  //   1173: getfield c : Landroid/widget/TextView;
				  //   1176: invokevirtual getMeasuredHeight : ()I
				  //   1179: iload_2
				  //   1180: iadd
				  //   1181: istore #5
				  //   1183: aload_0
				  //   1184: getfield c : Landroid/widget/TextView;
				  //   1187: iload #4
				  //   1189: iload_2
				  //   1190: iload #8
				  //   1192: iload #5
				  //   1194: invokevirtual layout : (IIII)V
				  //   1197: aload_0
				  //   1198: getfield q : I
				  //   1201: istore #9
				  //   1203: aload #17
				  //   1205: getfield bottomMargin : I
				  //   1208: istore_2
				  //   1209: iload #8
				  //   1211: iload #9
				  //   1213: iadd
				  //   1214: istore #8
				  //   1216: iload_2
				  //   1217: iload #5
				  //   1219: iadd
				  //   1220: istore_2
				  //   1221: iload #16
				  //   1223: ifeq -> 1520
				  //   1226: aload_0
				  //   1227: getfield d : Landroid/widget/TextView;
				  //   1230: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   1233: checkcast android/support/v7/widget/Toolbar$b
				  //   1236: astore #17
				  //   1238: iload_2
				  //   1239: aload #17
				  //   1241: getfield topMargin : I
				  //   1244: iadd
				  //   1245: istore #5
				  //   1247: aload_0
				  //   1248: getfield d : Landroid/widget/TextView;
				  //   1251: invokevirtual getMeasuredWidth : ()I
				  //   1254: iload #4
				  //   1256: iadd
				  //   1257: istore_2
				  //   1258: aload_0
				  //   1259: getfield d : Landroid/widget/TextView;
				  //   1262: invokevirtual getMeasuredHeight : ()I
				  //   1265: iload #5
				  //   1267: iadd
				  //   1268: istore #9
				  //   1270: aload_0
				  //   1271: getfield d : Landroid/widget/TextView;
				  //   1274: iload #4
				  //   1276: iload #5
				  //   1278: iload_2
				  //   1279: iload #9
				  //   1281: invokevirtual layout : (IIII)V
				  //   1284: aload_0
				  //   1285: getfield q : I
				  //   1288: istore #5
				  //   1290: aload #17
				  //   1292: getfield bottomMargin : I
				  //   1295: istore #9
				  //   1297: iload #5
				  //   1299: iload_2
				  //   1300: iadd
				  //   1301: istore #9
				  //   1303: iload_3
				  //   1304: istore #5
				  //   1306: iload #4
				  //   1308: istore_2
				  //   1309: iload #7
				  //   1311: ifeq -> 816
				  //   1314: iload #8
				  //   1316: iload #9
				  //   1318: invokestatic max : (II)I
				  //   1321: istore_2
				  //   1322: iload_3
				  //   1323: istore #5
				  //   1325: goto -> 816
				  //   1328: iconst_0
				  //   1329: istore #5
				  //   1331: goto -> 1113
				  //   1334: aload_0
				  //   1335: aload_0
				  //   1336: getfield B : Ljava/util/ArrayList;
				  //   1339: iconst_5
				  //   1340: invokespecial a : (Ljava/util/List;I)V
				  //   1343: aload_0
				  //   1344: getfield B : Ljava/util/ArrayList;
				  //   1347: invokevirtual size : ()I
				  //   1350: istore #4
				  //   1352: iconst_0
				  //   1353: istore_3
				  //   1354: iload_3
				  //   1355: iload #4
				  //   1357: if_icmpge -> 1390
				  //   1360: aload_0
				  //   1361: aload_0
				  //   1362: getfield B : Ljava/util/ArrayList;
				  //   1365: iload_3
				  //   1366: invokevirtual get : (I)Ljava/lang/Object;
				  //   1369: checkcast android/view/View
				  //   1372: iload #5
				  //   1374: aload #19
				  //   1376: iload #10
				  //   1378: invokespecial b : (Landroid/view/View;I[II)I
				  //   1381: istore #5
				  //   1383: iload_3
				  //   1384: iconst_1
				  //   1385: iadd
				  //   1386: istore_3
				  //   1387: goto -> 1354
				  //   1390: aload_0
				  //   1391: aload_0
				  //   1392: getfield B : Ljava/util/ArrayList;
				  //   1395: iconst_1
				  //   1396: invokespecial a : (Ljava/util/List;I)V
				  //   1399: aload_0
				  //   1400: aload_0
				  //   1401: getfield B : Ljava/util/ArrayList;
				  //   1404: aload #19
				  //   1406: invokespecial a : (Ljava/util/List;[I)I
				  //   1409: istore #4
				  //   1411: iload #11
				  //   1413: iload #6
				  //   1415: isub
				  //   1416: iload #12
				  //   1418: isub
				  //   1419: iconst_2
				  //   1420: idiv
				  //   1421: iload #6
				  //   1423: iadd
				  //   1424: iload #4
				  //   1426: iconst_2
				  //   1427: idiv
				  //   1428: isub
				  //   1429: istore_3
				  //   1430: iload #4
				  //   1432: iload_3
				  //   1433: iadd
				  //   1434: istore #4
				  //   1436: iload_3
				  //   1437: iload_2
				  //   1438: if_icmpge -> 1492
				  //   1441: aload_0
				  //   1442: getfield B : Ljava/util/ArrayList;
				  //   1445: invokevirtual size : ()I
				  //   1448: istore #5
				  //   1450: iconst_0
				  //   1451: istore #4
				  //   1453: iload_2
				  //   1454: istore_3
				  //   1455: iload #4
				  //   1457: istore_2
				  //   1458: iload_2
				  //   1459: iload #5
				  //   1461: if_icmpge -> 1512
				  //   1464: aload_0
				  //   1465: aload_0
				  //   1466: getfield B : Ljava/util/ArrayList;
				  //   1469: iload_2
				  //   1470: invokevirtual get : (I)Ljava/lang/Object;
				  //   1473: checkcast android/view/View
				  //   1476: iload_3
				  //   1477: aload #19
				  //   1479: iload #10
				  //   1481: invokespecial a : (Landroid/view/View;I[II)I
				  //   1484: istore_3
				  //   1485: iload_2
				  //   1486: iconst_1
				  //   1487: iadd
				  //   1488: istore_2
				  //   1489: goto -> 1458
				  //   1492: iload_3
				  //   1493: istore_2
				  //   1494: iload #4
				  //   1496: iload #5
				  //   1498: if_icmple -> 1441
				  //   1501: iload_3
				  //   1502: iload #4
				  //   1504: iload #5
				  //   1506: isub
				  //   1507: isub
				  //   1508: istore_2
				  //   1509: goto -> 1441
				  //   1512: aload_0
				  //   1513: getfield B : Ljava/util/ArrayList;
				  //   1516: invokevirtual clear : ()V
				  //   1519: return
				  //   1520: iload #4
				  //   1522: istore #9
				  //   1524: goto -> 1303
				  //   1527: iload #4
				  //   1529: istore #8
				  //   1531: goto -> 1221
				  //   1534: iload_3
				  //   1535: istore_2
				  //   1536: goto -> 810
				  //   1539: iload_3
				  //   1540: istore_2
				  //   1541: goto -> 798
				  //   1544: iload_3
				  //   1545: istore #5
				  //   1547: goto -> 722
				  //   1550: goto -> 599
				  //   1553: iload_2
				  //   1554: istore #9
				  //   1556: goto -> 439
				  //   1559: iload_2
				  //   1560: istore #4
				  //   1562: goto -> 326
				  //   1565: iload #6
				  //   1567: istore_2
				  //   1568: goto -> 111 }

				void onMeasure(int paramInt1, int paramInt2)
				{
				  int i4 = 0;
				  int i3 = 0;
				  std::vector<int> arrayOfInt = this->D;
				  if (android->support.v7.internal_Renamed.widget.r::a(this))
				  {
					i5 = 0;
					i6 = 1;
				  }
				  else
				  {
					i5 = 1;
					i6 = 0;
				  }
				  int i1 = 0;
				  if (android->support.v7.a.a(this->e))
				  {
					android->support.v7.a.a(this->e, paramInt1, 0, paramInt2, 0, this->o);
					i1 = this->e.getMeasuredWidth() + android->support.v4.h.b(this->e);
					i4 = std::max(0, this->e.getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(this->e));
					i3 = android->support.v7.internal_Renamed.widget.r::a(0, android->support.v4.h.l::b(this->e));
				  }
				  int i7 = i1;
				  i1 = i3;
				  int i2 = i4;
				  if (android->support.v7.a.a(this->i))
				  {
					android->support.v7.a.a(this->i, paramInt1, 0, paramInt2, 0, this->o);
					i7 = this->i.getMeasuredWidth() + android->support.v4.h.b(this->i);
					i2 = std::max(i4, this->i.getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(this->i));
					i1 = android->support.v7.internal_Renamed.widget.r::a(i3, android->support.v4.h.l::b(this->i));
				  }
				  i3 = getContentInsetStart();
				  int i8 = 0 + std::max(i3, i7);
				  arrayOfInt[i6] = std::max(0, i3 - i7);
				  int i6 = 0;
				  i3 = i1;
				  i4 = i2;
				  if (android->support.v7.a.a(this->b))
				  {
					android->support.v7.a.a(this->b, paramInt1, i8, paramInt2, 0, this->o);
					i6 = this->b.getMeasuredWidth() + android->support.v4.h.b(this->b);
					i4 = std::max(i2, this->b.getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(this->b));
					i3 = android->support.v7.internal_Renamed.widget.r::a(i1, android->support.v4.h.l::b(this->b));
				  }
				  i1 = getContentInsetEnd();
				  i7 = i8 + std::max(i1, i6);
				  arrayOfInt[i5] = std::max(0, i1 - i6);
				  i6 = i7;
				  i1 = i3;
				  i2 = i4;
				  if (android->support.v7.a.a(this->a))
				  {
					i6 = i7 + android->support.v7.a.a(this->a, paramInt1, i7, paramInt2, 0, arrayOfInt);
					i2 = std::max(i4, this->a.getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(this->a));
					i1 = android->support.v7.internal_Renamed.widget.r::a(i3, android->support.v4.h.l::b(this->a));
				  }
				  i3 = i6;
				  i4 = i1;
				  int i5 = i2;
				  if (android->support.v7.a.a(this->f))
				  {
					i3 = i6 + android->support.v7.a.a(this->f, paramInt1, i6, paramInt2, 0, arrayOfInt);
					i5 = std::max(i2, this->f.getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(this->f));
					i4 = android->support.v7.internal_Renamed.widget.r::a(i1, android->support.v4.h.l::b(this->f));
				  }
				  i7 = getChildCount();
				  i6 = 0;
				  i2 = i5;
				  i1 = i4;
				  i4 = i6;
				  i6 = i3;
				  while (i4 < i7)
				  {
					View *view = getChildAt(i4);
					if ((static_cast<b*>(view->getLayoutParams()))->b_Renamed == 0 && android->support.v7.a.a(view))
					{
					  i6 += android->support.v7.a.a(view, paramInt1, i6, paramInt2, 0, arrayOfInt);
					  i2 = std::max(i2, view->getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(view));
					  i1 = android->support.v7.internal_Renamed.widget.r::a(i1, android->support.v4.h.l::b(view));
					}
					i4++;
				  }
				  i5 = 0;
				  i4 = 0;
				  int i9 = this->r + this->s;
				  int i10 = this->p + this->q;
				  i3 = i1;
				  if (android->support.v7.a.a(this->c))
				  {
					android->support.v7.a.a(this->c, paramInt1, i6 + i10, paramInt2, i9, arrayOfInt);
					i3 = this->c.getMeasuredWidth();
					i5 = android->support.v4.h.b(this->c) + i3;
					i4 = this->c.getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(this->c);
					i3 = android->support.v7.internal_Renamed.widget.r::a(i1, android->support.v4.h.l::b(this->c));
				  }
				  i8 = i4;
				  i7 = i5;
				  i1 = i3;
				  if (android->support.v7.a.a(this->d))
				  {
					i7 = std::max(i5, android->support.v7.a.a(this->d, paramInt1, i6 + i10, paramInt2, i9 + i4, arrayOfInt));
					i8 = i4 + this->d.getMeasuredHeight() + android->support.v7.internal_Renamed.view.c(this->d);
					i1 = android->support.v7.internal_Renamed.widget.r::a(i3, android->support.v4.h.l::b(this->d));
				  }
				  i2 = std::max(i2, i8);
				  i5 = getPaddingLeft();
				  i8 = getPaddingRight();
				  i3 = getPaddingTop();
				  i4 = getPaddingBottom();
				  i5 = android->support.v4.h.l::a(std::max(i7 + i6 + i5 + i8, getSuggestedMinimumWidth()), paramInt1, 0xFF000000 & i1);
				  paramInt1 = android->support.v4.h.l::a(std::max(i2 + i3 + i4, getSuggestedMinimumHeight()), paramInt2, i1 << 16);
				  if (m())
				  {
					paramInt1 = 0;
				  }
				  setMeasuredDimension(i5, paramInt1);
				}

				void onRestoreInstanceState(android->os.Parcelable paramParcelable)
				{
				  d *d1 = static_cast<d*>(paramParcelable);
				  ViewGroup::onRestoreInstanceState(d1->getSuperState());
				  if (this->b != nullptr)
				  {
					e *e1 = this->b.c();
				  }
				  else
				  {
					paramParcelable = nullptr;
				  }
				  if (d1->a_Renamed != 0 && this->H != nullptr && paramParcelable != nullptr)
				  {
					MenuItem *menuItem = paramParcelable::findItem(d1->a_Renamed);
					if (menuItem != nullptr)
					{
					  android->support.v4.h.f::a(menuItem);
					}
				  }
				  if (d1->b_Renamed)
				  {
					android->support.v4.h.l();
				  }
				}

			public:
				void onRtlPropertiesChanged(int paramInt)
				{
				  bool bool_Renamed = true;
				  if (android->os.Build.VERSION.SDK_INT >= 17)
				  {
					ViewGroup::onRtlPropertiesChanged(paramInt);
				  }
				  j *j1 = this->t;
				  if (paramInt != 1)
				  {
					bool_Renamed = false;
				  }
				  j1->a(bool_Renamed);
				}

			protected:
				android->os.Parcelable onSaveInstanceState()
				{
				  d *d1 = new android->support.v4.h.d(ViewGroup::onSaveInstanceState());
				  if (this->H != nullptr && this->H->b != nullptr)
				  {
					d1->a_Renamed = this->H->b.getItemId();
				  }
				  d1->b_Renamed = android->support.v7.a.a();
				  return d1;
				}

			public:
				bool onTouchEvent(android->view.MotionEvent paramMotionEvent)
				{
				  int i1 = android->support.v4.h.i::a(paramMotionEvent);
				  if (i1 == 0)
				  {
					this->z = false;
				  }
				  if (!this->z)
				  {
					bool bool_Renamed = ViewGroup::onTouchEvent(paramMotionEvent);
					if (i1 == 0 && !bool_Renamed)
					{
					  this->z = true;
					}
				  }
				  if (i1 == 1 || i1 == 3)
				  {
					this->z = false;
				  }
				  return true;
				}

				void setCollapsible(bool paramBoolean)
				{
				  this->K = paramBoolean;
				  requestLayout();
				}

				void setLogo(int paramInt)
				{
					setLogo(this->M->a(paramInt));
				}

				void setLogo(android->graphics.drawable.Drawable paramDrawable)
				{
				  if (paramDrawable != nullptr)
				  {
					g();
					if (!android->support.v4.h.d(this->f))
					{
					  android->support.v7.a.a(this->f, true);
					}
				  }
				  else if (this->f != nullptr && android->support.v4.h.d(this->f))
				  {
					removeView(this->f);
//JAVA TO C++ CONVERTER TODO TASK: The Java Collection 'remove(Object)' method is not converted:
					this->C.remove(this->f);
				  }
				  if (this->f != nullptr)
				  {
					this->f.setImageDrawable(paramDrawable);
				  }
				}

				void setLogoDescription(int paramInt)
				{
					setLogoDescription(getContext().getText(paramInt));
				}

				void setLogoDescription(CharSequence paramCharSequence)
				{
				  if (!android->text.TextUtils->isEmpty(paramCharSequence))
				  {
					g();
				  }
				  if (this->f != nullptr)
				  {
					this->f.setContentDescription(paramCharSequence);
				  }
				}

				void setNavigationContentDescription(int paramInt)
				{
				  CharSequence *charSequence;
				  if (paramInt != 0)
				  {
					charSequence = getContext().getText(paramInt);
				  }
				  else
				  {
					charSequence = nullptr;
				  }
				  setNavigationContentDescription(charSequence);
				}

				void setNavigationContentDescription(CharSequence paramCharSequence)
				{
				  if (!android->text.TextUtils->isEmpty(paramCharSequence))
				  {
					android->support.v7.internal_Renamed.view.menu.j();
				  }
				  if (this->e != nullptr)
				  {
					this->e.setContentDescription(paramCharSequence);
				  }
				}

				void setNavigationIcon(int paramInt)
				{
					setNavigationIcon(this->M->a(paramInt));
				}

				void setNavigationIcon(android->graphics.drawable.Drawable paramDrawable)
				{
				  if (paramDrawable != nullptr)
				  {
					android->support.v7.internal_Renamed.view.menu.j();
					if (!android->support.v4.h.d(this->e))
					{
					  android->support.v7.a.a(this->e, true);
					}
				  }
				  else if (this->e != nullptr && android->support.v4.h.d(this->e))
				  {
					removeView(this->e);
//JAVA TO C++ CONVERTER TODO TASK: The Java Collection 'remove(Object)' method is not converted:
					this->C.remove(this->e);
				  }
				  if (this->e != nullptr)
				  {
					this->e.setImageDrawable(paramDrawable);
				  }
				}

				void setNavigationOnClickListener(android->view.View.OnClickListener paramOnClickListener)
				{
				  android->support.v7.internal_Renamed.view.menu.j();
				  this->e.setOnClickListener(paramOnClickListener);
				}

				void setOnMenuItemClickListener(android->support.v7.internal_Renamed.view.c paramc)
				{
					this->E = paramc;
				}

				void setOverflowIcon(android->graphics.drawable.Drawable paramDrawable)
				{
				  h();
				  this->b.setOverflowIcon(paramDrawable);
				}

				void setPopupTheme(int paramInt)
				{
				  if (this->k_Renamed != paramInt)
				  {
					this->k_Renamed = paramInt;
					if (paramInt == 0)
					{
					  this->j = getContext();
					  return;
					}
				  }
				  else
				  {
					return;
				  }
				  this->j = new android->view.ContextThemeWrapper(getContext(), paramInt);
				}

				void setSubtitle(int paramInt)
				{
					setSubtitle(getContext().getText(paramInt));
				}

				void setSubtitle(CharSequence paramCharSequence)
				{
				  if (!android->text.TextUtils->isEmpty(paramCharSequence))
				  {
					if (this->d == nullptr)
					{
					  Context *context = getContext();
					  this->d = new android->widget.TextView(context);
					  this->d.setSingleLine();
					  this->d.setEllipsize(android->text.TextUtils.TruncateAt.END);
					  if (this->m_Renamed != 0)
					  {
						this->d.setTextAppearance(context, this->m_Renamed);
					  }
					  if (this->y != 0)
					  {
						this->d.setTextColor(this->y);
					  }
					}
					if (!android->support.v4.h.d(this->d))
					{
					  android->support.v7.a.a(this->d, true);
					}
				  }
				  else if (this->d != nullptr && android->support.v4.h.d(this->d))
				  {
					removeView(this->d);
//JAVA TO C++ CONVERTER TODO TASK: The Java Collection 'remove(Object)' method is not converted:
					this->C.remove(this->d);
				  }
				  if (this->d != nullptr)
				  {
					this->d.setText(paramCharSequence);
				  }
				  this->w = paramCharSequence;
				}

				void setSubtitleTextColor(int paramInt)
				{
				  this->y = paramInt;
				  if (this->d != nullptr)
				  {
					this->d.setTextColor(paramInt);
				  }
				}

				void setTitle(int paramInt)
				{
					setTitle(getContext().getText(paramInt));
				}

				void setTitle(CharSequence paramCharSequence)
				{
				  if (!android->text.TextUtils->isEmpty(paramCharSequence))
				  {
					if (this->c == nullptr)
					{
					  Context *context = getContext();
					  this->c = new android->widget.TextView(context);
					  this->c.setSingleLine();
					  this->c.setEllipsize(android->text.TextUtils.TruncateAt.END);
					  if (this->l != 0)
					  {
						this->c.setTextAppearance(context, this->l);
					  }
					  if (this->x != 0)
					  {
						this->c.setTextColor(this->x);
					  }
					}
					if (!android->support.v4.h.d(this->c))
					{
					  android->support.v7.a.a(this->c, true);
					}
				  }
				  else if (this->c != nullptr && android->support.v4.h.d(this->c))
				  {
					removeView(this->c);
//JAVA TO C++ CONVERTER TODO TASK: The Java Collection 'remove(Object)' method is not converted:
					this->C.remove(this->c);
				  }
				  if (this->c != nullptr)
				  {
					this->c.setText(paramCharSequence);
				  }
				  this->v = paramCharSequence;
				}

				void setTitleTextColor(int paramInt)
				{
				  this->x = paramInt;
				  if (this->c != nullptr)
				  {
					this->c.setTextColor(paramInt);
				  }
				}

			private:
				class a implements android->support.v7.internal_Renamed.view.menu.j
				{
				  android->support.v7.internal_Renamed.view.menu.e android->support.v7.a.a;

				  android->support.v4.h.f android->support.v4.h.b;

				  android->support.v7.a.a(Toolbar this$0)
				  {
				  }

			  public:
				  void android->support.v7.a.a(android->content.Context param1Context, android->support.v7.internal_Renamed.view.menu.e param1e)
				  {
					if (this->a != nullptr && this->b != nullptr)
					{
					  this->a.d(this->b);
					}
					this->a = param1e;
				  }

				  void android->support.v7.a.a(android->support.v7.internal_Renamed.view.menu.e param1e, bool param1Boolean)
				  {
				  }

				  bool android->support.v7.a.a(android->support.v7.internal_Renamed.view.menu.e param1e, android->support.v4.h.f param1f)
				  {
					Toolbar::b(this->c);
					if (Toolbar::c(this->c).getParent() != this->c)
					{
					  this->c.addView(Toolbar::c(this->c));
					}
					this->c->a = param1f::getActionView();
					this->b = param1f;
					if (this->c.a.getParent() != this->c)
					{
					  Toolbar::b *b1 = this->c.d();
					  b1->a = 0x800003 | Toolbar::d(this->c) & 0x70;
					  b1->b = 2;
					  this->c.a.setLayoutParams(b1);
					  this->c.addView(this->c.a);
					}
					this->c.e();
					this->c.requestLayout();
					param1f::e(true);
					if (dynamic_cast<a*>(this->c.a) != nullptr)
					{
					  (static_cast<a*>(this->c.a))->a();
					}
					return true;
				  }

				  bool android->support.v7.a.a(android->support.v7.internal_Renamed.view.menu.n param1n)
				  {
					  return false;
				  }

				  void android->support.v4.h.b(bool param1Boolean)
				  {
					char b1;
					char b2 = 0;
					if (this->b != nullptr)
					{
					  b1 = b2;
					  if (this->a != nullptr)
					  {
						int android->support.v4.h->i = this->a->size();
						char b3 = 0;
						while (true)
						{
						  b1 = b2;
						  if (b3 < android->support.v4.h.i)
						  {
							if (this->a.getItem(b3) == this->b)
							{
							  b1 = 1;
							}
							else
							{
							  b3++;
							  continue;
							}
						  }
						  if (b1 == 0)
						  {
							android->support.v4.h.b(this->a, this->b);
						  }
						  return;
						}
					  }
					}
					else
					{
					  return;
					}
					if (b1 == 0)
					{
					  android->support.v4.h.b(this->a, this->b);
					}
				  }

				  bool android->support.v4.h.b()
				  {
					  return false;
				  }

				  bool android->support.v4.h.b(android->support.v7.internal_Renamed.view.menu.e param1e, android->support.v4.h.f param1f)
				  {
					if (dynamic_cast<a*>(this->c.a) != nullptr)
					{
					  (static_cast<a*>(this->c.a))->b();
					}
					this->c.removeView(this->c.a);
					this->c.removeView(Toolbar::c(this->c));
					this->c->a = nullptr;
					this->c.f();
					this->b = nullptr;
					this->c.requestLayout();
					param1f::e(false);
					return true;
				  }
				}

				static class b extends android->support.v7.a.a::a
				{
				  int android->support.v4.h->b = 0;

				  android->support.v4.h.b(int param1Int1, int param1Int2)
				  {
					ViewGroup(param1Int1, param1Int2);
					this->a = 8388627;
				  }

				  android->support.v4.h.b(android->content.Context param1Context, android->util.AttributeSet param1AttributeSet)
				  {
					  ViewGroup(param1Context, param1AttributeSet);
				  }

				  android->support.v4.h.b(android->support.v7.a.a::a param1a)
				  {
					  ViewGroup(param1a);
				  }

				  android->support.v4.h.b(android->support.v4.h.b param1b)
				  {
					ViewGroup(param1b);
					this->b = param1b::b;
				  }

				  android->support.v4.h.b(android->view.ViewGroup.LayoutParams param1LayoutParams)
				  {
					  ViewGroup(param1LayoutParams);
				  }

				  android->support.v4.h.b(android->view.ViewGroup.MarginLayoutParams param1MarginLayoutParams)
				  {
					ViewGroup(param1MarginLayoutParams);
					android->support.v7.a.a(param1MarginLayoutParams);
				  }

				  void android->support.v7.a.a(android->view.ViewGroup.MarginLayoutParams param1MarginLayoutParams)
				  {
					this->leftMargin = param1MarginLayoutParams::leftMargin;
					this->topMargin = param1MarginLayoutParams::topMargin;
					this->rightMargin = param1MarginLayoutParams::rightMargin;
					this->bottomMargin = param1MarginLayoutParams::bottomMargin;
				  }
				}

				static interface c
				{
				  bool android->support.v7.a.a(android->view.MenuItem param1MenuItem);
				}

				static class d extends android->view.View.BaseSavedState
				{
				  static final android->os.Parcelable.Creator<d*> CREATOR = new CreatorAnonymousInnerClass(this);

				  int android->support.v7.a.a;

				  bool android->support.v4.h.b;

				  android->support.v4.h.d(android->os.Parcel param1Parcel)
				  {
					ViewGroup(param1Parcel);
					this->a = param1Parcel::readInt();
					if (param1Parcel::readInt() != 0)
					{
					  bool_Renamed = true;
					}
					else
					{
					  bool_Renamed = false;
					}
					this->b = bool_Renamed;
				  }

				  android->support.v4.h.d(android->os.Parcelable param1Parcelable)
				  {
					  ViewGroup(param1Parcelable);
				  }

				  void writeToParcel(android->os.Parcel param1Parcel, int param1Int)
				  {
					ViewGroup::writeToParcel(param1Parcel, param1Int);
					param1Parcel::writeInt(this->a);
					if (this->b)
					{
					  param1Int = 1;
					}
					else
					{
					  param1Int = 0;
					}
					param1Parcel::writeInt(param1Int);
				  }
				}

				static final class nullptr extends Object implements android->os.Parcelable.Creator<d*>
				{
				  Toolbar::d android->support.v7.a.a(android->os.Parcel param1Parcel)
				  {
					  return new Toolbar::d(param1Parcel);
				  }

				  Toolbar::d[] android->support.v7.a.a(int param1Int)
				  {
					  return std::vector<Toolbar::d*>(param1Int);
				  }
				}
				}

				Toolbar::CreatorAnonymousInnerClass::CreatorAnonymousInnerClass(Toolbar *outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				Toolbar::d *Toolbar::CreatorAnonymousInnerClass::android->support.v7.a.a(Parcel *param2Parcel)
				{
					return new Toolbar::d(param2Parcel);
				}

				std::vector<Toolbar::d*> Toolbar::CreatorAnonymousInnerClass::android->support.v7.a.a(int param2Int)
				{
					return std::vector<Toolbar::d*>(param2Int);
				}
			}
		}
	}
}

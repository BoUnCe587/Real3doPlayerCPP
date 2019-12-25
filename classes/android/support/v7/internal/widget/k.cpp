//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "k.h"
#include "p.h"
#include "../../widget/d.h"
#include "m.h"
#include "n.h"
#include "../../widget/f.h"

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
					using android::graphics::drawable::Drawable;
					using android::os::Build;
					using a = android::support::v7::a::a;
					using a = android::support::v7::b::a;
					using a = android::support::v7::internal_Renamed::view::a;
					using d = android::support::v7::widget::d;
					using f = android::support::v7::widget::f;
					using g = android::support::v7::widget::g;
					using android::text::TextUtils;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::ViewParent;
					using android::view::accessibility::AccessibilityEvent;
					using android::view::accessibility::AccessibilityNodeInfo;
					using android::view::animation::DecelerateInterpolator;
					using android::view::animation::Interpolator;
					using android::widget::AbsListView;
					using android::widget::AdapterView;
					using android::widget::BaseAdapter;
					using android::widget::HorizontalScrollView;
					using android::widget::ImageView;
					using android::widget::Spinner;
					using android::widget::TextView;
					using android::widget::Toast;
android::view::animation::Interpolator *const k::j = new android->view.animation.DecelerateInterpolator();

					android::support::v7::internal_Renamed::widget::c *k::android->support.v7.a.a(a::b *paramb, bool paramBoolean)
					{
					  android::support::v7::internal_Renamed::widget::c *c1 = new c(this, this, getContext(), paramb, paramBoolean);
					  if (paramBoolean)
					  {
						c1->setBackgroundDrawable(nullptr);
						android->widget::AbsListView::LayoutParams tempVar(-1, this->h);
						c1->setLayoutParams(&tempVar);
						return c1;
					  }
					  c1->setFocusable(true);
					  if (this->d == nullptr)
					  {
						this->d = new b(this, this, nullptr);
					  }
					  c1->setOnClickListener(this->d);
					  return c1;
					}

					bool k::android->support.v7.a.a()
					{
						return (this->f != nullptr && this->f.getParent() == this);
					}

					void k::b()
					{
					  if (android->support.v7.a.a())
					  {
						return;
					  }
					  if (this->f == nullptr)
					  {
						this->f = android->support.v7.widget.d();
					  }
					  removeView(this->e);
					  android->view::ViewGroup::LayoutParams tempVar(-2, -1);
					  addView(this->f, &tempVar);
					  if (this->f.getAdapter() == nullptr)
					  {
						android->support::v7::a::a tempVar2(this, nullptr);
						this->f.setAdapter(&tempVar2);
					  }
					  if (this->a != nullptr)
					  {
						removeCallbacks(this->a);
						this->a = nullptr;
					  }
					  this->f.setSelection(this->i);
					}

					bool k::c()
					{
					  if (!android->support.v7.a.a())
					  {
						return false;
					  }
					  removeView(this->f);
					  android->view::ViewGroup::LayoutParams tempVar(-2, -1);
					  addView(this->e, &tempVar);
					  setTabSelected(this->f.getSelectedItemPosition());
					  return false;
					}

					Spinner *k::android->support.v7.widget.d()
					{
					  d *d1 = new android->support.v7.widget.d(getContext(), nullptr, android->support.v7.a.a::a.actionDropDownStyle);
					  android->support::v7::widget::g::a tempVar(-2, -1);
					  d1->setLayoutParams(&tempVar);
					  d1->setOnItemSelectedListener(this);
					  return d1;
					}

					void k::android->support.v7.a.a(int paramInt)
					{
					  View *view = this->e->getChildAt(paramInt);
					  if (this->a != nullptr)
					  {
						removeCallbacks(this->a);
					  }
					  this->a = [&] ()
					  {
						int i = this->a.getLeft();
						int j = (this->b_Renamed.getWidth() - this->a.getWidth()) / 2;
						this->b_Renamed.smoothScrollTo(i - j, 0);
						this->b_Renamed.a = nullptr;
					  };
					  post(this->a);
					}

					void k::onAttachedToWindow()
					{
					  HorizontalScrollView::onAttachedToWindow();
					  if (this->a != nullptr)
					  {
						post(this->a);
					  }
					}

					void k::onConfigurationChanged(Configuration *paramConfiguration)
					{
					  if (android->os.Build.VERSION.SDK_INT >= 8)
					  {
						HorizontalScrollView::onConfigurationChanged(paramConfiguration);
					  }
					  a *a1 = android->support.v7.a.a::a(getContext());
					  setContentHeight(a1->e());
					  this->c_Renamed = a1.0f();
					}

					void k::onDetachedFromWindow()
					{
					  HorizontalScrollView::onDetachedFromWindow();
					  if (this->a != nullptr)
					  {
						removeCallbacks(this->a);
					  }
					}

template<typename T1>
					void k::onItemSelected(AdapterView<T1> *paramAdapterView, View *paramView, int paramInt, long long paramLong)
					{
						(static_cast<android::support::v7::internal_Renamed::widget::c*>(paramView))->b().d();
					}

					void k::onMeasure(int paramInt1, int paramInt2)
					{
					  bool bool_Renamed;
					  paramInt2 = 1;
					  int m = android->view.View.MeasureSpec.getMode(paramInt1);
					  if (m == 1073741824)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  setFillViewport(bool_Renamed);
					  int n = this->e->getChildCount();
					  if (n > 1 && (m == 1073741824 || m == std::numeric_limits<int>::min()))
					  {
						if (n > 2)
						{
						  this->b_Renamed = static_cast<int>(android->view.View.MeasureSpec.getSize(paramInt1) * 0.4F);
						}
						else
						{
						  this->b_Renamed = android->view.View.MeasureSpec.getSize(paramInt1) / 2;
						}
						this->b_Renamed = std::min(this->b_Renamed, this->c_Renamed);
					  }
					  else
					  {
						this->b_Renamed = -1;
					  }
					  m = android->view.View.MeasureSpec.makeMeasureSpec(this->h, 1073741824);
					  if (bool_Renamed || !this->g)
					  {
						paramInt2 = 0;
					  }
					  if (paramInt2 != 0)
					  {
						this->e->measure(0, m);
						if (this->e->getMeasuredWidth() > android->view.View.MeasureSpec.getSize(paramInt1))
						{
						  b();
						}
						else
						{
						  c();
						}
					  }
					  else
					  {
						c();
					  }
					  paramInt2 = getMeasuredWidth();
					  HorizontalScrollView::onMeasure(paramInt1, m);
					  paramInt1 = getMeasuredWidth();
					  if (bool_Renamed && paramInt2 != paramInt1)
					  {
						setTabSelected(this->i);
					  }
					}

template<typename T1>
					void k::onNothingSelected(AdapterView<T1> *paramAdapterView)
					{
					}

					void k::setAllowCollapse(bool paramBoolean)
					{
						this->g = paramBoolean;
					}

					void k::setContentHeight(int paramInt)
					{
					  this->h = paramInt;
					  requestLayout();
					}

					void k::setTabSelected(int paramInt)
					{
					  this->i = paramInt;
					  int m = this->e->getChildCount();
					  for (char b1 = 0; b1 < m; b1++)
					  {
						bool bool_Renamed;
						View *view = this->e->getChildAt(b1);
						if (b1 == paramInt)
						{
						  bool_Renamed = true;
						}
						else
						{
						  bool_Renamed = false;
						}
						view->setSelected(bool_Renamed);
						if (bool_Renamed)
						{
						  android->support.v7.a.a(paramInt);
						}
					  }
					  if (this->f != nullptr && paramInt >= 0)
					  {
						this->f.setSelection(paramInt);
					  }
					}

					internal *k::a::android->support.v7.a.a(k *this$0)
					{
					}

					int k::a::getCount()
					{
						return k::a(this->a).getChildCount();
					}

					void *k::a::getItem(int param1Int)
					{
						return (static_cast<k::c*>(k::a(this->a).getChildAt(param1Int)))->b();
					}

					long long k::a::getItemId(int param1Int)
					{
						return param1Int;
					}

					View *k::a::getView(int param1Int, View *param1View, ViewGroup *param1ViewGroup)
					{
					  if (param1View == nullptr)
					  {
						return k::a(this->a, static_cast<a::b*>(getItem(param1Int)), true);
					  }
					  (static_cast<k::c*>(param1View))->a(static_cast<a::b*>(getItem(param1Int)));
					  return param1View;
					}

					k::b::b(k *outerInstance, k *this$0) : outerInstance(outerInstance)
					{
					}

					void k::b::onClick(View *param1View)
					{
					  (static_cast<k::c*>(param1View))->b()->d();
					  int i = k::a(this->a).getChildCount();
					  for (char b1 = 0; b1 < i; b1++)
					  {
						bool bool_Renamed;
						View *view = k::a(this->a).getChildAt(b1);
						if (view == param1View)
						{
						  bool_Renamed = true;
						}
						else
						{
						  bool_Renamed = false;
						}
						view->setSelected(bool_Renamed);
					  }
					}

					k::c::c(k *outerInstance, k *this$0, Context *param1Context, a::b *param1b, bool param1Boolean) : android->support.v7.widget.g(param1Context, nullptr, a::a::actionBarTabStyle), outerInstance(outerInstance)
					{
					  this->c_Renamed = param1b;
					  p *p = p::a(param1Context, nullptr, this->b_Renamed, android->support.v7.a.a::a.actionBarTabStyle, 0);
					  if (p->d(0))
					  {
						setBackgroundDrawable(p->a(0));
					  }
					  p->b();
					  if (param1Boolean)
					  {
						setGravity(8388627);
					  }
					  android->support.v7.a.a();
					}

					void k::c::android->support.v7.a.a()
					{
					  bool bool_Renamed;
					  ViewParent *viewParent = this->c_Renamed;
					  View *view = viewParent->c();
					  if (view != nullptr)
					  {
						viewParent = view->getParent();
						if (viewParent != this)
						{
						  if (viewParent != nullptr)
						  {
							(static_cast<ViewGroup*>(viewParent))->removeView(view);
						  }
						  addView(view);
						}
						this->f = view;
						if (this->d != nullptr)
						{
						  this->d.setVisibility(8);
						}
						if (this->e != nullptr)
						{
						  this->e->setVisibility(8);
						  this->e->setImageDrawable(nullptr);
						}
						return;
					  }
					  if (this->f != nullptr)
					  {
						removeView(this->f);
						this->f = nullptr;
					  }
					  Drawable *drawable = viewParent->a();
					  CharSequence *charSequence = viewParent->b();
					  if (drawable != nullptr)
					  {
						if (this->e == nullptr)
						{
						  ImageView *imageView = new android->widget.ImageView(getContext());
						  g::a *a1 = new android->support.v7.widget.g::a(-2, -2);
						  a1->h = 16;
						  imageView->setLayoutParams(a1);
						  addView(imageView, 0);
						  this->e = imageView;
						}
						this->e->setImageDrawable(drawable);
						this->e->setVisibility(0);
					  }
					  else if (this->e != nullptr)
					  {
						this->e->setVisibility(8);
						this->e->setImageDrawable(nullptr);
					  }
					  if (!android->text.TextUtils->isEmpty(charSequence))
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  if (bool_Renamed)
					  {
						if (this->d == nullptr)
						{
						  f *f1 = new android->support.v7.widget.f(getContext(), nullptr, android->support.v7.a.a::a.actionBarTabTextStyle);
						  f1->setEllipsize(android->text.TextUtils.TruncateAt.END);
						  g::a *a1 = new android->support.v7.widget.g::a(-2, -2);
						  a1->h = 16;
						  f1->setLayoutParams(a1);
						  addView(f1);
						  this->d = f1;
						}
						this->d.setText(charSequence);
						this->d.setVisibility(0);
					  }
					  else if (this->d != nullptr)
					  {
						this->d.setVisibility(8);
						this->d.setText(nullptr);
					  }
					  if (this->e != nullptr)
					  {
						this->e->setContentDescription(viewParent->e());
					  }
					  if (!bool_Renamed && !android->text.TextUtils->isEmpty(viewParent->e()))
					  {
						setOnLongClickListener(this);
						return;
					  }
					  setOnLongClickListener(nullptr);
					  setLongClickable(false);
					}

					void k::c::android->support.v7.a.a(a::b *param1b)
					{
					  this->c_Renamed = param1b;
					  android->support.v7.a.a();
					}

					a::b *k::c::b()
					{
						return this->c_Renamed;
					}

					void k::c::onInitializeAccessibilityEvent(AccessibilityEvent *param1AccessibilityEvent)
					{
					  g::onInitializeAccessibilityEvent(param1AccessibilityEvent);
					  param1AccessibilityEvent->setClassName(a::b::typeid->getName());
					}

					void k::c::onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo *param1AccessibilityNodeInfo)
					{
					  g::onInitializeAccessibilityNodeInfo(param1AccessibilityNodeInfo);
					  if (android->os.Build.VERSION.SDK_INT >= 14)
					  {
						param1AccessibilityNodeInfo->setClassName(a::b::typeid->getName());
					  }
					}

					bool k::c::onLongClick(View *param1View)
					{
					  std::vector<int> arrayOfInt(2);
					  getLocationOnScreen(arrayOfInt);
					  Context *context = getContext();
					  int i = getWidth();
					  int j = getHeight();
					  int m = (context->getResources().getDisplayMetrics()).widthPixels;
					  Toast *toast = android->widget.Toast.makeText(context, this->c_Renamed->e(), 0);
					  toast->setGravity(49, arrayOfInt[0] + i / 2 - m / 2, j);
					  toast->show();
					  return true;
					}

					void k::c::onMeasure(int param1Int1, int param1Int2)
					{
					  g::onMeasure(param1Int1, param1Int2);
					  if (this->a.b > 0 && getMeasuredWidth() > this->a.b)
					  {
						g::onMeasure(android->view.View.MeasureSpec.makeMeasureSpec(this->a.b, 1073741824), param1Int2);
					  }
					}

					void k::c::setSelected(bool param1Boolean)
					{
					  bool bool_Renamed;
					  if (isSelected() != param1Boolean)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  g::setSelected(param1Boolean);
					  if (bool_Renamed && param1Boolean)
					  {
						sendAccessibilityEvent(4);
					  }
					}
				}
			}
		}
	}
}

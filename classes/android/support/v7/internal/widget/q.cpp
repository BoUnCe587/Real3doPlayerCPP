//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "q.h"
#include "../../widget/Toolbar.h"
#include "../../b/a.h"

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
					using android::graphics::drawable::Drawable;
					using a = android::support::v7::b::a;
					using a = android::support::v7::internal_Renamed::view::menu::a;
					using Toolbar = android::support::v7::widget::Toolbar;
					using android::text::TextUtils;
					using android::view::LayoutInflater;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::Window;

					q::q(Toolbar *paramToolbar, bool paramBoolean) : q(paramToolbar, paramBoolean, a::h::abc_action_bar_up_description, a::d::abc_ic_ab_back_mtrl_am_alpha)
					{
					}

					q::q(Toolbar *paramToolbar, bool paramBoolean, int paramInt1, int paramInt2) : n(p1::c())
					{
					  this->a = paramToolbar;
					  this->h = paramToolbar->getTitle();
					  this->i = paramToolbar->getSubtitle();
					  if (this->h != nullptr)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  this->g = bool_Renamed;
					  this->f_Renamed = paramToolbar->getNavigationIcon();
					  if (paramBoolean)
					  {
						p1 = p::a(paramToolbar->getContext(), nullptr, android->support.v7.b.a::j.ActionBar, android->support.v7.b.a::a.actionBarStyle, 0);
						CharSequence *charSequence = p1::b(android->support.v7.b.a::j.ActionBar_title);
						if (!android->text.TextUtils->isEmpty(charSequence))
						{
						  b(charSequence);
						}
						charSequence = p1::b(android->support.v7.b.a::j.ActionBar_subtitle);
						if (!android->text.TextUtils->isEmpty(charSequence))
						{
						  c(charSequence);
						}
						Drawable *drawable = p1::a(android->support.v7.b.a::j.ActionBar_logo);
						if (drawable != nullptr)
						{
						  c(drawable);
						}
						drawable = p1::a(android->support.v7.b.a::j.ActionBar_icon);
						if (this->f_Renamed == nullptr && drawable != nullptr)
						{
						  android->support.v7.b.a(drawable);
						}
						drawable = p1::a(android->support.v7.b.a::j.ActionBar_homeAsUpIndicator);
						if (drawable != nullptr)
						{
						  d(drawable);
						}
						d(p1::a(android->support.v7.b.a::j.ActionBar_displayOptions, 0));
						int i1 = p1::g(android->support.v7.b.a::j.ActionBar_customNavigationLayout, 0);
						if (i1 != 0)
						{
						  android->support.v7.b.a(android->view.LayoutInflater.from(this->a.getContext()).inflate(i1, this->a, false));
						  d(this->b_Renamed | 0x10);
						}
						i1 = p1.0f(android->support.v7.b.a::j.ActionBar_height, 0);
						if (i1 > 0)
						{
						  ViewGroup::LayoutParams *layoutParams = this->a.getLayoutParams();
						  layoutParams->height = i1;
						  this->a.setLayoutParams(layoutParams);
						}
						i1 = p1::d(android->support.v7.b.a::j.ActionBar_contentInsetStart, -1);
						int i2 = p1::d(android->support.v7.b.a::j.ActionBar_contentInsetEnd, -1);
						if (i1 >= 0 || i2 >= 0)
						{
						  this->a.a(std::max(i1, 0), std::max(i2, 0));
						}
						i1 = p1::g(android->support.v7.b.a::j.ActionBar_titleTextStyle, 0);
						if (i1 != 0)
						{
						  this->a.a(this->a.getContext(), i1);
						}
						i1 = p1::g(android->support.v7.b.a::j.ActionBar_subtitleTextStyle, 0);
						if (i1 != 0)
						{
						  this->a.b(this->a.getContext(), i1);
						}
						i1 = p1::g(android->support.v7.b.a::j.ActionBar_popupTheme, 0);
						if (i1 != 0)
						{
						  this->a.setPopupTheme(i1);
						}
						p1::b();
					  }
					  else
					  {
						this->b_Renamed = c();
						this->n = o::a(p1::getContext());
					  }
					  c(paramInt1);
					  this->j = this->a.getNavigationContentDescription();
					  b(this->n->a(paramInt2));
					  OnClickListenerAnonymousInnerClass tempVar(this);
					  this->a.setNavigationOnClickListener(&tempVar);
					}

					q::OnClickListenerAnonymousInnerClass::OnClickListenerAnonymousInnerClass(q *outerInstance) : android->view.View.OnClickListener(outerInstance)
					{
						this->outerInstance = outerInstance;
						outerInstance->android->support.v7.b->a = new android->support.v7.b.a(q::a(this->b_Renamed).getContext(), 0, 16908332, 0, 0, q::b(this->b_Renamed));
					}

					void q::OnClickListenerAnonymousInnerClass::onClick(View *param1View)
					{
					  if (q::c(this->b_Renamed) != nullptr && q::d(this->b_Renamed))
					  {
						q::c(this->b_Renamed).onMenuItemSelected(0, this->a);
					  }
					}

					int q::c()
					{
					  char b1 = 11;
					  if (this->a.getNavigationIcon() != nullptr)
					  {
						b1 = 15;
					  }
					  return b1;
					}

					void q::d()
					{
					  Drawable *drawable = nullptr;
					  if ((this->b_Renamed & 0x2) != 0)
					  {
						if ((this->b_Renamed & true) != 0)
						{
						  if (this->e_Renamed != nullptr)
						  {
							drawable = this->e_Renamed;
						  }
						  else
						  {
							drawable = this->d_Renamed;
						  }
						}
						else
						{
						  drawable = this->d_Renamed;
						}
					  }
					  this->a.setLogo(drawable);
					}

					void q::e()
					{
					  if ((this->b_Renamed & 0x4) != 0)
					  {
						if (android->text.TextUtils->isEmpty(this->j))
						{
						  this->a.setNavigationContentDescription(this->o);
						  return;
						}
					  }
					  else
					  {
						return;
					  }
					  this->a.setNavigationContentDescription(this->j);
					}

					void q::e(CharSequence *paramCharSequence)
					{
					  this->h = paramCharSequence;
					  if ((this->b_Renamed & 0x8) != 0)
					  {
						this->a.setTitle(paramCharSequence);
					  }
					}

					void q::f()
					{
					  if ((this->b_Renamed & 0x4) != 0)
					  {
						Drawable *drawable;
						Toolbar *toolbar = this->a;
						if (this->f_Renamed != nullptr)
						{
						  drawable = this->f_Renamed;
						}
						else
						{
						  drawable = this->p;
						}
						toolbar->setNavigationIcon(drawable);
					  }
					}

					CharSequence *q::android->support.v7.b.a()
					{
						return this->a.getTitle();
					}

					void q::android->support.v7.b.a(int paramInt)
					{
					  Drawable *drawable;
					  if (paramInt != 0)
					  {
						drawable = this->n->a(paramInt);
					  }
					  else
					  {
						drawable = nullptr;
					  }
					  android->support.v7.b.a(drawable);
					}

					void q::android->support.v7.b.a(Drawable *paramDrawable)
					{
					  this->d_Renamed = paramDrawable;
					  d();
					}

					void q::android->support.v7.b.a(View *paramView)
					{
					  if (this->c_Renamed != nullptr && (this->b_Renamed & 0x10) != 0)
					  {
						this->a.removeView(this->c_Renamed);
					  }
					  this->c_Renamed = paramView;
					  if (paramView != nullptr && (this->b_Renamed & 0x10) != 0)
					  {
						this->a.addView(this->c_Renamed);
					  }
					}

					void q::android->support.v7.b.a(Window::Callback *paramCallback)
					{
						this->k = paramCallback;
					}

					void q::android->support.v7.b.a(CharSequence *paramCharSequence)
					{
					  if (!this->g)
					  {
						e(paramCharSequence);
					  }
					}

					Context *q::b()
					{
						return this->a.getContext();
					}

					void q::b(int paramInt)
					{
					  Drawable *drawable;
					  if (paramInt != 0)
					  {
						drawable = this->n->a(paramInt);
					  }
					  else
					  {
						drawable = nullptr;
					  }
					  c(drawable);
					}

					void q::b(Drawable *paramDrawable)
					{
					  if (this->p != paramDrawable)
					  {
						this->p = paramDrawable;
						f();
					  }
					}

					void q::b(CharSequence *paramCharSequence)
					{
					  this->g = true;
					  e(paramCharSequence);
					}

					void q::c(int paramInt)
					{
					  if (paramInt != this->o)
					  {
						this->o = paramInt;
						if (android->text.TextUtils->isEmpty(this->a.getNavigationContentDescription()))
						{
						  e(this->o);
						  return;
						}
					  }
					}

					void q::c(Drawable *paramDrawable)
					{
					  this->e_Renamed = paramDrawable;
					  d();
					}

					void q::c(CharSequence *paramCharSequence)
					{
					  this->i = paramCharSequence;
					  if ((this->b_Renamed & 0x8) != 0)
					  {
						this->a.setSubtitle(paramCharSequence);
					  }
					}

					void q::d(int paramInt)
					{
					  int i1 = this->b_Renamed ^ paramInt;
					  this->b_Renamed = paramInt;
					  if (i1 != 0)
					  {
						if ((i1 & 0x4) != 0)
						{
						  if ((paramInt & 0x4) != 0)
						  {
							f();
							e();
						  }
						  else
						  {
							this->a.setNavigationIcon(nullptr);
						  }
						}
						if ((i1 & 0x3) != 0)
						{
						  d();
						}
						if ((i1 & 0x8) != 0)
						{
						  if ((paramInt & 0x8) != 0)
						  {
							this->a.setTitle(this->h);
							this->a.setSubtitle(this->i);
						  }
						  else
						  {
							this->a.setTitle(nullptr);
							this->a.setSubtitle(nullptr);
						  }
						}
						if ((i1 & 0x10) != 0 && this->c_Renamed != nullptr)
						{
						  if ((paramInt & 0x10) != 0)
						  {
							this->a.addView(this->c_Renamed);
							return;
						  }
						}
						else
						{
						  return;
						}
					  }
					  else
					  {
						return;
					  }
					  this->a.removeView(this->c_Renamed);
					}

					void q::d(Drawable *paramDrawable)
					{
					  this->f_Renamed = paramDrawable;
					  f();
					}

					void q::d(CharSequence *paramCharSequence)
					{
					  this->j = paramCharSequence;
					  e();
					}

					void q::e(int paramInt)
					{
					  std::wstring str;
					  if (paramInt == 0)
					  {
						str = L"";
					  }
					  else
					  {
						str = b()->getString(paramInt);
					  }
					  d(str);
					}
				}
			}
		}
	}
}

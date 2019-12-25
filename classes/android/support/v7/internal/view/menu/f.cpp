//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"
#include "../../../../v4/h/a.h"
#include "../../widget/o.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{
					namespace menu
					{
						using android::content::ActivityNotFoundException;
						using android::content::Context;
						using android::content::Intent;
						using android::graphics::drawable::Drawable;
						using android::os::Build;
						using b = android::support::v4::d::a::b;
						using a = android::support::v4::h::a;
						using f = android::support::v4::h::f;
						using o = android::support::v7::internal_Renamed::widget::o;
						using android::util::Log;
						using android::view::ActionProvider;
						using android::view::ContextMenu;
						using android::view::LayoutInflater;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;
						using android::view::ViewDebug::CapturedViewProperty;
						using android::widget::LinearLayout;
std::wstring f::w;
std::wstring f::x;
std::wstring f::y;
std::wstring f::z;

						internal *f::android.support::v4::h::f(android::support::v7::internal_Renamed::view::menu::e *parame, int paramInt1, int paramInt2, int paramInt3, int paramInt4, CharSequence *paramCharSequence, int paramInt5)
						{
						  this->l_Renamed = parame;
						  this->a = paramInt2;
						  this->b = paramInt1;
						  this->c_Renamed = paramInt3;
						  this->d_Renamed = paramInt4;
						  this->e_Renamed = paramCharSequence;
						  this->q = paramInt5;
						}

						b *f::android.support::v4::h::a(int paramInt)
						{
						  Context *context = this->l_Renamed->d();
						  LinearLayout tempVar(context);
						  android.support::v4::h::a(android.view::LayoutInflater::from(context).inflate(paramInt, &tempVar, false));
						  return this;
						}

						b *f::android.support::v4::h::a(a *parama)
						{
						  if (this->s != nullptr)
						  {
							this->s->f();
						  }
						  this->r = nullptr;
						  this->s = parama;
						  this->l_Renamed->b(true);
						  if (this->s != nullptr)
						  {
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
							this.s.a(new android.support.v4.h.a.b(this)
							{
								  void android.support::v4::h::a(bool param1Boolean)
								  {
									  android.support::v4::h::f::a(this->a).a(this->a);
								  }
							}
						  }
							   );
						  return this;
						}

						b *f::android.support::v4::h::a(f::e *parame)
						{
						  this->t = parame;
						  return this;
						}

						b *f::android.support::v4::h::a(View *paramView)
						{
						  this->r = paramView;
						  this->s = nullptr;
						  if (paramView != nullptr && paramView->getId() == -1 && this->a > 0)
						  {
							paramView->setId(this->a);
						  }
						  this->l_Renamed->b(this);
						  return this;
						}

						a *f::android.support::v4::h::a()
						{
							return this->s;
						}

						CharSequence *f::android.support::v4::h::a(k::a *parama)
						{
							return (parama != nullptr && parama->a()) ? getTitleCondensed() : getTitle();
						}

						void f::android.support::v4::h::a(android::support::v7::internal_Renamed::view::menu::n *paramn)
						{
						  this->m_Renamed = paramn;
						  paramn->setHeaderTitle(getTitle());
						}

						void f::android.support::v4::h::a(ContextMenu::ContextMenuInfo *paramContextMenuInfo)
						{
							this->v = paramContextMenuInfo;
						}

						void f::android.support::v4::h::a(bool paramBoolean)
						{
						  int i1;
						  int i2 = this->p;
						  if (paramBoolean)
						  {
							i1 = 4;
						  }
						  else
						  {
							i1 = 0;
						  }
						  this->p = i1 | i2 & 0xFFFFFFFB;
						}

						b *f::android.support::v4::d::a::b(int paramInt)
						{
						  setShowAsAction(paramInt);
						  return this;
						}

						void f::android.support::v4::d::a::b(bool paramBoolean)
						{
						  int i1;
						  int i2 = this->p;
						  int i3 = this->p;
						  if (paramBoolean)
						  {
							i1 = 2;
						  }
						  else
						  {
							i1 = 0;
						  }
						  this->p = i1 | i3 & 0xFFFFFFFD;
						  if (i2 != this->p)
						  {
							this->l_Renamed->b(false);
						  }
						}

						bool f::android.support::v4::d::a::b()
						{
						  if ((this->o == nullptr || !this->o.onMenuItemClick(this)) && !this->l_Renamed->a(this->l_Renamed->l(), this))
						  {
							if (this->n_Renamed != nullptr)
							{
							  this->n_Renamed();
							  return true;
							}
							if (this->g_Renamed != nullptr)
							{
							  try
							  {
								this->l_Renamed->d().startActivity(this->g_Renamed);
								return true;
							  }
							  catch (const ActivityNotFoundException &activityNotFoundException)
							  {
								android.util::Log::e(L"MenuItemImpl", L"Can't find activity to handle intent; ignoring", activityNotFoundException);
							  }
							}
							if (this->s == nullptr || !this->s->d())
							{
							  return false;
							}
						  }
						  return true;
						}

						int f::c()
						{
							return this->d_Renamed;
						}

						bool f::c(bool paramBoolean)
						{
						  int i1;
						  bool bool_Renamed = false;
						  int i2 = this->p;
						  int i3 = this->p;
						  if (paramBoolean)
						  {
							i1 = 0;
						  }
						  else
						  {
							i1 = 8;
						  }
						  this->p = i1 | i3 & 0xFFFFFFF7;
						  paramBoolean = bool_Renamed;
						  if (i2 != this->p)
						  {
							paramBoolean = true;
						  }
						  return paramBoolean;
						}

						bool f::collapseActionView()
						{
						  if ((this->q & 0x8) != 0)
						  {
							if (this->r == nullptr)
							{
							  return true;
							}
							if (this->t == nullptr || this->t->b(this))
							{
							  return this->l_Renamed->d(this);
							}
						  }
						  return false;
						}

						wchar_t f::d()
						{
							return this->l_Renamed->a() ? this->i_Renamed : this->h_Renamed;
						}

						void f::d(bool paramBoolean)
						{
						  if (paramBoolean)
						  {
							this->p |= 0x20;
							return;
						  }
						  this->p &= 0xFFFFFFDF;
						}

						std::wstring f::e()
						{
						  wchar_t c1 = d();
						  if (c1 == L'\000')
						  {
							return L"";
						  }
						  StringBuilder *stringBuilder = new StringBuilder(w);
						  switch (c1)
						  {
							default:
							  stringBuilder->append(c1);
							  return stringBuilder->toString();
							case L'\n':
							  stringBuilder->append(x);
							  return stringBuilder->toString();
							case L'\b':
							  stringBuilder->append(y);
							  return stringBuilder->toString();
							case L' ':
							  break;
						  }
						  stringBuilder->append(z);
						  return stringBuilder->toString();
						}

						void f::e(bool paramBoolean)
						{
						  this->u = paramBoolean;
						  this->l_Renamed->b(false);
						}

						bool f::expandActionView()
						{
							return (n() && (this->t == nullptr || this->t->a(this))) ? this->l_Renamed->c(this) : 0;
						}

						bool f::android.support::v4::h::f()
						{
							return (this->l_Renamed->b() && d() != L'\000');
						}

						bool f::g()
						{
							return ((this->p & 0x4) != 0);
						}

						ActionProvider *f::getActionProvider()
						{
							throw UnsupportedOperationException(L"This is not supported, use MenuItemCompat.getActionProvider()");
						}

						View *f::getActionView()
						{
						  if (this->r != nullptr)
						  {
							return this->r;
						  }
						  if (this->s != nullptr)
						  {
							this->r = this->s->a(this);
							return this->r;
						  }
						  return nullptr;
						}

						wchar_t f::getAlphabeticShortcut()
						{
							return this->i_Renamed;
						}

						int f::getGroupId()
						{
							return this->b;
						}

						Drawable *f::getIcon()
						{
						  if (this->j_Renamed != nullptr)
						  {
							return this->j_Renamed;
						  }
						  if (this->k_Renamed != 0)
						  {
							Drawable *drawable = android.support::v7::internal_Renamed::widget::o::a(this->l_Renamed->d(), this->k_Renamed);
							this->k_Renamed = 0;
							this->j_Renamed = drawable;
							return drawable;
						  }
						  return nullptr;
						}

						Intent *f::getIntent()
						{
							return this->g_Renamed;
						}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @CapturedViewProperty public int getItemId()
						int f::getItemId()
						{
							return this->a;
						}

						ContextMenu::ContextMenuInfo *f::getMenuInfo()
						{
							return this->v;
						}

						wchar_t f::getNumericShortcut()
						{
							return this->h_Renamed;
						}

						int f::getOrder()
						{
							return this->c_Renamed;
						}

						SubMenu *f::getSubMenu()
						{
							return this->m_Renamed;
						}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @CapturedViewProperty public CharSequence getTitle()
						CharSequence *f::getTitle()
						{
							return this->e_Renamed;
						}

						CharSequence *f::getTitleCondensed()
						{
						  CharSequence *charSequence1;
						  if (this->f != nullptr)
						  {
							charSequence1 = this->f;
						  }
						  else
						  {
							charSequence1 = this->e_Renamed;
						  }
						  CharSequence *charSequence2 = charSequence1;
						  if (android.os::Build::VERSION::SDK_INT < 18)
						  {
							charSequence2 = charSequence1;
							if (charSequence1 != nullptr)
							{
							  charSequence2 = charSequence1;
							  if (!(dynamic_cast<std::wstring>(charSequence1) != nullptr))
							  {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
								charSequence2 = charSequence1->toString();
							  }
							}
						  }
						  return charSequence2;
						}

						void f::h()
						{
							this->l_Renamed->b(this);
						}

						bool f::hasSubMenu()
						{
							return (this->m_Renamed != nullptr);
						}

						bool f::i()
						{
							return this->l_Renamed->m();
						}

						bool f::isActionViewExpanded()
						{
							return this->u;
						}

						bool f::isCheckable()
						{
							return ((this->p & true) == 1);
						}

						bool f::isChecked()
						{
							return ((this->p & 0x2) == 2);
						}

						bool f::isEnabled()
						{
							return ((this->p & 0x10) != 0);
						}

						bool f::isVisible()
						{
							return (this->s != nullptr && this->s->b()) ? (!((this->p & 0x8) != 0 || !this->s->c())) : (!((this->p & 0x8) != 0));
						}

						bool f::j()
						{
							return ((this->p & 0x20) == 32);
						}

						bool f::k()
						{
							return ((this->q & true) == 1);
						}

						bool f::l()
						{
							return ((this->q & 0x2) == 2);
						}

						bool f::m()
						{
							return ((this->q & 0x4) == 4);
						}

						bool f::n()
						{
						  char b1 = 0;
						  int i1 = b1;
						  if ((this->q & 0x8) != 0)
						  {
							if (this->r == nullptr && this->s != nullptr)
							{
							  this->r = this->s->a(this);
							}
							i1 = b1;
							if (this->r != nullptr)
							{
							  i1 = 1;
							}
						  }
						  return i1;
						}

						MenuItem *f::setActionProvider(ActionProvider *paramActionProvider)
						{
							throw UnsupportedOperationException(L"This is not supported, use MenuItemCompat.setActionProvider()");
						}

						MenuItem *f::setAlphabeticShortcut(wchar_t paramChar)
						{
						  if (this->i_Renamed == paramChar)
						  {
							return this;
						  }
						  this->i_Renamed = std::tolower(paramChar);
						  this->l_Renamed->b(false);
						  return this;
						}

						MenuItem *f::setCheckable(bool paramBoolean)
						{
						  int i1;
						  int i2 = this->p;
						  int i3 = this->p;
						  if (paramBoolean)
						  {
							i1 = 1;
						  }
						  else
						  {
							i1 = 0;
						  }
						  this->p = i1 | i3 & 0xFFFFFFFE;
						  if (i2 != this->p)
						  {
							this->l_Renamed->b(false);
						  }
						  return this;
						}

						MenuItem *f::setChecked(bool paramBoolean)
						{
						  if ((this->p & 0x4) != 0)
						  {
							this->l_Renamed->a(this);
							return this;
						  }
						  android.support::v4::d::a::b(paramBoolean);
						  return this;
						}

						MenuItem *f::setEnabled(bool paramBoolean)
						{
						  if (paramBoolean)
						  {
							this->p |= 0x10;
							this->l_Renamed->b(false);
							return this;
						  }
						  this->p &= 0xFFFFFFEF;
						  this->l_Renamed->b(false);
						  return this;
						}

						MenuItem *f::setIcon(int paramInt)
						{
						  this->j_Renamed = nullptr;
						  this->k_Renamed = paramInt;
						  this->l_Renamed->b(false);
						  return this;
						}

						MenuItem *f::setIcon(Drawable *paramDrawable)
						{
						  this->k_Renamed = 0;
						  this->j_Renamed = paramDrawable;
						  this->l_Renamed->b(false);
						  return this;
						}

						MenuItem *f::setIntent(Intent *paramIntent)
						{
						  this->g_Renamed = paramIntent;
						  return this;
						}

						MenuItem *f::setNumericShortcut(wchar_t paramChar)
						{
						  if (this->h_Renamed == paramChar)
						  {
							return this;
						  }
						  this->h_Renamed = paramChar;
						  this->l_Renamed->b(false);
						  return this;
						}

						MenuItem *f::setOnActionExpandListener(MenuItem::OnActionExpandListener *paramOnActionExpandListener)
						{
							throw UnsupportedOperationException(L"This is not supported, use MenuItemCompat.setOnActionExpandListener()");
						}

						MenuItem *f::setOnMenuItemClickListener(MenuItem::OnMenuItemClickListener *paramOnMenuItemClickListener)
						{
						  this->o = paramOnMenuItemClickListener;
						  return this;
						}

						MenuItem *f::setShortcut(wchar_t paramChar1, wchar_t paramChar2)
						{
						  this->h_Renamed = paramChar1;
						  this->i_Renamed = std::tolower(paramChar2);
						  this->l_Renamed->b(false);
						  return this;
						}

						void f::setShowAsAction(int paramInt)
						{
						  switch (paramInt & 0x3)
						  {
							default:
							  throw std::invalid_argument("SHOW_AS_ACTION_ALWAYS, SHOW_AS_ACTION_IF_ROOM, and SHOW_AS_ACTION_NEVER are mutually exclusive.");
							case 0:
							case 1:
							case 2:
							  break;
						  }
						  this->q = paramInt;
						  this->l_Renamed->b(this);
						}

						MenuItem *f::setTitle(int paramInt)
						{
							return setTitle(this->l_Renamed->d().getString(paramInt));
						}

						MenuItem *f::setTitle(CharSequence *paramCharSequence)
						{
						  this->e_Renamed = paramCharSequence;
						  this->l_Renamed->b(false);
						  if (this->m_Renamed != nullptr)
						  {
							this->m_Renamed->setHeaderTitle(paramCharSequence);
						  }
						  return this;
						}

						MenuItem *f::setTitleCondensed(CharSequence *paramCharSequence)
						{
						  this->f = paramCharSequence;
						  if (paramCharSequence == nullptr)
						  {
							paramCharSequence = this->e_Renamed;
						  }
						  this->l_Renamed->b(false);
						  return this;
						}

						MenuItem *f::setVisible(bool paramBoolean)
						{
						  if (c(paramBoolean))
						  {
							this->l_Renamed->a(this);
						  }
						  return this;
						}

						std::wstring f::toString()
						{
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
							return this->e_Renamed->toString();
						}
					}
				}
			}
		}
	}
}

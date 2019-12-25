//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "../../../../v4/h/f.h"
#include "../../../../v4/h/u.h"

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
						using android::content::Context;
						using android::content::Intent;
						using android::graphics::drawable::Drawable;
						using a = android::support::v4::b::a;
						using b = android::support::v4::d::a::b;
						using a = android::support::v4::h::a;
						using f = android::support::v4::h::f;
						using android::view::ActionProvider;
						using android::view::ContextMenu;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;

						internal *a::android.support::v4::b::a(Context *paramContext, int paramInt1, int paramInt2, int paramInt3, int paramInt4, CharSequence *paramCharSequence)
						{
						  this->l = paramContext;
						  this->a = paramInt2;
						  this->b = paramInt1;
						  this->c = paramInt3;
						  this->d = paramInt4;
						  this->e = paramCharSequence;
						}

						b *a::android.support::v4::b::a(int paramInt)
						{
							throw UnsupportedOperationException();
						}

						b *a::android.support::v4::b::a(a *parama)
						{
							throw UnsupportedOperationException();
						}

						b *a::android.support::v4::b::a(f::e *parame)
						{
							return this;
						}

						b *a::android.support::v4::b::a(View *paramView)
						{
							throw UnsupportedOperationException();
						}

						a *a::android.support::v4::b::a()
						{
							return nullptr;
						}

						b *a::android.support::v4::d::a::b(int paramInt)
						{
						  setShowAsAction(paramInt);
						  return this;
						}

						bool a::collapseActionView()
						{
							return false;
						}

						bool a::expandActionView()
						{
							return false;
						}

						ActionProvider *a::getActionProvider()
						{
							throw UnsupportedOperationException();
						}

						View *a::getActionView()
						{
							return nullptr;
						}

						wchar_t a::getAlphabeticShortcut()
						{
							return this->i;
						}

						int a::getGroupId()
						{
							return this->b;
						}

						Drawable *a::getIcon()
						{
							return this->j;
						}

						Intent *a::getIntent()
						{
							return this->g;
						}

						int a::getItemId()
						{
							return this->a;
						}

						ContextMenu::ContextMenuInfo *a::getMenuInfo()
						{
							return nullptr;
						}

						wchar_t a::getNumericShortcut()
						{
							return this->h;
						}

						int a::getOrder()
						{
							return this->d;
						}

						SubMenu *a::getSubMenu()
						{
							return nullptr;
						}

						CharSequence *a::getTitle()
						{
							return this->e;
						}

						CharSequence *a::getTitleCondensed()
						{
							return (this->f != nullptr) ? this->f : this->e;
						}

						bool a::hasSubMenu()
						{
							return false;
						}

						bool a::isActionViewExpanded()
						{
							return false;
						}

						bool a::isCheckable()
						{
							return ((this->n & true) != 0);
						}

						bool a::isChecked()
						{
							return ((this->n & 0x2) != 0);
						}

						bool a::isEnabled()
						{
							return ((this->n & 0x10) != 0);
						}

						bool a::isVisible()
						{
							return ((this->n & 0x8) == 0);
						}

						MenuItem *a::setActionProvider(ActionProvider *paramActionProvider)
						{
							throw UnsupportedOperationException();
						}

						MenuItem *a::setAlphabeticShortcut(wchar_t paramChar)
						{
						  this->i = paramChar;
						  return this;
						}

						MenuItem *a::setCheckable(bool paramBoolean)
						{
						  int i2 = this->n;
						  if (paramBoolean)
						  {
							int i3 = 1;
							this->n = i3 | i2 & 0xFFFFFFFE;
							return this;
						  }
						  int i1 = 0;
						  this->n = i1 | i2 & 0xFFFFFFFE;
						  return this;
						}

						MenuItem *a::setChecked(bool paramBoolean)
						{
						  int i2 = this->n;
						  if (paramBoolean)
						  {
							int i3 = 2;
							this->n = i3 | i2 & 0xFFFFFFFD;
							return this;
						  }
						  int i1 = 0;
						  this->n = i1 | i2 & 0xFFFFFFFD;
						  return this;
						}

						MenuItem *a::setEnabled(bool paramBoolean)
						{
						  int i2 = this->n;
						  if (paramBoolean)
						  {
							int i3 = 16;
							this->n = i3 | i2 & 0xFFFFFFEF;
							return this;
						  }
						  int i1 = 0;
						  this->n = i1 | i2 & 0xFFFFFFEF;
						  return this;
						}

						MenuItem *a::setIcon(int paramInt)
						{
						  this->k = paramInt;
						  this->j = android.support::v4::b::a::a(this->l, paramInt);
						  return this;
						}

						MenuItem *a::setIcon(Drawable *paramDrawable)
						{
						  this->j = paramDrawable;
						  this->k = 0;
						  return this;
						}

						MenuItem *a::setIntent(Intent *paramIntent)
						{
						  this->g = paramIntent;
						  return this;
						}

						MenuItem *a::setNumericShortcut(wchar_t paramChar)
						{
						  this->h = paramChar;
						  return this;
						}

						MenuItem *a::setOnActionExpandListener(MenuItem::OnActionExpandListener *paramOnActionExpandListener)
						{
							throw UnsupportedOperationException();
						}

						MenuItem *a::setOnMenuItemClickListener(MenuItem::OnMenuItemClickListener *paramOnMenuItemClickListener)
						{
						  this->m = paramOnMenuItemClickListener;
						  return this;
						}

						MenuItem *a::setShortcut(wchar_t paramChar1, wchar_t paramChar2)
						{
						  this->h = paramChar1;
						  this->i = paramChar2;
						  return this;
						}

						void a::setShowAsAction(int paramInt)
						{
						}

						MenuItem *a::setTitle(int paramInt)
						{
						  this->e = this->l->getResources().getString(paramInt);
						  return this;
						}

						MenuItem *a::setTitle(CharSequence *paramCharSequence)
						{
						  this->e = paramCharSequence;
						  return this;
						}

						MenuItem *a::setTitleCondensed(CharSequence *paramCharSequence)
						{
						  this->f = paramCharSequence;
						  return this;
						}

						MenuItem *a::setVisible(bool paramBoolean)
						{
						  int i2 = this->n;
						  if (paramBoolean)
						  {
							int i3 = 0;
							this->n = i3 | i2 & 0x8;
							return this;
						  }
						  int i1 = 8;
						  this->n = i1 | i2 & 0x8;
						  return this;
						}
					}
				}
			}
		}
	}
}

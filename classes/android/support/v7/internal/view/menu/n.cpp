//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "n.h"
#include "f.h"
#include "../../../../v4/b/a.h"
#include "../b.h"
#include "b.h"
#include "../c.h"
#include "c.h"
#include "l.h"
#include "o.h"

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
						using android::graphics::drawable::Drawable;
						using a = android::support::v4::b::a;
						using android::view::Menu;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;

						n::n(Context *paramContext, e *parame, f *paramf) : e(paramContext)
						{
						  this->d_Renamed = parame;
						  this->e = paramf;
						}

						void n::android->support.v4.b.a(e::a *parama)
						{
							this->d_Renamed->a(parama);
						}

						bool n::android->support.v4.b.a()
						{
							return this->d_Renamed->a();
						}

						bool n::android->support.v4.b.a(e *parame, MenuItem *paramMenuItem)
						{
							return (e::a(parame, paramMenuItem) || this->d_Renamed->a(parame, paramMenuItem));
						}

						bool n::b()
						{
							return this->d_Renamed->b();
						}

						bool n::c(f *paramf)
						{
							return this->d_Renamed->c(paramf);
						}

						bool n::d(f *paramf)
						{
							return this->d_Renamed->d(paramf);
						}

						MenuItem *n::getItem()
						{
							return this->e;
						}

						e *n::l()
						{
							return this->d_Renamed;
						}

						Menu *n::o()
						{
							return this->d_Renamed;
						}

						SubMenu *n::setHeaderIcon(int paramInt)
						{
						  android->support.v4.b.a(android->support.v4.b.a::a(d(), paramInt));
						  return this;
						}

						SubMenu *n::setHeaderIcon(Drawable *paramDrawable)
						{
						  android->support.v4.b.a(paramDrawable);
						  return this;
						}

						SubMenu *n::setHeaderTitle(int paramInt)
						{
						  android->support.v4.b.a(d().getResources().getString(paramInt));
						  return this;
						}

						SubMenu *n::setHeaderTitle(CharSequence *paramCharSequence)
						{
						  android->support.v4.b.a(paramCharSequence);
						  return this;
						}

						SubMenu *n::setHeaderView(View *paramView)
						{
						  android->support.v4.b.a(paramView);
						  return this;
						}

						SubMenu *n::setIcon(int paramInt)
						{
						  this->e->setIcon(paramInt);
						  return this;
						}

						SubMenu *n::setIcon(Drawable *paramDrawable)
						{
						  this->e->setIcon(paramDrawable);
						  return this;
						}

						void n::setQwertyMode(bool paramBoolean)
						{
							this->d_Renamed->setQwertyMode(paramBoolean);
						}
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "o.h"
#include "../../../../v4/d/a/c.h"
#include "../b.h"
#include "b.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"

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
						using c = android::support::v4::d::a::c;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;

						o::o(Context *paramContext, c *paramc) : m(paramContext, paramc)
						{
						}

						c *o::b()
						{
							return static_cast<c*>(this->b);
						}

						void o::clearHeader()
						{
							b()->clearHeader();
						}

						MenuItem *o::getItem()
						{
							return a(b()->getItem());
						}

						SubMenu *o::setHeaderIcon(int paramInt)
						{
						  b()->setHeaderIcon(paramInt);
						  return this;
						}

						SubMenu *o::setHeaderIcon(Drawable *paramDrawable)
						{
						  b()->setHeaderIcon(paramDrawable);
						  return this;
						}

						SubMenu *o::setHeaderTitle(int paramInt)
						{
						  b()->setHeaderTitle(paramInt);
						  return this;
						}

						SubMenu *o::setHeaderTitle(CharSequence *paramCharSequence)
						{
						  b()->setHeaderTitle(paramCharSequence);
						  return this;
						}

						SubMenu *o::setHeaderView(View *paramView)
						{
						  b()->setHeaderView(paramView);
						  return this;
						}

						SubMenu *o::setIcon(int paramInt)
						{
						  b()->setIcon(paramInt);
						  return this;
						}

						SubMenu *o::setIcon(Drawable *paramDrawable)
						{
						  b()->setIcon(paramDrawable);
						  return this;
						}
					}
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "m.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace d { namespace a { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class b; } } } } } }

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

						class o : public m, public android->view.SubMenu
						{
					  public:
						  o(Context *paramContext, c *paramc);

						  virtual c *b();

						  virtual void clearHeader();

						  virtual MenuItem *getItem();

						  virtual SubMenu *setHeaderIcon(int paramInt);

						  virtual SubMenu *setHeaderIcon(Drawable *paramDrawable);

						  virtual SubMenu *setHeaderTitle(int paramInt);

						  virtual SubMenu *setHeaderTitle(CharSequence *paramCharSequence);

						  virtual SubMenu *setHeaderView(View *paramView);

						  virtual SubMenu *setIcon(int paramInt);

						  virtual SubMenu *setIcon(Drawable *paramDrawable);
						};
					}
				}
			}
		}
	}
}

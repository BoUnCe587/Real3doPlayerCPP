#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "e.h"
#include "d.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }
namespace android { namespace support { namespace v4 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class b; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class c; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class d; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class l; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class o; } } } } } }

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

						class n : public e, public android->view.SubMenu
						{
					  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  e *d_Renamed;

						  f *e;

					  public:
						  virtual ~n()
						  {
							  delete d;
							  delete e;
						  }

						  n(Context *paramContext, e *parame, f *paramf);

						  virtual void android->support.v4.b.a(e::a *parama);

						  virtual bool android->support.v4.b.a();

						  virtual bool android->support.v4.b.a(e *parame, MenuItem *paramMenuItem);

						  virtual bool b();

						  virtual bool c(f *paramf);

						  virtual bool d(f *paramf);

						  virtual MenuItem *getItem();

						  virtual e *l();

						  virtual Menu *o();

						  virtual SubMenu *setHeaderIcon(int paramInt);

						  virtual SubMenu *setHeaderIcon(Drawable *paramDrawable);

						  virtual SubMenu *setHeaderTitle(int paramInt);

						  virtual SubMenu *setHeaderTitle(CharSequence *paramCharSequence);

						  virtual SubMenu *setHeaderView(View *paramView);

						  virtual SubMenu *setIcon(int paramInt);

						  virtual SubMenu *setIcon(Drawable *paramDrawable);

						  virtual void setQwertyMode(bool paramBoolean);
						};
					}
				}
			}
		}
	}
}

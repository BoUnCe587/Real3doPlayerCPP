//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "l.h"
#include "../../../../v4/d/a/b.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"
#include "h.h"
#include "g.h"
#include "../../../../v4/d/a/c.h"
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
						using android::os::Build;
						using b = android::support::v4::d::a::b;
						using c = android::support::v4::d::a::c;
						using android::view::MenuItem;
						using android::view::SubMenu;

						MenuItem *l::a(Context *paramContext, b *paramb)
						{
						  if (Build::VERSION::SDK_INT >= 16)
						  {
							return new h(paramContext, paramb);
						  }
						  if (Build::VERSION::SDK_INT >= 14)
						  {
							return new g(paramContext, paramb);
						  }
						  throw UnsupportedOperationException();
						}

						SubMenu *l::a(Context *paramContext, c *paramc)
						{
						  if (Build::VERSION::SDK_INT >= 14)
						  {
							return new o(paramContext, paramc);
						  }
						  throw UnsupportedOperationException();
						}
					}
				}
			}
		}
	}
}

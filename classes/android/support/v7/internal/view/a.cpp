//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"
#include "../../../v4/h/s.h"
#include "c.h"

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
					using android::content::Context;
					using android::content::res::Resources;
					using android::content::res::TypedArray;
					using android::os::Build;
					using s = android::support::v4::h::s;
					using a = android::support::v7::b::a;
					using android::view::ViewConfiguration;

					internal *a::android->support.v7.b.a(Context *paramContext)
					{
						this->a = paramContext;
					}

					a *a::android->support.v7.b.a(Context *paramContext)
					{
						return new android->support.v7.b.a(paramContext);
					}

					int a::android->support.v7.b.a()
					{
						return this->a.getResources().getInteger(android->support.v7.b.a::f.abc_max_action_buttons);
					}

					bool a::b()
					{
						return !(android->os.Build.VERSION.SDK_INT < 19 && android->support.v4.h.s::a(android->view.ViewConfiguration->get(this->a)));
					}

					int a::c()
					{
						return (this->a.getResources().getDisplayMetrics()).widthPixels / 2;
					}

					bool a::d()
					{
						return ((this->a.getApplicationInfo()).targetSdkVersion >= 16) ? this->a.getResources().getBoolean(android->support.v7.b.a::b.abc_action_bar_embed_tabs) : this->a.getResources().getBoolean(android->support.v7.b.a::b.abc_action_bar_embed_tabs_pre_jb);
					}

					int a::e()
					{
					  TypedArray *typedArray = this->a.obtainStyledAttributes(nullptr, android->support.v7.b.a::j.ActionBar, android->support.v7.b.a::a.actionBarStyle, 0);
					  int j = typedArray->getLayoutDimension(android->support.v7.b.a::j.ActionBar_height, 0);
					  Resources *resources = this->a.getResources();
					  int i = j;
					  if (!d())
					  {
						i = std::min(j, resources->getDimensionPixelSize(android->support.v7.b.a::c.abc_action_bar_stacked_max_height));
					  }
					  typedArray->recycle();
					  return i;
					}

					int a::f()
					{
						return this->a.getResources().getDimensionPixelSize(android->support.v7.b.a::c.abc_action_bar_stacked_tab_max_width);
					}
				}
			}
		}
	}
}

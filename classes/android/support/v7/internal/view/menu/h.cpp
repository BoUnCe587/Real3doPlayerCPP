//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "h.h"
#include "../../../../v4/d/a/b.h"
#include "../../../../v4/g/a.h"

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
						using android::annotation::TargetApi;
						using android::content::Context;
						using b = android::support::v4::d::a::b;
						using a = android::support::v4::h::a;
						using android::view::ActionProvider;
						using android::view::MenuItem;
						using android::view::View;

						h::h(Context *paramContext, b *paramb) : g(paramContext, paramb)
						{
						}

						g::a *h::android->support.v4.h.a(ActionProvider *paramActionProvider)
						{
							return new android->support.v4.h.a(this, this->a, paramActionProvider);
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						internal *h::a::android->support.v4.h.a(h *this$0, Context *param1Context, ActionProvider *param1ActionProvider)
						{
							g::a(this$0, param1Context, param1ActionProvider);
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						View *h::a::android->support.v4.h.a(MenuItem *param1MenuItem)
						{
							return this->a.onCreateActionView(param1MenuItem);
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						void h::a::android->support.v4.h.a(a::b *param1b)
						{
						  this->c_Renamed = param1b;
						  ActionProvider *actionProvider = this->a;
						  if (param1b != nullptr)
						  {
							a *a1 = this;
						  }
						  else
						  {
							param1b = nullptr;
						  }
						  actionProvider->setVisibilityListener(param1b);
						}

						bool h::a::android->support.v4.d.a.b()
						{
							return this->a.overridesItemVisibility();
						}

						bool h::a::c()
						{
							return this->a.isVisible();
						}

						void h::a::onActionProviderVisibilityChanged(bool param1Boolean)
						{
						  if (this->c_Renamed != nullptr)
						  {
							this->c_Renamed->a(param1Boolean);
						  }
						}
					}
				}
			}
		}
	}
}

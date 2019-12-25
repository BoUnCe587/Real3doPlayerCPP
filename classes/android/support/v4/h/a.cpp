//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "d.h"
#include "e.h"
#include "f.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::content::Context;
				using android::util::Log;
				using android::view::MenuItem;
				using android::view::SubMenu;
				using android::view::View;

				a::a(Context *paramContext) : a(paramContext)
				{
				}

				View a::a(MenuItem *paramMenuItem)
				{
					return a();
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a_Renamed(android::support::v4::h::a *parama)
				{
					this->b_Renamed = parama;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a_Renamed(android::support::v4::h::b *paramb)
				{
				  if (this->c_Renamed != nullptr && paramb != nullptr)
				  {
					Log::w(L"ActionProvider(support)", L"setVisibilityListener: Setting a new ActionProvider.VisibilityListener when one is already set. Are you reusing this " + getClass().getSimpleName() + L" instance while it is still in use somewhere else?");
				  }
				  this->c_Renamed = paramb;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a_Renamed(SubMenu *paramSubMenu)
				{
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a_Renamed(bool paramBoolean)
				{
				  if (this->b_Renamed != nullptr)
				  {
					this->b_Renamed->a_Renamed(paramBoolean);
				  }
				}

				bool a::b()
				{
					return false;
				}

				bool a::c()
				{
					return true;
				}

				bool a::d()
				{
					return false;
				}

				bool a::e()
				{
					return false;
				}

				void a::f()
				{
				  this->c_Renamed = nullptr;
				  this->b_Renamed = nullptr;
				}
			}
		}
	}
}

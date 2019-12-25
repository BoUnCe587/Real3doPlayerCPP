#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "g.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"
#include "../../../../v4/h/a.h"
#include "../../../../v4/h/u.h"
#include "../c.h"
#include "c.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace d { namespace a { class b; } } } } }
namespace android { namespace support { namespace v4 { namespace g { template<typename Ktypename V>class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class g; } } } } } }
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class c; } } } } } }

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
						using b = android::support::v4::d::a::b;
						using a = android::support::v4::h::a;
						using android::view::ActionProvider;
						using android::view::MenuItem;
						using android::view::View;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(16) class h extends g
						class h : public g
						{
					  public:
						  h(Context *paramContext, b *paramb);

						  g::a *android->support.v4.h.a(ActionProvider *paramActionProvider) override;

					  public:
						  class a : public g::a, public android->view.ActionProvider.VisibilityListener
						  {
											  private:
												  h *outerInstance;

						public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
							a::b *c_Renamed;

							virtual ~a()
							{
								delete c;
								delete outerInstance;
							}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual internal *android->support.v4.h.a(h *this$0, Context *param1Context, ActionProvider *param1ActionProvider);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual View *android->support.v4.h.a(MenuItem *param1MenuItem);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
							virtual void android->support.v4.h.a(a::b *param1b);

							virtual bool android->support.v4.d.a.b();

							virtual bool c();

							virtual void onActionProviderVisibilityChanged(bool param1Boolean);
						  };
						};
					}
				}
			}
		}
	}
}

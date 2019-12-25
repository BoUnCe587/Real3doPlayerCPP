#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../../h/a.h"
#include "../../h/u.h"
#include "../../h/f.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class e; } } } }
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace d
			{
				namespace a
				{

					using a = android::support::v4::h::a;
					using f = android::support::v4::h::f;
					using android::view::MenuItem;
					using android::view::View;

					class b : public MenuItem
					{
				  public:
					  virtual b *a(a *parama) = 0;

					  virtual b *a(f::e *parame) = 0;

					  virtual a *a() = 0;

					  virtual bool collapseActionView() = 0;

					  virtual bool expandActionView() = 0;

					  virtual View *getActionView() = 0;

					  virtual bool isActionViewExpanded() = 0;

					  virtual MenuItem *setActionView(int paramInt) = 0;

					  virtual MenuItem *setActionView(View *paramView) = 0;

					  virtual void setShowAsAction(int paramInt) = 0;

					  virtual MenuItem *setShowAsActionFlags(int paramInt) = 0;
					};
				}
			}
		}
	}
}

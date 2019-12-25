#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "u.h"
#include "b.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{

				using android::view::View;
				using android::view::ViewGroup;

				class j
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  ViewGroup *const a_Renamed;

				  int b = 0;

			  public:
				  virtual ~j()
				  {
					  delete a;
				  }

				  j(ViewGroup *paramViewGroup);

				  virtual int a();

				  virtual void a(View *paramView1, View *paramView2, int paramInt);
				};
			}
		}
	}
}

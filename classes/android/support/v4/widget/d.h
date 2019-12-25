#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace widget { class a; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class e; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class f; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{

				using android::widget::ListView;

				class d : public a
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  ListView *const a_Renamed;

			  public:
				  virtual ~d()
				  {
					  delete a;
				  }

				  d(ListView *paramListView);

				  void a(int paramInt1, int paramInt2) override;

				  bool e(int paramInt) override;

				  bool f(int paramInt) override;
				};
			}
		}
	}
}

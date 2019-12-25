#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace b { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace a
			{

				using android::app::Activity;
				using a = android::support::v4::b::a;

				class a : public a
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  static void a(Activity *paramActivity, std::vector<std::wstring> &paramArrayOfString, int paramInt);

			  public:
				  class a
				  {
				public:
					virtual void a(int param1Int, std::vector<std::wstring> &param1ArrayOfString, std::vector<int> &param1ArrayOfInt) = 0;
				  };
				};
			}
		}
	}
}

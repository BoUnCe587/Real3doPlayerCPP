//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace a
			{
				using android::app::Activity;

				void b::a(Activity *paramActivity, std::vector<std::wstring> &paramArrayOfString, int paramInt)
				{
				  if (dynamic_cast<android::support::v4::a::a*>(paramActivity) != nullptr)
				  {
					(static_cast<android::support::v4::a::a*>(paramActivity))->a(paramInt);
				  }
				  paramActivity->requestPermissions(paramArrayOfString, paramInt);
				}
			}
		}
	}
}

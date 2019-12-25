//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace b
			{
				using android::content::Context;
				using android::graphics::drawable::Drawable;
				using android::os::Build;
				using android::os::Process;

				int a::a(Context *paramContext, const std::wstring &paramString)
				{
				  if (paramString == L"")
				  {
					throw std::invalid_argument("permission is null");
				  }
				  return paramContext->checkPermission(paramString, Process::myPid(), Process::myUid());
				}

				Drawable a::a(Context *paramContext, int paramInt)
				{
					return (Build::VERSION::SDK_INT >= 21) ? b::a(paramContext, paramInt) : paramContext->getResources().getDrawable(paramInt);
				}
			}
		}
	}
}

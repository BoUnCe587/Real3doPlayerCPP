//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace c
			{
				namespace a
				{
					using android::graphics::PorterDuff;
					using android::os::Build;

					PorterDuff::Mode a::a(int paramInt, PorterDuff::Mode *paramMode)
					{
					  switch (paramInt)
					  {
						default:
						  return paramMode;
						case 3:
						  return PorterDuff::Mode::SRC_OVER;
						case 5:
						  return PorterDuff::Mode::SRC_IN;
						case 9:
						  return PorterDuff::Mode::SRC_ATOP;
						case 14:
						  return PorterDuff::Mode::MULTIPLY;
						case 15:
						  return PorterDuff::Mode::SCREEN;
						case 16:
						  break;
					  }
					  if (Build::VERSION::SDK_INT >= 11)
					  {
						return StringHelper::fromString<PorterDuff::Mode>(L"ADD");
					  }
					}
				}
			}
		}
	}
}

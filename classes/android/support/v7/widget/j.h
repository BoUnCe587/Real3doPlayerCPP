#pragma once

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
			namespace widget
			{

				using android::content::res::Resources;
				using android::widget::SpinnerAdapter;

				class j : public SpinnerAdapter
				{
			  public:
				  virtual Resources::Theme *a() = 0;

				  virtual void a(Resources::Theme *paramTheme) = 0;
				};
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace widget
				{

					using android::content::res::ColorStateList;
					using android::graphics::PorterDuff;

					class n
					{
				  public:
					  ColorStateList *a;

					  PorterDuff::Mode *b;

					  bool c = false;

					  bool d = false;
						virtual ~n()
						{
							delete a;
							delete b;
						}

					};
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "g.h"
#include "a.h"
#include "u.h"
#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::view::MenuItem;
				using android::view::View;

				MenuItem *g::a(MenuItem *paramMenuItem, View *paramView)
				{
					return paramMenuItem->setActionView(paramView);
				}

				void g::a(MenuItem *paramMenuItem, int paramInt)
				{
					paramMenuItem->setShowAsAction(paramInt);
				}

				MenuItem *g::b(MenuItem *paramMenuItem, int paramInt)
				{
					return paramMenuItem->setActionView(paramInt);
				}
			}
		}
	}
}

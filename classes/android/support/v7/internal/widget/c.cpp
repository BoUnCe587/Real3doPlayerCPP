//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"
#include "ActionBarContainer.h"

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
					using android::graphics::Outline;

					c::c(ActionBarContainer *paramActionBarContainer) : b(paramActionBarContainer)
					{
					}

					void c::getOutline(Outline *paramOutline)
					{
					  if (this->a->d)
					  {
						if (this->a->c != nullptr)
						{
						  this->a->c->getOutline(paramOutline);
						}
						return;
					  }
					  if (this->a->a != nullptr)
					  {
						this->a->a.getOutline(paramOutline);
						return;
					  }
					}
				}
			}
		}
	}
}

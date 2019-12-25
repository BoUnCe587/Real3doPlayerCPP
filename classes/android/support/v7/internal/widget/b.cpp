//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
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
					using android::graphics::Canvas;
					using android::graphics::ColorFilter;
					using android::graphics::drawable::Drawable;

					b::b(ActionBarContainer *paramActionBarContainer) : a(paramActionBarContainer)
					{
					}

					void b::draw(Canvas *paramCanvas)
					{
					  if (this->a->d)
					  {
						if (this->a->c != nullptr)
						{
						  this->a->c->draw(paramCanvas);
						}
						return;
					  }
					  if (this->a->a != nullptr)
					  {
						this->a->a.draw(paramCanvas);
					  }
					  if (this->a->b_Renamed != nullptr && this->a->e)
					  {
						this->a->b_Renamed.draw(paramCanvas);
						return;
					  }
					}

					int b::getOpacity()
					{
						return 0;
					}

					void b::setAlpha(int paramInt)
					{
					}

					void b::setColorFilter(ColorFilter *paramColorFilter)
					{
					}
				}
			}
		}
	}
}

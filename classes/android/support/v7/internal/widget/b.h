#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class ActionBarContainer; } } } } }

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

					class b : public Drawable
					{
				  public:
					  ActionBarContainer *const a;

					  virtual ~b()
					  {
						  delete a;
					  }

					  b(ActionBarContainer *paramActionBarContainer);

					  virtual void draw(Canvas *paramCanvas);

					  virtual int getOpacity();

					  virtual void setAlpha(int paramInt);

					  virtual void setColorFilter(ColorFilter *paramColorFilter);
					};
				}
			}
		}
	}
}

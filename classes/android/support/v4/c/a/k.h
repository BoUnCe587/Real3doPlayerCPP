#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace c
			{
				namespace a
				{

					using android::content::res::Resources;
					using android::graphics::Outline;
					using android::graphics::Rect;
					using android::graphics::drawable::Drawable;

					class k : public j
					{
				  public:
					  k(Drawable *paramDrawable);

					  virtual void applyTheme(Resources::Theme *paramTheme);

					  virtual bool canApplyTheme();

					  virtual Rect *getDirtyBounds();

					  virtual void getOutline(Outline *paramOutline);

					  virtual void setHotspot(float paramFloat1, float paramFloat2);

					  virtual void setHotspotBounds(int paramInt1, int paramInt2, int paramInt3, int paramInt4);
					};
				}
			}
		}
	}
}

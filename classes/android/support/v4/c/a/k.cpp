//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "k.h"

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

					k::k(Drawable *paramDrawable) : j(paramDrawable)
					{
					}

					void k::applyTheme(Resources::Theme *paramTheme)
					{
						this->b->applyTheme(paramTheme);
					}

					bool k::canApplyTheme()
					{
						return this->b->canApplyTheme();
					}

					Rect *k::getDirtyBounds()
					{
						return this->b->getDirtyBounds();
					}

					void k::getOutline(Outline *paramOutline)
					{
						this->b->getOutline(paramOutline);
					}

					void k::setHotspot(float paramFloat1, float paramFloat2)
					{
						this->b->setHotspot(paramFloat1, paramFloat2);
					}

					void k::setHotspotBounds(int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
						this->b->setHotspotBounds(paramInt1, paramInt2, paramInt3, paramInt4);
					}
				}
			}
		}
	}
}

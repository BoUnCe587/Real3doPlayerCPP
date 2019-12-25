//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"
#include "../a.h"
#include "a.h"
#include "k.h"
#include "c.h"

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
					using android::content::res::ColorStateList;
					using android::graphics::PorterDuff;
					using android::graphics::drawable::Drawable;

					Drawable *f::a(Drawable *paramDrawable)
					{
					  if (!(dynamic_cast<android::graphics::drawable::GradientDrawable*>(paramDrawable) != nullptr))
					  {
						Drawable *drawable = paramDrawable;
						return (dynamic_cast<android::graphics::drawable::DrawableContainer*>(paramDrawable) != nullptr) ? new k(paramDrawable) : drawable;
					  }
					  return new k(paramDrawable);
					}

					void f::a(Drawable *paramDrawable, float paramFloat1, float paramFloat2)
					{
						paramDrawable->setHotspot(paramFloat1, paramFloat2);
					}

					void f::a(Drawable *paramDrawable, int paramInt)
					{
					  if (dynamic_cast<k*>(paramDrawable) != nullptr)
					  {
						c::a(paramDrawable, paramInt);
						return;
					  }
					  paramDrawable->setTint(paramInt);
					}

					void f::a(Drawable *paramDrawable, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
						paramDrawable->setHotspotBounds(paramInt1, paramInt2, paramInt3, paramInt4);
					}

					void f::a(Drawable *paramDrawable, ColorStateList *paramColorStateList)
					{
					  if (dynamic_cast<k*>(paramDrawable) != nullptr)
					  {
						c::a(paramDrawable, paramColorStateList);
						return;
					  }
					  paramDrawable->setTintList(paramColorStateList);
					}

					void f::a(Drawable *paramDrawable, PorterDuff::Mode *paramMode)
					{
					  if (dynamic_cast<k*>(paramDrawable) != nullptr)
					  {
						c::a(paramDrawable, paramMode);
						return;
					  }
					  paramDrawable->setTintMode(paramMode);
					}
				}
			}
		}
	}
}

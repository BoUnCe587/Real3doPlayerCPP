//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"
#include "../a.h"
#include "a.h"
#include "h.h"
#include "g.h"

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

					Drawable *c::a(Drawable *paramDrawable)
					{
					  Drawable *drawable = paramDrawable;
					  if (!(dynamic_cast<h*>(paramDrawable) != nullptr))
					  {
						drawable = new h(paramDrawable);
					  }
					  return drawable;
					}

					void c::a(Drawable *paramDrawable, int paramInt)
					{
					  if (dynamic_cast<g*>(paramDrawable) != nullptr)
					  {
						(static_cast<g*>(paramDrawable))->setTint(paramInt);
					  }
					}

					void c::a(Drawable *paramDrawable, ColorStateList *paramColorStateList)
					{
					  if (dynamic_cast<g*>(paramDrawable) != nullptr)
					  {
						(static_cast<g*>(paramDrawable))->setTintList(paramColorStateList);
					  }
					}

					void c::a(Drawable *paramDrawable, PorterDuff::Mode *paramMode)
					{
					  if (dynamic_cast<g*>(paramDrawable) != nullptr)
					  {
						(static_cast<g*>(paramDrawable))->setTintMode(paramMode);
					  }
					}
				}
			}
		}
	}
}

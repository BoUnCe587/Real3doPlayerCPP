//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "../a.h"
#include "a.h"
#include "b.h"
#include "i.h"

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
					using android::graphics::drawable::Drawable;

					void d::a(Drawable *paramDrawable)
					{
						paramDrawable->jumpToCurrentState();
					}

					Drawable *d::b(Drawable *paramDrawable)
					{
					  Drawable *drawable = paramDrawable;
					  if (!(dynamic_cast<i*>(paramDrawable) != nullptr))
					  {
						drawable = new i(paramDrawable);
					  }
					  return drawable;
					}
				}
			}
		}
	}
}

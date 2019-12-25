//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "e.h"
#include "../a.h"
#include "a.h"
#include "b.h"
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
					using android::graphics::drawable::Drawable;

					void e::a(Drawable *paramDrawable, bool paramBoolean)
					{
						paramDrawable->setAutoMirrored(paramBoolean);
					}

					bool e::a(Drawable *paramDrawable)
					{
						return paramDrawable->isAutoMirrored();
					}

					Drawable *e::b(Drawable *paramDrawable)
					{
					  Drawable *drawable = paramDrawable;
					  if (!(dynamic_cast<j*>(paramDrawable) != nullptr))
					  {
						drawable = new j(paramDrawable);
					  }
					  return drawable;
					}
				}
			}
		}
	}
}

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
					using android::graphics::drawable::Drawable;

					j::j(Drawable *paramDrawable) : i(paramDrawable)
					{
					}

					bool j::isAutoMirrored()
					{
						return this->b->isAutoMirrored();
					}

					void j::setAutoMirrored(bool paramBoolean)
					{
						this->b->setAutoMirrored(paramBoolean);
					}
				}
			}
		}
	}
}

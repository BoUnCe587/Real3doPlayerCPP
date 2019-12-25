#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include "b.h"

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

					using android::graphics::drawable::Drawable;
					using android::view::Window;

					class f
					{
				  public:
					  virtual CharSequence *a() = 0;

					  virtual void a(int paramInt) = 0;

					  virtual void a(Drawable *paramDrawable) = 0;

					  virtual void a(Window::Callback *paramCallback) = 0;

					  virtual void a(CharSequence *paramCharSequence) = 0;

					  virtual void b(int paramInt) = 0;
					};
				}
			}
		}
	}
}

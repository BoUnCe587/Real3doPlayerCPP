//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "m.h"
#include "o.h"

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
					using android::content::Context;
					using android::content::ContextWrapper;
					using android::content::res::Resources;
					using android::graphics::drawable::Drawable;

					m::m(Context *paramContext) : android::content::ContextWrapper(paramContext)
					{
					}

					Context *m::a(Context *paramContext)
					{
					  m *m1 = paramContext;
					  if (!(dynamic_cast<m*>(paramContext) != nullptr))
					  {
						m1 = new m(paramContext);
					  }
					  return m1;
					}

					Resources *m::getResources()
					{
					  if (this->a_Renamed == nullptr)
					  {
						this->a_Renamed = new a(ContextWrapper::getResources(), o::a(this));
					  }
					  return this->a_Renamed;
					}

					m::a::a(Resources *param1Resources, o *param1o) : i(param1Resources), a(param1o)
					{
					}

					Drawable *m::a::getDrawable(int param1Int)
					{
					  Drawable *drawable = i::getDrawable(param1Int);
					  if (drawable != nullptr)
					  {
						this->a_Renamed->a(param1Int, drawable);
					  }
					  return drawable;
					}
				}
			}
		}
	}
}

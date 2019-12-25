//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"
#include "k.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::content::Context;
				using android::os::Build;
				using android::view::animation::Interpolator;
				using android::widget::Scroller;

				j::j(int paramInt, Context *paramContext, Interpolator *paramInterpolator)
				{
				  if (paramInt >= 14)
				  {
					this->b = new d();
				  }
				  else if (paramInt >= 9)
				  {
					this->b = new c();
				  }
				  else
				  {
					this->b = new b();
				  }
				  this->a_Renamed = this->b->a(paramContext, paramInterpolator);
				}

				j::j(Context *paramContext, Interpolator *paramInterpolator) : j(Build::VERSION::SDK_INT, paramContext, paramInterpolator)
				{
				}

				j *j::a(Context *paramContext)
				{
					return a(paramContext, nullptr);
				}

				j *j::a(Context *paramContext, Interpolator *paramInterpolator)
				{
					return new j(paramContext, paramInterpolator);
				}

				int j::a()
				{
					return this->b->a(this->a_Renamed);
				}

				void j::a(int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5, int paramInt6, int paramInt7, int paramInt8)
				{
					this->b->a(this->a_Renamed, paramInt1, paramInt2, paramInt3, paramInt4, paramInt5, paramInt6, paramInt7, paramInt8);
				}

				int j::b::a(void *param1Object)
				{
					return (static_cast<Scroller*>(param1Object))->getFinalY();
				}

				void *j::b::a(Context *param1Context, Interpolator *param1Interpolator)
				{
					return (param1Interpolator != nullptr) ? new Scroller(param1Context, param1Interpolator) : new Scroller(param1Context);
				}

				void j::b::a(void *param1Object, int param1Int1, int param1Int2, int param1Int3, int param1Int4, int param1Int5, int param1Int6, int param1Int7, int param1Int8)
				{
					(static_cast<Scroller*>(param1Object))->fling(param1Int1, param1Int2, param1Int3, param1Int4, param1Int5, param1Int6, param1Int7, param1Int8);
				}

				int j::c::a(void *param1Object)
				{
					return k::a(param1Object);
				}

				void *j::c::a(Context *param1Context, Interpolator *param1Interpolator)
				{
					return k::a(param1Context, param1Interpolator);
				}

				void j::c::a(void *param1Object, int param1Int1, int param1Int2, int param1Int3, int param1Int4, int param1Int5, int param1Int6, int param1Int7, int param1Int8)
				{
					k::a(param1Object, param1Int1, param1Int2, param1Int3, param1Int4, param1Int5, param1Int6, param1Int7, param1Int8);
				}
			}
		}
	}
}

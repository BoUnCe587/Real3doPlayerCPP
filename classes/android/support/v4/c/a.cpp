//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "a/i.h"
#include "a/j.h"
#include "a/c.h"
#include "a/k.h"
#include "a/b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace c
			{
				using android::graphics::Color;

				int a::a(int paramInt1, int paramInt2)
				{
				  int i = Color::alpha(paramInt2);
				  int j = Color::alpha(paramInt1);
				  int k = c(j, i);
				  return Color::argb(k, a(Color::red(paramInt1), j, Color::red(paramInt2), i, k), a(Color::green(paramInt1), j, Color::green(paramInt2), i, k), a(Color::blue(paramInt1), j, Color::blue(paramInt2), i, k));
				}

				int a::a(int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5)
				{
					return (paramInt5 == 0) ? 0 : ((paramInt1 * 255 * paramInt2 + paramInt3 * paramInt4 * (255 - paramInt2)) / paramInt5 * 255);
				}

				int a::b(int paramInt1, int paramInt2)
				{
				  if (paramInt2 < 0 || paramInt2 > 255)
				  {
					throw std::invalid_argument("alpha must be between 0 and 255.");
				  }
				  return 0xFFFFFF & paramInt1 | paramInt2 << 24;
				}

				int a::c(int paramInt1, int paramInt2)
				{
					return 255 - (255 - paramInt2) * (255 - paramInt1) / 255;
				}
			}
		}
	}
}

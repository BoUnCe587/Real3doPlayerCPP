//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace g
			{

std::vector<void*> const b::c = std::vector<void*>(0);

				int b::a(std::vector<int> &paramArrayOfInt, int paramInt1, int paramInt2)
				{
				  int i = 0;
				  int j = paramInt1 - 1;
				  paramInt1 = i;
				  i = j;
				  while (paramInt1 <= i)
				  {
					j = static_cast<int>(static_cast<unsigned int>(paramInt1 + i) >> 1);
					int k = paramArrayOfInt[j];
					if (k < paramInt2)
					{
					  paramInt1 = j + 1;
					  continue;
					}
					if (k > paramInt2)
					{
					  i = j - 1;
					  continue;
					}
					return j;
				  }
				  return paramInt1 ^ 0xFFFFFFFF;
				}

				bool b::a(void *paramObject1, void *paramObject2)
				{
					return (paramObject1 == paramObject2 || (paramObject1 != nullptr && paramObject1->equals(paramObject2)));
				}
			}
		}
	}
}

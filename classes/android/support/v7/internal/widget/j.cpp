//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"
#include "i.h"

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

					int j::a()
					{
						return this->a_Renamed;
					}

					void j::a(int paramInt1, int paramInt2)
					{
					  this->c_Renamed = paramInt1;
					  this->d_Renamed = paramInt2;
					  this->h = true;
					  if (this->g)
					  {
						if (paramInt2 != std::numeric_limits<int>::min())
						{
						  this->a_Renamed = paramInt2;
						}
						if (paramInt1 != std::numeric_limits<int>::min())
						{
						  this->b_Renamed = paramInt1;
						}
						return;
					  }
					  if (paramInt1 != std::numeric_limits<int>::min())
					  {
						this->a_Renamed = paramInt1;
					  }
					  if (paramInt2 != std::numeric_limits<int>::min())
					  {
						this->b_Renamed = paramInt2;
						return;
					  }
					}

					void j::a(bool paramBoolean)
					{
					  if (paramBoolean == this->g)
					  {
						return;
					  }
					  this->g = paramBoolean;
					  if (this->h)
					  {
						int i;
						if (paramBoolean)
						{
						  if (this->d_Renamed != std::numeric_limits<int>::min())
						  {
							i = this->d_Renamed;
						  }
						  else
						  {
							i = this->e;
						  }
						  this->a_Renamed = i;
						  if (this->c_Renamed != std::numeric_limits<int>::min())
						  {
							i = this->c_Renamed;
						  }
						  else
						  {
							i = this->f;
						  }
						  this->b_Renamed = i;
						  return;
						}
						if (this->c_Renamed != std::numeric_limits<int>::min())
						{
						  i = this->c_Renamed;
						}
						else
						{
						  i = this->e;
						}
						this->a_Renamed = i;
						if (this->d_Renamed != std::numeric_limits<int>::min())
						{
						  i = this->d_Renamed;
						}
						else
						{
						  i = this->f;
						}
						this->b_Renamed = i;
						return;
					  }
					  this->a_Renamed = this->e;
					  this->b_Renamed = this->f;
					}

					int j::b()
					{
						return this->b_Renamed;
					}

					void j::b(int paramInt1, int paramInt2)
					{
					  this->h = false;
					  if (paramInt1 != std::numeric_limits<int>::min())
					  {
						this->e = paramInt1;
						this->a_Renamed = paramInt1;
					  }
					  if (paramInt2 != std::numeric_limits<int>::min())
					  {
						this->f = paramInt2;
						this->b_Renamed = paramInt2;
					  }
					}

					int j::c()
					{
						return this->g ? this->b_Renamed : this->a_Renamed;
					}

					int j::d()
					{
						return this->g ? this->a_Renamed : this->b_Renamed;
					}
				}
			}
		}
	}
}

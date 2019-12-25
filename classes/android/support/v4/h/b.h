#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "u.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{


				class b
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static android::support::v4::h::a *const a_Renamed;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static b::StaticConstructor staticConstructor;


			  public:
				  virtual ~b()
				  {
					  delete b;
				  }

				  static int a(int paramInt1, int paramInt2);

			  public:
				  class a
				  {
				public:
					virtual int a(int param1Int1, int param1Int2) = 0;
				  };

			  public:
				  class b : public a
				  {
				public:
					virtual int a(int param1Int1, int param1Int2);
				  };

			  public:
				  class c : public a
				  {
				public:
					virtual int a(int param1Int1, int param1Int2);
				  };
				};

			}
		}
	}
}

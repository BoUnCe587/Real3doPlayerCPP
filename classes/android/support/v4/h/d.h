#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "u.h"
#include "b.h"
#include "c.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class b; } } } }
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{

				using android::view::ViewGroup;

				class d
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
								  static d::StaticConstructor staticConstructor;


			  public:
				  static int a(ViewGroup::MarginLayoutParams *paramMarginLayoutParams);

				  static int b(ViewGroup::MarginLayoutParams *paramMarginLayoutParams);

			  public:
				  class a
				  {
				public:
					virtual int a(ViewGroup::MarginLayoutParams *param1MarginLayoutParams) = 0;

					virtual int b(ViewGroup::MarginLayoutParams *param1MarginLayoutParams) = 0;
				  };

			  public:
				  class b : public a
				  {
				public:
					virtual int a(ViewGroup::MarginLayoutParams *param1MarginLayoutParams);

					int b(ViewGroup::MarginLayoutParams *param1MarginLayoutParams);
				  };

			  public:
				  class c : public a
				  {
				public:
					virtual int a(ViewGroup::MarginLayoutParams *param1MarginLayoutParams);

					virtual int b(ViewGroup::MarginLayoutParams *param1MarginLayoutParams);
				  };
				};
			}
		}
	}
}

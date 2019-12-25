#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "u.h"
#include "e.h"
#include "b.h"
#include "c.h"
#include "d.h"

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

				using android::view::ViewConfiguration;

				class s
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static e *const a_Renamed;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static s::StaticConstructor staticConstructor;


			  public:
				  static bool a(ViewConfiguration *paramViewConfiguration);

			  public:
				  class a : public e
				  {
				public:
					bool a(ViewConfiguration *param1ViewConfiguration);
				  };

			  public:
				  class b : public a
				  {
				  };

			  public:
				  class c : public b
				  {
				public:
					virtual bool a(ViewConfiguration *param1ViewConfiguration);
				  };

			  public:
				  class d : public c
				  {
				public:
					bool a(ViewConfiguration *param1ViewConfiguration) override;
				  };

			  public:
				  class e
				  {
				public:
					virtual bool a(ViewConfiguration *param1ViewConfiguration) = 0;
				  };
				};
			}
		}
	}
}

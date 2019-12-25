#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace 0f { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace 0.0f
			{


				class a
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  static a *const a_Renamed;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static a::StaticConstructor staticConstructor;


			  public:
				  static std::wstring a(Locale *paramLocale);

			  public:
				  class a
				  {
				public:
					virtual std::wstring a(Locale *param1Locale) = 0;
				  };

			  public:
				  class b : public a
				  {
				public:
					virtual std::wstring a(Locale *param1Locale);
				  };

			  public:
				  class c : public a
				  {
				public:
					virtual std::wstring a(Locale *param1Locale);
				  };

			  public:
				  class d : public a
				  {
				public:
					virtual std::wstring a(Locale *param1Locale);
				  };
				};

			}
		}
	}
}

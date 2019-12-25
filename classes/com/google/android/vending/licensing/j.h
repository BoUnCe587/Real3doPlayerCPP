#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "c.h"
#include "ILicensingService.h"
#include "b.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class h; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class a; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class b; } } } } }

namespace com
{
	namespace google
	{
		namespace android
		{
			namespace vending
			{
				namespace licensing
				{

					using android::content::SharedPreferences;

					class j
					{
				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  SharedPreferences *const a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  h *const b_Renamed;

					  SharedPreferences::Editor *c;

				  public:
					  virtual ~j()
					  {
						  delete a;
						  delete b;
						  delete c;
					  }

					  j(SharedPreferences *paramSharedPreferences, h *paramh);

					  virtual void a();

					  virtual void a(const std::wstring &paramString1, const std::wstring &paramString2);

					  virtual std::wstring b(const std::wstring &paramString1, const std::wstring &paramString2);
					};
				}
			}
		}
	}
}

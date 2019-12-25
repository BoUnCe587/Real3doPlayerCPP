#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"
#include "d.h"
#include "e.h"
#include "a.h"
#include "ILicensingService.h"
#include <string>
#include <stdexcept>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class i; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { namespace a { class b; } } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class a; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class e; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class k; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class d; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class c; } } } } }

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

					using a = com::google::android::vending::licensing::a::a;
					using b = com::google::android::vending::licensing::a::b;

					class f
					{
				  private:
					  i *const com;

					  e *const com;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  const int c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  const std::wstring d_Renamed;

					  const std::wstring e;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  b *const f_Renamed;

				  public:
					  virtual ~f()
					  {
						  delete com;
						  delete com;
						  delete f;
					  }

					  f(i *parami, b *paramb, e *parame, int paramInt, const std::wstring &paramString1, const std::wstring &paramString2);

				  private:
					  void com->google.android.vending.licensing.a::a(int paramInt);

					  void com->google.android.vending.licensing.a::a(int paramInt, k *paramk);

					  void d();

				  public:
					  virtual e *com->google.android.vending.licensing.a::a();

					  virtual void com->google.android.vending.licensing.a::a(PublicKey *paramPublicKey, int paramInt, const std::wstring &paramString1, const std::wstring &paramString2);

					  virtual int com->google.android.vending.licensing.a::b();

					  virtual std::wstring c();
					};
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "i.h"
#include "a.h"
#include "c.h"
#include "ILicensingService.h"
#include "b.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include <string>
#include <unordered_map>
#include "exceptionhelper.h"
#include "stringhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class j; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class h; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class a; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class b; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class c; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class d; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class k; } } } } }

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

					using android::content::Context;

					class l : public i
					{
				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  long long a_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  long long b_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  long long c_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  long long d_Renamed = 0;

					  long long e = 0LL;

					  int f = 0;

					  j *g;

				  public:
					  virtual ~l()
					  {
						  delete g;
					  }

					  l(Context *paramContext, h *paramh);

				  private:
					  void a(int paramInt);

					  void a(long long paramLong);

					  void a(const std::wstring &paramString);

					  void b(const std::wstring &paramString);

					  void c(const std::wstring &paramString);

					  std::unordered_map<std::wstring, std::wstring> d(const std::wstring &paramString);

				  public:
					  virtual void a(int paramInt, k *paramk);

					  virtual bool a();
					};
				}
			}
		}
	}
}

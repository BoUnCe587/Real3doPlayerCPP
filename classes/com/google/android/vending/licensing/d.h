#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include <string>
#include <vector>
#include <list>
#include <stdexcept>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class ILicensingService; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class i; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class f; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class a; } } } } }

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

					using android::content::ComponentName;
					using android::content::Context;
					using android::content::ServiceConnection;
					using android::os::Handler;
					using a = com::google::android::vending::licensing::a::a;
					using b = com::google::android::vending::licensing::a::b;

					class d : public ServiceConnection
					{
				  private:
					  static constexpr SecureRandom *com;

					  ILicensingService *com;

					  PublicKey *c;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  Context *const d_Renamed;

					  i *const e;

					  Handler *f;

					  const std::wstring g;

					  const std::wstring h;

					  Set<f*> *const i = std::unordered_set();

					  const std::list<f*> j = std::list();

				  public:
					  virtual ~d()
					  {
						  delete com;
						  delete c;
						  delete d;
						  delete e;
						  delete f;
						  delete i;
					  }

					  d(Context *paramContext, i *parami, const std::wstring &paramString);

				  private:
					  static std::wstring com->google.android.vending.licensing.a::a(Context *paramContext, const std::wstring &paramString);

					  static PublicKey *com->google.android.vending.licensing.a::a(const std::wstring &paramString);

					  void com->google.android.vending.licensing.a::a(f *paramf);

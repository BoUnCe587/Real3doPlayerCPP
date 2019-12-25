#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "c.h"
#include "a/a.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class c; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class a; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { namespace a { class a; } } } } } }

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

					using android::os::Binder;
					using android::os::IBinder;
					using android::os::IInterface;
					using android::os::Parcel;

					class ILicensingService : public IInterface
					{
				  public:
					  virtual void a(long long paramLong, const std::wstring &paramString, c *paramc) = 0;

					  class a : public Binder, public ILicensingService
					  {
					public:
						virtual ~a()
						{
							delete a;
						}

						static ILicensingService a(IBinder *param1IBinder);

						virtual bool onTransact(int param1Int1, Parcel *param1Parcel1, Parcel *param1Parcel2, int param1Int2);

					private:
						class a : public ILicensingService
						{
					  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  IBinder *a_Renamed;

					  public:
						  a(IBinder *param2IBinder);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  virtual void a_Renamed(long long param2Long, const std::wstring &param2String, c *param2c);

						  virtual IBinder *asBinder();
						};
					  };

					  class a : public ILicensingService
					  {
					private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						IBinder *a_Renamed;

					public:
						a(IBinder *param1IBinder);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(long long param1Long, const std::wstring &param1String, c *param1c);

						virtual IBinder *asBinder();
					  };
					};
				}
			}
		}
	}
}

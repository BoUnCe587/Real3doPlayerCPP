#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "ILicensingService.h"
#include "a/a.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
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

					class c : public IInterface
					{
				  public:
					  virtual void a(int paramInt, const std::wstring &paramString1, const std::wstring &paramString2) = 0;

					  class a : public Binder, public c
					  {
					public:
						virtual ~a()
						{
							delete a;
						}

						a();

						static c a(IBinder *param1IBinder);

						virtual IBinder *asBinder();

						virtual bool onTransact(int param1Int1, Parcel *param1Parcel1, Parcel *param1Parcel2, int param1Int2);

					private:
						class a : public c
						{
					  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  IBinder *a_Renamed;

					  public:
						  a(IBinder *param2IBinder);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  virtual void a_Renamed(int param2Int, const std::wstring &param2String1, const std::wstring &param2String2);

						  virtual IBinder *asBinder();
						};
					  };

					  class a : public c
					  {
					private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						IBinder *a_Renamed;

					public:
						a(IBinder *param1IBinder);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(int param1Int, const std::wstring &param1String1, const std::wstring &param1String2);

						virtual IBinder *asBinder();
					  };
					};
				}
			}
		}
	}
}

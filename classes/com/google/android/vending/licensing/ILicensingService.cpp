//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ILicensingService.h"

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

					ILicensingService a::a(IBinder *param1IBinder)
					{
					  if (param1IBinder == nullptr)
					  {
						return nullptr;
					  }
					  IInterface *iInterface = param1IBinder->queryLocalInterface(L"com.android.vending.licensing.ILicensingService");
					  return (iInterface != nullptr && dynamic_cast<ILicensingService*>(iInterface) != nullptr) ? static_cast<ILicensingService*>(iInterface): new a(param1IBinder);
					}

					bool a::onTransact(int param1Int1, Parcel *param1Parcel1, Parcel *param1Parcel2, int param1Int2)
					{
					  switch (param1Int1)
					  {
						default:
						  return Binder::onTransact(param1Int1, param1Parcel1, param1Parcel2, param1Int2);
						case 1598968902:
						  param1Parcel2->writeString(L"com.android.vending.licensing.ILicensingService");
						  return true;
						case 1:
						  break;
					  }
					  param1Parcel1->enforceInterface(L"com.android.vending.licensing.ILicensingService");
					  a_Renamed(param1Parcel1->readLong(), param1Parcel1->readString(), c::a::a(param1Parcel1->readStrongBinder()));
					  return true;
					}

					a::a::a(IBinder *param2IBinder)
					{
						this->a_Renamed = param2IBinder;
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(long long param2Long, const std::wstring &param2String, c *param2c)
					{
					  std::wstring str = L"";
					  parcel = Parcel::obtain();
					  try
					  {
						IBinder *iBinder;
						parcel::writeInterfaceToken(L"com.android.vending.licensing.ILicensingService");
						parcel::writeLong(param2Long);
						parcel::writeString(param2String);
						param2String = str;
						if (param2c != nullptr)
						{
						  iBinder = param2c->asBinder();
						}
						parcel::writeStrongBinder(iBinder);
						this->a_Renamed->transact(1, parcel, nullptr, 1);
						return;
					  }
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
					  finally
					  {
						parcel::recycle();
					  }
					}

					IBinder *a::a::asBinder()
					{
						return this->a_Renamed;
					}

					a::a(IBinder *param1IBinder)
					{
						this->a_Renamed = param1IBinder;
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(long long param1Long, const std::wstring &param1String, c *param1c)
					{
					  std::wstring str = L"";
					  parcel = Parcel::obtain();
					  try
					  {
						IBinder *iBinder;
						parcel::writeInterfaceToken(L"com.android.vending.licensing.ILicensingService");
						parcel::writeLong(param1Long);
						parcel::writeString(param1String);
						param1String = str;
						if (param1c != nullptr)
						{
						  iBinder = param1c->asBinder();
						}
						parcel::writeStrongBinder(iBinder);
						this->a_Renamed->transact(1, parcel, nullptr, 1);
						return;
					  }
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
					  finally
					  {
						parcel::recycle();
					  }
					}

					IBinder *a::asBinder()
					{
						return this->a_Renamed;
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"

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

					a::a()
					{
						attachInterface(this, L"com.android.vending.licensing.ILicenseResultListener");
					}

					c a::a(IBinder *param1IBinder)
					{
					  if (param1IBinder == nullptr)
					  {
						return nullptr;
					  }
					  IInterface *iInterface = param1IBinder->queryLocalInterface(L"com.android.vending.licensing.ILicenseResultListener");
					  return (iInterface != nullptr && dynamic_cast<c*>(iInterface) != nullptr) ? static_cast<c*>(iInterface): new a(param1IBinder);
					}

					IBinder *a::asBinder()
					{
						return this;
					}

					bool a::onTransact(int param1Int1, Parcel *param1Parcel1, Parcel *param1Parcel2, int param1Int2)
					{
					  switch (param1Int1)
					  {
						default:
						  return Binder::onTransact(param1Int1, param1Parcel1, param1Parcel2, param1Int2);
						case 1598968902:
						  param1Parcel2->writeString(L"com.android.vending.licensing.ILicenseResultListener");
						  return true;
						case 1:
						  break;
					  }
					  param1Parcel1->enforceInterface(L"com.android.vending.licensing.ILicenseResultListener");
					  a_Renamed(param1Parcel1->readInt(), param1Parcel1->readString(), param1Parcel1->readString());
					  return true;
					}

					a::a::a(IBinder *param2IBinder)
					{
						this->a_Renamed = param2IBinder;
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(int param2Int, const std::wstring &param2String1, const std::wstring &param2String2)
					{
					  parcel = Parcel::obtain();
					  try
					  {
						parcel::writeInterfaceToken(L"com.android.vending.licensing.ILicenseResultListener");
						parcel::writeInt(param2Int);
						parcel::writeString(param2String1);
						parcel::writeString(param2String2);
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
					void a::a_Renamed(int param1Int, const std::wstring &param1String1, const std::wstring &param1String2)
					{
					  parcel = Parcel::obtain();
					  try
					  {
						parcel::writeInterfaceToken(L"com.android.vending.licensing.ILicenseResultListener");
						parcel::writeInt(param1Int);
						parcel::writeString(param1String1);
						parcel::writeString(param1String2);
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

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"
#include "i.h"
#include "a/b.h"
#include "k.h"

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
					using android::text::TextUtils;
					using android::util::Log;
					using a = com::google::android::vending::licensing::a::a;
					using b = com::google::android::vending::licensing::a::b;

					f::f(i *parami, b *paramb, e *parame, int paramInt, const std::wstring &paramString1, const std::wstring &paramString2) : c(paramInt), d(paramString1), e(paramString2), f(paramb)
					{
					  this->a = parami;
					  this->b = parame;
					}

					void f::com->google.android.vending.licensing.a::a(int paramInt)
					{
						this->b.c(paramInt);
					}

					void f::com->google.android.vending.licensing.a::a(int paramInt, k *paramk)
					{
					  this->a.a(paramInt, paramk);
					  if (this->a.a())
					  {
						this->b.a(paramInt);
						return;
					  }
					  this->b.b(paramInt);
					}

					void f::d()
					{
						this->b.b(561);
					}

					e *f::com->google.android.vending.licensing.a::a()
					{
						return this->b;
					}

					void f::com->google.android.vending.licensing.a::a(PublicKey *paramPublicKey, int paramInt, const std::wstring &paramString1, const std::wstring &paramString2)
					{
					  Signature *signature1;
					  Signature *signature2 = nullptr;
					  if (paramString1 == L"")
					  {
						com->google.android.vending.licensing.a::a(7);
						return;
					  }
					  if (paramInt == 0 || paramInt == 1 || paramInt == 2)
					  {
						try
						{
						  signature2 = Signature::getInstance(L"SHA1withRSA");
						  signature2->initVerify(paramPublicKey);
						  signature2->update(paramString1.getBytes());
						  signature2->verify(com->google.android.vending.licensing.a::a::a(paramString2));
						  if (!true)
						  {
							Log::e(L"LicenseValidator", L"Signature verification failed.");
							d();
							return;
						  }
						}
						catch (const NoSuchAlgorithmException &paramPublicKey)
						{
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException(paramPublicKey);
						  throw std::exception();
						}
						catch (const InvalidKeyException &paramPublicKey)
						{
						  com->google.android.vending.licensing.a::a(5);
						  return;
						}
						catch (const SignatureException &paramPublicKey)
						{
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException(paramPublicKey);
						  throw std::exception();
						}
						catch (const b &paramPublicKey)
						{
						  Log::e(L"LicenseValidator", L"Could not Base64-decode signature.");
						  d();
						  return;
						}
						try
						{
						  signature1 = k::a(paramString1);
						  if (signature1->a != paramInt)
						  {
							Log::e(L"LicenseValidator", L"Response codes don't match.");
							d();
							return;
						  }
						}
						catch (const std::invalid_argument &paramPublicKey)
						{
						  Log::e(L"LicenseValidator", L"Could not parse response.");
						  d();
						  return;
						}
						if (signature1->b != this->c_Renamed)
						{
						  Log::e(L"LicenseValidator", L"Nonce doesn't match.");
						  d();
						  return;
						}
						if (!signature1->c.equals(this->d_Renamed))
						{
						  Log::e(L"LicenseValidator", L"Package name doesn't match.");
						  d();
						  return;
						}
						if (!signature1->d.equals(this->e))
						{
						  Log::e(L"LicenseValidator", L"Version codes don't match.");
						  d();
						  return;
						}
						paramString2 = signature1->e;
						std::wstring str = paramString2;
						if (TextUtils->isEmpty(paramString2))
						{
						  Log::e(L"LicenseValidator", L"User identifier is empty.");
						  d();
						  return;
						}
					  }
					  else
					  {
						paramPublicKey = nullptr;
						signature1 = signature2;
					  }
					  switch (paramInt)
					  {
						default:
						  Log::e(L"LicenseValidator", L"Unknown response code for license check.");
						  d();
						  return;
						case 0:
						case 1:
						  com->google.android.vending.licensing.a::a(this->f_Renamed->a(paramPublicKey), signature1);
						  return;
						case 2:
						  com->google.android.vending.licensing.a::a(561, signature1);
						  return;
						case 257:
						  Log::w(L"LicenseValidator", L"Error contacting licensing server.");
						  com->google.android.vending.licensing.a::a(291, signature1);
						  return;
						case 4:
						  Log::w(L"LicenseValidator", L"An error has occurred on the licensing server.");
						  com->google.android.vending.licensing.a::a(291, signature1);
						  return;
						case 5:
						  Log::w(L"LicenseValidator", L"Licensing server is refusing to talk to this device, over quota.");
						  com->google.android.vending.licensing.a::a(291, signature1);
						  return;
						case 258:
						  com->google.android.vending.licensing.a::a(1);
						  return;
						case 259:
						  com->google.android.vending.licensing.a::a(2);
						  return;
						case 3:
						  break;
					  }
					  com->google.android.vending.licensing.a::a(3);
					}

					int f::com->google.android.vending.licensing.a::b()
					{
						return this->c_Renamed;
					}

					std::wstring f::c()
					{
						return this->d_Renamed;
					}
				}
			}
		}
	}
}

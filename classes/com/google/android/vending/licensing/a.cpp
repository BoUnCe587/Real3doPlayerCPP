//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "a/b.h"
#include "m.h"

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

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					internal *a::com.google::android::vending::licensing::a->a(std::vector<char> &paramArrayOfByte, const std::wstring &paramString1, const std::wstring &paramString2)
					{
					  try
					  {
						PBEKeySpec tempVar((paramString1 + paramString2).toCharArray(), paramArrayOfByte, 1024, 256);
						SecretKeySpec *secretKeySpec = new SecretKeySpec(SecretKeyFactory::getInstance(L"PBEWITHSHAAND256BITAES-CBC-BC").generateSecret(&tempVar).getEncoded(), L"AES");
						this->b = Cipher::getInstance(L"AES/CBC/PKCS5Padding");
						IvParameterSpec tempVar2(com.google::android::vending::licensing::a->a);
						this->b.init(1, secretKeySpec, &tempVar2);
						this->c = Cipher::getInstance(L"AES/CBC/PKCS5Padding");
						IvParameterSpec tempVar3(com.google::android::vending::licensing::a->a);
						this->c->init(2, secretKeySpec, &tempVar3);
						return;
					  }
					  catch (const GeneralSecurityException &paramArrayOfByte)
					  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException("Invalid environment", paramArrayOfByte);
						throw std::exception();
					  }
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					std::wstring a::com.google::android::vending::licensing::a->a(const std::wstring &paramString1, const std::wstring &paramString2)
					{
					  if (paramString1 == L"")
					  {
						return L"";
					  }
					  try
					  {
						return com.google::android::vending::licensing::a->a::a(this->b.doFinal((L"com.android.vending.licensing.AESObfuscator-1|" + paramString2 + paramString1)->getBytes(L"UTF-8")));
					  }
					  catch (const UnsupportedEncodingException &paramString1)
					  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException("Invalid environment", paramString1);
						throw std::exception();
					  }
					  catch (const GeneralSecurityException &paramString1)
					  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException("Invalid environment", paramString1);
						throw std::exception();
					  }
					}

					std::wstring a::com.google::android::vending::licensing::a->b(const std::wstring &paramString1, const std::wstring &paramString2)
					{
					  if (paramString1 == L"")
					  {
						return L"";
					  }
					  try
					  {
						std::wstring str = std::wstring(this->c->doFinal(com.google::android::vending::licensing::a->a::a(paramString1)), L"UTF-8");
						if ((int)str.find(L"com.android.vending.licensing.AESObfuscator-1|" + paramString2) != 0)
						{
						  throw m(L"Header not found (invalid data or key):" + paramString1);
						}
						return str.substr((std::wstring(L"com.android.vending.licensing.AESObfuscator-1|")).length() + paramString2.length(), str.length() - ((std::wstring(L"com.android.vending.licensing.AESObfuscator-1|")).length() + paramString2.length()));
					  }
					  catch (const b &paramString2)
					  {
						throw m(paramString2.getMessage() + L":" + paramString1);
					  }
					  catch (const IllegalBlockSizeException &paramString2)
					  {
						throw m(paramString2.getMessage() + L":" + paramString1);
					  }
					  catch (const BadPaddingException &paramString2)
					  {
						throw m(paramString2.getMessage() + L":" + paramString1);
					  }
					  catch (const UnsupportedEncodingException &paramString1)
					  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException("Invalid environment", paramString1);
						throw std::exception();
					  }
					}
				}
			}
		}
	}
}

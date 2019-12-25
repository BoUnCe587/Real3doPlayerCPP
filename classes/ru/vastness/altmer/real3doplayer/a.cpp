//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"

namespace ru
{
	namespace vastness
	{
		namespace altmer
		{
			namespace real3doplayer
			{
				using android::content::Context;
				using android::content::SharedPreferences;
				using android::util::Base64;

				a::a(Context *paramContext, const std::wstring &paramString1, const std::wstring &paramString2, bool paramBoolean) : a(paramBoolean), d((this->c_Renamed = (this->b_Renamed = Cipher::getInstance(L"AES/CBC/PKCS5Padding")).getInstance(L"AES/CBC/PKCS5Padding")).getInstance(L"AES/ECB/PKCS5Padding")), e(paramContext->getSharedPreferences(paramString1, 0))
				{
				  try
				  {
					a_Renamed(paramString2);
					return;
				  }
				  catch (const GeneralSecurityException &paramContext)
				  {
					throw a(paramContext);
				  }
				  catch (const UnsupportedEncodingException &paramContext)
				  {
					throw a(paramContext);
				  }
				}

				char[] a::a(Cipher *paramCipher, std::vector<char> &paramArrayOfByte)
				{
				  try
				  {
					return paramCipher->doFinal(paramArrayOfByte);
				  }
				  catch (const std::exception &paramCipher)
				  {
					throw a(paramCipher);
				  }
				}

				void a::b(const std::wstring &paramString1, const std::wstring &paramString2)
				{
				  paramString2 = a(paramString2, this->b_Renamed);
				  this->e_Renamed->edit().putString(paramString1, paramString2).commit();
				}

				std::wstring a::h(const std::wstring &paramString)
				{
				  std::wstring str = paramString;
				  if (this->a_Renamed)
				  {
					str = a(paramString, this->d_Renamed);
				  }
				  return str;
				}

				std::wstring a::a(const std::wstring &paramString, Cipher *paramCipher)
				{
				  try
				  {
					std::vector<char> arrayOfByte = a(paramCipher, paramString.getBytes(L"UTF-8"));
					return Base64::encodeToString(arrayOfByte, 2);
				  }
				  catch (const UnsupportedEncodingException &paramString)
				  {
					throw a(paramString);
				  }
				}

				IvParameterSpec a::a()
				{
				  std::vector<char> arrayOfByte(this->b_Renamed->getBlockSize());
				  System::arraycopy((std::wstring(L"fldsjfodasjifudslfjdsaofshaufihadsf")).getBytes(), 0, arrayOfByte, 0, this->b_Renamed->getBlockSize());
				  return new IvParameterSpec(arrayOfByte);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a_Renamed(const std::wstring &paramString)
				{
				  IvParameterSpec *ivParameterSpec = a();
				  SecretKeySpec *secretKeySpec = b(paramString);
				  this->b_Renamed->init(1, secretKeySpec, ivParameterSpec);
				  this->c_Renamed->init(2, secretKeySpec, ivParameterSpec);
				  this->d_Renamed->init(1, secretKeySpec);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a_Renamed(const std::wstring &paramString1, const std::wstring &paramString2)
				{
				  if (paramString2 == L"")
				  {
					this->e_Renamed->edit()->remove(h(paramString1)).commit();
					return;
				  }
				  b(h(paramString1), paramString2);
				}

				SecretKeySpec *a::b(const std::wstring &paramString)
				{
					return new SecretKeySpec(c(paramString), L"AES/CBC/PKCS5Padding");
				}

				void a::b()
				{
					this->e_Renamed->edit()->clear().commit();
				}

				std::vector<char> a::c(const std::wstring &paramString)
				{
				  MessageDigest *messageDigest = MessageDigest::getInstance(L"SHA-256");
				  messageDigest->reset();
				  return messageDigest->digest(paramString.getBytes(L"UTF-8"));
				}

				bool a::d(const std::wstring &paramString)
				{
					return this->e_Renamed->contains(h(paramString));
				}

				void a::e(const std::wstring &paramString)
				{
					this->e_Renamed->edit()->remove(h(paramString)).commit();
				}

				std::wstring a::f(const std::wstring &paramString)
				{
					return this->e_Renamed->contains(h(paramString)) ? g(this->e_Renamed->getString(h(paramString), L"")) : L"";
				}

				std::wstring a::g(const std::wstring &paramString)
				{
				  arrayOfByte = Base64::decode(paramString, 2);
				  arrayOfByte = a(this->c_Renamed, arrayOfByte);
				  try
				  {
					return std::wstring(arrayOfByte, L"UTF-8");
				  }
				  catch (const UnsupportedEncodingException &arrayOfByte)
				  {
					throw a(arrayOfByte);
				  }
				}

				a::a::a(std::exception param1Throwable) : RuntimeException(param1Throwable)
				{
				}
			}
		}
	}
}

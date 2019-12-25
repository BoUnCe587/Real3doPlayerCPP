#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include <string>
#include <vector>
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace ru { namespace vastness { namespace altmer { namespace real3doplayer { class a; } } } }

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

				class a
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  const bool a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Cipher *const b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Cipher *const c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Cipher *const d_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  SharedPreferences *const e_Renamed;

			  public:
				  virtual ~a()
				  {
					  delete b;
					  delete c;
					  delete d;
					  delete e;
				  }

				  a(Context *paramContext, const std::wstring &paramString1, const std::wstring &paramString2, bool paramBoolean);

			  private:
				  static char[] a(Cipher *paramCipher, std::vector<char> &paramArrayOfByte);

				  void b(const std::wstring &paramString1, const std::wstring &paramString2);

				  std::wstring h(const std::wstring &paramString);

			  protected:
				  std::wstring a(const std::wstring &paramString, Cipher *paramCipher);

				  IvParameterSpec a();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void a_Renamed(const std::wstring &paramString);

			  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void a_Renamed(const std::wstring &paramString1, const std::wstring &paramString2);

			  protected:
				  virtual SecretKeySpec *b(const std::wstring &paramString);

			  public:
				  virtual void b();

			  protected:
				  virtual std::vector<char> c(const std::wstring &paramString);

			  public:
				  virtual bool d(const std::wstring &paramString);

				  virtual void e(const std::wstring &paramString);

				  virtual std::wstring f(const std::wstring &paramString);

			  protected:
				  virtual std::wstring g(const std::wstring &paramString);

			  public:
				  class a : public std::exception
				  {
				public:
					a(std::exception param1Throwable);
				  };
				};
			}
		}
	}
}

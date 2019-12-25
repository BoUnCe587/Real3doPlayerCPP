#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "h.h"
#include "c.h"
#include <string>
#include <vector>
#include <stdexcept>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace com { namespace google { namespace android { namespace vending { namespace licensing { namespace a { class b; } } } } } }

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

					class a : public h
					{
				  private:
					  static std::vector<char> const com;

					  Cipher *com;

					  Cipher *c;

				  public:
					  virtual ~a()
					  {
						  delete com;
						  delete c;
						  delete a;
						  delete a;
					  }

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual internal *com.google::android::vending::licensing::a->a(std::vector<char> &paramArrayOfByte, const std::wstring &paramString1, const std::wstring &paramString2);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual std::wstring com.google::android::vending::licensing::a->a(const std::wstring &paramString1, const std::wstring &paramString2);

					  virtual std::wstring com.google::android::vending::licensing::a->b(const std::wstring &paramString1, const std::wstring &paramString2);
					};
				}
			}
		}
	}
}

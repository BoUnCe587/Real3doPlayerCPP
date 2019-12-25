//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"
#include "h.h"
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
					using android::content::SharedPreferences;
					using android::util::Log;

					j::j(SharedPreferences *paramSharedPreferences, h *paramh) : a(paramSharedPreferences), b(paramh)
					{
					  this->c = nullptr;
					}

					void j::a()
					{
					  if (this->c != nullptr)
					  {
						this->c->commit();
						this->c = nullptr;
					  }
					}

					void j::a(const std::wstring &paramString1, const std::wstring &paramString2)
					{
					  if (this->c == nullptr)
					  {
						this->c = this->a_Renamed->edit();
					  }
					  paramString2 = this->b_Renamed->a(paramString2, paramString1);
					  this->c->putString(paramString1, paramString2);
					}

					std::wstring j::b(const std::wstring &paramString1, const std::wstring &paramString2)
					{
					  std::wstring str2 = this->a_Renamed->getString(paramString1, nullptr);
					  str1 = paramString2;
					  if (str2 != L"")
					  {
						try
						{
						  return this->b_Renamed->b(str2, paramString1);
						}
						catch (const m &str1)
						{
						  Log::w(L"PreferenceObfuscator", L"Validation error while reading preference: " + paramString1);
						  return paramString2;
						}
					  }
					  return str1;
					}
				}
			}
		}
	}
}

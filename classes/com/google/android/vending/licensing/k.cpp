//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "k.h"
#include "i.h"

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

					k *k::a(const std::wstring &paramString)
					{
					  std::wstring str;
					  int i = (int)paramString.find(L':');
					  if (-1 == i)
					  {
						std::wstring str1 = L"";
						str = paramString;
						paramString = str1;
					  }
					  else
					  {
						str = paramString.substr(0, i);
						if (i >= paramString.length())
						{
						  paramString = L"";
						}
						else
						{
						  paramString = paramString.substr(i + 1);
						}
					  }
					  std::vector<std::wstring> arrayOfString = TextUtils->split(str, Pattern::quote(L"|"));
					  if (arrayOfString.size() < 6)
					  {
						throw std::invalid_argument("Wrong number of fields.");
					  }
					  k *k1 = new k();
					  k1->g = paramString;
					  k1->a_Renamed = std::stoi(arrayOfString[0]);
					  k1->b = std::stoi(arrayOfString[1]);
					  k1->c = arrayOfString[2];
					  k1->d = arrayOfString[3];
					  k1->e = arrayOfString[4];
					  k1.0f = StringHelper::fromString<long long>(arrayOfString[5]);
					  return k1;
					}

					std::wstring k::toString()
					{
						return TextUtils::join(L"|", std::vector<void*> {static_cast<Integer>(this->a_Renamed), static_cast<Integer>(this->b), this->c, this->d, this->e, static_cast<long long>(this->f)});
					}
				}
			}
		}
	}
}

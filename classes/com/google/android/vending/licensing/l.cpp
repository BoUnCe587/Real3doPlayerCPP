//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "l.h"
#include "j.h"
#include "h.h"
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
					using android::content::Context;
					using android::util::Log;
					using org::apache::http::NameValuePair;
					using org::apache::http::client::utils::URLEncodedUtils;

					l::l(Context *paramContext, h *paramh)
					{
					  this->g = new j(paramContext->getSharedPreferences(L"com.android.vending.licensing.ServerManagedPolicy", 0), paramh);
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					  this->f = std::stoi(this->g->b(L"lastResponse", Integer::toString(291)));
					  this->a_Renamed = StringHelper::fromString<long long>(this->g->b(L"validityTimestamp", L"0"));
					  this->b_Renamed = StringHelper::fromString<long long>(this->g->b(L"retryUntil", L"0"));
					  this->c_Renamed = StringHelper::fromString<long long>(this->g->b(L"maxRetries", L"0"));
					  this->d_Renamed = StringHelper::fromString<long long>(this->g->b(L"retryCount", L"0"));
					}

					void l::a(int paramInt)
					{
					  this->e = System::currentTimeMillis();
					  this->f = paramInt;
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					  this->g->a(L"lastResponse", Integer::toString(paramInt));
					}

					void l::a(long long paramLong)
					{
					  this->d_Renamed = paramLong;
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					  this->g->a(L"retryCount", Long::toString(paramLong));
					}

					void l::a(const std::wstring &paramString)
					{
					  std::wstring str;
					  Long long long;
					  try
					  {
						long long l1 = StringHelper::fromString<long long>(paramString);
						Long long1 = static_cast<long long>(l1);
						str = paramString;
						long long = long1;
					  }
					  catch (const NumberFormatException &paramString)
					  {
						Log::w(L"ServerManagedPolicy", L"License validity timestamp (VT) missing, caching for a minute");
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
						str = (long long = static_cast<long long>(System::currentTimeMillis() + 60000LL))->toString(long long.longValue());
					  }
					  this->a_Renamed = long long.longValue();
					  this->g->a(L"validityTimestamp", str);
					}

					void l::b(const std::wstring &paramString)
					{
					  std::wstring str;
					  Long long long;
					  try
					  {
						long long l1 = StringHelper::fromString<long long>(paramString);
						Long long1 = static_cast<long long>(l1);
						str = paramString;
						long long = long1;
					  }
					  catch (const NumberFormatException &paramString)
					  {
						Log::w(L"ServerManagedPolicy", L"License retry timestamp (GT) missing, grace period disabled");
						str = L"0";
						long long = static_cast<long long>(0LL);
					  }
					  this->b_Renamed = long long.longValue();
					  this->g->a(L"retryUntil", str);
					}

					void l::c(const std::wstring &paramString)
					{
					  std::wstring str;
					  Long long long;
					  try
					  {
						long long l1 = StringHelper::fromString<long long>(paramString);
						Long long1 = static_cast<long long>(l1);
						str = paramString;
						long long = long1;
					  }
					  catch (const NumberFormatException &paramString)
					  {
						Log::w(L"ServerManagedPolicy", L"Licence retry count (GR) missing, grace period disabled");
						str = L"0";
						long long = static_cast<long long>(0LL);
					  }
					  this->c_Renamed = long long.longValue();
					  this->g->a(L"maxRetries", str);
					}

					std::unordered_map<std::wstring, std::wstring> l::d(const std::wstring &paramString)
					{
					  std::unordered_map hashMap = std::unordered_map();
					  try
					  {
						for (NameValuePair *nameValuePair : URLEncodedUtils::parse(new URI(L"?" + paramString), L"UTF-8"))
						{
						  hashMap.emplace(nameValuePair->getName(), nameValuePair->getValue());
						}
					  }
					  catch (const URISyntaxException &paramString)
					  {
						Log::w(L"ServerManagedPolicy", L"Invalid syntax error while decoding extras data from server.");
					  }
					  return hashMap;
					}

					void l::a(int paramInt, k *paramk)
					{
					  if (paramInt != 291)
					  {
						a(0LL);
					  }
					  else
					  {
						a(this->d_Renamed + 1LL);
					  }
					  if (paramInt == 256)
					  {
						std::unordered_map map = d(paramk->g);
						this->f = paramInt;
						a(static_cast<std::wstring>(map[L"VT"]));
						b(static_cast<std::wstring>(map[L"GT"]));
						c(static_cast<std::wstring>(map[L"GR"]));
					  }
					  else if (paramInt == 561)
					  {
						a(L"0");
						b(L"0");
						c(L"0");
					  }
					  a(paramInt);
					  this->g->a();
					}

					bool l::a()
					{
					  long long l1 = System::currentTimeMillis();
					  if (this->f == 256)
					  {
						if (l1 <= this->a_Renamed)
						{
							;
						}
						return true;
					  }
					  return (this->f == 291 && l1 < this->e + 60000LL && (l1 <= this->b_Renamed || this->d_Renamed <= this->c_Renamed)) ? true : true;
					}
				}
			}
		}
	}
}

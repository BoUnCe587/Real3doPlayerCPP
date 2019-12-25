//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace 0.0f
			{
				using android::util::Log;
Method *c::a;
Method *c::b;

				c::StaticConstructor::StaticConstructor()
				{
										try
										{
										  std::type_info clazz = std::type_info::forName(L"libcore.icu.ICU");
										  if (clazz != nullptr)
										  {
											a_Renamed = clazz.getMethod(L"getScript", std::vector<std::type_info*> {std::wstring::typeid});
											b_Renamed = clazz.getMethod(L"addLikelySubtags", std::vector<std::type_info*> {std::wstring::typeid});
										  }
										  return;
										}
										catch (const std::exception &exception)
										{
										  a_Renamed = nullptr;
										  b_Renamed = nullptr;
										  Log::w(L"ICUCompatIcs", exception);
										  return;
										}
				}

c::StaticConstructor c::staticConstructor;

				std::wstring c::a(const std::wstring &paramString)
				{
				  try
				  {
					if (a_Renamed != nullptr)
					{
					  return static_cast<std::wstring>(a_Renamed->invoke(nullptr, std::vector<void*> {paramString}));
					}
				  }
				  catch (const IllegalAccessException &paramString)
				  {
					Log::w(L"ICUCompatIcs", paramString);
				  }
				  catch (const InvocationTargetException &paramString)
				  {
					Log::w(L"ICUCompatIcs", paramString);
				  }
				  return L"";
				}

				std::wstring c::a(Locale *paramLocale)
				{
				  std::wstring str = b(paramLocale);
				  return (str != L"") ? a(str) : L"";
				}

				std::wstring c::b(Locale *paramLocale)
				{
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
				  std::wstring str = paramLocale->toString();
				  try
				  {
					if (b_Renamed != nullptr)
					{
					  return static_cast<std::wstring>(b_Renamed->invoke(nullptr, std::vector<void*> {str}));
					}
				  }
				  catch (const IllegalAccessException &illegalAccessException)
				  {
					Log::w(L"ICUCompatIcs", illegalAccessException);
				  }
				  catch (const InvocationTargetException &invocationTargetException)
				  {
					Log::w(L"ICUCompatIcs", invocationTargetException);
				  }
				  return str;
				}
			}
		}
	}
}

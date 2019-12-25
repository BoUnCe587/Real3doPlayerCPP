//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace 0.0f
			{
				using android::util::Log;
Method *b::a;

				b::StaticConstructor::StaticConstructor()
				{
										try
										{
										  a_Renamed = std::type_info::forName(L"libcore.icu.ICU").getMethod(L"addLikelySubtags", std::vector<std::type_info*> {Locale::typeid});
										  return;
										}
										catch (const std::exception &exception)
										{
										  throw IllegalStateException(exception);
										}
				}

b::StaticConstructor b::staticConstructor;

				std::wstring b::a(Locale *paramLocale)
				{
				  try
				  {
					return (static_cast<Locale*>(a_Renamed->invoke(nullptr, std::vector<void*> {paramLocale})))->getScript();
				  }
				  catch (const InvocationTargetException &invocationTargetException)
				  {
					Log::w(L"ICUCompatIcs", invocationTargetException);
				  }
				  catch (const IllegalAccessException &illegalAccessException)
				  {
					Log::w(L"ICUCompatIcs", illegalAccessException);
				  }
				  return paramLocale->getScript();
				}
			}
		}
	}
}

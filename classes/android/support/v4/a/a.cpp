//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace a
			{
				using android::app::Activity;
				using android::content::pm::PackageManager;
				using android::os::Build;
				using android::os::Handler;
				using android::os::Looper;
				using a = android::support::v4::b::a;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a(Activity *paramActivity, std::vector<std::wstring> &paramArrayOfString, int paramInt)
				{
				  if (Build::VERSION::SDK_INT >= 23)
				  {
					b::a(paramActivity, paramArrayOfString, paramInt);
					return;
				  }
				  if (dynamic_cast<a*>(paramActivity) != nullptr)
				  {
					Handler tempVar(Looper::getMainLooper());
					(&tempVar)->post([&] ()
					{
						std::vector<int> arrayOfInt(this->a->length);
						PackageManager *packageManager = this->b.getPackageManager();
						std::wstring str = this->b.getPackageName();
						int i = this->a->length;
						for (char b1 = 0; b1 < i; b1++)
						{
						  arrayOfInt[b1] = packageManager->checkPermission(this->a[b1], str);
						}
						(static_cast<a::a*>(this->b))->a(this->c, this->a, arrayOfInt);
					}
					   );
					return;
				  }
				}
			}
		}
	}
}

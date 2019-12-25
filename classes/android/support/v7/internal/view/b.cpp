//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "../../b/a.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{
					using android::content::Context;
					using android::content::ContextWrapper;
					using android::content::res::Resources;
					using a = android::support::v7::b::a;
					using android::view::LayoutInflater;

					b::b(Context *paramContext, int paramInt) : android.content::ContextWrapper(paramContext)
					{
					  this->a = paramInt;
					}

					b::b(Context *paramContext, Resources::Theme *paramTheme) : android.content::ContextWrapper(paramContext)
					{
					  this->b_Renamed = paramTheme;
					}

					void b::android.support::v7::b::a()
					{
					  bool bool_Renamed;
					  if (this->b_Renamed == nullptr)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  if (bool_Renamed)
					  {
						this->b_Renamed = getResources().newTheme();
						Resources::Theme *theme = getBaseContext().getTheme();
						if (theme != nullptr)
						{
						  this->b_Renamed->setTo(theme);
						}
					  }
					  android.support::v7::b::a(this->b_Renamed, this->a, bool_Renamed);
					}

					void b::android.support::v7::b::a(Resources::Theme *paramTheme, int paramInt, bool paramBoolean)
					{
						paramTheme->applyStyle(paramInt, true);
					}

					void *b::getSystemService(const std::wstring &paramString)
					{
					  if (L"layout_inflater" == paramString)
					  {
						if (this->c == nullptr)
						{
						  this->c = android.view::LayoutInflater::from(getBaseContext()).cloneInContext(this);
						}
						return this->c;
					  }
					  return getBaseContext().getSystemService(paramString);
					}

					Resources::Theme *b::getTheme()
					{
					  if (this->b_Renamed != nullptr)
					  {
						return this->b_Renamed;
					  }
					  if (this->a == 0)
					  {
						this->a = android.support::v7::b::a::i::Theme_AppCompat_Light;
					  }
					  android.support::v7::b::a();
					  return this->b_Renamed;
					}

					void b::setTheme(int paramInt)
					{
					  if (this->a != paramInt)
					  {
						this->a = paramInt;
						android.support::v7::b::a();
					  }
					}
				}
			}
		}
	}
}

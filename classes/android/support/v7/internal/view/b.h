#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }

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

					class b : public android.content::ContextWrapper
					{
				  private:
					  int android = 0;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  Resources::Theme *b_Renamed;

					  LayoutInflater *c;

				  public:
					  virtual ~b()
					  {
						  delete b;
						  delete c;
					  }

					  b(Context *paramContext, int paramInt);

					  b(Context *paramContext, Resources::Theme *paramTheme);

				  private:
					  void android.support::v7::b::a();

				  protected:
					  virtual void android.support::v7::b::a(Resources::Theme *paramTheme, int paramInt, bool paramBoolean);

				  public:
					  virtual void *getSystemService(const std::wstring &paramString);

					  virtual Resources::Theme *getTheme();

					  virtual void setTheme(int paramInt);
					};
				}
			}
		}
	}
}

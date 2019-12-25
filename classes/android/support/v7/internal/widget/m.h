#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include "i.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class a; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class o; } } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace widget
				{

					using android::content::Context;
					using android::content::ContextWrapper;
					using android::content::res::Resources;
					using android::graphics::drawable::Drawable;

					class m : public ContextWrapper
					{
				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Resources *a_Renamed;

				  public:
					  virtual ~m()
					  {
						  delete a;
					  }

				  private:
					  m(Context *paramContext);

				  public:
					  static Context *a(Context *paramContext);

					  virtual Resources *getResources();

				  public:
					  class a : public i
					  {
					private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						o *const a_Renamed;

					public:
						virtual ~a()
						{
							delete a;
						}

						a(Resources *param1Resources, o *param1o);

						Drawable *getDrawable(int param1Int) override;
					  };
					};
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include <vector>
#include <cmath>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace c { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }

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
					using android::content::res::ColorStateList;
					using android::support::v4::c::a;
					using android::util::TypedValue;

					class l
					{
				  public:
					  static std::vector<int> const android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static std::vector<int> const b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static std::vector<int> const c_Renamed;

					  static std::vector<int> const d;

					  static std::vector<int> const e;

					  static std::vector<int> const f;

					  static std::vector<int> const g;

					  static std::vector<int> const h;

				  private:
					  static ThreadLocal<TypedValue*> *const i;

					  static std::vector<int> const j;

									  private:
										  class StaticConstructor
										  {
										  public:
											  StaticConstructor();
										  };

									  private:
										  static l::StaticConstructor staticConstructor;


				  public:
					  static int android.support::v4::c::a(Context *paramContext, int paramInt);

					  static int android.support::v4::c::a(Context *paramContext, int paramInt, float paramFloat);

					  static ColorStateList *android.support::v4::c::a(int paramInt1, int paramInt2);

				  private:
					  static TypedValue *android.support::v4::c::a();

				  public:
					  static ColorStateList *b(Context *paramContext, int paramInt);

					  static int c(Context *paramContext, int paramInt);
					};
				}
			}
		}
	}
}

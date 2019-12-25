#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include "k.h"
#include "l.h"
#include "m.h"
#include "../../../v4/g/c.h"
#include "../a.h"
#include "a.h"
#include <vector>
#include <cmath>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class n; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class d; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class e; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class f; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class g; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class h; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class i; } } } } }

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
					using android::graphics::PorterDuff;
					using android::graphics::PorterDuffColorFilter;
					using android::graphics::drawable::Drawable;
					using a = android::support::v4::b::a;
					using c = android::support::v4::g::c;
					using android::util::SparseArray;
					using android::view::View;

					class o final
					{
				  public:
					  static const bool android = false;

				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static PorterDuff::Mode *const b_Renamed;

					  static WeakHashMap<Context*, o*> *const android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static a *const d_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static std::vector<int> const e_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static std::vector<int> const f_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static std::vector<int> const g_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static std::vector<int> const h_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static std::vector<int> const i_Renamed;

					  static std::vector<int> const j;

					  WeakReference<Context*> *const k;

					  SparseArray<ColorStateList*> *l;

					  ColorStateList *m;

									  private:
										  class StaticConstructor
										  {
										  public:
											  StaticConstructor();
										  };

									  private:
										  static o::StaticConstructor staticConstructor;


				  public:
					  virtual ~o()
					  {
						  delete k;
						  delete l;
						  delete m;
					  }

				  private:
					  o(Context *paramContext);

					  static PorterDuffColorFilter *android.support::v4::b::a(int paramInt, PorterDuff::Mode *paramMode);

					  static PorterDuffColorFilter *android.support::v4::b::a(ColorStateList *paramColorStateList, PorterDuff::Mode *paramMode, std::vector<int> &paramArrayOfInt);

				  public:
					  static Drawable *android.support::v4::b::a(Context *paramContext, int paramInt);

					  static o *android.support::v4::b::a(Context *paramContext);

					  static void android.support::v4::b::a(View *paramView, n *paramn);

				  private:
					  static bool android.support::v4::b::a(std::vector<int> &paramArrayOfInt, int paramInt);

					  ColorStateList *b(Context *paramContext);

					  ColorStateList *b(Context *paramContext, int paramInt);

					  ColorStateList *android.support::v4::g::c(Context *paramContext);

					  ColorStateList *d(Context *paramContext);

					  static bool d(int paramInt);

					  ColorStateList *e(Context *paramContext);

					  ColorStateList *f(Context *paramContext);

					  ColorStateList *g(Context *paramContext);

					  ColorStateList *h(Context *paramContext);

					  ColorStateList *i(Context *paramContext);

				  public:
					  Drawable *android.support::v4::b::a(int paramInt);

					  Drawable *android.support::v4::b::a(int paramInt, bool paramBoolean);

					  bool android.support::v4::b::a(int paramInt, Drawable *paramDrawable);

					  PorterDuff::Mode *b(int paramInt);

					  ColorStateList *android.support::v4::g::c(int paramInt);

				  private:
					  class a : public android.support::v4::g::c<Integer, PorterDuffColorFilter*>
					  {
					public:
						virtual internal *android.support::v4::b::a(int param1Int);

					private:
						static int b(int param1Int, PorterDuff::Mode *param1Mode);

					public:
						virtual PorterDuffColorFilter *android.support::v4::b::a(int param1Int, PorterDuff::Mode *param1Mode);

						virtual PorterDuffColorFilter *android.support::v4::b::a(int param1Int, PorterDuff::Mode *param1Mode, PorterDuffColorFilter *param1PorterDuffColorFilter);
					  };
					};
				}
			}
		}
	}
}

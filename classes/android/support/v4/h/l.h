#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "u.h"
#include "k.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v4 { namespace h { class c; } } } }
namespace android { namespace support { namespace v4 { namespace h { class b; } } } }
namespace android { namespace support { namespace v4 { namespace h { class e; } } } }
namespace android { namespace support { namespace v4 { namespace h { class u; } } } }
namespace android { namespace support { namespace v4 { namespace h { class d; } } } }
namespace android { namespace support { namespace v4 { namespace h { class f; } } } }
namespace android { namespace support { namespace v4 { namespace h { class g; } } } }
namespace android { namespace support { namespace v4 { namespace h { class i; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{

				using android::content::res::ColorStateList;
				using android::graphics::Paint;
				using android::graphics::PorterDuff;
				using android::view::View;

				class l
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static k *const a_Renamed;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static l::StaticConstructor staticConstructor;


			  public:
				  static int a(int paramInt1, int paramInt2, int paramInt3);

				  static int a(View *paramView);

				  static void a(View *paramView, float paramFloat);

				  static void a(View *paramView, int paramInt, Paint *paramPaint);

				  static void a(View *paramView, ColorStateList *paramColorStateList);

				  static void a(View *paramView, PorterDuff::Mode *paramMode);

				  static void a(View *paramView, Runnable paramRunnable);

				  static void a(View *paramView, Runnable paramRunnable, long long paramLong);

				  static void a(View *paramView, bool paramBoolean);

				  static int b(View *paramView);

				  static float c(View *paramView);

				  static int d(View *paramView);

				  static u *e(View *paramView);

				  static int f(View *paramView);

				  static void g(View *paramView);

				  static void h(View *paramView);

				  static bool i(View *paramView);

			  public:
				  class a : public k
				  {
				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					WeakHashMap<View*, u*> *a_Renamed = nullptr;

					virtual ~a()
					{
						delete a;
					}

					int a(int param1Int1, int param1Int2, int param1Int3);

					int a(View *param1View);

					long long a();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View, float param1Float);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View, int param1Int, Paint *param1Paint);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View, ColorStateList *param1ColorStateList);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View, PorterDuff::Mode *param1Mode);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View, Runnable param1Runnable);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View, Runnable param1Runnable, long long param1Long);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View, bool param1Boolean);

					virtual int b(View *param1View);

					virtual float c(View *param1View);

					virtual int d(View *param1View);

					virtual u *e(View *param1View);

					virtual int f(View *param1View);

					virtual void g(View *param1View);

					virtual void h(View *param1View);

					virtual bool i(View *param1View);
				  };

			  public:
				  class b : public a
				  {
				  };

			  public:
				  class c : public b
				  {
				  };

			  public:
				  class d : public c
				  {
				public:
					virtual int a(int param1Int1, int param1Int2, int param1Int3);

					virtual long long a();

					virtual void a(View *param1View, float param1Float);

					virtual void a(View *param1View, int param1Int, Paint *param1Paint);

					virtual void a(View *param1View, bool param1Boolean);

					int b(View *param1View) override;

					float c(View *param1View) override;

					virtual void h(View *param1View);
				  };

			  public:
				  class e : public d
				  {
				public:
					static bool b_Renamed;

					u e(View *param1View);
				  };

			  public:
				  class f : public e
				  {
				public:
					virtual void a(View *param1View, Runnable param1Runnable);

					virtual void a(View *param1View, Runnable param1Runnable, long long param1Long);

					virtual int d(View *param1View);

					virtual void g(View *param1View);
				  };

			  public:
				  class g : public f
				  {
				public:
					virtual int a(View *param1View);

					virtual int f(View *param1View);
				  };

			  public:
				  class h : public g
				  {
				  };

			  public:
				  class i : public h
				  {
				public:
					bool i(View *param1View);
				  };

			  public:
				  class j : public i
				  {
				public:
					virtual void a(View *param1View, ColorStateList *param1ColorStateList);

					virtual void a(View *param1View, PorterDuff::Mode *param1Mode);

					virtual void g(View *param1View);
				  };

			  public:
				  class k
				  {
				public:
					virtual int a(int param1Int1, int param1Int2, int param1Int3) = 0;

					virtual int a(View *param1View) = 0;

					virtual void a(View *param1View, float param1Float) = 0;

					virtual void a(View *param1View, int param1Int, Paint *param1Paint) = 0;

					virtual void a(View *param1View, ColorStateList *param1ColorStateList) = 0;

					virtual void a(View *param1View, PorterDuff::Mode *param1Mode) = 0;

					virtual void a(View *param1View, Runnable param1Runnable) = 0;

					virtual void a(View *param1View, Runnable param1Runnable, long long param1Long) = 0;

					virtual void a(View *param1View, bool param1Boolean) = 0;

					virtual int b(View *param1View) = 0;

					virtual float c(View *param1View) = 0;

					virtual int d(View *param1View) = 0;

					virtual u *e(View *param1View) = 0;

					virtual int f(View *param1View) = 0;

					virtual void g(View *param1View) = 0;

					virtual void h(View *param1View) = 0;

					virtual bool i(View *param1View) = 0;
				  };
				};
			}
		}
	}
}

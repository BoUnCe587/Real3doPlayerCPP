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
#include "j.h"
#include "k.h"
#include <vector>
#include <cmath>
#include <limits>
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace widget { class a; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class b; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class d; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class f; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class e; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class g; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class h; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{

				using i = android::support::v4::h::i;
				using l = android::support::v4::h::l;
				using android::view::MotionEvent;
				using android::view::View;
				using android::view::ViewConfiguration;
				using android::view::animation::AccelerateInterpolator;
				using android::view::animation::Interpolator;

				class a : public android.view::View::OnTouchListener
				{
			  private:
				  static const int r = android.view::ViewConfiguration::getTapTimeout();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  android::support::v4::widget::a *const a_Renamed = new a();

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Interpolator *const b_Renamed = new android.view::animation::AccelerateInterpolator();

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  View *const c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Runnable d_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  std::vector<float> e_Renamed = {0.0F, 0.0F};

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  std::vector<float> f_Renamed = {std::numeric_limits<float>::max(), std::numeric_limits<float>::max()};

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int g_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int h_Renamed = 0;

				  std::vector<float> android;

				  std::vector<float> j = {0.0F, 0.0F};

				  std::vector<float> k = {std::numeric_limits<float>::max(), std::numeric_limits<float>::max()};

				  bool android = false;

				  bool m = false;

				  bool n = false;

				  bool o = false;

				  bool p = false;

				  bool q = false;

			  public:
				  virtual ~a()
				  {
					  delete a;
					  delete b;
					  delete c;
				  }

				  a(View *paramView);

			  private:
				  float a(float paramFloat1, float paramFloat2, float paramFloat3, float paramFloat4);

				  float a(int paramInt, float paramFloat1, float paramFloat2, float paramFloat3);

				  bool a();

				  static float b(float paramFloat1, float paramFloat2, float paramFloat3);

				  static int b(int paramInt1, int paramInt2, int paramInt3);

				  void b();

				  void c();

				  void d();

				  float f(float paramFloat1, float paramFloat2);

			  public:
				  a a(float paramFloat1, float paramFloat2);

				  a a(int paramInt);

				  a a(bool paramBoolean);

				  virtual void a(int paramInt1, int paramInt2) = 0;

				  virtual android::support::v4::widget::a *b(float paramFloat1, float paramFloat2);

				  virtual android::support::v4::widget::a *b(int paramInt);

				  virtual android::support::v4::widget::a *c(float paramFloat1, float paramFloat2);

				  virtual android::support::v4::widget::a *c(int paramInt);

				  virtual android::support::v4::widget::a *d(float paramFloat1, float paramFloat2);

				  virtual android::support::v4::widget::a *d(int paramInt);

				  virtual android::support::v4::widget::a *e(float paramFloat1, float paramFloat2);

				  virtual bool e(int paramInt) = 0;

				  virtual bool f(int paramInt) = 0;

				  virtual bool onTouch(View *paramView, MotionEvent *paramMotionEvent);

			  private:
				  class a
				  {
				private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					int a_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					int b_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					float c_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					float d_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					long long e_Renamed = Float::MIN_VALUE;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					long long f_Renamed = 0LL;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					int g_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					int h_Renamed = 0;

					long long android = 0;

					float j = 0;

					int k = 0;

					float a(float param1Float);

					float a(long long param1Long);

				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed();

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(float param1Float1, float param1Float2);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(int param1Int);

					virtual void b();

					virtual void b(int param1Int);

					virtual bool c();

					virtual void d();

					virtual int e();

					virtual int f();

					virtual int g();

					virtual int h();
				  };

			  private:
				  class b : public Runnable
				  {
							  private:
								  *e;

				public:
					virtual ~b()
					{
						delete c;
						delete d;
						delete f;
						delete g;
						delete h;
						delete i;
						delete outerInstance;
					}

				private:
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private b(a this$0)
					b(*outerInstance, android::support::v4::widget::a *this$0);

				public:
					virtual void run();
				  };
				};

			}
		}
	}
}

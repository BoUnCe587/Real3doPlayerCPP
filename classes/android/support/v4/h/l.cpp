//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "l.h"
#include "m.h"
#include "q.h"
#include "r.h"
#include "p.h"
#include "o.h"
#include "n.h"
#include "../a/b.h"

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
				using android::os::Build;
				using android::view::View;
k *const l::a;

				l::StaticConstructor::StaticConstructor()
				{
										int i = Build::VERSION::SDK_INT;
										if (i >= 21)
										{
										  a_Renamed = new j();
										  return;
										}
										if (i >= 19)
										{
										  a_Renamed = new i();
										  return;
										}
										if (i >= 17)
										{
										  a_Renamed = new g();
										  return;
										}
										if (i >= 16)
										{
										  a_Renamed = new f();
										  return;
										}
										if (i >= 14)
										{
										  a_Renamed = new e();
										  return;
										}
										if (i >= 11)
										{
										  a_Renamed = new d();
										  return;
										}
										if (i >= 9)
										{
										  a_Renamed = new c();
										  return;
										}
										if (i >= 7)
										{
										  a_Renamed = new b();
										  return;
										}
										a_Renamed = new a();
				}

l::StaticConstructor l::staticConstructor;

				int l::a(int paramInt1, int paramInt2, int paramInt3)
				{
					return a_Renamed->a(paramInt1, paramInt2, paramInt3);
				}

				int l::a(View *paramView)
				{
					return a_Renamed->a(paramView);
				}

				void l::a(View *paramView, float paramFloat)
				{
					a_Renamed->a(paramView, paramFloat);
				}

				void l::a(View *paramView, int paramInt, Paint *paramPaint)
				{
					a_Renamed->a(paramView, paramInt, paramPaint);
				}

				void l::a(View *paramView, ColorStateList *paramColorStateList)
				{
					a_Renamed->a(paramView, paramColorStateList);
				}

				void l::a(View *paramView, PorterDuff::Mode *paramMode)
				{
					a_Renamed->a(paramView, paramMode);
				}

				void l::a(View *paramView, Runnable paramRunnable)
				{
					a_Renamed->a(paramView, paramRunnable);
				}

				void l::a(View *paramView, Runnable paramRunnable, long long paramLong)
				{
					a_Renamed->a(paramView, paramRunnable, paramLong);
				}

				void l::a(View *paramView, bool paramBoolean)
				{
					a_Renamed->a(paramView, paramBoolean);
				}

				int l::b(View *paramView)
				{
					return a_Renamed->b(paramView);
				}

				float l::c(View *paramView)
				{
					return a_Renamed->c(paramView);
				}

				int l::d(View *paramView)
				{
					return a_Renamed->d(paramView);
				}

				u *l::e(View *paramView)
				{
					return a_Renamed->e(paramView);
				}

				int l::f(View *paramView)
				{
					return a_Renamed->f(paramView);
				}

				void l::g(View *paramView)
				{
					a_Renamed->g(paramView);
				}

				void l::h(View *paramView)
				{
					a_Renamed->h(paramView);
				}

				bool l::i(View *paramView)
				{
					return a_Renamed->i(paramView);
				}

				int l::a::a(int param1Int1, int param1Int2, int param1Int3)
				{
					return View::resolveSize(param1Int1, param1Int2);
				}

				int l::a::a(View *param1View)
				{
					return 0;
				}

				long long l::a::a()
				{
					return 10LL;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void l::a::a_Renamed(View *param1View, float param1Float)
				{
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void l::a::a_Renamed(View *param1View, int param1Int, Paint *param1Paint)
				{
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void l::a::a_Renamed(View *param1View, ColorStateList *param1ColorStateList)
				{
					m::a(param1View, param1ColorStateList);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void l::a::a_Renamed(View *param1View, PorterDuff::Mode *param1Mode)
				{
					m::a(param1View, param1Mode);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void l::a::a_Renamed(View *param1View, Runnable param1Runnable)
				{
					param1View->postDelayed(param1Runnable, a());
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void l::a::a_Renamed(View *param1View, Runnable param1Runnable, long long param1Long)
				{
					param1View->postDelayed(param1Runnable, a() + param1Long);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void l::a::a_Renamed(View *param1View, bool param1Boolean)
				{
				}

				int l::a::b(View *param1View)
				{
					return 0;
				}

				float l::a::c(View *param1View)
				{
					return 0.0F;
				}

				int l::a::d(View *param1View)
				{
					return m::a(param1View);
				}

				u *l::a::e(View *param1View)
				{
					return new u(param1View);
				}

				int l::a::f(View *param1View)
				{
					return 0;
				}

				void l::a::g(View *param1View)
				{
				}

				void l::a::h(View *param1View)
				{
				}

				bool l::a::i(View *param1View)
				{
					return m::b(param1View);
				}

				int l::d::a(int param1Int1, int param1Int2, int param1Int3)
				{
					return n::a(param1Int1, param1Int2, param1Int3);
				}

				long long l::d::a()
				{
					return n::a();
				}

				void l::d::a(View *param1View, float param1Float)
				{
					n::a(param1View, param1Float);
				}

				void l::d::a(View *param1View, int param1Int, Paint *param1Paint)
				{
					n::a(param1View, param1Int, param1Paint);
				}

				void l::d::a(View *param1View, bool param1Boolean)
				{
					n::a(param1View, param1Boolean);
				}

				int l::d::b(View *param1View)
				{
					return n::a(param1View);
				}

				float l::d::c(View *param1View)
				{
					return n::b(param1View);
				}

				void l::d::h(View *param1View)
				{
					n::c(param1View);
				}

bool l::e::b = false;

				u l::e::e(View *param1View)
				{
				  if (this->a_Renamed == nullptr)
				  {
					this->a_Renamed = new WeakHashMap();
				  }
				  u *u2 = static_cast<u*>(this->a_Renamed->get(param1View));
				  u *u1 = u2;
				  if (u2 == nullptr)
				  {
					u1 = new u(param1View);
					this->a_Renamed->put(param1View, u1);
				  }
				  return u1;
				}

				void l::f::a(View *param1View, Runnable param1Runnable)
				{
					o::a(param1View, param1Runnable);
				}

				void l::f::a(View *param1View, Runnable param1Runnable, long long param1Long)
				{
					o::a(param1View, param1Runnable, param1Long);
				}

				int l::f::d(View *param1View)
				{
					return o::a(param1View);
				}

				void l::f::g(View *param1View)
				{
					o::b(param1View);
				}

				int l::g::a(View *param1View)
				{
					return p::a(param1View);
				}

				int l::g::f(View *param1View)
				{
					return p::b(param1View);
				}

				bool l::i::i(View *param1View)
				{
					return q::a(param1View);
				}

				void l::j::a(View *param1View, ColorStateList *param1ColorStateList)
				{
					r::a(param1View, param1ColorStateList);
				}

				void l::j::a(View *param1View, PorterDuff::Mode *param1Mode)
				{
					r::a(param1View, param1Mode);
				}

				void l::j::g(View *param1View)
				{
					r::a(param1View);
				}
			}
		}
	}
}

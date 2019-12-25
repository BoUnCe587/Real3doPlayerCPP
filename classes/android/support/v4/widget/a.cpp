//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "../h/l.h"
#include "../h/i.h"
#include "../a/b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::content::res::Resources;
				using android::os::SystemClock;
				using i = android::support::v4::h::i;
				using l = android::support::v4::h::l;
				using android::util::DisplayMetrics;
				using android::view::MotionEvent;
				using android::view::View;
				using android::view::ViewConfiguration;
				using android::view::animation::AccelerateInterpolator;
				using android::view::animation::AnimationUtils;
				using android::view::animation::Interpolator;

				a::a(View *paramView) : c(paramView)
				{
				  DisplayMetrics *displayMetrics = android.content::res::Resources::getSystem().getDisplayMetrics();
				  int i1 = static_cast<int>(1575.0F * displayMetrics->density + 0.5F);
				  int i2 = static_cast<int>(displayMetrics->density * 315.0F + 0.5F);
				  a_Renamed(i1, i1);
				  b(i2, i2);
				  a_Renamed(1);
				  e(std::numeric_limits<float>::max(), std::numeric_limits<float>::max());
				  d(0.2F, 0.2F);
				  c(1.0F, 1.0F);
				  b(r);
				  c(500);
				  d(500);
				}

				float a::a(float paramFloat1, float paramFloat2, float paramFloat3, float paramFloat4)
				{
				  float f1 = 0.0F;
				  paramFloat1 = b(paramFloat1 * paramFloat2, 0.0F, paramFloat3);
				  paramFloat3 = f(paramFloat4, paramFloat1);
				  paramFloat2 = f(paramFloat2 - paramFloat4, paramFloat1) - paramFloat3;
				  if (paramFloat2 < 0.0F)
				  {
					paramFloat1 = -this->b_Renamed->getInterpolation(-paramFloat2);
				  }
				  else
				  {
					paramFloat1 = f1;
					if (paramFloat2 > 0.0F)
					{
					  paramFloat1 = this->b_Renamed->getInterpolation(paramFloat2);
					}
					else
					{
					  return paramFloat1;
					}
				  }
				  return b(paramFloat1, -1.0F, 1.0F);
				}

				float a::a(int paramInt, float paramFloat1, float paramFloat2, float paramFloat3)
				{
				  paramFloat1 = a(this->e_Renamed[paramInt], paramFloat2, this->f_Renamed[paramInt], paramFloat1);
				  if (paramFloat1 == 0.0F)
				  {
					return 0.0F;
				  }
				  float f2 = this->i[paramInt];
				  paramFloat2 = this->j[paramInt];
				  float f1 = this->k[paramInt];
				  paramFloat3 = f2 * paramFloat3;
				  return (paramFloat1 > 0.0F) ? b(paramFloat1 * paramFloat3, paramFloat2, f1) : -b(-paramFloat1 * paramFloat3, paramFloat2, f1);
				}

				bool a::a()
				{
				  android::support::v4::widget::a *a1 = this->a_Renamed;
				  int i1 = a1.0f();
				  int i2 = a1->e();
				  return ((i1 != 0 && f(i1)) || (i2 != 0 && e(i2)));
				}

				float a::b(float paramFloat1, float paramFloat2, float paramFloat3)
				{
					return (paramFloat1 > paramFloat3) ? paramFloat3 : ((paramFloat1 < paramFloat2) ? paramFloat2 : paramFloat1);
				}

				int a::b(int paramInt1, int paramInt2, int paramInt3)
				{
					return (paramInt1 > paramInt3) ? paramInt3 : ((paramInt1 < paramInt2) ? paramInt2 : paramInt1);
				}

				void a::b()
				{
				  if (this->d_Renamed == nullptr)
				  {
					this->d_Renamed = new b(this, nullptr);
				  }
				  this->o = true;
				  this->m = true;
				  if (!this->l && this->h_Renamed > 0)
				  {
					android.support::v4::h::l::a(this->c_Renamed, this->d_Renamed, this->h_Renamed);
				  }
				  else
				  {
					this->d_Renamed();
				  }
				  this->l = true;
				}

				void a::c()
				{
				  if (this->m)
				  {
					this->o = false;
					return;
				  }
				  this->a_Renamed->b();
				}

				void a::d()
				{
				  long long l1 = android.os::SystemClock::uptimeMillis();
				  MotionEvent *motionEvent = android.view::MotionEvent::obtain(l1, l1, 3, 0.0F, 0.0F, 0);
				  this->c_Renamed->onTouchEvent(motionEvent);
				  motionEvent->recycle();
				}

				float a::f(float paramFloat1, float paramFloat2)
				{
				  if (paramFloat2 != 0.0F)
				  {
					switch (this->g_Renamed)
					{
					  default:
						return 0.0F;
					  case 0:
					  case 1:
						if (paramFloat1 < paramFloat2)
						{
						  if (paramFloat1 >= 0.0F)
						  {
							return 1.0F - paramFloat1 / paramFloat2;
						  }
						  if (this->o && this->g_Renamed == 1)
						  {
							return 1.0F;
						  }
						}
						return 0.0F;
					  case 2:
						break;
					}
					if (paramFloat1 < 0.0F)
					{
					  return paramFloat1 / -paramFloat2;
					}
				  }
				  return 0.0F;
				}

				a a::a(float paramFloat1, float paramFloat2)
				{
				  this->k[0] = paramFloat1 / 1000.0F;
				  this->k[1] = paramFloat2 / 1000.0F;
				  return this;
				}

				a a::a(int paramInt)
				{
				  this->g_Renamed = paramInt;
				  return this;
				}

				a a::a(bool paramBoolean)
				{
				  if (this->p && !paramBoolean)
				  {
					c();
				  }
				  this->p = paramBoolean;
				  return this;
				}

				android::support::v4::widget::a *a::b(float paramFloat1, float paramFloat2)
				{
				  this->j[0] = paramFloat1 / 1000.0F;
				  this->j[1] = paramFloat2 / 1000.0F;
				  return this;
				}

				android::support::v4::widget::a *a::b(int paramInt)
				{
				  this->h_Renamed = paramInt;
				  return this;
				}

				android::support::v4::widget::a *a::c(float paramFloat1, float paramFloat2)
				{
				  this->i[0] = paramFloat1 / 1000.0F;
				  this->i[1] = paramFloat2 / 1000.0F;
				  return this;
				}

				android::support::v4::widget::a *a::c(int paramInt)
				{
				  this->a_Renamed->a_Renamed(paramInt);
				  return this;
				}

				android::support::v4::widget::a *a::d(float paramFloat1, float paramFloat2)
				{
				  this->e_Renamed[0] = paramFloat1;
				  this->e_Renamed[1] = paramFloat2;
				  return this;
				}

				android::support::v4::widget::a *a::d(int paramInt)
				{
				  this->a_Renamed->b(paramInt);
				  return this;
				}

				android::support::v4::widget::a *a::e(float paramFloat1, float paramFloat2)
				{
				  this->f_Renamed[0] = paramFloat1;
				  this->f_Renamed[1] = paramFloat2;
				  return this;
				}

				bool a::onTouch(View *paramView, MotionEvent *paramMotionEvent)
				{
				  float f2;
				  float f1;
				  nullptr = true;
				  if (!this->p)
				  {
					return false;
				  }
				  switch (android.support::v4::h::i::a(paramMotionEvent))
				  {
					default:
					  if (this->q && this->o)
					  {
						return nullptr;
					  }
					  break;
					case 0:
					  this->n = true;
					  this->l = false;
					case 2:
					  f1 = a(0, paramMotionEvent->getX(), paramView->getWidth(), this->c_Renamed->getWidth());
					  f2 = a(1, paramMotionEvent->getY(), paramView->getHeight(), this->c_Renamed->getHeight());
					  this->a_Renamed->a_Renamed(f1, f2);
					  if (!this->o && a())
					  {
						b();
					  }
					case 1:
					case 3:
					  c();
				  }
				  return false;
				}

				float a::a::a(float param1Float)
				{
					return -4.0F * param1Float * param1Float + 4.0F * param1Float;
				}

				float a::a::a(long long param1Long)
				{
				  if (param1Long < this->e_Renamed)
				  {
					return 0.0F;
				  }
				  if (this->i < 0LL || param1Long < this->i)
				  {
					return a_Renamed->a(static_cast<float>(param1Long - this->e_Renamed) / this->a_Renamed, 0.0F, 1.0F) * 0.5F;
				  }
				  long long android.support::v4::h::l = this->i;
				  float f1 = this->j;
				  float f2 = this->j;
				  return a_Renamed->a(static_cast<float>(param1Long - android.support::v4::h::l) / this->k, 0.0F, 1.0F) * f2 + 1.0F - f1;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a::a_Renamed()
				{
				  this->e_Renamed = android.view::animation::AnimationUtils::currentAnimationTimeMillis();
				  this->i = -1LL;
				  this->f_Renamed = this->e_Renamed;
				  this->j = 0.5F;
				  this->g_Renamed = 0;
				  this->h_Renamed = 0;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a::a_Renamed(float param1Float1, float param1Float2)
				{
				  this->c_Renamed = param1Float1;
				  this->d_Renamed = param1Float2;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void a::a::a_Renamed(int param1Int)
				{
					this->a_Renamed = param1Int;
				}

				void a::a::b()
				{
				  long long android.support::v4::h::l = android.view::animation::AnimationUtils::currentAnimationTimeMillis();
				  this->k = a_Renamed->a(static_cast<int>(android.support::v4::h::l - this->e_Renamed), 0, this->b_Renamed);
				  this->j = a(android.support::v4::h::l);
				  this->i = android.support::v4::h::l;
				}

				void a::a::b(int param1Int)
				{
					this->b_Renamed = param1Int;
				}

				bool a::a::c()
				{
					return (this->i > 0LL && android.view::animation::AnimationUtils::currentAnimationTimeMillis() > this->i + this->k);
				}

				void a::a::d()
				{
				  if (this->f_Renamed == 0LL)
				  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException("Cannot compute scroll delta before calling start()");
					throw std::exception();
				  }
				  long long l1 = android.view::animation::AnimationUtils::currentAnimationTimeMillis();
				  float f1 = a(a(l1));
				  long long l2 = l1 - this->f_Renamed;
				  this->f_Renamed = l1;
				  this->g_Renamed = static_cast<int>(static_cast<float>(l2) * f1 * this->c_Renamed);
				  this->h_Renamed = static_cast<int>(static_cast<float>(l2) * f1 * this->d_Renamed);
				}

				int a::a::e()
				{
					return static_cast<int>(this->c_Renamed / std::abs(this->c_Renamed));
				}

				int a::a::f()
				{
					return static_cast<int>(this->d_Renamed / std::abs(this->d_Renamed));
				}

				int a::a::g()
				{
					return this->g_Renamed;
				}

				int a::a::h()
				{
					return this->h_Renamed;
				}

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private b(a this$0)
				a::b::b(*outerInstance, android::support::v4::widget::a *this$0) : outerInstance()
				{
				}

				void a::b::run()
				{
				  if (!a_Renamed.a(this->a_Renamed))
				  {
					return;
				  }
				  if (a_Renamed.b(this->a_Renamed))
				  {
					a_Renamed.a(this->a_Renamed, false);
					a_Renamed.c(this->a_Renamed).a();
				  }
				  a::a *a1 = a_Renamed.c(this->a_Renamed);
				  if (a1->c() || !a_Renamed.d(this->a_Renamed))
				  {
					a_Renamed.b(this->a_Renamed, false);
					return;
				  }
				  if (a_Renamed.e(this->a_Renamed))
				  {
					a_Renamed.c(this->a_Renamed, false);
					a_Renamed.f(this->a_Renamed);
				  }
				  a1->d();
				  int i = a1->g();
				  int j = a1->h();
				  this->a_Renamed.a(i, j);
				  l::a(a_Renamed.g(this->a_Renamed), this);
				}
			}
		}
	}
}

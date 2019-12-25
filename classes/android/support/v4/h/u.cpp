//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "u.h"
#include "v.h"
#include "i.h"
#include "l.h"
#include "w.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::os::Build;
				using android::view::View;
g *const u::a;

				u::StaticConstructor::StaticConstructor()
				{
										int i = Build::VERSION::SDK_INT;
										if (i >= 21)
										{
										  a_Renamed = new f();
										  return;
										}
										if (i >= 19)
										{
										  a_Renamed = new e();
										  return;
										}
										if (i >= 18)
										{
										  a_Renamed = new c();
										  return;
										}
										if (i >= 16)
										{
										  a_Renamed = new d();
										  return;
										}
										if (i >= 14)
										{
										  a_Renamed = new b();
										  return;
										}
										a_Renamed = new a();
				}

u::StaticConstructor u::staticConstructor;

				u::u(View *paramView)
				{
					this->b = new WeakReference(paramView);
				}

				u *u::a(float paramFloat)
				{
				  View *view = static_cast<View*>(this->b->get());
				  if (view != nullptr)
				  {
					a_Renamed->a(this, view, paramFloat);
				  }
				  return this;
				}

				u *u::a(x *paramx)
				{
				  View *view = static_cast<View*>(this->b->get());
				  if (view != nullptr)
				  {
					a_Renamed->a(this, view, paramx);
				  }
				  return this;
				}

				void u::a()
				{
				  View *view = static_cast<View*>(this->b->get());
				  if (view != nullptr)
				  {
					a_Renamed->a(this, view);
				  }
				}

				void u::a::b(u *param1u, View *param1View)
				{
				  auto object = param1View->getTag(2113929216);
				  if (dynamic_cast<x*>(object) != nullptr)
				  {
					object = static_cast<x*>(object);
				  }
				  else
				  {
					object = nullptr;
				  }
				  Runnable runnable2 = u::a(param1u);
				  Runnable runnable1 = u::b(param1u);
				  if (runnable2 != nullptr)
				  {
					runnable2();
				  }
				  if (object != nullptr)
				  {
					object->a(param1View);
					object->b(param1View);
				  }
				  if (runnable1 != nullptr)
				  {
					runnable1();
				  }
				  if (this->a_Renamed != nullptr)
				  {
					this->a_Renamed->remove(param1View);
				  }
				}

				void u::a::c(u *param1u, View *param1View)
				{
				  void *object;
				  if (this->a_Renamed != nullptr)
				  {
					object = static_cast<Runnable>(this->a_Renamed->get(param1View));
				  }
				  else
				  {
					object = nullptr;
				  }
				  android::support::v4::h::a *a1 = object;
				  if (object == nullptr)
				  {
					a1 = new a(this, param1u, param1View, nullptr);
					if (this->a_Renamed == nullptr)
					{
					  this->a_Renamed = new WeakHashMap();
					}
					this->a_Renamed->put(param1View, a1);
				  }
				  param1View->removeCallbacks(a1);
				  param1View->post(a1);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void u::a::a_Renamed(u *param1u, View *param1View)
				{
					c(param1u, param1View);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void u::a::a_Renamed(u *param1u, View *param1View, float param1Float)
				{
					c(param1u, param1View);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void u::a::a_Renamed(u *param1u, View *param1View, x *param1x)
				{
					param1View->setTag(2113929216, param1x);
				}

				u::a::a::a(u *outerInstance, u::a *this$0, u *param2u, View *param2View) : outerInstance(outerInstance)
				{
				  this->a_Renamed = new WeakReference(param2View);
				  this->b_Renamed = param2u;
				}

				void u::a::a::run()
				{
				  View *view = static_cast<View*>(this->a_Renamed->get());
				  if (view != nullptr)
				  {
					u::a_Renamed->a(this->c, this->b_Renamed, view);
				  }
				}

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private a(u this$0, u param1u, android.view.View param1View)
				u::a::a(*outerInstance, u *this$0, u *param1u, View *param1View) : a(new WeakReference(param1View)), outerInstance()
				{
				  this->b_Renamed = param1u;
				}

				void u::a::run()
				{
				  View *view = static_cast<View*>(this->a_Renamed->get());
				  if (view != nullptr)
				  {
					u::a_Renamed::a(this->c_Renamed, this->b_Renamed, view);
				  }
				}

				void u::b::a(u *param1u, View *param1View)
				{
					v::a(param1View);
				}

				void u::b::a(u *param1u, View *param1View, float param1Float)
				{
					v::a(param1View, param1Float);
				}

				void u::b::a(u *param1u, View *param1View, x *param1x)
				{
				  param1View->setTag(2113929216, param1x);
				  android::support::v4::h::a tempVar(param1u);
				  v::a(param1View, &tempVar);
				}

				u::b::a::a(u *param2u)
				{
					this->a_Renamed = param2u;
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void u::b::a::a_Renamed(View *param2View)
				{
				  if (u::c(this->a_Renamed) >= 0)
				  {
					l::a(param2View, 2, nullptr);
				  }
				  if (u::a(this->a_Renamed) != nullptr)
				  {
					u::a(this->a_Renamed).run();
				  }
				  auto object = param2View->getTag(2113929216);
				  if (dynamic_cast<x*>(object) != nullptr)
				  {
					object = static_cast<x*>(object);
				  }
				  else
				  {
					object = nullptr;
				  }
				  if (object != nullptr)
				  {
					object->a(param2View);
				  }
				}

				void u::b::a::b(View *param2View)
				{
				  if (u::c(this->a_Renamed) >= 0)
				  {
					l::a(param2View, u::c(this->a_Renamed), nullptr);
					u::a(this->a_Renamed, -1);
				  }
				  if (u::b(this->a_Renamed) != nullptr)
				  {
					u::b(this->a_Renamed).run();
				  }
				  auto object = param2View->getTag(2113929216);
				  if (dynamic_cast<x*>(object) != nullptr)
				  {
					object = static_cast<x*>(object);
				  }
				  else
				  {
					object = nullptr;
				  }
				  if (object != nullptr)
				  {
					object->b(param2View);
				  }
				}

				void u::b::a::c(View *param2View)
				{
				  auto object = param2View->getTag(2113929216);
				  if (dynamic_cast<x*>(object) != nullptr)
				  {
					object = static_cast<x*>(object);
				  }
				  else
				  {
					object = nullptr;
				  }
				  if (object != nullptr)
				  {
					object->c(param2View);
				  }
				}

				u::a::a(u *param1u) : a(param1u)
				{
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void u::a::a_Renamed(View *param1View)
				{
				  if (u::c(this->a_Renamed) >= 0)
				  {
					l::a(param1View, 2, nullptr);
				  }
				  if (u::a(this->a_Renamed) != nullptr)
				  {
					u::a(this->a_Renamed).run();
				  }
				  auto object = param1View->getTag(2113929216);
				  if (dynamic_cast<x*>(object) != nullptr)
				  {
					object = static_cast<x*>(object);
				  }
				  else
				  {
					object = nullptr;
				  }
				  if (object != nullptr)
				  {
					object->a(param1View);
				  }
				}

				void u::a::b(View *param1View)
				{
				  if (u::c(this->a_Renamed) >= 0)
				  {
					l::a(param1View, u::c(this->a_Renamed), nullptr);
					u::a(this->a_Renamed, -1);
				  }
				  if (u::b(this->a_Renamed) != nullptr)
				  {
					u::b(this->a_Renamed).run();
				  }
				  auto object = param1View->getTag(2113929216);
				  if (dynamic_cast<x*>(object) != nullptr)
				  {
					object = static_cast<x*>(object);
				  }
				  else
				  {
					object = nullptr;
				  }
				  if (object != nullptr)
				  {
					object->b(param1View);
				  }
				}

				void u::a::c(View *param1View)
				{
				  auto object = param1View->getTag(2113929216);
				  if (dynamic_cast<x*>(object) != nullptr)
				  {
					object = static_cast<x*>(object);
				  }
				  else
				  {
					object = nullptr;
				  }
				  if (object != nullptr)
				  {
					object->c(param1View);
				  }
				}

				void u::d::a(u *param1u, View *param1View, x *param1x)
				{
					w::a(param1View, param1x);
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "g.h"
#include "x.h"
#include "f.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class b; } } } }
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v4 { namespace h { class x; } } } }
namespace android { namespace support { namespace v4 { namespace h { class c; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{

				using android::view::View;

				class u
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static g *const a_Renamed;

			  private:
				  WeakReference<View*> *b;

				  Runnable c = nullptr;

				  Runnable d = nullptr;

				  int e = -1;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static u::StaticConstructor staticConstructor;


			  public:
				  virtual ~u()
				  {
					  delete b;
				  }

				  u(View *paramView);

				  virtual u *a(float paramFloat);

				  virtual u *a(x *paramx);

				  virtual void a();

			  public:
				  class a : public g
				  {
				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					WeakHashMap<View*, Runnable> *a_Renamed = nullptr;

					virtual ~a()
					{
						delete a;
						delete a;
						delete b;
					}

				private:
					void b(u *param1u, View *param1View);

					void c(u *param1u, View *param1View);

				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(u *param1u, View *param1View);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(u *param1u, View *param1View, float param1Float);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(u *param1u, View *param1View, x *param1x);

				public:
					class a : public Runnable
					{
								private:
									u *outerInstance;

				  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  WeakReference<View*> *a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  u *b_Renamed;

				  private:
					  a(u *outerInstance, u::a *this$0, u *param2u, View *param2View);

				  public:
					  virtual void run();
					};
				  };

			  public:
				  class a : public Runnable
				  {
							  private:
								  *e;

				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					WeakReference<View*> *a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					u *b_Renamed;

				private:
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private a(u this$0, u param1u, android.view.View param1View)
					a(*outerInstance, u *this$0, u *param1u, View *param1View);

				public:
					virtual void run();
				  };

			  public:
				  class b : public a
				  {
				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					WeakHashMap<View*, Integer> *b_Renamed = nullptr;

					virtual void a(u *param1u, View *param1View);

					virtual void a(u *param1u, View *param1View, float param1Float);

					virtual void a(u *param1u, View *param1View, x *param1x);

				public:
					class a : public x
					{
				  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  u *a_Renamed;

					  virtual ~a()
					  {
						  delete a;
					  }

					  a(u *param2u);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  virtual void a_Renamed(View *param2View);

					  virtual void b(View *param2View);

					  virtual void c(View *param2View);
					};
				  };

			  public:
				  class a : public x
				  {
				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					u *a_Renamed;

					a(u *param1u);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					virtual void a_Renamed(View *param1View);

					virtual void b(View *param1View);

					virtual void c(View *param1View);
				  };

			  public:
				  class c : public d
				  {
				  };

			  public:
				  class d : public b
				  {
				public:
					void a(u *param1u, View *param1View, x *param1x) override;
				  };

			  public:
				  class e : public c
				  {
				  };

			  public:
				  class f : public e
				  {
				  };

			  public:
				  class g
				  {
				public:
					virtual void a(u *param1u, View *param1View) = 0;

					virtual void a(u *param1u, View *param1View, float param1Float) = 0;

					virtual void a(u *param1u, View *param1View, x *param1x) = 0;
				  };
				};
			}
		}
	}
}

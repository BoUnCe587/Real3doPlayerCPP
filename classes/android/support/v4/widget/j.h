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

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace widget { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{

				using android::content::Context;
				using android::view::animation::Interpolator;

				class j
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  void *a_Renamed;

				  android::support::v4::widget::a *b;

				  virtual ~j()
				  {
					  delete a;
					  delete b;
				  }

			  private:
				  j(int paramInt, Context *paramContext, Interpolator *paramInterpolator);

			  public:
				  j(Context *paramContext, Interpolator *paramInterpolator);

				  static j *a(Context *paramContext);

				  static j *a(Context *paramContext, Interpolator *paramInterpolator);

				  virtual int a();

				  virtual void a(int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5, int paramInt6, int paramInt7, int paramInt8);

			  public:
				  class a
				  {
				public:
					virtual int a(void *param1Object) = 0;

					virtual void *a(Context *param1Context, Interpolator *param1Interpolator) = 0;

					virtual void a(void *param1Object, int param1Int1, int param1Int2, int param1Int3, int param1Int4, int param1Int5, int param1Int6, int param1Int7, int param1Int8) = 0;
				  };

			  public:
				  class b : public a
				  {
				public:
					virtual int a(void *param1Object);

					virtual void *a(Context *param1Context, Interpolator *param1Interpolator);

					virtual void a(void *param1Object, int param1Int1, int param1Int2, int param1Int3, int param1Int4, int param1Int5, int param1Int6, int param1Int7, int param1Int8);
				  };

			  public:
				  class c : public a
				  {
				public:
					virtual int a(void *param1Object);

					virtual void *a(Context *param1Context, Interpolator *param1Interpolator);

					virtual void a(void *param1Object, int param1Int1, int param1Int2, int param1Int3, int param1Int4, int param1Int5, int param1Int6, int param1Int7, int param1Int8);
				  };

			  public:
				  class d : public c
				  {
				  };
				};
			}
		}
	}
}

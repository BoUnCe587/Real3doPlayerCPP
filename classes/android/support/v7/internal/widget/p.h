#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include "b.h"
#include "c.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class o; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class a; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class d; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class e; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class f; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class g; } } } } }

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
					using android::content::res::TypedArray;
					using android::graphics::drawable::Drawable;
					using android::util::AttributeSet;

					class p
					{
				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Context *const a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  TypedArray *const b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  o *c_Renamed;

				  public:
					  virtual ~p()
					  {
						  delete a;
						  delete b;
						  delete c;
					  }

				  private:
					  p(Context *paramContext, TypedArray *paramTypedArray);

				  public:
					  static p *a(Context *paramContext, AttributeSet *paramAttributeSet, std::vector<int> &paramArrayOfInt);

					  static p *a(Context *paramContext, AttributeSet *paramAttributeSet, std::vector<int> &paramArrayOfInt, int paramInt1, int paramInt2);

					  virtual float a(int paramInt, float paramFloat);

					  virtual int a();

					  virtual int a(int paramInt1, int paramInt2);

					  virtual Drawable *a(int paramInt);

					  virtual bool a(int paramInt, bool paramBoolean);

					  virtual int b(int paramInt1, int paramInt2);

					  virtual CharSequence *b(int paramInt);

					  virtual void b();

					  virtual int c(int paramInt1, int paramInt2);

					  virtual o *c();

					  virtual std::wstring c(int paramInt);

					  virtual int d(int paramInt1, int paramInt2);

					  virtual bool d(int paramInt);

					  virtual int e(int paramInt1, int paramInt2);

					  virtual int f(int paramInt1, int paramInt2);

					  virtual int g(int paramInt1, int paramInt2);
					};
				}
			}
		}
	}
}

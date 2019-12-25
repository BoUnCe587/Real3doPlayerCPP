#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "d.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class o; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class n; } } } } }
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class b; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::res::ColorStateList;
				using android::graphics::PorterDuff;
				using android::graphics::drawable::Drawable;
				using a = android::support::v7::b::a;
				using n = android::support::v7::internal_Renamed::widget::n;
				using o = android::support::v7::internal_Renamed::widget::o;
				using android::util::AttributeSet;
				using android::view::View;

				class c
				{
			  private:
				  View *const android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  o *const b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  n *c_Renamed;

				  n *d;

			  public:
				  virtual ~c()
				  {
					  delete android;
					  delete b;
					  delete c;
					  delete d;
				  }

				  c(View *paramView, o *paramo);

				  virtual ColorStateList *android->support.v7.b.a();

				  virtual void android->support.v7.b.a(int paramInt);

				  virtual void android->support.v7.b.a(ColorStateList *paramColorStateList);

				  virtual void android->support.v7.b.a(PorterDuff::Mode *paramMode);

				  virtual void android->support.v7.b.a(Drawable *paramDrawable);

				  virtual void android->support.v7.b.a(AttributeSet *paramAttributeSet, int paramInt);

				  virtual PorterDuff::Mode *b();

				  virtual void b(ColorStateList *paramColorStateList);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void c_Renamed();
				};
			}
		}
	}
}

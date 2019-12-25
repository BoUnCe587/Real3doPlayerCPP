#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../../v4/h/k.h"
#include "d.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class o; } } } } }
namespace android { namespace support { namespace v7 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class e; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::Context;
				using android::content::res::ColorStateList;
				using android::graphics::PorterDuff;
				using android::graphics::drawable::Drawable;
				using k = android::support::v4::h::k;
				using a = android::support::v7::b::a;
				using o = android::support::v7::internal_Renamed::widget::o;
				using android::util::AttributeSet;
				using android::widget::AutoCompleteTextView;

				class b : public android.widget::AutoCompleteTextView, public android.support::v4::h::k
				{
			  private:
				  static std::vector<int> const android;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  o *b_Renamed;

				  c *c;

				  e *d;

			  public:
				  virtual ~b()
				  {
					  delete b;
					  delete c;
					  delete d;
				  }

				  b(Context *paramContext);

				  b(Context *paramContext, AttributeSet *paramAttributeSet);

				  b(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

			  protected:
				  virtual void drawableStateChanged();

			  public:
				  virtual ColorStateList *getSupportBackgroundTintList();

				  virtual PorterDuff::Mode *getSupportBackgroundTintMode();

				  virtual void setBackgroundDrawable(Drawable *paramDrawable);

				  virtual void setBackgroundResource(int paramInt);

				  virtual void setDropDownBackgroundResource(int paramInt);

				  virtual void setSupportBackgroundTintList(ColorStateList *paramColorStateList);

				  virtual void setSupportBackgroundTintMode(PorterDuff::Mode *paramMode);

				  virtual void setTextAppearance(Context *paramContext, int paramInt);
				};
			}
		}
	}
}

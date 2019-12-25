#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
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
				using android::util::AttributeSet;
				using android::widget::TextView;

				class f : public TextView
				{
			  private:
				  e *a = new e(this);

			  public:
				  virtual ~f()
				  {
					  delete a;
				  }

				  f(Context *paramContext);

				  f(Context *paramContext, AttributeSet *paramAttributeSet);

				  f(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

				  virtual void setTextAppearance(Context *paramContext, int paramInt);
				};
			}
		}
	}
}

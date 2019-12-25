#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../b/a.h"
#include "b.h"
#include "c.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::Context;
				using a = android::support::v7::b::a;
				using android::util::AttributeSet;
				using android::widget::TextView;

				class e
				{
			  private:
				  static std::vector<int> const android;

				  static std::vector<int> const b = {android.support::v7::b::a::a::textAllCaps};

				  TextView *const c;

			  public:
				  virtual ~e()
				  {
					  delete c;
				  }

				  e(TextView *paramTextView);

				  virtual void android.support::v7::b::a(Context *paramContext, int paramInt);

				  virtual void android.support::v7::b::a(AttributeSet *paramAttributeSet, int paramInt);

				  virtual void android.support::v7::b::a(bool paramBoolean);
				};
			}
		}
	}
}

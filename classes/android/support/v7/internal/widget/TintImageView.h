#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include "b.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class o; } } } } }

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
					using android::util::AttributeSet;
					using android::widget::ImageView;

					class TintImageView : public ImageView
					{
				  private:
					  static std::vector<int> const a = {16842964, 16843033};

					  o *const b;

				  public:
					  virtual ~TintImageView()
					  {
						  delete b;
					  }

					  TintImageView(Context *paramContext);

					  TintImageView(Context *paramContext, AttributeSet *paramAttributeSet);

					  TintImageView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

					  virtual void setImageResource(int paramInt);
					};
				}
			}
		}
	}
}

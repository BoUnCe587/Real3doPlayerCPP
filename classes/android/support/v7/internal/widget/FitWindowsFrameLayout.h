#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "g.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class a; } } } } }
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
					using android::graphics::Rect;
					using android::util::AttributeSet;
					using android::widget::FrameLayout;

					class FitWindowsFrameLayout : public FrameLayout, public g
					{
				  private:
					  g::a *a;

				  public:
					  virtual ~FitWindowsFrameLayout()
					  {
						  delete a;
					  }

					  FitWindowsFrameLayout(Context *paramContext);

					  FitWindowsFrameLayout(Context *paramContext, AttributeSet *paramAttributeSet);

				  protected:
					  virtual bool fitSystemWindows(Rect *paramRect);

				  public:
					  virtual void setOnFitSystemWindowsListener(g::a *parama);
					};
				}
			}
		}
	}
}

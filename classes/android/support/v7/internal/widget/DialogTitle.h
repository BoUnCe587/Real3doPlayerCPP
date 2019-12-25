#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

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
					using android::widget::TextView;

					class DialogTitle : public TextView
					{
				  public:
					  DialogTitle(Context *paramContext);

					  DialogTitle(Context *paramContext, AttributeSet *paramAttributeSet);

					  DialogTitle(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

				  protected:
					  virtual void onMeasure(int paramInt1, int paramInt2);
					};
				}
			}
		}
	}
}

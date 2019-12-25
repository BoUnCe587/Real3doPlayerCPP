#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

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
				using android::graphics::Canvas;
				using android::util::AttributeSet;
				using android::view::View;

				class Space : public View
				{
			  public:
				  Space(Context *paramContext);

				  Space(Context *paramContext, AttributeSet *paramAttributeSet);

				  Space(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

			  private:
				  static int a(int paramInt1, int paramInt2);

			  public:
				  virtual void draw(Canvas *paramCanvas);

			  protected:
				  virtual void onMeasure(int paramInt1, int paramInt2);
				};
			}
		}
	}
}

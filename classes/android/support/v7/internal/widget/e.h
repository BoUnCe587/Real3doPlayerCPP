#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace widget { class e; } } } }
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }

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
					using e = android::support::v4::widget::e;
					using a = android::support::v7::b::a;
					using android::util::AttributeSet;
					using android::view::View;
					using android::widget::PopupWindow;

					class e : public android.widget::PopupWindow
					{
				  private:
					  static const bool android = false;

					  bool b = false;

									  private:
										  class StaticConstructor
										  {
										  public:
											  StaticConstructor();
										  };

									  private:
										  static e::StaticConstructor staticConstructor;


				  public:
					  virtual internal *android.support::v4::widget::e(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

				  private:
					  static void android.support::v7::b::a(PopupWindow *paramPopupWindow);

				  private:
					  class OnScrollChangedListenerAnonymousInnerClass : public android.view::ViewTreeObserver::OnScrollChangedListener
					  {
					  public:
						  OnScrollChangedListenerAnonymousInnerClass(Field *field1, PopupWindow *paramPopupWindow, ViewTreeObserver::OnScrollChangedListener *get);

						  virtual void onScrollChanged();
					  };

				  public:
					  virtual void android.support::v7::b::a(bool paramBoolean);

					  virtual void showAsDropDown(View *paramView, int paramInt1, int paramInt2);

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(19) public void showAsDropDown(android.view.View paramView, int paramInt1, int paramInt2, int paramInt3)
					  virtual void showAsDropDown(View *paramView, int paramInt1, int paramInt2, int paramInt3);

					  virtual void update(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4);
					};
				}
			}
		}
	}
}

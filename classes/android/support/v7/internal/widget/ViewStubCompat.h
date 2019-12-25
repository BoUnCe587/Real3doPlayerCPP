#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "../a.h"
#include "a.h"
#include "../../b/a.h"
#include <stdexcept>

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
					using android::graphics::Canvas;
					using a = android::support::v7::b::a;
					using android::util::AttributeSet;
					using android::view::LayoutInflater;
					using android::view::View;

					class ViewStubCompat final : public android.view::View
					{
				  private:
					  int android = 0;

					  int b = 0;

					  WeakReference<View*> *c;

					  LayoutInflater *d;

					  a *e;

				  public:
					  virtual ~ViewStubCompat()
					  {
						  delete c;
						  delete d;
						  delete e;
					  }

					  ViewStubCompat(Context *paramContext, AttributeSet *paramAttributeSet);

					  ViewStubCompat(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

					  View *android.support::v7::b::a();

				  protected:
					  void dispatchDraw(Canvas *paramCanvas);

				  public:
					  void draw(Canvas *paramCanvas);

					  int getInflatedId();

					  LayoutInflater *getLayoutInflater();

					  int getLayoutResource();

				  protected:
					  void onMeasure(int paramInt1, int paramInt2);

				  public:
					  void setInflatedId(int paramInt);

					  void setLayoutInflater(LayoutInflater *paramLayoutInflater);

					  void setLayoutResource(int paramInt);

					  void setOnInflateListener(a *parama);

					  void setVisibility(int paramInt);

				  public:
					  class a
					  {
					public:
						virtual void a(ViewStubCompat *param1ViewStubCompat, View *param1View) = 0;
					  };
					};
				}
			}
		}
	}
}

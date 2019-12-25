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
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class k; } } } } }

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
					using android::graphics::drawable::Drawable;
					using a = android::support::v7::b::a;
					using android::util::AttributeSet;
					using android::view::ActionMode;
					using android::view::MotionEvent;
					using android::view::View;
					using android::widget::FrameLayout;

					class ActionBarContainer : public android->widget.FrameLayout
					{
				  public:
					  Drawable *android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Drawable *b_Renamed;

					  Drawable *c;

					  bool d = false;

					  bool e = false;

				  private:
					  bool f = false;

					  View *g;

					  View *h;

					  View *i;

					  int j = 0;

				  public:
					  virtual ~ActionBarContainer()
					  {
						  delete android;
						  delete b;
						  delete c;
						  delete g;
						  delete h;
						  delete i;
					  }

					  ActionBarContainer(Context *paramContext);

					  ActionBarContainer(Context *paramContext, AttributeSet *paramAttributeSet);

				  private:
					  bool android->support.v7.b.a(View *paramView);

					  int b(View *paramView);

				  protected:
					  virtual void drawableStateChanged();

				  public:
					  virtual View *getTabContainer();

					  virtual void jumpDrawablesToCurrentState();

					  virtual void onFinishInflate();

					  virtual bool onInterceptTouchEvent(MotionEvent *paramMotionEvent);

					  virtual void onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

					  virtual void onMeasure(int paramInt1, int paramInt2);

					  virtual bool onTouchEvent(MotionEvent *paramMotionEvent);

					  virtual void setPrimaryBackground(Drawable *paramDrawable);

					  virtual void setSplitBackground(Drawable *paramDrawable);

					  virtual void setStackedBackground(Drawable *paramDrawable);

					  virtual void setTabContainer(k *paramk);

					  virtual void setTransitioning(bool paramBoolean);

					  virtual void setVisibility(int paramInt);

					  virtual ActionMode *startActionModeForChild(View *paramView, ActionMode::Callback *paramCallback);

				  protected:
					  virtual bool verifyDrawable(Drawable *paramDrawable);
					};
				}
			}
		}
	}
}

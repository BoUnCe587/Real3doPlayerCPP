#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "g.h"
#include "../a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace c { class a; } } } }
namespace android { namespace support { namespace v4 { namespace c { namespace a { class a; } } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace c
			{
				namespace a
				{

					using android::content::res::ColorStateList;
					using android::graphics::Canvas;
					using android::graphics::ColorFilter;
					using android::graphics::PorterDuff;
					using android::graphics::Rect;
					using android::graphics::Region;
					using android::graphics::drawable::Drawable;

					class h : public Drawable, public Drawable::Callback, public g
					{
				  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static PorterDuff::Mode *const a_Renamed;

					  Drawable *b;

				  private:
					  ColorStateList *c;

					  PorterDuff::Mode *d = a_Renamed;

					  int e = 0;

					  PorterDuff::Mode *f;

					  bool g = false;

				  public:
					  h(Drawable *paramDrawable);

				  private:
					  bool a(std::vector<int> &paramArrayOfInt);

				  public:
					  virtual void a(Drawable *paramDrawable);

					  virtual void draw(Canvas *paramCanvas);

					  virtual int getChangingConfigurations();

					  virtual Drawable *getCurrent();

					  virtual int getIntrinsicHeight();

					  virtual int getIntrinsicWidth();

					  virtual int getMinimumHeight();

					  virtual int getMinimumWidth();

					  virtual int getOpacity();

					  virtual bool getPadding(Rect *paramRect);

					  virtual std::vector<int> getState();

					  virtual Region *getTransparentRegion();

					  virtual void invalidateDrawable(Drawable *paramDrawable);

					  virtual bool isStateful();

					  virtual Drawable *mutate();

				  protected:
					  virtual void onBoundsChange(Rect *paramRect);

					  virtual bool onLevelChange(int paramInt);

				  public:
					  virtual void scheduleDrawable(Drawable *paramDrawable, Runnable paramRunnable, long long paramLong);

					  virtual void setAlpha(int paramInt);

					  virtual void setChangingConfigurations(int paramInt);

					  virtual void setColorFilter(ColorFilter *paramColorFilter);

					  virtual void setDither(bool paramBoolean);

					  virtual void setFilterBitmap(bool paramBoolean);

					  virtual bool setState(std::vector<int> &paramArrayOfInt);

					  virtual void setTint(int paramInt);

					  virtual void setTintList(ColorStateList *paramColorStateList);

					  virtual void setTintMode(PorterDuff::Mode *paramMode);

					  virtual bool setVisible(bool paramBoolean1, bool paramBoolean2);

					  virtual void unscheduleDrawable(Drawable *paramDrawable, Runnable paramRunnable);
					};
				}
			}
		}
	}
}

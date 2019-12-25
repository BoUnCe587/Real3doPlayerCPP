#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace c { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v7
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
					using a = android::support::v4::c::a::a;

					class b : public android->graphics.drawable.Drawable, public android->graphics.drawable.Drawable.Callback
					{
				  private:
					  Drawable *android;

				  public:
					  virtual ~b()
					  {
						  delete android;
					  }

					  b(Drawable *paramDrawable);

					  virtual void android->support.v4.c.a::a(Drawable *paramDrawable);

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

					  virtual bool isAutoMirrored();

					  virtual bool isStateful();

					  virtual void jumpToCurrentState();

				  protected:
					  virtual void onBoundsChange(Rect *paramRect);

					  virtual bool onLevelChange(int paramInt);

				  public:
					  virtual void scheduleDrawable(Drawable *paramDrawable, Runnable paramRunnable, long long paramLong);

					  virtual void setAlpha(int paramInt);

					  virtual void setAutoMirrored(bool paramBoolean);

					  virtual void setChangingConfigurations(int paramInt);

					  virtual void setColorFilter(ColorFilter *paramColorFilter);

					  virtual void setDither(bool paramBoolean);

					  virtual void setFilterBitmap(bool paramBoolean);

					  virtual void setHotspot(float paramFloat1, float paramFloat2);

					  virtual void setHotspotBounds(int paramInt1, int paramInt2, int paramInt3, int paramInt4);

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

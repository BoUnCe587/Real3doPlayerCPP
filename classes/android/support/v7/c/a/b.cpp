//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "../../../v4/c/a.h"

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

					b::b(Drawable *paramDrawable)
					{
						android->support.v4.c.a::a(paramDrawable);
					}

					void b::android->support.v4.c.a::a(Drawable *paramDrawable)
					{
					  if (this->a != nullptr)
					  {
						this->a.setCallback(nullptr);
					  }
					  this->a = paramDrawable;
					  if (paramDrawable != nullptr)
					  {
						paramDrawable->setCallback(this);
					  }
					}

					void b::draw(Canvas *paramCanvas)
					{
						this->a.draw(paramCanvas);
					}

					int b::getChangingConfigurations()
					{
						return this->a.getChangingConfigurations();
					}

					Drawable *b::getCurrent()
					{
						return this->a.getCurrent();
					}

					int b::getIntrinsicHeight()
					{
						return this->a.getIntrinsicHeight();
					}

					int b::getIntrinsicWidth()
					{
						return this->a.getIntrinsicWidth();
					}

					int b::getMinimumHeight()
					{
						return this->a.getMinimumHeight();
					}

					int b::getMinimumWidth()
					{
						return this->a.getMinimumWidth();
					}

					int b::getOpacity()
					{
						return this->a.getOpacity();
					}

					bool b::getPadding(Rect *paramRect)
					{
						return this->a.getPadding(paramRect);
					}

					std::vector<int> b::getState()
					{
						return this->a.getState();
					}

					Region *b::getTransparentRegion()
					{
						return this->a.getTransparentRegion();
					}

					void b::invalidateDrawable(Drawable *paramDrawable)
					{
						invalidateSelf();
					}

					bool b::isAutoMirrored()
					{
						return android->support.v4.c.a::a::b(this->a);
					}

					bool b::isStateful()
					{
						return this->a.isStateful();
					}

					void b::jumpToCurrentState()
					{
						android->support.v4.c.a::a::a_Renamed(this->a);
					}

					void b::onBoundsChange(Rect *paramRect)
					{
						this->a.setBounds(paramRect);
					}

					bool b::onLevelChange(int paramInt)
					{
						return this->a.setLevel(paramInt);
					}

					void b::scheduleDrawable(Drawable *paramDrawable, Runnable paramRunnable, long long paramLong)
					{
						scheduleSelf(paramRunnable, paramLong);
					}

					void b::setAlpha(int paramInt)
					{
						this->a.setAlpha(paramInt);
					}

					void b::setAutoMirrored(bool paramBoolean)
					{
						android->support.v4.c.a::a::a(this->a, paramBoolean);
					}

					void b::setChangingConfigurations(int paramInt)
					{
						this->a.setChangingConfigurations(paramInt);
					}

					void b::setColorFilter(ColorFilter *paramColorFilter)
					{
						this->a.setColorFilter(paramColorFilter);
					}

					void b::setDither(bool paramBoolean)
					{
						this->a.setDither(paramBoolean);
					}

					void b::setFilterBitmap(bool paramBoolean)
					{
						this->a.setFilterBitmap(paramBoolean);
					}

					void b::setHotspot(float paramFloat1, float paramFloat2)
					{
						android->support.v4.c.a::a::a_Renamed(this->a, paramFloat1, paramFloat2);
					}

					void b::setHotspotBounds(int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
						android->support.v4.c.a::a::a_Renamed(this->a, paramInt1, paramInt2, paramInt3, paramInt4);
					}

					bool b::setState(std::vector<int> &paramArrayOfInt)
					{
						return this->a.setState(paramArrayOfInt);
					}

					void b::setTint(int paramInt)
					{
						android->support.v4.c.a::a::a(this->a, paramInt);
					}

					void b::setTintList(ColorStateList *paramColorStateList)
					{
						android->support.v4.c.a::a::a(this->a, paramColorStateList);
					}

					void b::setTintMode(PorterDuff::Mode *paramMode)
					{
						android->support.v4.c.a::a::a(this->a, paramMode);
					}

					bool b::setVisible(bool paramBoolean1, bool paramBoolean2)
					{
						return (Drawable::setVisible(paramBoolean1, paramBoolean2) || this->a.setVisible(paramBoolean1, paramBoolean2));
					}

					void b::unscheduleDrawable(Drawable *paramDrawable, Runnable paramRunnable)
					{
						unscheduleSelf(paramRunnable);
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "h.h"
#include "i.h"

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
android::graphics::PorterDuff::Mode *const h::a = android::graphics::PorterDuff::Mode::SRC_IN;

					h::h(Drawable *paramDrawable)
					{
						a(paramDrawable);
					}

					bool h::a(std::vector<int> &paramArrayOfInt)
					{
					  if (this->c != nullptr && this->d != nullptr)
					  {
						int i = this->c->getColorForState(paramArrayOfInt, this->c->getDefaultColor());
						PorterDuff::Mode *mode = this->d;
						if (!this->g || i != this->e || mode != this->f)
						{
						  setColorFilter(i, mode);
						  this->e = i;
						  this->f = mode;
						  this->g = true;
						  return true;
						}
					  }
					  else
					  {
						this->g = false;
						clearColorFilter();
					  }
					  return false;
					}

					void h::a(Drawable *paramDrawable)
					{
					  if (this->b != nullptr)
					  {
						this->b->setCallback(nullptr);
					  }
					  this->b = paramDrawable;
					  if (paramDrawable != nullptr)
					  {
						paramDrawable->setCallback(this);
					  }
					  invalidateSelf();
					}

					void h::draw(Canvas *paramCanvas)
					{
						this->b->draw(paramCanvas);
					}

					int h::getChangingConfigurations()
					{
						return this->b->getChangingConfigurations();
					}

					Drawable *h::getCurrent()
					{
						return this->b->getCurrent();
					}

					int h::getIntrinsicHeight()
					{
						return this->b->getIntrinsicHeight();
					}

					int h::getIntrinsicWidth()
					{
						return this->b->getIntrinsicWidth();
					}

					int h::getMinimumHeight()
					{
						return this->b->getMinimumHeight();
					}

					int h::getMinimumWidth()
					{
						return this->b->getMinimumWidth();
					}

					int h::getOpacity()
					{
						return this->b->getOpacity();
					}

					bool h::getPadding(Rect *paramRect)
					{
						return this->b->getPadding(paramRect);
					}

					std::vector<int> h::getState()
					{
						return this->b->getState();
					}

					Region *h::getTransparentRegion()
					{
						return this->b->getTransparentRegion();
					}

					void h::invalidateDrawable(Drawable *paramDrawable)
					{
						invalidateSelf();
					}

					bool h::isStateful()
					{
						return ((this->c != nullptr && this->c->isStateful()) || this->b->isStateful());
					}

					Drawable *h::mutate()
					{
					  Drawable *drawable1 = this->b;
					  Drawable *drawable2 = drawable1->mutate();
					  if (drawable2 != drawable1)
					  {
						a(drawable2);
					  }
					  return this;
					}

					void h::onBoundsChange(Rect *paramRect)
					{
						this->b->setBounds(paramRect);
					}

					bool h::onLevelChange(int paramInt)
					{
						return this->b->setLevel(paramInt);
					}

					void h::scheduleDrawable(Drawable *paramDrawable, Runnable paramRunnable, long long paramLong)
					{
						scheduleSelf(paramRunnable, paramLong);
					}

					void h::setAlpha(int paramInt)
					{
						this->b->setAlpha(paramInt);
					}

					void h::setChangingConfigurations(int paramInt)
					{
						this->b->setChangingConfigurations(paramInt);
					}

					void h::setColorFilter(ColorFilter *paramColorFilter)
					{
						this->b->setColorFilter(paramColorFilter);
					}

					void h::setDither(bool paramBoolean)
					{
						this->b->setDither(paramBoolean);
					}

					void h::setFilterBitmap(bool paramBoolean)
					{
						this->b->setFilterBitmap(paramBoolean);
					}

					bool h::setState(std::vector<int> &paramArrayOfInt)
					{
					  bool bool_Renamed = this->b->setState(paramArrayOfInt);
					  return (a(paramArrayOfInt) || bool_Renamed);
					}

					void h::setTint(int paramInt)
					{
						setTintList(static_cast<ColorStateList>(paramInt));
					}

					void h::setTintList(ColorStateList *paramColorStateList)
					{
					  this->c = paramColorStateList;
					  a(getState());
					}

					void h::setTintMode(PorterDuff::Mode *paramMode)
					{
					  this->d = paramMode;
					  a(getState());
					}

					bool h::setVisible(bool paramBoolean1, bool paramBoolean2)
					{
						return (Drawable::setVisible(paramBoolean1, paramBoolean2) || this->b->setVisible(paramBoolean1, paramBoolean2));
					}

					void h::unscheduleDrawable(Drawable *paramDrawable, Runnable paramRunnable)
					{
						unscheduleSelf(paramRunnable);
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ActionMenuItemView.h"
#include "../../../../v4/e/b.h"
#include "../../../b/a.h"
#include "m.h"
#include "n.h"
#include "../../../../v4/h/l.h"
#include "l.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{
					namespace menu
					{
						using android::content::Context;
						using android::content::res::Configuration;
						using android::content::res::Resources;
						using android::content::res::TypedArray;
						using android::graphics::Rect;
						using android::graphics::drawable::Drawable;
						using android::os::Build;
						using l = android::support::v4::h::l;
						using a = android::support::v7::b::a;
						using ActionMenuView = android::support::v7::widget::ActionMenuView;
						using f = android::support::v7::widget::f;
						using h = android::support::v7::widget::h;
						using android::text::TextUtils;
						using android::util::AttributeSet;
						using android::view::MotionEvent;
						using android::view::View;
						using android::widget::Toast;

						ActionMenuItemView::ActionMenuItemView(Context *paramContext) : ActionMenuItemView(paramContext, nullptr)
						{
						}

						ActionMenuItemView::ActionMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet) : ActionMenuItemView(paramContext, paramAttributeSet, 0)
						{
						}

						ActionMenuItemView::ActionMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android->support.v7.widget.f(paramContext, paramAttributeSet, paramInt)
						{
						  Resources *resources = paramContext->getResources();
						  this->g = resources->getBoolean(android->support.v7.b.a::b.abc_config_allowActionMenuItemTextWithIcon);
						  TypedArray *typedArray = paramContext->obtainStyledAttributes(paramAttributeSet, android->support.v7.b.a::j.ActionMenuItemView, paramInt, 0);
						  this->i = typedArray->getDimensionPixelSize(android->support.v7.b.a::j.ActionMenuItemView_android_minWidth, 0);
						  typedArray->recycle();
						  this->k = static_cast<int>((resources->getDisplayMetrics()).density * 32.0F + 0.5F);
						  setOnClickListener(this);
						  setOnLongClickListener(this);
						  this->j = -1;
						}

						void ActionMenuItemView::e()
						{ // Byte code:
						  //   0: iconst_0
						  //   1: istore_3
						  //   2: aload_0
						  //   3: getfield b : Ljava/lang/CharSequence;
						  //   6: invokestatic isEmpty : (Ljava/lang/CharSequence;)Z
						  //   9: ifne -> 70
						  //   12: iconst_1
						  //   13: istore_1
						  //   14: aload_0
						  //   15: getfield c : Landroid/graphics/drawable/Drawable;
						  //   18: ifnull -> 49
						  //   21: iload_3
						  //   22: istore_2
						  //   23: aload_0
						  //   24: getfield a : Landroid/support/v7/internal/view/menu/f;
						  //   27: invokevirtual m : ()Z
						  //   30: ifeq -> 51
						  //   33: aload_0
						  //   34: getfield g : Z
						  //   37: ifne -> 49
						  //   40: iload_3
						  //   41: istore_2
						  //   42: aload_0
						  //   43: getfield h : Z
						  //   46: ifeq -> 51
						  //   49: iconst_1
						  //   50: istore_2
						  //   51: iload_1
						  //   52: iload_2
						  //   53: iand
						  //   54: ifeq -> 75
						  //   57: aload_0
						  //   58: getfield b : Ljava/lang/CharSequence;
						  //   61: astore #4
						  //   63: aload_0
						  //   64: aload #4
						  //   66: invokevirtual setText : (Ljava/lang/CharSequence;)V
						  //   69: return
						  //   70: iconst_0
						  //   71: istore_1
						  //   72: goto -> 14
						  //   75: aconst_null
						  //   76: astore #4
						  //   78: goto -> 63 }

					public:
						void android->support.v7.b.a(android->support.v7.widget.f paramf, int paramInt)
						{
						  this->a = paramf;
						  setIcon(paramf::getIcon());
						  setTitle(paramf::a(this));
						  setId(paramf::getItemId());
						  if (paramf::isVisible())
						  {
							paramInt = 0;
						  }
						  else
						  {
							paramInt = 8;
						  }
						  setVisibility(paramInt);
						  setEnabled(paramf::isEnabled());
						  if (paramf::hasSubMenu() && this->e_Renamed == nullptr)
						  {
							this->e_Renamed = new android->support.v7.b.a(this);
						  }
						}

						bool android->support.v7.b.a()
						{
							return true;
						}

						bool b()
						{
							return !android->text.TextUtils->isEmpty(getText());
						}

						bool c()
						{
							return (b() && this->a.getIcon() == nullptr);
						}

						bool d()
						{
							return b();
						}

						android->support.v7.widget.f getItemData()
						{
							return this->a;
						}

						void onClick(android->view.View paramView)
						{
						  if (this->d != nullptr)
						  {
							this->d->a(this->a);
						  }
						}

						void onConfigurationChanged(android->content.res.Configuration paramConfiguration)
						{
						  if (android->os.Build.VERSION.SDK_INT >= 8)
						  {
							f::onConfigurationChanged(paramConfiguration);
						  }
						  this->g = getContext().getResources().getBoolean(android->support.v7.b.a::b.abc_config_allowActionMenuItemTextWithIcon);
						  e();
						}

						bool onLongClick(android->view.View paramView)
						{
						  if (b())
						  {
							return false;
						  }
						  std::vector<int> arrayOfInt(2);
						  Rect *rect = new android->graphics.Rect();
						  getLocationOnScreen(arrayOfInt);
						  getWindowVisibleDisplayFrame(rect);
						  Context *context = getContext();
						  int m = getWidth();
						  int i1 = getHeight();
						  int i2 = arrayOfInt[1];
						  int i3 = i1 / 2;
						  int n = arrayOfInt[0];
						  n = m / 2 + n;
						  m = n;
						  if (android->support.v4.h.l::a(paramView) == 0)
						  {
							m = (context->getResources().getDisplayMetrics()).widthPixels - n;
						  }
						  Toast *toast = android->widget.Toast.makeText(context, this->a.getTitle(), 0);
						  if (i2 + i3 < rect->height())
						  {
							toast->setGravity(8388661, m, arrayOfInt[1] + i1 - rect->top);
							toast->show();
							return true;
						  }
						  toast->setGravity(81, 0, i1);
						  toast->show();
						  return true;
						}

					protected:
						void onMeasure(int paramInt1, int paramInt2)
						{
						  bool bool_Renamed = b();
						  if (bool_Renamed && this->j >= 0)
						  {
							f::setPadding(this->j, getPaddingTop(), getPaddingRight(), getPaddingBottom());
						  }
						  f::onMeasure(paramInt1, paramInt2);
						  int m = android->view.View.MeasureSpec.getMode(paramInt1);
						  paramInt1 = android->view.View.MeasureSpec.getSize(paramInt1);
						  int n = getMeasuredWidth();
						  if (m == std::numeric_limits<int>::min())
						  {
							paramInt1 = std::min(paramInt1, this->i);
						  }
						  else
						  {
							paramInt1 = this->i;
						  }
						  if (m != 1073741824 && this->i > 0 && n < paramInt1)
						  {
							f::onMeasure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt1, 1073741824), paramInt2);
						  }
						  if (!bool_Renamed && this->c != nullptr)
						  {
							f::setPadding((getMeasuredWidth() - this->c->getBounds().width()) / 2, getPaddingTop(), getPaddingRight(), getPaddingBottom());
						  }
						}

					public:
						bool onTouchEvent(android->view.MotionEvent paramMotionEvent)
						{
							return (this->a.hasSubMenu() && this->e_Renamed != nullptr && this->e_Renamed->onTouch(this, paramMotionEvent)) ? true : f::onTouchEvent(paramMotionEvent);
						}

						void setCheckable(bool paramBoolean)
						{
						}

						void setChecked(bool paramBoolean)
						{
						}

						void setExpandedFormat(bool paramBoolean)
						{
						  if (this->h != paramBoolean)
						  {
							this->h = paramBoolean;
							if (this->a != nullptr)
							{
							  this->a.h();
							}
						  }
						}

						void setIcon(android->graphics.drawable.Drawable paramDrawable)
						{
						  this->c = paramDrawable;
						  if (paramDrawable != nullptr)
						  {
							int i2 = paramDrawable::getIntrinsicWidth();
							int i1 = paramDrawable::getIntrinsicHeight();
							int n = i1;
							int m = i2;
							if (i2 > this->k)
							{
							  float f1 = this->k / i2;
							  m = this->k;
							  n = static_cast<int>(i1 * f1);
							}
							i2 = n;
							i1 = m;
							if (n > this->k)
							{
							  float f1 = this->k / n;
							  i2 = this->k;
							  i1 = static_cast<int>(m * f1);
							}
							paramDrawable::setBounds(0, 0, i1, i2);
						  }
						  setCompoundDrawables(paramDrawable, nullptr, nullptr, nullptr);
						  e();
						}

						void setItemInvoker(e_Renamed->b paramb)
						{
							this->d = paramb;
						}

						void setPadding(int paramInt1, int paramInt2, int paramInt3, int paramInt4)
						{
						  this->j = paramInt1;
						  f::setPadding(paramInt1, paramInt2, paramInt3, paramInt4);
						}

						void setPopupCallback(b paramb)
						{
							this->f = paramb;
						}

						void setTitle(CharSequence paramCharSequence)
						{
						  this->b = paramCharSequence;
						  setContentDescription(this->b);
						  e();
						}

					private:
						class l::a_Renamed extends android->support.v7.widget.h : public :b
						{
					  public:
						  android->support.v7.b.a(ActionMenuItemView this$0)
						  {
							  f(this$0);
						  }

						  android->support.v7.widget.h android->support.v7.b.a()
						  {
							  return (ActionMenuItemView::a(this->a) != nullptr) ? ActionMenuItemView::a(this->a).a() : nullptr;
						  }

					  protected:
						  bool b()
						  {
							char b1 = 0;
							int i = b1;
							if (ActionMenuItemView::b(this->a) != nullptr)
							{
							  i = b1;
							  if (ActionMenuItemView::b(this->a).a(ActionMenuItemView::c(this->a)))
							  {
								android->support.v7.widget.h android->support.v7.widget->h = android->support.v7.b.a();
								i = b1;
								if (android->support.v7.widget.h != nullptr)
								{
								  i = b1;
								  if (android->support.v7.widget.h::k())
								  {
									i = 1;
								  }
								}
							  }
							}
							return i;
						  }
						}

					public:
						static class b
						{
						  = 0 android->support.v7.widget.h android->support.v7.b.a();
						}
						}
					}
				}
			}
		}
	}
}

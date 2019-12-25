//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "h.h"
#include "i.h"
#include "j.h"
#include "k.h"
#include "m.h"
#include "n.h"

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
					using android::graphics::Rect;
					using android::graphics::drawable::Drawable;
					using a = android::support::v4::c::a::a;
					using b = android::support::v7::c::a::b;
					using android::util::AttributeSet;
					using android::view::View;
					using android::view::ViewGroup;
					using android::widget::ListAdapter;
					using android::widget::ListView;

					h::h(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android->widget.ListView(paramContext, paramAttributeSet, paramInt)
					{
					  try
					  {
						this->g = android::widget::AbsListView::typeid->getDeclaredField(L"mIsChildViewEnabled");
						this->g->setAccessible(true);
						return;
					  }
					  catch (const NoSuchFieldException &paramContext)
					  {
						paramContext->printStackTrace();
						return;
					  }
					}

					int h::android->support.v4.c.a::a(int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5)
					{
					  paramInt2 = getListPaddingTop();
					  int i = getListPaddingBottom();
					  getListPaddingLeft();
					  getListPaddingRight();
					  paramInt3 = getDividerHeight();
					  Drawable *drawable = getDivider();
					  ListAdapter *listAdapter = getAdapter();
					  if (listAdapter == nullptr)
					  {
						return paramInt2 + i;
					  }
					  paramInt2 = i + paramInt2;
					  if (paramInt3 <= 0 || drawable == nullptr)
					  {
						paramInt3 = 0;
					  }
					  int j = 0;
					  drawable = nullptr;
					  int k = 0;
					  int m = listAdapter->getCount();
					  i = 0;
					  while (i < m)
					  {
						int n = listAdapter->getItemViewType(i);
						if (n != k)
						{
						  drawable = nullptr;
						  k = n;
						}
						View *view = listAdapter->getView(i, drawable, this);
						ViewGroup::LayoutParams *layoutParams = view->getLayoutParams();
						if (layoutParams != nullptr && layoutParams->height > 0)
						{
						  n = android->view.View.MeasureSpec.makeMeasureSpec(layoutParams->height, 1073741824);
						}
						else
						{
						  n = android->view.View.MeasureSpec.makeMeasureSpec(0, 0);
						}
						view->measure(paramInt1, n);
						if (i > 0)
						{
						  paramInt2 += paramInt3;
						}
						paramInt2 += view->getMeasuredHeight();
						if (paramInt2 >= paramInt4)
						{
						  paramInt1 = paramInt4;
						  if (paramInt5 >= 0)
						  {
							paramInt1 = paramInt4;
							if (i > paramInt5)
							{
							  paramInt1 = paramInt4;
							  if (j)
							  {
								paramInt1 = paramInt4;
								if (paramInt2 != paramInt4)
								{
								  return j;
								}
							  }
							}
						  }
						  return paramInt1;
						}
						n = j;
						if (paramInt5 >= 0)
						{
						  n = j;
						  if (i >= paramInt5)
						  {
							n = paramInt2;
						  }
						}
						i++;
						j = n;
					  }
					  return paramInt2;
					}

					void h::android->support.v4.c.a::a()
					{
					  Drawable *drawable = getSelector();
					  if (drawable != nullptr && android->support.v7.c.a.b())
					  {
						drawable->setState(getDrawableState());
					  }
					}

					void h::android->support.v4.c.a::a(int paramInt, View *paramView)
					{
					  bool bool_Renamed;
					  bool bool1 = true;
					  Drawable *drawable = getSelector();
					  if (drawable != nullptr && paramInt != -1)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  if (bool_Renamed)
					  {
						drawable->setVisible(false, false);
					  }
					  android->support.v7.c.a.b(paramInt, paramView);
					  if (bool_Renamed)
					  {
						Rect *rect = this->a;
						float f1 = rect->exactCenterX();
						float f2 = rect->exactCenterY();
						if (getVisibility() != 0)
						{
						  bool1 = false;
						}
						drawable->setVisible(bool1, false);
						android->support.v4.c.a::a::a_Renamed(drawable, f1, f2);
					  }
					}

					void h::android->support.v4.c.a::a(int paramInt, View *paramView, float paramFloat1, float paramFloat2)
					{
					  android->support.v4.c.a::a(paramInt, paramView);
					  Drawable *drawable = getSelector();
					  if (drawable != nullptr && paramInt != -1)
					  {
						android->support.v4.c.a::a::a_Renamed(drawable, paramFloat1, paramFloat2);
					  }
					}

					void h::android->support.v4.c.a::a(Canvas *paramCanvas)
					{
					  if (!this->a->isEmpty())
					  {
						Drawable *drawable = getSelector();
						if (drawable != nullptr)
						{
						  drawable->setBounds(this->a);
						  drawable->draw(paramCanvas);
						}
					  }
					}

					void h::android->support.v7.c.a.b(int paramInt, View *paramView)
					{
					  Rect *rect = this->a;
					  rect->set(paramView->getLeft(), paramView->getTop(), paramView->getRight(), paramView->getBottom());
					  rect->left -= this->b;
					  rect->top -= this->c_Renamed;
					  rect->right += this->d;
					  rect->bottom += this->e;
					  try
					  {
						bool bool_Renamed = this->g->getBoolean(this);
						if (paramView->isEnabled() != bool_Renamed)
						{
						  Field *field = this->g;
						  if (!bool_Renamed)
						  {
							bool_Renamed = true;
						  }
						  else
						  {
							bool_Renamed = false;
						  }
						  field->set(this, static_cast<Boolean>(bool_Renamed));
						  if (paramInt != -1)
						  {
							refreshDrawableState();
						  }
						}
						return;
					  }
					  catch (const IllegalAccessException &paramView)
					  {
						paramView->printStackTrace();
						return;
					  }
					}

					bool h::android->support.v7.c.a.b()
					{
						return (c() && isPressed());
					}

					bool h::c()
					{
						return false;
					}

					void h::dispatchDraw(Canvas *paramCanvas)
					{
					  android->support.v4.c.a::a(paramCanvas);
					  ListView::dispatchDraw(paramCanvas);
					}

					void h::drawableStateChanged()
					{
					  ListView::drawableStateChanged();
					  setSelectorEnabled(true);
					  android->support.v4.c.a::a();
					}

					void h::setSelector(Drawable *paramDrawable)
					{
					  if (paramDrawable != nullptr)
					  {
						rect = new android->support.v4.c.a::a(paramDrawable);
					  }
					  else
					  {
						rect = nullptr;
					  }
					  this->h_Renamed = rect;
					  ListView::setSelector(this->h_Renamed);
					  Rect *rect = new android->graphics.Rect();
					  if (paramDrawable != nullptr)
					  {
						paramDrawable->getPadding(rect);
					  }
					  this->b = rect->left;
					  this->c_Renamed = rect->top;
					  this->d = rect->right;
					  this->e = rect->bottom;
					}

					void h::setSelectorEnabled(bool paramBoolean)
					{
					  if (this->h_Renamed != nullptr)
					  {
						this->h_Renamed->a_Renamed(paramBoolean);
					  }
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					internal *h::a::android.support::v4::c::a::a(Drawable *param1Drawable)
					{
						b(param1Drawable);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void h::a::android.support::v4::c::a::a(bool param1Boolean)
					{
						this->a = param1Boolean;
					}

					void h::a::draw(Canvas *param1Canvas)
					{
					  if (this->a)
					  {
						b::draw(param1Canvas);
					  }
					}

					void h::a::setHotspot(float param1Float1, float param1Float2)
					{
					  if (this->a)
					  {
						b::setHotspot(param1Float1, param1Float2);
					  }
					}

					void h::a::setHotspotBounds(int param1Int1, int param1Int2, int param1Int3, int param1Int4)
					{
					  if (this->a)
					  {
						b::setHotspotBounds(param1Int1, param1Int2, param1Int3, param1Int4);
					  }
					}

					bool h::a::setState(std::vector<int> &param1ArrayOfInt)
					{
						return this->a ? b::setState(param1ArrayOfInt) : 0;
					}

					bool h::a::setVisible(bool param1Boolean1, bool param1Boolean2)
					{
						return this->a ? b::setVisible(param1Boolean1, param1Boolean2) : 0;
					}
				}
			}
		}
	}
}

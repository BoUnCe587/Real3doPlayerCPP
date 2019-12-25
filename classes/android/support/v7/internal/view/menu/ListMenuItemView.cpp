//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ListMenuItemView.h"
#include "../../../b/a.h"

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
						using android::content::res::TypedArray;
						using android::graphics::drawable::Drawable;
						using a = android::support::v7::b::a;
						using android::util::AttributeSet;
						using android::view::LayoutInflater;
						using android::view::ViewGroup;
						using android::widget::CheckBox;
						using android::widget::ImageView;
						using android::widget::LinearLayout;
						using android::widget::RadioButton;
						using android::widget::TextView;

						ListMenuItemView::ListMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet) : ListMenuItemView(paramContext, paramAttributeSet, 0)
						{
						}

						ListMenuItemView::ListMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android->widget.LinearLayout(paramContext, paramAttributeSet)
						{
						  this->l = paramContext;
						  TypedArray *typedArray = paramContext->obtainStyledAttributes(paramAttributeSet, android->support.v7.b.a::j.MenuView, paramInt, 0);
						  this->g = typedArray->getDrawable(android->support.v7.b.a::j.MenuView_android_itemBackground);
						  this->h = typedArray->getResourceId(android->support.v7.b.a::j.MenuView_android_itemTextAppearance, -1);
						  this->j = typedArray->getBoolean(android->support.v7.b.a::j.MenuView_preserveIconSpacing, false);
						  this->i = paramContext;
						  typedArray->recycle();
						}

						void ListMenuItemView::b()
						{
						  this->b_Renamed = static_cast<ImageView*>(getInflater()->inflate(android->support.v7.b.a::g.abc_list_menu_item_icon, this, false));
						  addView(this->b_Renamed, 0);
						}

						void ListMenuItemView::c()
						{
						  this->c_Renamed = static_cast<RadioButton*>(getInflater()->inflate(android->support.v7.b.a::g.abc_list_menu_item_radio, this, false));
						  addView(this->c_Renamed);
						}

						void ListMenuItemView::d()
						{
						  this->e = static_cast<CheckBox*>(getInflater()->inflate(android->support.v7.b.a::g.abc_list_menu_item_checkbox, this, false));
						  addView(this->e);
						}

						LayoutInflater *ListMenuItemView::getInflater()
						{
						  if (this->m == nullptr)
						  {
							this->m = android->view.LayoutInflater.from(this->l);
						  }
						  return this->m;
						}

						void ListMenuItemView::android->support.v7.b.a(f *paramf, int paramInt)
						{
						  this->a = paramf;
						  this->k = paramInt;
						  if (paramf->isVisible())
						  {
							paramInt = 0;
						  }
						  else
						  {
							paramInt = 8;
						  }
						  setVisibility(paramInt);
						  setTitle(paramf->a(this));
						  setCheckable(paramf->isCheckable());
						  android->support.v7.b.a(paramf->f(), paramf->d());
						  setIcon(paramf->getIcon());
						  setEnabled(paramf->isEnabled());
						}

						void ListMenuItemView::android->support.v7.b.a(bool paramBoolean, wchar_t paramChar)
						{
						  if (paramBoolean && this->a.f())
						  {
							paramChar = std::numeric_limits<wchar_t>::min();
						  }
						  else
						  {
							paramChar = L'\b';
						  }
						  if (paramChar == L'\000')
						  {
							this->f->setText(this->a.e());
						  }
						  if (this->f->getVisibility() != paramChar)
						  {
							this->f->setVisibility(paramChar);
						  }
						}

						bool ListMenuItemView::android->support.v7.b.a()
						{
							return false;
						}

						f *ListMenuItemView::getItemData()
						{
							return this->a;
						}

						void ListMenuItemView::onFinishInflate()
						{
						  LinearLayout::onFinishInflate();
						  setBackgroundDrawable(this->g);
						  this->d_Renamed = static_cast<TextView*>(findViewById(android->support.v7.b.a::e.title));
						  if (this->h != -1)
						  {
							this->d_Renamed->setTextAppearance(this->i, this->h);
						  }
						  this->f = static_cast<TextView*>(findViewById(android->support.v7.b.a::e.shortcut));
						}

						void ListMenuItemView::onMeasure(int paramInt1, int paramInt2)
						{
						  if (this->b_Renamed != nullptr && this->j)
						  {
							ViewGroup::LayoutParams *layoutParams = getLayoutParams();
							LinearLayout::LayoutParams *layoutParams1 = static_cast<LinearLayout::LayoutParams*>(this->b_Renamed->getLayoutParams());
							if (layoutParams->height > 0 && layoutParams1->width <= 0)
							{
							  layoutParams1->width = layoutParams->height;
							}
						  }
						  LinearLayout::onMeasure(paramInt1, paramInt2);
						}

						void ListMenuItemView::setCheckable(bool paramBoolean)
						{
						  if (paramBoolean || this->c_Renamed != nullptr || this->e != nullptr)
						  {
							RadioButton *radioButton;
							CheckBox *checkBox;
							if (this->a.g())
							{
							  if (this->c_Renamed == nullptr)
							  {
								c();
							  }
							  checkBox = this->c_Renamed;
							  radioButton = this->e;
							}
							else
							{
							  if (this->e == nullptr)
							  {
								d();
							  }
							  checkBox = this->e;
							  radioButton = this->c_Renamed;
							}
							if (paramBoolean)
							{
							  char b1;
							  checkBox->setChecked(this->a.isChecked());
							  if (paramBoolean)
							  {
								b1 = 0;
							  }
							  else
							  {
								b1 = 8;
							  }
							  if (checkBox->getVisibility() != b1)
							  {
								checkBox->setVisibility(b1);
							  }
							  if (radioButton != nullptr && radioButton->getVisibility() != 8)
							  {
								radioButton->setVisibility(8);
								return;
							  }
							  return;
							}
							if (this->e != nullptr)
							{
							  this->e->setVisibility(8);
							}
							if (this->c_Renamed != nullptr)
							{
							  this->c_Renamed->setVisibility(8);
							  return;
							}
						  }
						}

						void ListMenuItemView::setChecked(bool paramBoolean)
						{
						  CheckBox *checkBox;
						  if (this->a.g())
						  {
							if (this->c_Renamed == nullptr)
							{
							  c();
							}
							checkBox = this->c_Renamed;
						  }
						  else
						  {
							if (this->e == nullptr)
							{
							  d();
							}
							checkBox = this->e;
						  }
						  checkBox->setChecked(paramBoolean);
						}

						void ListMenuItemView::setForceShowIcon(bool paramBoolean)
						{
						  this->n = paramBoolean;
						  this->j = paramBoolean;
						}

						void ListMenuItemView::setIcon(Drawable *paramDrawable)
						{
						  bool bool_Renamed;
						  if (this->a.i() || this->n)
						  {
							bool_Renamed = true;
						  }
						  else
						  {
							bool_Renamed = false;
						  }
						  if ((bool_Renamed || this->j) && (this->b_Renamed != nullptr || paramDrawable != nullptr || this->j))
						  {
							if (this->b_Renamed == nullptr)
							{
							  b();
							}
							if (paramDrawable != nullptr || this->j)
							{
							  ImageView *imageView = this->b_Renamed;
							  if (!bool_Renamed)
							  {
								paramDrawable = nullptr;
							  }
							  imageView->setImageDrawable(paramDrawable);
							  if (this->b_Renamed->getVisibility() != 0)
							  {
								this->b_Renamed->setVisibility(0);
								return;
							  }
							  return;
							}
							this->b_Renamed->setVisibility(8);
							return;
						  }
						}

						void ListMenuItemView::setTitle(CharSequence *paramCharSequence)
						{
						  if (paramCharSequence != nullptr)
						  {
							this->d_Renamed->setText(paramCharSequence);
							if (this->d_Renamed->getVisibility() != 0)
							{
							  this->d_Renamed->setVisibility(0);
							}
							return;
						  }
						  if (this->d_Renamed->getVisibility() != 8)
						  {
							this->d_Renamed->setVisibility(8);
							return;
						  }
						}
					}
				}
			}
		}
	}
}

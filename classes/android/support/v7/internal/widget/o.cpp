//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "o.h"
#include "../../../v4/b/a.h"
#include "../../../v4/g/d.h"
#include "../../d/a.h"
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
					using android::content::res::ColorStateList;
					using android::graphics::PorterDuff;
					using android::graphics::PorterDuffColorFilter;
					using android::graphics::drawable::Drawable;
					using android::graphics::drawable::LayerDrawable;
					using android::os::Build;
					using a = android::support::v4::b::a;
					using android::support::v4::c::a;
					using a = android::support::v4::c::a::a;
					using c = android::support::v4::g::c;
					using a = android::support::v7::b::a;
					using android::util::SparseArray;
					using android::view::View;
android::graphics::PorterDuff::Mode *const o::b;
java::util::WeakHashMap<o::android::content::Context*, o*> *const android;
android::support::v4::b::a *const o::d;

					o::StaticConstructor::StaticConstructor()
					{
												bool bool_Renamed;
												if (android.os::Build::VERSION::SDK_INT < 21)
												{
												  bool_Renamed = true;
												}
												else
												{
												  bool_Renamed = false;
												}
												android.support::v4::b::a = bool_Renamed;
												b_Renamed = android.graphics::PorterDuff::Mode::SRC_IN;
												android.support::v4::g::c = new WeakHashMap();
												d_Renamed = new android.support::v4::b::a(6);
												e_Renamed = std::vector<int> {android.support::v4::b::a::d::abc_textfield_search_default_mtrl_alpha, android.support::v4::b::a::d::abc_textfield_default_mtrl_alpha, android.support::v4::b::a::d::abc_ab_share_pack_mtrl_alpha};
												f_Renamed = std::vector<int> {android.support::v4::b::a::d::abc_ic_ab_back_mtrl_am_alpha, android.support::v4::b::a::d::abc_ic_go_search_api_mtrl_alpha, android.support::v4::b::a::d::abc_ic_search_api_mtrl_alpha, android.support::v4::b::a::d::abc_ic_commit_search_api_mtrl_alpha, android.support::v4::b::a::d::abc_ic_clear_mtrl_alpha, android.support::v4::b::a::d::abc_ic_menu_share_mtrl_alpha, android.support::v4::b::a::d::abc_ic_menu_copy_mtrl_am_alpha, android.support::v4::b::a::d::abc_ic_menu_cut_mtrl_alpha, android.support::v4::b::a::d::abc_ic_menu_selectall_mtrl_alpha, android.support::v4::b::a::d::abc_ic_menu_paste_mtrl_am_alpha, android.support::v4::b::a::d::abc_ic_menu_moreoverflow_mtrl_alpha, android.support::v4::b::a::d::abc_ic_voice_search_api_mtrl_alpha};
												g_Renamed = std::vector<int> {android.support::v4::b::a::d::abc_textfield_activated_mtrl_alpha, android.support::v4::b::a::d::abc_textfield_search_activated_mtrl_alpha, android.support::v4::b::a::d::abc_cab_background_top_mtrl_alpha, android.support::v4::b::a::d::abc_text_cursor_material};
												h_Renamed = std::vector<int> {android.support::v4::b::a::d::abc_popup_background_mtrl_mult, android.support::v4::b::a::d::abc_cab_background_internal_bg, android.support::v4::b::a::d::abc_menu_hardkey_panel_mtrl_mult};
												i_Renamed = std::vector<int> {android.support::v4::b::a::d::abc_edit_text_material, android.support::v4::b::a::d::abc_tab_indicator_material, android.support::v4::b::a::d::abc_textfield_search_material, android.support::v4::b::a::d::abc_spinner_mtrl_am_alpha, android.support::v4::b::a::d::abc_spinner_textfield_background_material, android.support::v4::b::a::d::abc_ratingbar_full_material, android.support::v4::b::a::d::abc_switch_track_mtrl_alpha, android.support::v4::b::a::d::abc_switch_thumb_material, android.support::v4::b::a::d::abc_btn_default_mtrl_shape, android.support::v4::b::a::d::abc_btn_borderless_material};
												j = std::vector<int> {android.support::v4::b::a::d::abc_btn_check_material, android.support::v4::b::a::d::abc_btn_radio_material};
					}

o::StaticConstructor o::staticConstructor;

					o::o(Context *paramContext) : k(new WeakReference(paramContext))
					{
					}

					PorterDuffColorFilter *o::android.support::v4::b::a(int paramInt, PorterDuff::Mode *paramMode)
					{
					  PorterDuffColorFilter *porterDuffColorFilter2 = d_Renamed->a(paramInt, paramMode);
					  PorterDuffColorFilter *porterDuffColorFilter1 = porterDuffColorFilter2;
					  if (porterDuffColorFilter2 == nullptr)
					  {
						porterDuffColorFilter1 = new android.graphics::PorterDuffColorFilter(paramInt, paramMode);
						d_Renamed->a(paramInt, paramMode, porterDuffColorFilter1);
					  }
					  return porterDuffColorFilter1;
					}

					PorterDuffColorFilter *o::android.support::v4::b::a(ColorStateList *paramColorStateList, PorterDuff::Mode *paramMode, std::vector<int> &paramArrayOfInt)
					{
						return (paramColorStateList == nullptr || paramMode == nullptr) ? nullptr : android.support::v4::b::a(paramColorStateList->getColorForState(paramArrayOfInt, 0), paramMode);
					}

					Drawable *o::android.support::v4::b::a(Context *paramContext, int paramInt)
					{
						return d(paramInt) ? android.support::v4::b::a(paramContext).a(paramInt) : android.support::v4::b::a::a(paramContext, paramInt);
					}

					o *o::android.support::v4::b::a(Context *paramContext)
					{
					  o *o2 = static_cast<o*>(android.support::v4::g::c::get(paramContext));
					  o *o1 = o2;
					  if (o2 == nullptr)
					  {
						o1 = new o(paramContext);
						android.support::v4::g::c::put(paramContext, o1);
					  }
					  return o1;
					}

					void o::android.support::v4::b::a(View *paramView, n *paramn)
					{
					  Drawable *drawable = paramView->getBackground();
					  if (paramn->d || paramn->c)
					  {
						ColorStateList *colorStateList;
						PorterDuff::Mode *mode;
						if (paramn->d)
						{
						  colorStateList = paramn->a;
						}
						else
						{
						  colorStateList = nullptr;
						}
						if (paramn->c)
						{
						  mode = paramn->b;
						}
						else
						{
						  mode = b_Renamed;
						}
						drawable->setColorFilter(android.support::v4::b::a(colorStateList, mode, paramView->getDrawableState()));
					  }
					  else
					  {
						drawable->clearColorFilter();
					  }
					  if (android.os::Build::VERSION::SDK_INT <= 10)
					  {
						paramView->invalidate();
					  }
					}

					bool o::android.support::v4::b::a(std::vector<int> &paramArrayOfInt, int paramInt)
					{
					  bool bool_Renamed = false;
					  int n = paramArrayOfInt.size();
					  for (char b1 = 0;; b1++)
					  {
						bool bool1 = bool_Renamed;
						if (b1 < n)
						{
						  if (paramArrayOfInt[b1] == paramInt)
						  {
							return true;
						  }
						}
						else
						{
						  return bool1;
						}
					  }
					}

					ColorStateList *o::b(Context *paramContext)
					{
					  if (this->m == nullptr)
					  {
						int n = l::a(paramContext, android.support::v4::b::a::a::colorControlNormal);
						int i1 = l::a(paramContext, android.support::v4::b::a::a::colorControlActivated);
						std::vector<int> arrayOfInt = l->a;
						int i2 = l::c(paramContext, android.support::v4::b::a::a::colorControlNormal);
						this->m = new android.content::res::ColorStateList(std::vector<std::vector<int>> {arrayOfInt, l->b_Renamed, l->c_Renamed, l::d, l::e, l::f, l::h}, std::vector<int> {i2, i1, i1, i1, i1, i1, n});
					  }
					  return this->m;
					}

					ColorStateList *o::b(Context *paramContext, int paramInt)
					{
					  paramInt = l::a(paramContext, paramInt);
					  int i2 = l::a(paramContext, android.support::v4::b::a::a::colorControlHighlight);
					  std::vector<int> arrayOfInt2 = l->a;
					  int n = l::c(paramContext, android.support::v4::b::a::a::colorButtonNormal);
					  std::vector<int> arrayOfInt1 = l::d;
					  int i1 = android.support::v4::b::a::a(i2, paramInt);
					  std::vector<int> arrayOfInt3 = l->b_Renamed;
					  i2 = android.support::v4::b::a::a(i2, paramInt);
					  return new android.content::res::ColorStateList(std::vector<std::vector<int>> {arrayOfInt2, arrayOfInt1, arrayOfInt3, l::h}, std::vector<int> {n, i1, i2, paramInt});
					}

					ColorStateList *o::android.support::v4::g::c(Context *paramContext)
					{
					  std::vector<int> arrayOfInt1 = l->a;
					  int n = l::c(paramContext, android.support::v4::b::a::a::colorControlNormal);
					  std::vector<int> arrayOfInt2 = l::e;
					  int i1 = l::a(paramContext, android.support::v4::b::a::a::colorControlActivated);
					  std::vector<int> arrayOfInt3 = l::h;
					  int i2 = l::a(paramContext, android.support::v4::b::a::a::colorControlNormal);
					  return new android.content::res::ColorStateList(std::vector<std::vector<int>> {arrayOfInt1, arrayOfInt2, arrayOfInt3}, std::vector<int> {n, i1, i2});
					}

					ColorStateList *o::d(Context *paramContext)
					{
					  std::vector<int> arrayOfInt1 = l->a;
					  int n = l::a(paramContext, 16842800, 0.1F);
					  std::vector<int> arrayOfInt2 = l::e;
					  int i1 = l::a(paramContext, android.support::v4::b::a::a::colorControlActivated, 0.3F);
					  std::vector<int> arrayOfInt3 = l::h;
					  int i2 = l::a(paramContext, 16842800, 0.3F);
					  return new android.content::res::ColorStateList(std::vector<std::vector<int>> {arrayOfInt1, arrayOfInt2, arrayOfInt3}, std::vector<int> {n, i1, i2});
					}

					bool o::d(int paramInt)
					{
						return (android.support::v4::b::a(f_Renamed, paramInt) || android.support::v4::b::a(e_Renamed, paramInt) || android.support::v4::b::a(g_Renamed, paramInt) || android.support::v4::b::a(i_Renamed, paramInt) || android.support::v4::b::a(h_Renamed, paramInt) || android.support::v4::b::a(j, paramInt) || paramInt == android.support::v4::b::a::d::abc_cab_background_top_material);
					}

					ColorStateList *o::e(Context *paramContext)
					{
					  std::vector<std::vector<int>> arrayOfInt(3);
					  std::vector<int> arrayOfInt1(3);
					  ColorStateList *colorStateList = l::b(paramContext, android.support::v4::b::a::a::colorSwitchThumbNormal);
					  if (colorStateList != nullptr && colorStateList->isStateful())
					  {
						arrayOfInt[0] = l->a;
						arrayOfInt1[0] = colorStateList->getColorForState(arrayOfInt[0], 0);
						arrayOfInt[1] = l::e;
						arrayOfInt1[1] = l::a(paramContext, android.support::v4::b::a::a::colorControlActivated);
						arrayOfInt[2] = l::h;
						arrayOfInt1[2] = colorStateList->getDefaultColor();
						return new android.content::res::ColorStateList(arrayOfInt, arrayOfInt1);
					  }
					  arrayOfInt[0] = l->a;
					  arrayOfInt1[0] = l::c(paramContext, android.support::v4::b::a::a::colorSwitchThumbNormal);
					  arrayOfInt[1] = l::e;
					  arrayOfInt1[1] = l::a(paramContext, android.support::v4::b::a::a::colorControlActivated);
					  arrayOfInt[2] = l::h;
					  arrayOfInt1[2] = l::a(paramContext, android.support::v4::b::a::a::colorSwitchThumbNormal);
					  return new android.content::res::ColorStateList(arrayOfInt, arrayOfInt1);
					}

					ColorStateList *o::f(Context *paramContext)
					{
					  std::vector<int> arrayOfInt1 = l->a;
					  int n = l::c(paramContext, android.support::v4::b::a::a::colorControlNormal);
					  std::vector<int> arrayOfInt2 = l::g;
					  int i1 = l::a(paramContext, android.support::v4::b::a::a::colorControlNormal);
					  std::vector<int> arrayOfInt3 = l::h;
					  int i2 = l::a(paramContext, android.support::v4::b::a::a::colorControlActivated);
					  return new android.content::res::ColorStateList(std::vector<std::vector<int>> {arrayOfInt1, arrayOfInt2, arrayOfInt3}, std::vector<int> {n, i1, i2});
					}

					ColorStateList *o::g(Context *paramContext)
					{
						return b(paramContext, android.support::v4::b::a::a::colorButtonNormal);
					}

					ColorStateList *o::h(Context *paramContext)
					{
						return b(paramContext, android.support::v4::b::a::a::colorAccent);
					}

					ColorStateList *o::i(Context *paramContext)
					{
					  std::vector<int> arrayOfInt1 = l->a;
					  int n = l::c(paramContext, android.support::v4::b::a::a::colorControlNormal);
					  std::vector<int> arrayOfInt2 = l::g;
					  int i1 = l::a(paramContext, android.support::v4::b::a::a::colorControlNormal);
					  std::vector<int> arrayOfInt3 = l::h;
					  int i2 = l::a(paramContext, android.support::v4::b::a::a::colorControlActivated);
					  return new android.content::res::ColorStateList(std::vector<std::vector<int>> {arrayOfInt1, arrayOfInt2, arrayOfInt3}, std::vector<int> {n, i1, i2});
					}

					Drawable *o::android.support::v4::b::a(int paramInt)
					{
						return android.support::v4::b::a(paramInt, false);
					}

					Drawable *o::android.support::v4::b::a(int paramInt, bool paramBoolean)
					{
					  Drawable *drawable2;
					  Context *context = static_cast<Context*>(this->k->get());
					  if (context == nullptr)
					  {
						return nullptr;
					  }
					  Drawable *drawable3 = android.support::v4::b::a::a(context, paramInt);
					  Drawable *drawable1 = drawable3;
					  if (drawable3 != nullptr)
					  {
						drawable2 = drawable3;
						if (android.os::Build::VERSION::SDK_INT >= 8)
						{
						  drawable2 = drawable3->mutate();
						}
						ColorStateList *colorStateList = android.support::v4::g::c(paramInt);
						if (colorStateList != nullptr)
						{
						  drawable2 = android.support::v4::b::a::c(drawable2);
						  android.support::v4::b::a::a(drawable2, colorStateList);
						  PorterDuff::Mode *mode = b(paramInt);
						  drawable1 = drawable2;
						  if (mode != nullptr)
						  {
							android.support::v4::b::a::a(drawable2, mode);
							drawable1 = drawable2;
						  }
						  return drawable1;
						}
					  }
					  else
					  {
						return drawable1;
					  }
					  if (paramInt == android.support::v4::b::a::d::abc_cab_background_top_material)
					  {
						return new android.graphics::drawable::LayerDrawable(std::vector<Drawable*> {android.support::v4::b::a(android.support::v4::b::a::d::abc_cab_background_internal_bg), android.support::v4::b::a(android.support::v4::b::a::d::abc_cab_background_top_mtrl_alpha)});
					  }
					  drawable1 = drawable2;
					  if (!android.support::v4::b::a(paramInt, drawable2))
					  {
						drawable1 = drawable2;
						if (paramBoolean)
						{
						  drawable1 = nullptr;
						}
					  }
					  return drawable1;
					}

					bool o::android.support::v4::b::a(int paramInt, Drawable *paramDrawable)
					{
					  bool bool_Renamed;
					  char b1;
					  Context *context = static_cast<Context*>(this->k->get());
					  if (context == nullptr)
					  {
						return false;
					  }
					  PorterDuff::Mode *mode = b_Renamed;
					  if (android.support::v4::b::a(e_Renamed, paramInt))
					  {
						b1 = android.support::v4::b::a::a::colorControlNormal;
						bool_Renamed = true;
						paramInt = -1;
					  }
					  else if (android.support::v4::b::a(g_Renamed, paramInt))
					  {
						b1 = android.support::v4::b::a::a::colorControlActivated;
						bool_Renamed = true;
						paramInt = -1;
					  }
					  else if (android.support::v4::b::a(h_Renamed, paramInt))
					  {
						mode = android.graphics::PorterDuff::Mode::MULTIPLY;
						bool_Renamed = true;
						b1 = 16842801;
						paramInt = -1;
					  }
					  else if (paramInt == android.support::v4::b::a::d::abc_list_divider_mtrl_alpha)
					  {
						b1 = 16842800;
						paramInt = std::round(40.8F);
						bool_Renamed = true;
					  }
					  else
					  {
						paramInt = -1;
						b1 = 0;
						bool_Renamed = false;
					  }
					  if (bool_Renamed)
					  {
						paramDrawable->setColorFilter(android.support::v4::b::a(l::a(context, b1), mode));
						if (paramInt != -1)
						{
						  paramDrawable->setAlpha(paramInt);
						}
						return true;
					  }
					  return false;
					}

					PorterDuff::Mode *o::b(int paramInt)
					{
					  PorterDuff::Mode *mode = nullptr;
					  if (paramInt == android.support::v4::b::a::d::abc_switch_thumb_material)
					  {
						mode = android.graphics::PorterDuff::Mode::MULTIPLY;
					  }
					  return mode;
					}

					ColorStateList *o::android.support::v4::g::c(int paramInt)
					{
					  ColorStateList *colorStateList = nullptr;
					  Context *context = static_cast<Context*>(this->k->get());
					  if (context == nullptr)
					  {
						return nullptr;
					  }
					  if (this->l != nullptr)
					  {
						colorStateList = static_cast<ColorStateList*>(this->l->get(paramInt));
					  }
					  if (colorStateList == nullptr)
					  {
						if (paramInt == android.support::v4::b::a::d::abc_edit_text_material)
						{
						  colorStateList = f(context);
						}
						else if (paramInt == android.support::v4::b::a::d::abc_switch_track_mtrl_alpha)
						{
						  colorStateList = d(context);
						}
						else if (paramInt == android.support::v4::b::a::d::abc_switch_thumb_material)
						{
						  colorStateList = e(context);
						}
						else if (paramInt == android.support::v4::b::a::d::abc_btn_default_mtrl_shape || paramInt == android.support::v4::b::a::d::abc_btn_borderless_material)
						{
						  colorStateList = g(context);
						}
						else if (paramInt == android.support::v4::b::a::d::abc_btn_colored_material)
						{
						  colorStateList = h(context);
						}
						else if (paramInt == android.support::v4::b::a::d::abc_spinner_mtrl_am_alpha || paramInt == android.support::v4::b::a::d::abc_spinner_textfield_background_material)
						{
						  colorStateList = i(context);
						}
						else if (android.support::v4::b::a(f_Renamed, paramInt))
						{
						  colorStateList = l::b(context, android.support::v4::b::a::a::colorControlNormal);
						}
						else if (android.support::v4::b::a(i_Renamed, paramInt))
						{
						  colorStateList = b(context);
						}
						else if (android.support::v4::b::a(j, paramInt))
						{
						  colorStateList = android.support::v4::g::c(context);
						}
						ColorStateList *colorStateList1 = colorStateList;
						if (colorStateList != nullptr)
						{
						  if (this->l == nullptr)
						  {
							this->l = new android.util::SparseArray();
						  }
						  this->l->append(paramInt, colorStateList);
						  return colorStateList;
						}
						return colorStateList1;
					  }
					  return colorStateList;
					}

					internal *o::a::android.support::v4::b::a(int param1Int)
					{
						c<Integer, PorterDuffColorFilter>(param1Int);
					}

					int o::a::b(int param1Int, PorterDuff::Mode *param1Mode)
					{
						return (param1Int + 31) * 31 + param1Mode->hashCode();
					}

					PorterDuffColorFilter *o::a::android.support::v4::b::a(int param1Int, PorterDuff::Mode *param1Mode)
					{
						return static_cast<PorterDuffColorFilter*>(android.support::v4::b::a(static_cast<Integer>(b(param1Int, param1Mode))));
					}

					PorterDuffColorFilter *o::a::android.support::v4::b::a(int param1Int, PorterDuff::Mode *param1Mode, PorterDuffColorFilter *param1PorterDuffColorFilter)
					{
						return static_cast<PorterDuffColorFilter*>(android.support::v4::b::a(static_cast<Integer>(b(param1Int, param1Mode)), param1PorterDuffColorFilter));
					}
				}
			}
		}
	}
}

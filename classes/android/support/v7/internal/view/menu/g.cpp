//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "g.h"
#include "../../../../v4/d/a/b.h"
#include "e.h"

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
						using android::annotation::TargetApi;
						using android::content::Context;
						using android::content::Intent;
						using android::graphics::drawable::Drawable;
						using b = android::support::v4::d::a::b;
						using a = android::support::v4::h::a;
						using f = android::support::v4::h::f;
						using a = android::support::v7::d::a;
						using android::util::Log;
						using android::view::ActionProvider;
						using android::view::CollapsibleActionView;
						using android::view::ContextMenu;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;
						using android::widget::FrameLayout;

						g::g(Context *paramContext, b *paramb) : c < android->support.v4.d.a.b > (paramContext, paramb)
						{
						}

						a *g::android->support.v4.h.a(ActionProvider *paramActionProvider)
						{
							return new android->support.v4.h.a(this, this->a, paramActionProvider);
						}

						void g::android->support.v4.h.a(bool paramBoolean)
						{
						  try
						  {
							if (this->c == nullptr)
							{
							  this->c = (static_cast<b*>(this->b))->getClass().getDeclaredMethod(L"setExclusiveCheckable", std::vector<std::type_info*> {bool::typeid});
							}
							this->c->invoke(this->b, std::vector<void*> {static_cast<Boolean>(paramBoolean)});
							return;
						  }
						  catch (const std::exception &exception)
						  {
							android->util.Log.w(L"MenuItemWrapper", L"Error while calling setExclusiveCheckable", exception);
							return;
						  }
						}

						bool g::collapseActionView()
						{
							return (static_cast<b*>(this->b))->collapseActionView();
						}

						bool g::expandActionView()
						{
							return (static_cast<b*>(this->b))->expandActionView();
						}

						ActionProvider *g::getActionProvider()
						{
						  android->support.v4.h.a android->support.v4.h->a = (static_cast<b*>(this->b))->a();
						  return (dynamic_cast<a*>(android->support.v4.h.a) != nullptr) ? (static_cast<a*>(android->support.v4.h.a))->a_Renamed : nullptr;
						}

						View *g::getActionView()
						{
						  View *view2 = (static_cast<b*>(this->b))->getActionView();
						  View *view1 = view2;
						  if (dynamic_cast<b*>(view2) != nullptr)
						  {
							view1 = (static_cast<b*>(view2))->c();
						  }
						  return view1;
						}

						wchar_t g::getAlphabeticShortcut()
						{
							return (static_cast<b*>(this->b))->getAlphabeticShortcut();
						}

						int g::getGroupId()
						{
							return (static_cast<b*>(this->b))->getGroupId();
						}

						Drawable *g::getIcon()
						{
							return (static_cast<b*>(this->b))->getIcon();
						}

						Intent *g::getIntent()
						{
							return (static_cast<b*>(this->b))->getIntent();
						}

						int g::getItemId()
						{
							return (static_cast<b*>(this->b))->getItemId();
						}

						ContextMenu::ContextMenuInfo *g::getMenuInfo()
						{
							return (static_cast<b*>(this->b))->getMenuInfo();
						}

						wchar_t g::getNumericShortcut()
						{
							return (static_cast<b*>(this->b))->getNumericShortcut();
						}

						int g::getOrder()
						{
							return (static_cast<b*>(this->b))->getOrder();
						}

						SubMenu *g::getSubMenu()
						{
							return android->support.v4.h.a((static_cast<b*>(this->b))->getSubMenu());
						}

						CharSequence *g::getTitle()
						{
							return (static_cast<b*>(this->b))->getTitle();
						}

						CharSequence *g::getTitleCondensed()
						{
							return (static_cast<b*>(this->b))->getTitleCondensed();
						}

						bool g::hasSubMenu()
						{
							return (static_cast<b*>(this->b))->hasSubMenu();
						}

						bool g::isActionViewExpanded()
						{
							return (static_cast<b*>(this->b))->isActionViewExpanded();
						}

						bool g::isCheckable()
						{
							return (static_cast<b*>(this->b))->isCheckable();
						}

						bool g::isChecked()
						{
							return (static_cast<b*>(this->b))->isChecked();
						}

						bool g::isEnabled()
						{
							return (static_cast<b*>(this->b))->isEnabled();
						}

						bool g::isVisible()
						{
							return (static_cast<b*>(this->b))->isVisible();
						}

						MenuItem *g::setActionProvider(ActionProvider *paramActionProvider)
						{
						  android->support.v4.d.a.b android->support.v4.d.a->b = static_cast<b*>(this->b);
						  if (paramActionProvider != nullptr)
						  {
							android->support.v4.h.a android->support.v4.h->a = android->support.v4.h.a(paramActionProvider);
							android->support.v4.d.a.b::a(android->support.v4.h.a);
							return this;
						  }
						  paramActionProvider = nullptr;
						  android->support.v4.d.a.b::a(paramActionProvider);
						  return this;
						}

						MenuItem *g::setActionView(int paramInt)
						{
						  (static_cast<b*>(this->b))->setActionView(paramInt);
						  View *view = (static_cast<b*>(this->b))->getActionView();
						  if (dynamic_cast<CollapsibleActionView*>(view) != nullptr)
						  {
							android->support::v4::d::a::b tempVar(view);
							(static_cast<b*>(this->b))->setActionView(&tempVar);
						  }
						  return this;
						}

						MenuItem *g::setActionView(View *paramView)
						{
						  android->support.v4.d.a.b android->support.v4.d.a->b = paramView;
						  if (dynamic_cast<CollapsibleActionView*>(paramView) != nullptr)
						  {
							android->support.v4.d.a->b = new android->support.v4.d.a.b(paramView);
						  }
						  (static_cast<b*>(this->b))->setActionView(android->support.v4.d.a.b);
						  return this;
						}

						MenuItem *g::setAlphabeticShortcut(wchar_t paramChar)
						{
						  (static_cast<b*>(this->b))->setAlphabeticShortcut(paramChar);
						  return this;
						}

						MenuItem *g::setCheckable(bool paramBoolean)
						{
						  (static_cast<b*>(this->b))->setCheckable(paramBoolean);
						  return this;
						}

						MenuItem *g::setChecked(bool paramBoolean)
						{
						  (static_cast<b*>(this->b))->setChecked(paramBoolean);
						  return this;
						}

						MenuItem *g::setEnabled(bool paramBoolean)
						{
						  (static_cast<b*>(this->b))->setEnabled(paramBoolean);
						  return this;
						}

						MenuItem *g::setIcon(int paramInt)
						{
						  (static_cast<b*>(this->b))->setIcon(paramInt);
						  return this;
						}

						MenuItem *g::setIcon(Drawable *paramDrawable)
						{
						  (static_cast<b*>(this->b))->setIcon(paramDrawable);
						  return this;
						}

						MenuItem *g::setIntent(Intent *paramIntent)
						{
						  (static_cast<b*>(this->b))->setIntent(paramIntent);
						  return this;
						}

						MenuItem *g::setNumericShortcut(wchar_t paramChar)
						{
						  (static_cast<b*>(this->b))->setNumericShortcut(paramChar);
						  return this;
						}

						MenuItem *g::setOnActionExpandListener(MenuItem::OnActionExpandListener *paramOnActionExpandListener)
						{
						  android->support.v4.d.a.b android->support.v4.d.a->b = static_cast<b*>(this->b);
						  if (paramOnActionExpandListener != nullptr)
						  {
							c *c1 = new c(this, this, paramOnActionExpandListener);
							android->support.v4.d.a.b::a(c1);
							return this;
						  }
						  paramOnActionExpandListener = nullptr;
						  android->support.v4.d.a.b::a(paramOnActionExpandListener);
						  return this;
						}

						MenuItem *g::setOnMenuItemClickListener(MenuItem::OnMenuItemClickListener *paramOnMenuItemClickListener)
						{
						  android->support.v4.d.a.b android->support.v4.d.a->b = static_cast<b*>(this->b);
						  if (paramOnMenuItemClickListener != nullptr)
						  {
							paramOnMenuItemClickListener = new android->support.v4.h.f::d(this, paramOnMenuItemClickListener);
							android->support.v4.d.a.b::setOnMenuItemClickListener(paramOnMenuItemClickListener);
							return this;
						  }
						  paramOnMenuItemClickListener = nullptr;
						  android->support.v4.d.a.b::setOnMenuItemClickListener(paramOnMenuItemClickListener);
						  return this;
						}

						MenuItem *g::setShortcut(wchar_t paramChar1, wchar_t paramChar2)
						{
						  (static_cast<b*>(this->b))->setShortcut(paramChar1, paramChar2);
						  return this;
						}

						void g::setShowAsAction(int paramInt)
						{
							(static_cast<b*>(this->b))->setShowAsAction(paramInt);
						}

						MenuItem *g::setShowAsActionFlags(int paramInt)
						{
						  (static_cast<b*>(this->b))->setShowAsActionFlags(paramInt);
						  return this;
						}

						MenuItem *g::setTitle(int paramInt)
						{
						  (static_cast<b*>(this->b))->setTitle(paramInt);
						  return this;
						}

						MenuItem *g::setTitle(CharSequence *paramCharSequence)
						{
						  (static_cast<b*>(this->b))->setTitle(paramCharSequence);
						  return this;
						}

						MenuItem *g::setTitleCondensed(CharSequence *paramCharSequence)
						{
						  (static_cast<b*>(this->b))->setTitleCondensed(paramCharSequence);
						  return this;
						}

						MenuItem *g::setVisible(bool paramBoolean)
						{
							return (static_cast<b*>(this->b))->setVisible(paramBoolean);
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						internal *g::a::android->support.v4.h.a(g *this$0, Context *param1Context, ActionProvider *param1ActionProvider)
						{
						  a(param1Context);
						  this->a = param1ActionProvider;
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						View *g::a::android->support.v4.h.a()
						{
							return this->a.onCreateActionView();
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						void g::a::android->support.v4.h.a(SubMenu *param1SubMenu)
						{
							this->a.onPrepareSubMenu(this->b->a(param1SubMenu));
						}

						bool g::a::d()
						{
							return this->a.onPerformDefaultAction();
						}

						bool g::a::e()
						{
							return this->a.hasSubMenu();
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						internal *g::b::android->support.v4.d.a.b(View *param1View)
						{
						  FrameLayout(param1View->getContext());
						  this->a = static_cast<CollapsibleActionView*>(param1View);
						  addView(param1View);
						}

						void g::b::android->support.v4.h.a()
						{
							this->a.onActionViewExpanded();
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						void g::b::android->support.v4.d.a.b()
						{
							this->a.onActionViewCollapsed();
						}

						View *g::b::c()
						{
							return static_cast<View*>(this->a);
						}

						g::c::c(g *outerInstance, g *this$0, MenuItem::OnActionExpandListener *param1OnActionExpandListener) : d < android->view.MenuItem.OnActionExpandListener > (param1OnActionExpandListener), outerInstance(outerInstance)
						{
						}

						bool g::c::android->support.v4.h.a(MenuItem *param1MenuItem)
						{
							return (static_cast<MenuItem::OnActionExpandListener*>(this->b))->onMenuItemActionExpand(this->a.a(param1MenuItem));
						}

						bool g::c::android->support.v4.d.a.b(MenuItem *param1MenuItem)
						{
							return (static_cast<MenuItem::OnActionExpandListener*>(this->b))->onMenuItemActionCollapse(this->a.a(param1MenuItem));
						}

						g::d::d(g *outerInstance, g *this$0, MenuItem::OnMenuItemClickListener *param1OnMenuItemClickListener) : d < android->view.MenuItem.OnMenuItemClickListener > (param1OnMenuItemClickListener), outerInstance(outerInstance)
						{
						}

						bool g::d::onMenuItemClick(MenuItem *param1MenuItem)
						{
							return (static_cast<MenuItem::OnMenuItemClickListener*>(this->b))->onMenuItemClick(this->a.a(param1MenuItem));
						}
					}
				}
			}
		}
	}
}

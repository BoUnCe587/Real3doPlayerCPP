//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "m.h"
#include "../b.h"
#include "b.h"

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
						using android::content::ComponentName;
						using android::content::Context;
						using android::content::Intent;
						using a = android::support::v4::d::a::a;
						using android::view::KeyEvent;
						using android::view::Menu;
						using android::view::MenuItem;
						using android::view::SubMenu;

						m::m(Context *paramContext, a *parama) : c < android->support.v4.d.a.a > (paramContext, parama)
						{
						}

						MenuItem *m::add(int paramInt)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->add(paramInt));
						}

						MenuItem *m::add(int paramInt1, int paramInt2, int paramInt3, int paramInt4)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->add(paramInt1, paramInt2, paramInt3, paramInt4));
						}

						MenuItem *m::add(int paramInt1, int paramInt2, int paramInt3, CharSequence *paramCharSequence)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->add(paramInt1, paramInt2, paramInt3, paramCharSequence));
						}

						MenuItem *m::add(CharSequence *paramCharSequence)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->add(paramCharSequence));
						}

						int m::addIntentOptions(int paramInt1, int paramInt2, int paramInt3, ComponentName *paramComponentName, std::vector<Intent*> &paramArrayOfIntent, Intent *paramIntent, int paramInt4, std::vector<MenuItem*> &paramArrayOfMenuItem)
						{
						  std::vector<MenuItem*> arrayOfMenuItem;
						  if (paramArrayOfMenuItem.size() > 0)
						  {
							arrayOfMenuItem = new array < android->view::MenuItem*>(paramArrayOfMenuItem.size());
						  }
						  paramInt2 = (static_cast<a*>(this->b))->addIntentOptions(paramInt1, paramInt2, paramInt3, paramComponentName, paramArrayOfIntent, paramIntent, paramInt4, arrayOfMenuItem);
						  if (arrayOfMenuItem.size() > 0)
						  {
							paramInt1 = 0;
							paramInt3 = arrayOfMenuItem.size();
							while (paramInt1 < paramInt3)
							{
							  paramArrayOfMenuItem[paramInt1] = android->support.v4.d.a.a(arrayOfMenuItem[paramInt1]);
							  paramInt1++;
							}
						  }
						  return paramInt2;
						}

						SubMenu *m::addSubMenu(int paramInt)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->addSubMenu(paramInt));
						}

						SubMenu *m::addSubMenu(int paramInt1, int paramInt2, int paramInt3, int paramInt4)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->addSubMenu(paramInt1, paramInt2, paramInt3, paramInt4));
						}

						SubMenu *m::addSubMenu(int paramInt1, int paramInt2, int paramInt3, CharSequence *paramCharSequence)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->addSubMenu(paramInt1, paramInt2, paramInt3, paramCharSequence));
						}

						SubMenu *m::addSubMenu(CharSequence *paramCharSequence)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->addSubMenu(paramCharSequence));
						}

						void m::clear()
						{
						  android->support.v4.d.a.a();
						  (static_cast<a*>(this->b))->clear();
						}

						m::~m()
						{
							(static_cast<a*>(this->b))->close();
						}

						MenuItem *m::findItem(int paramInt)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->findItem(paramInt));
						}

						MenuItem *m::getItem(int paramInt)
						{
							return android->support.v4.d.a.a((static_cast<a*>(this->b))->getItem(paramInt));
						}

						bool m::hasVisibleItems()
						{
							return (static_cast<a*>(this->b))->hasVisibleItems();
						}

						bool m::isShortcutKey(int paramInt, KeyEvent *paramKeyEvent)
						{
							return (static_cast<a*>(this->b))->isShortcutKey(paramInt, paramKeyEvent);
						}

						bool m::performIdentifierAction(int paramInt1, int paramInt2)
						{
							return (static_cast<a*>(this->b))->performIdentifierAction(paramInt1, paramInt2);
						}

						bool m::performShortcut(int paramInt1, KeyEvent *paramKeyEvent, int paramInt2)
						{
							return (static_cast<a*>(this->b))->performShortcut(paramInt1, paramKeyEvent, paramInt2);
						}

						void m::removeGroup(int paramInt)
						{
						  android->support.v4.d.a.a(paramInt);
						  (static_cast<a*>(this->b))->removeGroup(paramInt);
						}

						void m::removeItem(int paramInt)
						{
						  b(paramInt);
						  (static_cast<a*>(this->b))->removeItem(paramInt);
						}

						void m::setGroupCheckable(int paramInt, bool paramBoolean1, bool paramBoolean2)
						{
							(static_cast<a*>(this->b))->setGroupCheckable(paramInt, paramBoolean1, paramBoolean2);
						}

						void m::setGroupEnabled(int paramInt, bool paramBoolean)
						{
							(static_cast<a*>(this->b))->setGroupEnabled(paramInt, paramBoolean);
						}

						void m::setGroupVisible(int paramInt, bool paramBoolean)
						{
							(static_cast<a*>(this->b))->setGroupVisible(paramInt, paramBoolean);
						}

						void m::setQwertyMode(bool paramBoolean)
						{
							(static_cast<a*>(this->b))->setQwertyMode(paramBoolean);
						}

						int m::size()
						{
							return (static_cast<a*>(this->b))->size();
						}
					}
				}
			}
		}
	}
}

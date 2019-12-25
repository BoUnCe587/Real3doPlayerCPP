#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../c.h"
#include "c.h"
#include <vector>

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

						class m : public c<a*>, public android->view.Menu
						{
					  public:
						  m(Context *paramContext, a *parama);

						  virtual MenuItem *add(int paramInt);

						  virtual MenuItem *add(int paramInt1, int paramInt2, int paramInt3, int paramInt4);

						  virtual MenuItem *add(int paramInt1, int paramInt2, int paramInt3, CharSequence *paramCharSequence);

						  virtual MenuItem *add(CharSequence *paramCharSequence);

						  virtual int addIntentOptions(int paramInt1, int paramInt2, int paramInt3, ComponentName *paramComponentName, std::vector<Intent*> &paramArrayOfIntent, Intent *paramIntent, int paramInt4, std::vector<MenuItem*> &paramArrayOfMenuItem);

						  virtual SubMenu *addSubMenu(int paramInt);

						  virtual SubMenu *addSubMenu(int paramInt1, int paramInt2, int paramInt3, int paramInt4);

						  virtual SubMenu *addSubMenu(int paramInt1, int paramInt2, int paramInt3, CharSequence *paramCharSequence);

						  virtual SubMenu *addSubMenu(CharSequence *paramCharSequence);

						  virtual void clear();

						  virtual ~m();

						  virtual MenuItem *findItem(int paramInt);

						  virtual MenuItem *getItem(int paramInt);

						  virtual bool hasVisibleItems();

						  virtual bool isShortcutKey(int paramInt, KeyEvent *paramKeyEvent);

						  virtual bool performIdentifierAction(int paramInt1, int paramInt2);

						  virtual bool performShortcut(int paramInt1, KeyEvent *paramKeyEvent, int paramInt2);

						  virtual void removeGroup(int paramInt);

						  virtual void removeItem(int paramInt);

						  virtual void setGroupCheckable(int paramInt, bool paramBoolean1, bool paramBoolean2);

						  virtual void setGroupEnabled(int paramInt, bool paramBoolean);

						  virtual void setGroupVisible(int paramInt, bool paramBoolean);

						  virtual void setQwertyMode(bool paramBoolean);

						  virtual int size();
						};
					}
				}
			}
		}
	}
}

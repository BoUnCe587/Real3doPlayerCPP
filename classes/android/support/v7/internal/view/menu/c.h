#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "../../../../v4/d/a/b.h"
#include "../../../../v4/g/a.h"
#include "l.h"
#include <unordered_map>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace d { namespace a { class c; } } } } }

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
						using b = android::support::v4::d::a::b;
						using c = android::support::v4::d::a::c;
						using a = android::support::v4::g::a;
						using android::view::MenuItem;
						using android::view::SubMenu;

						template<typename T>
						class c : public d<T>
						{
					  public:
						  Context *const android;

					  private:
						  std::unordered_map<b*, MenuItem*> android;

						  std::unordered_map<c*, SubMenu*> d;

					  public:
						  virtual ~c()
						  {
							  delete android;
						  }

						  virtual internal *android->support.v4.d.a.c(Context *paramContext, T paramT)
						  {
							d<T>(paramT);
							this->a = paramContext;
						  }

						  MenuItem *android->support.v4.g.a(MenuItem *paramMenuItem)
						  {
							if (dynamic_cast<b*>(paramMenuItem) != nullptr)
							{
							  android->support.v4.d.a.b android->support.v4.d.a->b = static_cast<b*>(paramMenuItem);
							  if (this->c == nullptr)
							  {
								this->c = new android->support.v4.g.a();
							  }
							  MenuItem *menuItem = static_cast<MenuItem*>(this->c->get(paramMenuItem));
							  paramMenuItem = menuItem;
							  if (menuItem == nullptr)
							  {
								paramMenuItem = l::a(this->a, android->support.v4.d.a.b);
								this->c.put(android->support.v4.d.a.b, paramMenuItem);
							  }
							  return paramMenuItem;
							}
							return paramMenuItem;
						  }

						  SubMenu *android->support.v4.g.a(SubMenu *paramSubMenu)
						  {
							if (dynamic_cast<c*>(paramSubMenu) != nullptr)
							{
							  c *c1 = static_cast<c*>(paramSubMenu);
							  if (this->d.empty())
							  {
								this->d = new android->support.v4.g.a();
							  }
							  SubMenu *subMenu = static_cast<SubMenu*>(this->d[c1]);
							  paramSubMenu = subMenu;
							  if (subMenu == nullptr)
							  {
								paramSubMenu = l::a(this->a, c1);
								this->d.emplace(c1, paramSubMenu);
							  }
							  return paramSubMenu;
							}
							return paramSubMenu;
						  }

						  void android->support.v4.g.a() final override
						  {
							if (this->c != nullptr)
							{
							  this->c->clear();
							}
							if (this->d.size() > 0)
							{
							  this->d.clear();
							}
						  }

						  void android->support.v4.g.a(int paramInt) final override
						  {
							if (this->c != nullptr)
							{
							  Iterator iterator = this->c.keySet().begin();
							  while (true)
							  {
								if (iterator->hasNext())
								{
								  if (paramInt == (static_cast<MenuItem*>(iterator->next()))->getGroupId())
								  {
									iterator->remove();
								  }
								  continue;
								}
								return;
							  }
							}
						  }

						  void android->support.v4.d.a.b(int paramInt) final override
						  {
							if (this->c != nullptr)
							{
							  Iterator iterator = this->c.keySet().begin();
							  while (true)
							  {
								if (iterator->hasNext())
								{
								  if (paramInt == (static_cast<MenuItem*>(iterator->next()))->getItemId())
								  {
									break;
								  }
								  continue;
								}
								return;
							  }
							  iterator->remove();
							  return;
							}
						  }
						};
					}
				}
			}
		}
	}
}

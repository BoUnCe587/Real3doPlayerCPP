//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"
#include "../../../v4/h/a.h"
#include "../../../v4/h/u.h"
#include "../../../v4/b/a.h"
#include "../../../v4/h/b.h"
#include "../../b/a.h"
#include "../b/a.h"
#include "../../../v4/c/a.h"
#include "../../../v4/h/f.h"
#include "menu/g.h"

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
					using android::content::Context;
					using android::content::ContextWrapper;
					using android::content::res::TypedArray;
					using android::content::res::XmlResourceParser;
					using a = android::support::v4::h::a;
					using f = android::support::v4::h::f;
					using a = android::support::v7::b::a;
					using f = android::support::v7::internal_Renamed::view::menu::f;
					using g = android::support::v7::internal_Renamed::view::menu::g;
					using android::util::AttributeSet;
					using android::util::Log;
					using android::util::Xml;
					using android::view::InflateException;
					using android::view::Menu;
					using android::view::MenuInflater;
					using android::view::MenuItem;
					using android::view::SubMenu;
					using android::view::View;
					using org::xmlpull::v1::XmlPullParser;
					using org::xmlpull::v1::XmlPullParserException;
std::vector<std::type_info> const c::android;
std::vector<std::type_info> const c::b = android.support::v4::h::a;

					c::c(Context *paramContext) : android.view::MenuInflater(paramContext), c(std::vector<void*> {paramContext}), d(this->c_Renamed)
					{
					  this->e = paramContext;
					}

					void *c::android.support::v4::h::a(void *paramObject)
					{
						return (!(dynamic_cast<android::app::Activity*>(paramObject) != nullptr) && dynamic_cast<ContextWrapper*>(paramObject) != nullptr) ? android.support::v4::h::a((static_cast<ContextWrapper*>(paramObject))->getBaseContext()) : paramObject;
					}

					void c::android.support::v4::h::a(XmlPullParser *paramXmlPullParser, AttributeSet *paramAttributeSet, Menu *paramMenu)
					{
					  b *b1 = new b(this, this, paramMenu);
					  int i = paramXmlPullParser->getEventType();
					  while (true)
					  {
						if (i == 2)
						{
						  std::wstring str = paramXmlPullParser->getName();
						  if (str == L"menu")
						  {
							i = paramXmlPullParser->next();
						  }
						  else
						  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException("Expecting menu, got " + str);
							throw std::exception();
						  }
						}
						else
						{
						  int m = paramXmlPullParser->next();
						  i = m;
						  if (m == 1)
						  {
							i = m;
						  }
						  else
						  {
							continue;
						  }
						}
						paramMenu = nullptr;
						int k = 0;
						int j = i;
						bool bool_Renamed = false;
						i = k;
						while (!bool_Renamed)
						{
						  std::wstring str2;
						  std::wstring str1;
						  switch (j)
						  {
							default:
							  j = paramXmlPullParser->next();
							  continue;
							case 2:
							  if (i == 0)
							  {
								std::wstring str = paramXmlPullParser->getName();
								if (str == L"group")
								{
								  b1->a(paramAttributeSet);
								}
								else if (str == L"item")
								{
								  b1->b(paramAttributeSet);
								}
								else if (str == L"menu")
								{
								  android.support::v4::h::a(paramXmlPullParser, paramAttributeSet, b1->c());
								}
								else
								{
								  str1 = str;
								  i = 1;
								}
							  }
							case 3:
							  str2 = paramXmlPullParser->getName();
							  if (i != 0 && str2 == str1)
							  {
								str1 = L"";
								i = 0;
							  }
							  else if (str2 == L"group")
							  {
								b1->a();
							  }
							  else if (str2 == L"item")
							  {
								if (!b1->d())
								{
								  if (b::a(b1) != nullptr && b::a(b1).e())
								  {
									b1->c();
								  }
								  else
								  {
									b1->b();
								  }
								}
							  }
							  else if (str2 == L"menu")
							  {
								bool_Renamed = true;
							  }
							case 1:
							  break;
						  }
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException("Unexpected end of document");
						  throw std::exception();
						}
						return;
					  }
					}

					Object c::c()
					{
					  if (this->f == nullptr)
					  {
						this->f = android.support::v4::h::a(this->e);
					  }
					  return this->f;
					}

					void c::inflate(int paramInt, Menu *paramMenu)
					{
					  if (!(dynamic_cast<android::support::v4::d::a::a*>(paramMenu) != nullptr))
					  {
						MenuInflater::inflate(paramInt, paramMenu);
						return;
					  }
					  xmlResourceParser1 = nullptr;
					  xmlResourceParser3 = nullptr;
					  XmlResourceParser *xmlResourceParser2 = nullptr;
					  try
					  {
						xmlResourceParser = this->e->getResources().getLayout(paramInt);
						xmlResourceParser2 = xmlResourceParser;
						xmlResourceParser1 = xmlResourceParser;
						xmlResourceParser3 = xmlResourceParser;
						android.support::v4::h::a(xmlResourceParser, android.util::Xml::asAttributeSet(xmlResourceParser), paramMenu);
					  }
					  catch (const XmlPullParserException &paramMenu)
					  {
						xmlResourceParser1 = xmlResourceParser2;
						throw InflateException(L"Error inflating menu XML", paramMenu);
					  }
					  catch (const IOException &paramMenu)
					  {

					  }
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
					  finally
					  {
						if (xmlResourceParser1 != nullptr)
						{
						  delete xmlResourceParser1;
						}
					  }
					}

std::vector<std::type_info> const c::a::android;

					internal *c::a::android.support::v4::h::a(void *param1Object, const std::wstring &param1String)
					{
					  this->b = param1Object;
					  std::type_info clazz = param1Object->getClass();
					  try
					  {
						this->c = clazz.getMethod(param1String, android.support::v4::h::a);
						return;
					  }
					  catch (const std::exception &param1Object)
					  {
						InflateException *inflateException = new android.view::InflateException(L"Couldn't resolve menu item onClick handler " + param1String + L" in class " + clazz.getName());
						inflateException->initCause(param1Object);
						throw inflateException;
					  }
					}

					bool c::a::onMenuItemClick(MenuItem *param1MenuItem)
					{
					  try
					  {
						if (this->c->getReturnType() == bool::typeid)
						{
						  return (static_cast<Boolean>(this->c->invoke(this->b, std::vector<void*> {param1MenuItem}))).booleanValue();
						}
						this->c->invoke(this->b, std::vector<void*> {param1MenuItem});
						return true;
					  }
					  catch (const std::exception &param1MenuItem)
					  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException(param1MenuItem);
						throw std::exception();
					  }
					}

					c::b::b(c *outerInstance, android::support::v7::internal_Renamed::view::c *this$0, Menu *param1Menu) : outerInstance(outerInstance)
					{
					  this->b_Renamed = param1Menu;
					  android.support::v4::h::a();
					}

					wchar_t c::b::android.support::v4::h::a(const std::wstring &param1String)
					{
						return (param1String == L"") ? std::numeric_limits<wchar_t>::min() : param1String[0];
					}

template<typename T>
					T c::b::android.support::v4::h::a(const std::wstring &param1String, std::vector<std::type_info> &param1ArrayOfClass, std::vector<void*> &param1ArrayOfObject)
					{
					  try
					  {
						Constructor *constructor = c_Renamed.a(this->a).getClassLoader().loadClass(param1String).getConstructor(param1ArrayOfClass);
						constructor->setAccessible(true);
						return static_cast<T>(constructor->newInstance(param1ArrayOfObject));
					  }
					  catch (const std::exception &param1ArrayOfClass)
					  {
						android.util::Log::w(L"SupportMenuInflater", L"Cannot instantiate class: " + param1String, param1ArrayOfClass);
						return nullptr;
					  }
					}

					void c::b::android.support::v4::h::a(MenuItem *param1MenuItem)
					{
					  bool bool1;
					  bool bool_Renamed = true;
					  MenuItem *menuItem = param1MenuItem->setChecked(this->r).setVisible(this->s).setEnabled(this->t);
					  if (this->q >= 1)
					  {
						bool1 = true;
					  }
					  else
					  {
						bool1 = false;
					  }
					  menuItem->setCheckable(bool1).setTitleCondensed(this->m).setIcon(this->n).setAlphabeticShortcut(this->o).setNumericShortcut(this->p);
					  if (this->u >= 0)
					  {
						android.support::v4::h::f::a(param1MenuItem, this->u);
					  }
					  if (this->y != L"")
					  {
						if (c_Renamed.a(this->a).isRestricted())
						{
						  throw IllegalStateException(L"The android:onClick attribute cannot be used within a restricted context");
						}
						c::a tempVar(c_Renamed.c(this->a), this->y);
						param1MenuItem->setOnMenuItemClickListener(&tempVar);
					  }
					  if (dynamic_cast<f*>(param1MenuItem) != nullptr)
					  {
						f *f1 = static_cast<f*>(param1MenuItem);
					  }
					  if (this->q >= 2)
					  {
						if (dynamic_cast<f*>(param1MenuItem) != nullptr)
						{
						  (static_cast<f*>(param1MenuItem))->a(true);
						}
						else if (dynamic_cast<g*>(param1MenuItem) != nullptr)
						{
						  (static_cast<g*>(param1MenuItem))->a(true);
						}
					  }
					  if (this->w != L"")
					  {
						android.support::v4::h::f::a(param1MenuItem, static_cast<View*>(android.support::v4::h::a(this->w, c_Renamed.b(), c_Renamed.d(this->a))));
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  if (this->v > 0)
					  {
						if (!bool_Renamed)
						{
						  android.support::v4::h::f::b(param1MenuItem, this->v);
						}
						else
						{
						  android.util::Log::w(L"SupportMenuInflater", L"Ignoring attribute 'itemActionViewLayout'. Action view already specified.");
						}
					  }
					  if (this->z != nullptr)
					  {
						android.support::v4::h::f::a(param1MenuItem, this->z);
					  }
					}

					void c::b::android.support::v4::h::a()
					{
					  this->c_Renamed = 0;
					  this->d_Renamed = 0;
					  this->e = 0;
					  this->f = 0;
					  this->g = true;
					  this->h = true;
					}

					void c::b::android.support::v4::h::a(AttributeSet *param1AttributeSet)
					{
					  TypedArray *typedArray = c_Renamed.a(this->a).obtainStyledAttributes(param1AttributeSet, android.support::v4::h::a::j::MenuGroup);
					  this->c_Renamed = typedArray->getResourceId(android.support::v4::h::a::j::MenuGroup_android_id, 0);
					  this->d_Renamed = typedArray->getInt(android.support::v4::h::a::j::MenuGroup_android_menuCategory, 0);
					  this->e = typedArray->getInt(android.support::v4::h::a::j::MenuGroup_android_orderInCategory, 0);
					  this->f = typedArray->getInt(android.support::v4::h::a::j::MenuGroup_android_checkableBehavior, 0);
					  this->g = typedArray->getBoolean(android.support::v4::h::a::j::MenuGroup_android_visible, true);
					  this->h = typedArray->getBoolean(android.support::v4::h::a::j::MenuGroup_android_enabled, true);
					  typedArray->recycle();
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void c::b::b_Renamed()
					{
					  this->i = true;
					  android.support::v4::h::a(this->b_Renamed->add(this->c_Renamed, this->j, this->k, this->l));
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void c::b::b_Renamed(AttributeSet *param1AttributeSet)
					{
					  bool bool1;
					  bool bool2 = true;
					  TypedArray *typedArray = c_Renamed.a(this->a).obtainStyledAttributes(param1AttributeSet, android.support::v4::h::a::j::MenuItem);
					  this->j = typedArray->getResourceId(android.support::v4::h::a::j::MenuItem_android_id, 0);
					  this->k = typedArray->getInt(android.support::v4::h::a::j::MenuItem_android_menuCategory, this->d_Renamed) & 0xFFFF0000 | typedArray->getInt(android.support::v4::h::a::j::MenuItem_android_orderInCategory, this->e) & 0xFFFF;
					  this->l = typedArray->getText(android.support::v4::h::a::j::MenuItem_android_title);
					  this->m = typedArray->getText(android.support::v4::h::a::j::MenuItem_android_titleCondensed);
					  this->n = typedArray->getResourceId(android.support::v4::h::a::j::MenuItem_android_icon, 0);
					  this->o = android.support::v4::h::a(typedArray->getString(android.support::v4::h::a::j::MenuItem_android_alphabeticShortcut));
					  this->p = android.support::v4::h::a(typedArray->getString(android.support::v4::h::a::j::MenuItem_android_numericShortcut));
					  if (typedArray->hasValue(android.support::v4::h::a::j::MenuItem_android_checkable))
					  {
						if (typedArray->getBoolean(android.support::v4::h::a::j::MenuItem_android_checkable, false))
						{
						  bool1 = true;
						}
						else
						{
						  bool1 = false;
						}
						this->q = bool1;
					  }
					  else
					  {
						this->q = this->f;
					  }
					  this->r = typedArray->getBoolean(android.support::v4::h::a::j::MenuItem_android_checked, false);
					  this->s = typedArray->getBoolean(android.support::v4::h::a::j::MenuItem_android_visible, this->g);
					  this->t = typedArray->getBoolean(android.support::v4::h::a::j::MenuItem_android_enabled, this->h);
					  this->u = typedArray->getInt(android.support::v4::h::a::j::MenuItem_showAsAction, -1);
					  this->y = typedArray->getString(android.support::v4::h::a::j::MenuItem_android_onClick);
					  this->v = typedArray->getResourceId(android.support::v4::h::a::j::MenuItem_actionLayout, 0);
					  this->w = typedArray->getString(android.support::v4::h::a::j::MenuItem_actionViewClass);
					  this->x = typedArray->getString(android.support::v4::h::a::j::MenuItem_actionProviderClass);
					  if (this->x != L"")
					  {
						bool1 = bool2;
					  }
					  else
					  {
						bool1 = false;
					  }
					  if (bool1 && this->v == 0 && this->w == L"")
					  {
						this->z = static_cast<a*>(android.support::v4::h::a(this->x, c_Renamed.a(), c_Renamed.b(this->a)));
					  }
					  else
					  {
						if (bool1)
						{
						  android.util::Log::w(L"SupportMenuInflater", L"Ignoring attribute 'actionProviderClass'. Action view already specified.");
						}
						this->z = nullptr;
					  }
					  typedArray->recycle();
					  this->i = false;
					}

					SubMenu *c::b::c()
					{
					  this->i = true;
					  SubMenu *subMenu = this->b_Renamed->addSubMenu(this->c_Renamed, this->j, this->k, this->l);
					  android.support::v4::h::a(subMenu->getItem());
					  return subMenu;
					}

					bool c::b::d()
					{
						return this->i;
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "e.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"

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
						using android::content::pm::PackageManager;
						using android::content::pm::ResolveInfo;
						using android::content::res::Resources;
						using android::graphics::drawable::Drawable;
						using a = android::support::v4::b::a;
						using a = android::support::v4::d::a::a;
						using a = android::support::v4::h::a;
						using a = android::support::v7::b::a;
						using android::view::ContextMenu;
						using android::view::KeyCharacterMap;
						using android::view::KeyEvent;
						using android::view::MenuItem;
						using android::view::SubMenu;
						using android::view::View;

						e::e(Context *paramContext) : e(paramContext), f(paramContext->getResources())
						{
						  this->j = std::vector();
						  this->k = std::vector();
						  this->l = true;
						  this->m = std::vector();
						  this->n = std::vector();
						  this->o = true;
						  d(true);
						}

						int e::android->support.v4.b.a(std::vector<f*> &paramArrayList, int paramInt)
						{
						  for (int i1 = paramArrayList.size() - 1; i1 >= 0; i1--)
						  {
							if ((static_cast<f*>(paramArrayList[i1]))->c() <= paramInt)
							{
							  return i1 + 1;
							}
						  }
						  return 0;
						}

						f *e::android->support.v4.b.a(int paramInt1, int paramInt2, int paramInt3, int paramInt4, CharSequence *paramCharSequence, int paramInt5)
						{
							return new f(this, paramInt1, paramInt2, paramInt3, paramInt4, paramCharSequence, paramInt5);
						}

						void e::android->support.v4.b.a(int paramInt1, CharSequence *paramCharSequence, int paramInt2, Drawable *paramDrawable, View *paramView)
						{
						  Resources *resources = c();
						  if (paramView != nullptr)
						  {
							this->c_Renamed = paramView;
							this->a = nullptr;
							this->b = nullptr;
						  }
						  else
						  {
							if (paramInt1 > 0)
							{
							  this->a = resources->getText(paramInt1);
							}
							else if (paramCharSequence != nullptr)
							{
							  this->a = paramCharSequence;
							}
							if (paramInt2 > 0)
							{
							  this->b = android->support.v4.b.a::a(d(), paramInt2);
							}
							else if (paramDrawable != nullptr)
							{
							  this->b = paramDrawable;
							}
							this->c_Renamed = nullptr;
						  }
						  b(false);
						}

						void e::android->support.v4.b.a(int paramInt, bool paramBoolean)
						{
						  if (paramInt >= 0 && paramInt < this->j.size())
						  {
							this->j.erase(this->j.begin() + paramInt);
							if (paramBoolean)
							{
							  b(true);
							  return;
							}
						  }
						}

						bool e::android->support.v4.b.a(n *paramn, j *paramj)
						{
						  bool bool_Renamed = false;
						  if (this->w->isEmpty())
						  {
							return false;
						  }
						  if (paramj != nullptr)
						  {
							bool_Renamed = paramj->a(paramn);
						  }
						  for (auto weakReference : this->w)
						  {
							j *j1 = static_cast<j*>(weakReference->get());
							if (j1 == nullptr)
							{
							  this->w->remove(weakReference);
							  continue;
							}
							if (!bool_Renamed)
							{
							  bool_Renamed = j1->a(paramn);
							}
						  }
						  return bool_Renamed;
						}

						int e::c(int paramInt)
						{
						  int i1 = (0xFFFF0000 & paramInt) >> 16;
						  if (i1 < 0 || i1 >= d_Renamed.size())
						  {
							throw std::invalid_argument("order does not contain a valid category.");
						  }
						  return d_Renamed[i1] << 16 | 0xFFFF & paramInt;
						}

						void e::c(bool paramBoolean)
						{
						  if (this->w->isEmpty())
						  {
							return;
						  }
						  f();
						  for (auto weakReference : this->w)
						  {
							j *j1 = static_cast<j*>(weakReference->get());
							if (j1 == nullptr)
							{
							  this->w->remove(weakReference);
							  continue;
							}
							j1->b(paramBoolean);
						  }
						  g();
						}

						void e::d(bool paramBoolean)
						{
						  bool bool_Renamed = true;
						  if (paramBoolean && (this->f->getConfiguration()).keyboard != 1 && this->f->getBoolean(android->support.v4.b.a::b.abc_config_showMenuShortcutsWhenKeyboardPresent))
						  {
							paramBoolean = bool_Renamed;
						  }
						  else
						  {
							paramBoolean = false;
						  }
						  this->h = paramBoolean;
						}

						int e::android->support.v4.b.a(int paramInt)
						{
						  int i1 = size();
						  for (char b1 = 0; b1 < i1; b1++)
						  {
							if ((static_cast<f*>(this->j[b1]))->getItemId() == paramInt)
							{
							  return b1;
							}
						  }
						  return -1;
						}

						int e::android->support.v4.b.a(int paramInt1, int paramInt2)
						{
						  int i2 = size();
						  int i1 = paramInt2;
						  if (paramInt2 < 0)
						  {
							i1 = 0;
						  }
						  while (i1 < i2)
						  {
							if ((static_cast<f*>(this->j[i1]))->getGroupId() == paramInt1)
							{
							  return i1;
							}
							i1++;
						  }
						  return -1;
						}

						e *e::android->support.v4.b.a(Drawable *paramDrawable)
						{
						  android->support.v4.b.a(0, nullptr, 0, paramDrawable, nullptr);
						  return this;
						}

						e *e::android->support.v4.b.a(View *paramView)
						{
						  android->support.v4.b.a(0, nullptr, 0, nullptr, paramView);
						  return this;
						}

						e *e::android->support.v4.b.a(CharSequence *paramCharSequence)
						{
						  android->support.v4.b.a(0, paramCharSequence, 0, nullptr, nullptr);
						  return this;
						}

						f *e::android->support.v4.b.a(int paramInt, KeyEvent *paramKeyEvent)
						{ // Byte code:
						  //   0: aload_0
						  //   1: getfield v : Ljava/util/ArrayList;
						  //   4: astore #9
						  //   6: aload #9
						  //   8: invokevirtual clear : ()V
						  //   11: aload_0
						  //   12: aload #9
						  //   14: iload_1
						  //   15: aload_2
						  //   16: invokevirtual a : (Ljava/util/List;ILandroid/view/KeyEvent;)V
						  //   19: aload #9
						  //   21: invokevirtual isEmpty : ()Z
						  //   24: ifeq -> 31
						  //   27: aconst_null
						  //   28: astore_2
						  //   29: aload_2
						  //   30: areturn
						  //   31: aload_2
						  //   32: invokevirtual getMetaState : ()I
						  //   35: istore #5
						  //   37: new android/view/KeyCharacterMap$KeyData
						  //   40: dup
						  //   41: invokespecial <init> : ()V
						  //   44: astore #10
						  //   46: aload_2
						  //   47: aload #10
						  //   49: invokevirtual getKeyData : (Landroid/view/KeyCharacterMap$KeyData;)Z
						  //   52: pop
						  //   53: aload #9
						  //   55: invokevirtual size : ()I
						  //   58: istore #6
						  //   60: iload #6
						  //   62: iconst_1
						  //   63: if_icmpne -> 76
						  //   66: aload #9
						  //   68: iconst_0
						  //   69: invokevirtual get : (I)Ljava/lang/Object;
						  //   72: checkcast android/support/v7/internal/view/menu/f
						  //   75: areturn
						  //   76: aload_0
						  //   77: invokevirtual a : ()Z
						  //   80: istore #7
						  //   82: iconst_0
						  //   83: istore_3
						  //   84: iload_3
						  //   85: iload #6
						  //   87: if_icmpge -> 195
						  //   90: aload #9
						  //   92: iload_3
						  //   93: invokevirtual get : (I)Ljava/lang/Object;
						  //   96: checkcast android/support/v7/internal/view/menu/f
						  //   99: astore #8
						  //   101: iload #7
						  //   103: ifeq -> 185
						  //   106: aload #8
						  //   108: invokevirtual getAlphabeticShortcut : ()C
						  //   111: istore #4
						  //   113: iload #4
						  //   115: aload #10
						  //   117: getfield meta : [C
						  //   120: iconst_0
						  //   121: caload
						  //   122: if_icmpne -> 135
						  //   125: aload #8
						  //   127: astore_2
						  //   128: iload #5
						  //   130: iconst_2
						  //   131: iand
						  //   132: ifeq -> 29
						  //   135: iload #4
						  //   137: aload #10
						  //   139: getfield meta : [C
						  //   142: iconst_2
						  //   143: caload
						  //   144: if_icmpne -> 157
						  //   147: aload #8
						  //   149: astore_2
						  //   150: iload #5
						  //   152: iconst_2
						  //   153: iand
						  //   154: ifne -> 29
						  //   157: iload #7
						  //   159: ifeq -> 178
						  //   162: iload #4
						  //   164: bipush #8
						  //   166: if_icmpne -> 178
						  //   169: aload #8
						  //   171: astore_2
						  //   172: iload_1
						  //   173: bipush #67
						  //   175: if_icmpeq -> 29
						  //   178: iload_3
						  //   179: iconst_1
						  //   180: iadd
						  //   181: istore_3
						  //   182: goto -> 84
						  //   185: aload #8
						  //   187: invokevirtual getNumericShortcut : ()C
						  //   190: istore #4
						  //   192: goto -> 113
						  //   195: aconst_null
						  //   196: areturn }

					protected:
						android->view.MenuItem android->support.v4.b.a(int paramInt1, int paramInt2, int paramInt3, CharSequence paramCharSequence)
						{
						  int i1 = c(paramInt3);
						  f *f1 = android->support.v4.b.a(paramInt1, paramInt2, paramInt3, i1, paramCharSequence, this->p);
						  if (this->q != nullptr)
						  {
							f1->a(this->q);
						  }
						  this->j.push_back(android->support.v4.b.a(this->j, i1), f1);
						  b(true);
						  return f1;
						}

					public:
						void android->support.v4.b.a(android->support.v4.b.a parama)
						{
							this->i = parama;
						}

						void android->support.v4.b.a(f paramf)
						{
						  this->l = true;
						  b(true);
						}

						void android->support.v4.b.a(j paramj, android->content.Context paramContext)
						{
						  WeakReference tempVar(paramj);
						  this->w->add(&tempVar);
						  paramj::a(paramContext, this);
						  this->o = true;
						}

						void android->support.v4.b.a(android->view.MenuItem paramMenuItem)
						{
						  int i1 = paramMenuItem::getGroupId();
						  int i2 = this->j.size();
						  for (char b1 = 0; b1 < i2; b1++)
						  {
							f *f1 = static_cast<f*>(this->j[b1]);
							if (f1->getGroupId() == i1 && f1->g() && f1->isCheckable())
							{
							  bool bool_Renamed;
							  if (f1 == paramMenuItem)
							  {
								bool_Renamed = true;
							  }
							  else
							  {
								bool_Renamed = false;
							  }
							  f1->b(bool_Renamed);
							}
						  }
						}

						void android->support.v4.b.a(std::vector<f*> paramList, int paramInt, android->view.KeyEvent paramKeyEvent)
						{
						  bool bool_Renamed = android->support.v4.b.a();
						  int i1 = paramKeyEvent->getMetaState();
						  KeyCharacterMap::KeyData *keyData = new android->view.KeyCharacterMap.KeyData();
						  if (paramKeyEvent->getKeyData(keyData) || paramInt == 67)
						  {
							int i2 = this->j.size();
							char b1 = 0;
							while (true)
							{
							  if (b1 < i2)
							  {
								wchar_t c1;
								f *f1 = static_cast<f*>(this->j[b1]);
								if (f1->hasSubMenu())
								{
								  (static_cast<e*>(f1->getSubMenu()))->a(paramList, paramInt, paramKeyEvent);
								}
								if (bool_Renamed)
								{
								  c1 = f1->getAlphabeticShortcut();
								}
								else
								{
								  c1 = f1->getNumericShortcut();
								}
								if ((i1 & 0x5) == 0 && c1 != L'\000' && (c1 == keyData->meta[0] || c1 == keyData->meta[2] || (bool_Renamed && c1 == L'\b' && paramInt == 67)) && f1->isEnabled())
								{
								  paramList->add(f1);
								}
								b1++;
								continue;
							  }
							  return;
							}
						  }
						}

						final void android->support.v4.b.a(bool paramBoolean)
						{
						  if (this->u)
						  {
							return;
						  }
						  this->u = true;
						  for (auto weakReference : this->w)
						  {
							j *j1 = static_cast<j*>(weakReference->get());
							if (j1 == nullptr)
							{
							  this->w->remove(weakReference);
							  continue;
							}
							j1->a(this, paramBoolean);
						  }
						  this->u = false;
						}

						bool android->support.v4.b.a()
						{
							return this->g;
						}

						bool android->support.v4.b.a(e parame, android->view.MenuItem paramMenuItem)
						{
							return (this->i != nullptr && this->i->a(parame, paramMenuItem));
						}

						bool android->support.v4.b.a(android->view.MenuItem paramMenuItem, int paramInt)
						{
							return android->support.v4.b.a(paramMenuItem, nullptr, paramInt);
						}

						bool android->support.v4.b.a(android->view.MenuItem paramMenuItem, j paramj, int paramInt)
						{
						  bool bool_Renamed;
						  char b1 = 0;
						  f *f1 = static_cast<f*>(paramMenuItem);
						  int i1 = b1;
						  if (f1 != nullptr)
						  {
							if (!f1->isEnabled())
							{
							  return b1;
							}
						  }
						  else
						  {
							return i1;
						  }
						  bool bool1 = f1->b();
						  a *a1 = f1->a();
						  if (a1 != nullptr && a1->e())
						  {
							bool_Renamed = true;
						  }
						  else
						  {
							bool_Renamed = false;
						  }
						  if (f1->n())
						  {
							bool bool2 = f1->expandActionView() | bool1;
							bool1 = bool2;
							if (bool2)
							{
							  android->support.v4.b.a(true);
							  return bool2;
							}
							return bool1;
						  }
						  if (f1->hasSubMenu() || bool_Renamed)
						  {
							android->support.v4.b.a(false);
							if (!f1->hasSubMenu())
							{
							  n tempVar2(d(), this, f1);
							  f1->a(&tempVar2);
							}
							n *n1 = static_cast<n*>(f1->getSubMenu());
							if (bool_Renamed)
							{
							  a1->a(n1);
							}
							bool bool2 = android->support.v4.b.a(n1, paramj) | bool1;
							bool1 = bool2;
							if (!bool2)
							{
							  android->support.v4.b.a(true);
							  return bool2;
							}
							return bool1;
						  }
						  if ((paramInt & true) == 0)
						  {
							android->support.v4.b.a(true);
						  }
						  return bool1;
						}

						android->view.MenuItem add(int paramInt)
						{
							return android->support.v4.b.a(0, 0, 0, this->f->getString(paramInt));
						}

						android->view.MenuItem add(int paramInt1, int paramInt2, int paramInt3, int paramInt4)
						{
							return android->support.v4.b.a(paramInt1, paramInt2, paramInt3, this->f->getString(paramInt4));
						}

						android->view.MenuItem add(int paramInt1, int paramInt2, int paramInt3, CharSequence paramCharSequence)
						{
							return android->support.v4.b.a(paramInt1, paramInt2, paramInt3, paramCharSequence);
						}

						android->view.MenuItem add(CharSequence paramCharSequence)
						{
							return android->support.v4.b.a(0, 0, 0, paramCharSequence);
						}

						int addIntentOptions(int paramInt1, int paramInt2, int paramInt3, android->content.ComponentName paramComponentName, android->content.Intent[] paramArrayOfIntent, android->content.Intent paramIntent, int paramInt4, android->view.MenuItem[] paramArrayOfMenuItem)
						{
						  char b1;
						  PackageManager *packageManager = this->e_Renamed->getPackageManager();
						  std::vector list = packageManager->queryIntentActivityOptions(paramComponentName, paramArrayOfIntent, paramIntent, 0);
						  if (list.size() > 0)
						  {
							b1 = list.size();
						  }
						  else
						  {
							b1 = 0;
						  }
						  if ((paramInt4 & true) == 0)
						  {
							removeGroup(paramInt1);
						  }
						  for (paramInt4 = 0; paramInt4 < b1; paramInt4++)
						  {
							ResolveInfo *resolveInfo = static_cast<ResolveInfo*>(list[paramInt4]);
							if (resolveInfo->specificIndex < 0)
							{
							  intent = paramIntent;
							}
							else
							{
							  intent = paramArrayOfIntent[resolveInfo->specificIndex];
							}
							Intent *intent = new android->content.Intent(intent);
							android->content::ComponentName tempVar3(resolveInfo->activityInfo.applicationInfo.packageName, resolveInfo->activityInfo.name);
							intent->setComponent(&tempVar3);
							MenuItem *menuItem = add(paramInt1, paramInt2, paramInt3, resolveInfo->loadLabel(packageManager)).setIcon(resolveInfo->loadIcon(packageManager)).setIntent(intent);
							if (paramArrayOfMenuItem != nullptr && resolveInfo->specificIndex >= 0)
							{
							  paramArrayOfMenuItem[resolveInfo->specificIndex] = menuItem;
							}
						  }
						  return b1;
						}

						android->view.SubMenu addSubMenu(int paramInt)
						{
							return addSubMenu(0, 0, 0, this->f->getString(paramInt));
						}

						android->view.SubMenu addSubMenu(int paramInt1, int paramInt2, int paramInt3, int paramInt4)
						{
							return addSubMenu(paramInt1, paramInt2, paramInt3, this->f->getString(paramInt4));
						}

						android->view.SubMenu addSubMenu(int paramInt1, int paramInt2, int paramInt3, CharSequence paramCharSequence)
						{
						  f *f1 = static_cast<f*>(android->support.v4.b.a(paramInt1, paramInt2, paramInt3, paramCharSequence));
						  n *n1 = new n(this->e_Renamed, this, f1);
						  f1->a(n1);
						  return n1;
						}

						android->view.SubMenu addSubMenu(CharSequence paramCharSequence)
						{
							return addSubMenu(0, 0, 0, paramCharSequence);
						}

						int b(int paramInt)
						{
							return android->support.v4.b.a(paramInt, 0);
						}

						void b(f paramf)
						{
						  this->o = true;
						  b(true);
						}

						void b(bool paramBoolean)
						{
						  if (!this->r)
						  {
							if (paramBoolean)
							{
							  this->l = true;
							  this->o = true;
							}
							c(paramBoolean);
							return;
						  }
						  this->s = true;
						}

						bool b()
						{
							return this->h;
						}

						android->content.res.Resources c()
						{
							return this->f;
						}

						bool c(f paramf)
						{
						  bool bool_Renamed = false;
						  if (!this->w->isEmpty())
						  {
							f();
							CopyOnWriteArrayList<WeakReference<j*>*>::const_iterator iterator = this->w->begin();
							bool bool1 = false;
							while (iterator != this->w->end())
							{
							  WeakReference *weakReference = (WeakReference)*iterator;
							  j *j1 = static_cast<j*>(weakReference->get());
							  if (j1 == nullptr)
							  {
								this->w->remove(weakReference);
								continue;
							  }
							  bool_Renamed = j1->a(this, paramf);
							  bool1 = bool_Renamed;
							  if (bool_Renamed)
							  {
								bool1 = bool_Renamed;
								break;
							  }
								iterator++;
							}
							g();
							bool_Renamed = bool1;
							if (bool1)
							{
							  this->x = paramf;
							  return bool1;
							}
						  }
						  return bool_Renamed;
						}

						void clear()
						{
						  if (this->x != nullptr)
						  {
							d(this->x);
						  }
						  this->j.clear();
						  b(true);
						}

						void clearHeader()
						{
						  this->b = nullptr;
						  this->a = nullptr;
						  this->c_Renamed = nullptr;
						  b(false);
						}

						void close()
						{
							android->support.v4.b.a(true);
						}

						android->content.Context d()
						{
							return this->e_Renamed;
						}

						bool d(f paramf)
						{
						  bool bool1 = false;
						  int i1 = bool1;
						  if (!this->w->isEmpty())
						  {
							if (this->x != paramf)
							{
							  return bool1;
							}
						  }
						  else
						  {
							return i1;
						  }
						  f();
						  CopyOnWriteArrayList<WeakReference<j*>*>::const_iterator iterator = this->w->begin();
						  bool1 = false;
						  while (iterator != this->w->end())
						  {
							WeakReference *weakReference = (WeakReference)*iterator;
							j *j1 = static_cast<j*>(weakReference->get());
							if (j1 == nullptr)
							{
							  this->w->remove(weakReference);
							  continue;
							}
							bool bool_Renamed = j1->b(this, paramf);
							bool1 = bool_Renamed;
							if (bool_Renamed)
							{
							  bool1 = bool_Renamed;
							  break;
							}
							  iterator++;
						  }
						  g();
						  bool bool2 = bool1;
						  if (bool1)
						  {
							this->x = nullptr;
							return bool1;
						  }
						  return bool2;
						}

						void e()
						{
						  if (this->i != nullptr)
						  {
							this->i->a(this);
						  }
						}

						void f()
						{
						  if (!this->r)
						  {
							this->r = true;
							this->s = false;
						  }
						}

						android->view.MenuItem findItem(int paramInt)
						{
						  int i1 = size();
						  for (char b1 = 0; b1 < i1; b1++)
						  {
							MenuItem *menuItem = static_cast<f*>(this->j[b1]);
							if (menuItem->getItemId() != paramInt)
							{
							  if (menuItem->hasSubMenu())
							  {
								MenuItem *menuItem1 = menuItem->getSubMenu().findItem(paramInt);
								menuItem = menuItem1;
								if (menuItem1 == nullptr)
								{
								  continue;
								}
								return menuItem;
							  }
							  continue;
							}
							return menuItem;
						  }
						  return nullptr;
						}

						void g()
						{
						  this->r = false;
						  if (this->s)
						  {
							this->s = false;
							b(true);
						  }
						}

						android->view.MenuItem getItem(int paramInt)
						{
							return static_cast<MenuItem*>(this->j[paramInt]);
						}

						std::vector<f*> h()
						{
						  if (!this->l)
						  {
							return this->k;
						  }
						  this->k.clear();
						  int i1 = this->j.size();
						  for (char b1 = 0; b1 < i1; b1++)
						  {
							f *f1 = static_cast<f*>(this->j[b1]);
							if (f1->isVisible())
							{
							  this->k.push_back(f1);
							}
						  }
						  this->l = false;
						  this->o = true;
						  return this->k;
						}

						bool hasVisibleItems()
						{
						  if (this->y)
						  {
							return true;
						  }
						  int i1 = size();
						  for (char b1 = 0; b1 < i1; b1++)
						  {
							if ((static_cast<f*>(this->j[b1]))->isVisible())
							{
							  return true;
							}
						  }
						  return false;
						}

						void i()
						{
						  std::vector arrayList = h();
						  if (!this->o)
						  {
							return;
						  }
						  CopyOnWriteArrayList<WeakReference<j*>*>::const_iterator iterator = this->w->begin();
						  int i1;
						  for (i1 = 0; iterator != this->w->end(); ++iterator)
						  {
							WeakReference *weakReference = (WeakReference)*iterator;
							j *j1 = static_cast<j*>(weakReference->get());
							if (j1 == nullptr)
							{
							  this->w->remove(weakReference);
							  continue;
							}
						  }
						  if (i1)
						  {
							this->m.clear();
							this->n.clear();
							int i2 = arrayList.size();
							i1 = 0;
							while (i1 < i2)
							{
							  f *f1 = static_cast<f*>(arrayList[i1]);
							  if (f1->j())
							  {
								this->m.push_back(f1);
							  }
							  else
							  {
								this->n.push_back(f1);
							  }
							  int i3 = i1 + 1;
							}
						  }
						  else
						  {
							this->m.clear();
							this->n.clear();
							this->n.addAll(h());
						  }
						  this->o = false;
						}

						bool isShortcutKey(int paramInt, android->view.KeyEvent paramKeyEvent)
						{
							return (android->support.v4.b.a(paramInt, paramKeyEvent) != nullptr);
						}

						std::vector<f*> j()
						{
						  i();
						  return this->m;
						}

						std::vector<f*> k()
						{
						  i();
						  return this->n;
						}

						e l()
						{
							return this;
						}

						bool m()
						{
							return this->t;
						}

						f n()
						{
							return this->x;
						}

						bool performIdentifierAction(int paramInt1, int paramInt2)
						{
							return android->support.v4.b.a(findItem(paramInt1), paramInt2);
						}

						bool performShortcut(int paramInt1, android->view.KeyEvent paramKeyEvent, int paramInt2)
						{
						  f *f1 = android->support.v4.b.a(paramInt1, paramKeyEvent);
						  bool bool_Renamed = false;
						  if (f1 != nullptr)
						  {
							bool_Renamed = android->support.v4.b.a(f1, paramInt2);
						  }
						  if ((paramInt2 & 0x2) != 0)
						  {
							android->support.v4.b.a(true);
						  }
						  return bool_Renamed;
						}

						void removeGroup(int paramInt)
						{
						  int i1 = b(paramInt);
						  if (i1 >= 0)
						  {
							int i2 = this->j.size();
							for (char b1 = 0; b1 < i2 - i1 && (static_cast<f*>(this->j[i1]))->getGroupId() == paramInt; b1++)
							{
							  android->support.v4.b.a(i1, false);
							}
							b(true);
						  }
						}

						void removeItem(int paramInt)
						{
							android->support.v4.b.a(android->support.v4.b.a(paramInt), true);
						}

						void setGroupCheckable(int paramInt, bool paramBoolean1, bool paramBoolean2)
						{
						  int i1 = this->j.size();
						  char b1;
						  for (b1 = 0; b1 < i1; b1++)
						  {
							f *f1 = static_cast<f*>(this->j[b1]);
							if (f1->getGroupId() == paramInt)
							{
							  f1->a(paramBoolean2);
							  f1->setCheckable(paramBoolean1);
							}
						  }
						}

						void setGroupEnabled(int paramInt, bool paramBoolean)
						{
						  int i1 = this->j.size();
						  for (char b1 = 0; b1 < i1; b1++)
						  {
							f *f1 = static_cast<f*>(this->j[b1]);
							if (f1->getGroupId() == paramInt)
							{
							  f1->setEnabled(paramBoolean);
							}
						  }
						}

						void setGroupVisible(int paramInt, bool paramBoolean)
						{
						  int i1 = this->j.size();
						  char b1 = 0;
						  bool bool_Renamed = false;
						  while (b1 < i1)
						  {
							f *f1 = static_cast<f*>(this->j[b1]);
							if (f1->getGroupId() == paramInt && f1->c(paramBoolean))
							{
							  bool_Renamed = true;
							}
							b1++;
						  }
						  if (bool_Renamed)
						  {
							b(true);
						  }
						}

						void setQwertyMode(bool paramBoolean)
						{
						  this->g = paramBoolean;
						  b(false);
						}

						int size()
						{
							return this->j.size();
						}

						static interface a
						{
						  void android->support.v4.b.a(e param1e);

						  bool android->support.v4.b.a(e param1e, android->view.MenuItem param1MenuItem);
						}

						static interface b
						{
						  bool android->support.v4.b.a(f param1f);
						}
						}
					}
				}
			}
		}
	}
}

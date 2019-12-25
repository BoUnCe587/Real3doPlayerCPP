//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "i.h"
#include "e.h"
#include "../../../b/a.h"
#include "../../../widget/h.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"
#include "ListMenuItemView.h"

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
						using android::content::res::Resources;
						using a = android::support::v7::b::a;
						using h = android::support::v7::widget::h;
						using android::view::KeyEvent;
						using android::view::LayoutInflater;
						using android::view::View;
						using android::view::ViewGroup;
						using android::view::ViewTreeObserver;
						using android::widget::AdapterView;
						using android::widget::BaseAdapter;
						using android::widget::FrameLayout;
						using android::widget::PopupWindow;

						i::i(Context *paramContext, e *parame, View *paramView) : i(paramContext, parame, paramView, false, a::a::popupMenuStyle)
						{
						}

						i::i(Context *paramContext, e *parame, View *paramView, bool paramBoolean, int paramInt) : i(paramContext, parame, paramView, paramBoolean, paramInt, 0)
						{
						}

						i::i(Context *paramContext, e *parame, View *paramView, bool paramBoolean, int paramInt1, int paramInt2) : c(paramContext), d(LayoutInflater::from(paramContext)), e(parame), f(new android.support::v7::b::a::a(this, this->e)), g(paramBoolean), i(paramInt1), j(paramInt2)
						{
						  Resources *resources = paramContext->getResources();
						  this->h = std::max((resources->getDisplayMetrics()).widthPixels / 2, resources->getDimensionPixelSize(android.support::v7::b::a::c::abc_config_prefDialogWidth));
						  this->k = paramView;
						  parame->a(this, paramContext);
						}

						int i::g()
						{
						  a *a1 = this->f;
						  int i3 = android.view::View::MeasureSpec::makeMeasureSpec(0, 0);
						  int i4 = android.view::View::MeasureSpec::makeMeasureSpec(0, 0);
						  int i5 = a1->getCount();
						  char b1 = 0;
						  int i2 = 0;
						  View *view = nullptr;
						  int i1 = 0;
						  while (true)
						  {
							int i6 = i1;
							if (b1 < i5)
							{
							  i6 = a1->getItemViewType(b1);
							  if (i6 != i2)
							  {
								i2 = i6;
								view = nullptr;
							  }
							  if (this->o == nullptr)
							  {
								this->o = new android.widget::FrameLayout(this->c);
							  }
							  view = a1->getView(b1, view, this->o);
							  view->measure(i3, i4);
							  i6 = view->getMeasuredWidth();
							  if (i6 >= this->h)
							  {
								return this->h;
							  }
							}
							else
							{
							  return i6;
							}
							if (i6 > i1)
							{
							  i1 = i6;
							}
							b1++;
						  }
						}

						void i::android.support::v7::b::a()
						{
						  if (!d())
						  {
							throw IllegalStateException(L"MenuPopupHelper cannot be used without an anchor");
						  }
						}

						void i::android.support::v7::b::a(int paramInt)
						{
							this->r = paramInt;
						}

						void i::android.support::v7::b::a(Context *paramContext, e *parame)
						{
						}

						void i::android.support::v7::b::a(e *parame, bool paramBoolean)
						{
						  if (parame == this->e)
						  {
							e();
							if (this->n != nullptr)
							{
							  this->n->a_Renamed(parame, paramBoolean);
							  return;
							}
						  }
						}

						void i::android.support::v7::b::a(j::a *parama)
						{
							this->n = parama;
						}

						void i::android.support::v7::b::a(View *paramView)
						{
							this->k = paramView;
						}

						void i::android.support::v7::b::a(bool paramBoolean)
						{
							this->b = paramBoolean;
						}

						bool i::android.support::v7::b::a(e *parame, f *paramf)
						{
							return false;
						}

						bool i::android.support::v7::b::a(n *paramn)
						{ // Byte code:
						  //   0: aload_1
						  //   1: invokevirtual hasVisibleItems : ()Z
						  //   4: ifeq -> 118
						  //   7: new android/support/v7/internal/view/menu/i
						  //   10: dup
						  //   11: aload_0
						  //   12: getfield c : Landroid/content/Context;
						  //   15: aload_1
						  //   16: aload_0
						  //   17: getfield k : Landroid/view/View;
						  //   20: invokespecial <init> : (Landroid/content/Context;Landroid/support/v7/internal/view/menu/e;Landroid/view/View;)V
						  //   23: astore #5
						  //   25: aload #5
						  //   27: aload_0
						  //   28: getfield n : Landroid/support/v7/internal/view/menu/j$a;
						  //   31: invokevirtual a : (Landroid/support/v7/internal/view/menu/j$a;)V
						  //   34: aload_1
						  //   35: invokevirtual size : ()I
						  //   38: istore_3
						  //   39: iconst_0
						  //   40: istore_2
						  //   41: iload_2
						  //   42: iload_3
						  //   43: if_icmpge -> 120
						  //   46: aload_1
						  //   47: iload_2
						  //   48: invokevirtual getItem : (I)Landroid/view/MenuItem;
						  //   51: astore #6
						  //   53: aload #6
						  //   55: invokeinterface isVisible : ()Z
						  //   60: ifeq -> 111
						  //   63: aload #6
						  //   65: invokeinterface getIcon : ()Landroid/graphics/drawable/Drawable;
						  //   70: ifnull -> 111
						  //   73: iconst_1
						  //   74: istore #4
						  //   76: aload #5
						  //   78: iload #4
						  //   80: invokevirtual a : (Z)V
						  //   83: aload #5
						  //   85: invokevirtual d : ()Z
						  //   88: ifeq -> 118
						  //   91: aload_0
						  //   92: getfield n : Landroid/support/v7/internal/view/menu/j$a;
						  //   95: ifnull -> 109
						  //   98: aload_0
						  //   99: getfield n : Landroid/support/v7/internal/view/menu/j$a;
						  //   102: aload_1
						  //   103: invokeinterface a : (Landroid/support/v7/internal/view/menu/e;)Z
						  //   108: pop
						  //   109: iconst_1
						  //   110: ireturn
						  //   111: iload_2
						  //   112: iconst_1
						  //   113: iadd
						  //   114: istore_2
						  //   115: goto -> 41
						  //   118: iconst_0
						  //   119: ireturn
						  //   120: iconst_0
						  //   121: istore #4
						  //   123: goto -> 76 }

						void b(bool paramBoolean)
						{
						  this->p = false;
						  if (this->f != nullptr)
						  {
							this->f->notifyDataSetChanged();
						  }
						}

						bool b()
						{
							return false;
						}

						bool b(e parame, f paramf)
						{
							return false;
						}

						android.support::v7::widget::h c()
						{
							return this->l;
						}

						bool d()
						{
						  bool bool_Renamed = false;
						  this->l = new android.support::v7::widget::h(this->c, nullptr, this->i_Renamed, this->j);
						  this->l->a(this);
						  this->l->a(this);
						  this->l->a(this->f);
						  this->l->a(true);
						  View *view = this->k;
						  if (view != nullptr)
						  {
							if (this->m == nullptr)
							{
							  bool_Renamed = true;
							}
							this->m = view->getViewTreeObserver();
							if (bool_Renamed)
							{
							  this->m->addOnGlobalLayoutListener(this);
							}
							this->l->a(view);
							this->l->d(this->r);
							if (!this->p)
							{
							  this->q = g();
							  this->p = true;
							}
							this->l->f(this->q);
							this->l->g(2);
							this->l->c();
							this->l->m().setOnKeyListener(this);
							return true;
						  }
						  return false;
						}

						void e()
						{
						  if (f())
						  {
							this->l->i();
						  }
						}

						bool f()
						{
							return (this->l != nullptr && this->l->k());
						}

						void onDismiss()
						{
						  this->l = nullptr;
						  delete this->e;
						  if (this->m != nullptr)
						  {
							if (!this->m->isAlive())
							{
							  this->m = this->k->getViewTreeObserver();
							}
							this->m->removeGlobalOnLayoutListener(this);
							this->m = nullptr;
						  }
						}

						void onGlobalLayout()
						{
						  if (f())
						  {
							View *view = this->k;
							if (view == nullptr || !view->isShown())
							{
							  e();
							  return;
							}
						  }
						  else
						  {
							return;
						  }
						  if (f())
						  {
							this->l->c();
							return;
						  }
						}

//JAVA TO C++ CONVERTER TODO TASK: Java wildcard generics are not converted to C++:
//ORIGINAL LINE: public void onItemClick(android.widget.AdapterView<?> paramAdapterView, android.view.View paramView, int paramInt, long paramLong)
						void onItemClick(android.widget::AdapterView<?> paramAdapterView, android.view::View paramView, int paramInt, long long paramLong)
						{
						  a *a1;
						  (a1 = this->f).a(a1).a(a1->a(paramInt), 0);
						}

						bool onKey(android.view::View paramView, int paramInt, android.view::KeyEvent paramKeyEvent)
						{
						  if (paramKeyEvent::getAction() == 1 && paramInt == 82)
						  {
							e();
							return true;
						  }
						  return false;
						}

					private:
						class a extends android.widget::BaseAdapter
						{
						  e b;

						  int c = -1;

					  public:
						  android.support::v7::b::a(i this$0, e param1e)
						  {
							this->b = param1e;
							android.support::v7::b::a();
						  }

						  f android.support::v7::b::a(int param1Int)
						  {
							std::vector arrayList;
							if (i_Renamed.a(this->a))
							{
							  arrayList = this->b.k();
							}
							else
							{
							  arrayList = this->b.h();
							}
							int j = param1Int;
							if (this->c >= 0)
							{
							  j = param1Int;
							  if (param1Int >= this->c)
							  {
								j = param1Int + 1;
							  }
							}
							return static_cast<f*>(arrayList[j]);
						  }

						  void android.support::v7::b::a()
						  {
							f *f = i_Renamed.c(this->a).n();
							if (f != nullptr)
							{
							  std::vector arrayList = i_Renamed.c(this->a).k();
							  int j = arrayList.size();
							  for (char b1 = 0; b1 < j; b1++)
							  {
								if (static_cast<f*>(arrayList[b1]) == f)
								{
								  this->c = b1;
								  return;
								}
							  }
							}
							this->c = -1;
						  }

						  int getCount()
						  {
							std::vector arrayList;
							if (i_Renamed.a(this->a))
							{
							  arrayList = this->b.k();
							}
							else
							{
							  arrayList = this->b.h();
							}
							return (this->c < 0) ? arrayList.size() : (arrayList.size() - 1);
						  }

						  long long getItemId(int param1Int)
						  {
							  return param1Int;
						  }

						  android.view::View getView(int param1Int, android.view::View param1View, android.view::ViewGroup param1ViewGroup)
						  {
							if (param1View == nullptr)
							{
							  param1View = i_Renamed.b(this->a).inflate(i_Renamed.a, param1ViewGroup, false);
							}
							k::a *a1 = static_cast<k::a*>(param1View);
							if (this->a.b)
							{
							  (static_cast<ListMenuItemView*>(param1View))->setForceShowIcon(true);
							}
							a1->a_Renamed(android.support::v7::b::a(param1Int), 0);
							return param1View;
						  }

						  void notifyDataSetChanged()
						  {
							android.support::v7::b::a();
							__super::notifyDataSetChanged();
						  }
						}
						}
					}
				}
			}
		}
	}
}

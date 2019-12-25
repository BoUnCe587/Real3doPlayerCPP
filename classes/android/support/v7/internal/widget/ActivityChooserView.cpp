//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ActivityChooserView.h"
#include "../../../v4/h/a.h"
#include "../../../v4/h/u.h"
#include "h.h"
#include "../../widget/h.h"

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
					using android::content::Intent;
					using android::content::pm::ResolveInfo;
					using android::database::DataSetObserver;
					using android::graphics::drawable::Drawable;
					using a = android::support::v4::h::a;
					using a = android::support::v7::b::a;
					using g = android::support::v7::widget::g;
					using h = android::support::v7::widget::h;
					using android::util::AttributeSet;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::ViewTreeObserver;
					using android::widget::AdapterView;
					using android::widget::BaseAdapter;
					using android::widget::FrameLayout;
					using android::widget::ImageView;
					using android::widget::PopupWindow;

					void ActivityChooserView::android->support.v4.h.a(int paramInt)
					{
					  bool bool_Renamed;
					  int i1;
					  if (this->b_Renamed->d() == nullptr)
					  {
						throw IllegalStateException(L"No data model. Did you call #setDataModel?");
					  }
					  getViewTreeObserver().addOnGlobalLayoutListener(this->j);
					  if (this->g.getVisibility() == 0)
					  {
						bool_Renamed = true;
					  }
					  else
					  {
						bool_Renamed = false;
					  }
					  int i2 = this->b_Renamed->c();
					  if (bool_Renamed)
					  {
						i1 = 1;
					  }
					  else
					  {
						i1 = 0;
					  }
					  if (paramInt != std::numeric_limits<int>::max() && i2 > i1 + paramInt)
					  {
						this->b_Renamed->a_Renamed(true);
						this->b_Renamed->a(paramInt - 1);
					  }
					  else
					  {
						this->b_Renamed->a_Renamed(false);
						this->b_Renamed->a(paramInt);
					  }
					  h *h1 = getListPopupWindow();
					  if (!h1->k())
					  {
						if (this->m || !bool_Renamed)
						{
						  this->b_Renamed->a(true, bool_Renamed);
						}
						else
						{
						  this->b_Renamed->a(false, false);
						}
						h1.0f(std::min(this->b_Renamed->a(), this->h));
						h1->c();
						if (this->a != nullptr)
						{
						  this->a.a(true);
						}
						h1->m().setContentDescription(getContext().getString(android->support.v4.h.a::h.abc_activitychooserview_choose_application));
					  }
					}

					h *ActivityChooserView::getListPopupWindow()
					{
					  if (this->k == nullptr)
					  {
						this->k = new android->support.v7.widget.h(getContext());
						this->k->a(this->b_Renamed);
						this->k->a(this);
						this->k->a(true);
						this->k->a(this->c_Renamed);
						this->k->a(this->c_Renamed);
					  }
					  return this->k;
					}

					bool ActivityChooserView::android->support.v4.h.a()
					{
					  if (c() || !this->o)
					  {
						return false;
					  }
					  this->m = false;
					  android->support.v4.h.a(this->n);
					  return true;
					}

					bool ActivityChooserView::b()
					{
					  if (c())
					  {
						getListPopupWindow()->i();
						ViewTreeObserver *viewTreeObserver = getViewTreeObserver();
						if (viewTreeObserver->isAlive())
						{
						  viewTreeObserver->removeGlobalOnLayoutListener(this->j);
						}
					  }
					  return true;
					}

					bool ActivityChooserView::c()
					{
						return getListPopupWindow()->k();
					}

					d *ActivityChooserView::getDataModel()
					{
						return this->b_Renamed->d();
					}

					void ActivityChooserView::onAttachedToWindow()
					{
					  ViewGroup::onAttachedToWindow();
					  d *d1 = this->b_Renamed->d();
					  if (d1 != nullptr)
					  {
						d1->registerObserver(this->i);
					  }
					  this->o = true;
					}

					void ActivityChooserView::onDetachedFromWindow()
					{
					  ViewGroup::onDetachedFromWindow();
					  d *d1 = this->b_Renamed->d();
					  if (d1 != nullptr)
					  {
						d1->unregisterObserver(this->i);
					  }
					  ViewTreeObserver *viewTreeObserver = getViewTreeObserver();
					  if (viewTreeObserver->isAlive())
					  {
						viewTreeObserver->removeGlobalOnLayoutListener(this->j);
					  }
					  if (c())
					  {
						b();
					  }
					  this->o = false;
					}

					void ActivityChooserView::onLayout(bool paramBoolean, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
					  this->d->layout(0, 0, paramInt3 - paramInt1, paramInt4 - paramInt2);
					  if (!c())
					  {
						b();
					  }
					}

					void ActivityChooserView::onMeasure(int paramInt1, int paramInt2)
					{
					  g *g1 = this->d;
					  int i1 = paramInt2;
					  if (this->g.getVisibility() != 0)
					  {
						i1 = android->view.View.MeasureSpec.makeMeasureSpec(android->view.View.MeasureSpec.getSize(paramInt2), 1073741824);
					  }
					  measureChild(g1, paramInt1, i1);
					  setMeasuredDimension(g1->getMeasuredWidth(), g1->getMeasuredHeight());
					}

					void ActivityChooserView::setActivityChooserModel(d *paramd)
					{
					  this->b_Renamed->a(paramd);
					  if (c())
					  {
						b();
						android->support.v4.h.a();
					  }
					}

					void ActivityChooserView::setDefaultActionButtonContentDescription(int paramInt)
					{
						this->p = paramInt;
					}

					void ActivityChooserView::setExpandActivityOverflowButtonContentDescription(int paramInt)
					{
					  std::wstring str = getContext().getString(paramInt);
					  this->f->setContentDescription(str);
					}

					void ActivityChooserView::setExpandActivityOverflowButtonDrawable(Drawable *paramDrawable)
					{
						this->f->setImageDrawable(paramDrawable);
					}

					void ActivityChooserView::setInitialActivityCount(int paramInt)
					{
						this->n = paramInt;
					}

					void ActivityChooserView::setOnDismissListener(PopupWindow::OnDismissListener *paramOnDismissListener)
					{
						this->l = paramOnDismissListener;
					}

					void ActivityChooserView::setProvider(a *parama)
					{
						this->a = parama;
					}

					ActivityChooserView::InnerLayout::InnerLayout(Context *param1Context, AttributeSet *param1AttributeSet) : android.support::v7::widget::g(param1Context, param1AttributeSet)
					{
					  p *p = p::a(param1Context, param1AttributeSet, android.support::v4::h::a);
					  setBackgroundDrawable(p::a(0));
					  p->b();
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					int ActivityChooserView::a::android->support.v4.h.a()
					{
					  char b1 = 0;
					  int j = this->c_Renamed;
					  this->c_Renamed = std::numeric_limits<int>::max();
					  int k = outerInstance->android->view.View.MeasureSpec.makeMeasureSpec(0, 0);
					  int m = outerInstance->android->view.View.MeasureSpec.makeMeasureSpec(0, 0);
					  int n = getCount();
					  View *view = nullptr;
					  int i = 0;
					  while (b1 < n)
					  {
						view = getView(b1, view, nullptr);
						view->measure(k, m);
						i = std::max(i, view->getMeasuredWidth());
						b1++;
					  }
					  this->c_Renamed = j;
					  return i;
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void ActivityChooserView::a::android->support.v4.h.a(int param1Int)
					{
					  if (this->c_Renamed != param1Int)
					  {
						this->c_Renamed = param1Int;
						notifyDataSetChanged();
					  }
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void ActivityChooserView::a::android->support.v4.h.a(android::support::v7::internal_Renamed::widget::d *param1d)
					{
					  android::support::v7::internal_Renamed::widget::d *d1 = ActivityChooserView::a(this->a).d();
					  if (d1 != nullptr && this->a.isShown())
					  {
						d1->unregisterObserver(ActivityChooserView::g(this->a));
					  }
					  this->b_Renamed = param1d;
					  if (param1d != nullptr && this->a.isShown())
					  {
						param1d->registerObserver(ActivityChooserView::g(this->a));
					  }
					  notifyDataSetChanged();
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void ActivityChooserView::a::android->support.v4.h.a(bool param1Boolean)
					{
					  if (this->f != param1Boolean)
					  {
						this->f = param1Boolean;
						notifyDataSetChanged();
					  }
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void ActivityChooserView::a::android->support.v4.h.a(bool param1Boolean1, bool param1Boolean2)
					{
					  if (this->d_Renamed != param1Boolean1 || this->e_Renamed != param1Boolean2)
					  {
						this->d_Renamed = param1Boolean1;
						this->e_Renamed = param1Boolean2;
						notifyDataSetChanged();
					  }
					}

					ResolveInfo *ActivityChooserView::a::b()
					{
						return this->b_Renamed->b();
					}

					int ActivityChooserView::a::c()
					{
						return this->b_Renamed->a();
					}

					android::support::v7::internal_Renamed::widget::d *ActivityChooserView::a::d()
					{
						return this->b_Renamed;
					}

					bool ActivityChooserView::a::e()
					{
						return this->d_Renamed;
					}

					int ActivityChooserView::a::getCount()
					{
					  int j = this->b_Renamed->a();
					  int i = j;
					  if (!this->d_Renamed)
					  {
						i = j;
						if (this->b_Renamed->b() != nullptr)
						{
						  i = j - 1;
						}
					  }
					  j = std::min(i, this->c_Renamed);
					  i = j;
					  if (this->f)
					  {
						i = j + 1;
					  }
					  return i;
					}

					void *ActivityChooserView::a::getItem(int param1Int)
					{
					  switch (getItemViewType(param1Int))
					  {
						default:
//JAVA TO C++ CONVERTER TODO TASK: This exception's constructor requires an argument:
//ORIGINAL LINE: throw new IllegalArgumentException();
						  throw std::invalid_argument();
						case 1:
						  return nullptr;
						case 0:
						  break;
					  }
					  int i = param1Int;
					  if (!this->d_Renamed)
					  {
						i = param1Int;
						if (this->b_Renamed->b() != nullptr)
						{
						  i = param1Int + 1;
						}
					  }
					  return this->b_Renamed->a(i);
					}

					long long ActivityChooserView::a::getItemId(int param1Int)
					{
						return param1Int;
					}

					int ActivityChooserView::a::getItemViewType(int param1Int)
					{
						return (this->f && param1Int == getCount() - 1) ? 1 : 0;
					}

					View *ActivityChooserView::a::getView(int param1Int, View *param1View, ViewGroup *param1ViewGroup)
					{ // Byte code:
					  //   0: aload_0
					  //   1: iload_1
					  //   2: invokevirtual getItemViewType : (I)I
					  //   5: tableswitch default -> 28, 0 -> 107, 1 -> 36
					  //   28: new java/lang/IllegalArgumentException
					  //   31: dup
					  //   32: invokespecial <init> : ()V
					  //   35: athrow
					  //   36: aload_2
					  //   37: ifnull -> 51
					  //   40: aload_2
					  //   41: astore #4
					  //   43: aload_2
					  //   44: invokevirtual getId : ()I
					  //   47: iconst_1
					  //   48: if_icmpeq -> 104
					  //   51: aload_0
					  //   52: getfield a : Landroid/support/v7/internal/widget/ActivityChooserView;
					  //   55: invokevirtual getContext : ()Landroid/content/Context;
					  //   58: invokestatic from : (Landroid/content/Context;)Landroid/view/LayoutInflater;
					  //   61: getstatic android/support/v7/b/a$g.abc_activity_chooser_view_list_item : I
					  //   64: aload_3
					  //   65: iconst_0
					  //   66: invokevirtual inflate : (ILandroid/view/ViewGroup;Z)Landroid/view/View;
					  //   69: astore #4
					  //   71: aload #4
					  //   73: iconst_1
					  //   74: invokevirtual setId : (I)V
					  //   77: aload #4
					  //   79: getstatic android/support/v7/b/a$e.title : I
					  //   82: invokevirtual findViewById : (I)Landroid/view/View;
					  //   85: checkcast android/widget/TextView
					  //   88: aload_0
					  //   89: getfield a : Landroid/support/v7/internal/widget/ActivityChooserView;
					  //   92: invokevirtual getContext : ()Landroid/content/Context;
					  //   95: getstatic android/support/v7/b/a$h.abc_activity_chooser_view_see_all : I
					  //   98: invokevirtual getString : (I)Ljava/lang/String;
					  //   101: invokevirtual setText : (Ljava/lang/CharSequence;)V
					  //   104: aload #4
					  //   106: areturn
					  //   107: aload_2
					  //   108: ifnull -> 124
					  //   111: aload_2
					  //   112: astore #4
					  //   114: aload_2
					  //   115: invokevirtual getId : ()I
					  //   118: getstatic android/support/v7/b/a$e.list_item : I
					  //   121: if_icmpeq -> 144
					  //   124: aload_0
					  //   125: getfield a : Landroid/support/v7/internal/widget/ActivityChooserView;
					  //   128: invokevirtual getContext : ()Landroid/content/Context;
					  //   131: invokestatic from : (Landroid/content/Context;)Landroid/view/LayoutInflater;
					  //   134: getstatic android/support/v7/b/a$g.abc_activity_chooser_view_list_item : I
					  //   137: aload_3
					  //   138: iconst_0
					  //   139: invokevirtual inflate : (ILandroid/view/ViewGroup;Z)Landroid/view/View;
					  //   142: astore #4
					  //   144: aload_0
					  //   145: getfield a : Landroid/support/v7/internal/widget/ActivityChooserView;
					  //   148: invokevirtual getContext : ()Landroid/content/Context;
					  //   151: invokevirtual getPackageManager : ()Landroid/content/pm/PackageManager;
					  //   154: astore_2
					  //   155: aload #4
					  //   157: getstatic android/support/v7/b/a$e.icon : I
					  //   160: invokevirtual findViewById : (I)Landroid/view/View;
					  //   163: checkcast android/widget/ImageView
					  //   166: astore_3
					  //   167: aload_0
					  //   168: iload_1
					  //   169: invokevirtual getItem : (I)Ljava/lang/Object;
					  //   172: checkcast android/content/pm/ResolveInfo
					  //   175: astore #5
					  //   177: aload_3
					  //   178: aload #5
					  //   180: aload_2
					  //   181: invokevirtual loadIcon : (Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;
					  //   184: invokevirtual setImageDrawable : (Landroid/graphics/drawable/Drawable;)V
					  //   187: aload #4
					  //   189: getstatic android/support/v7/b/a$e.title : I
					  //   192: invokevirtual findViewById : (I)Landroid/view/View;
					  //   195: checkcast android/widget/TextView
					  //   198: aload #5
					  //   200: aload_2
					  //   201: invokevirtual loadLabel : (Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;
					  //   204: invokevirtual setText : (Ljava/lang/CharSequence;)V
					  //   207: aload_0
					  //   208: getfield d : Z
					  //   211: ifeq -> 234
					  //   214: iload_1
					  //   215: ifne -> 234
					  //   218: aload_0
					  //   219: getfield e : Z
					  //   222: ifeq -> 234
					  //   225: aload #4
					  //   227: iconst_1
					  //   228: invokestatic a : (Landroid/view/View;Z)V
					  //   231: aload #4
					  //   233: areturn
					  //   234: aload #4
					  //   236: iconst_0
					  //   237: invokestatic a : (Landroid/view/View;Z)V
					  //   240: aload #4
					  //   242: areturn }

					int getViewTypeCount()
					{
						return 3;
					}
					}

					ActivityChooserView::a::b::b(ActivityChooserView::a *outerInstance) : outerInstance(outerInstance)
					{
					}

					void ActivityChooserView::a::b::h::android::support::v4::h::a()
					{
					  if (ActivityChooserView::f(this->a) != nullptr)
					  {
						ActivityChooserView::f(this->a).onDismiss();
					  }
					}

					void ActivityChooserView::a::b::onClick(h::android::view::View *param1View)
					{
					  Intent *intent;
					  if (param1View == ActivityChooserView::c(this->a))
					  {
						this->a.b();
						ResolveInfo *resolveInfo = ActivityChooserView::a(this->a).b();
						int i = ActivityChooserView::a(this->a).d().a(resolveInfo);
						intent = ActivityChooserView::a(this->a).d().b(i);
						if (intent != nullptr)
						{
						  intent->addFlags(524288);
						  this->a.getContext().startActivity(intent);
						}
						return;
					  }
					  if (intent == ActivityChooserView::d(this->a))
					  {
						ActivityChooserView::a(this->a, false);
						ActivityChooserView::a(this->a, ActivityChooserView::e(this->a));
						return;
					  }
//JAVA TO C++ CONVERTER TODO TASK: This exception's constructor requires an argument:
//ORIGINAL LINE: throw new IllegalArgumentException();
					  throw std::invalid_argument();
					}

					void ActivityChooserView::a::b::onDismiss()
					{
					  h::android::support::v4::h::a();
					  if (this->a.a != nullptr)
					  {
						this->a.a.a(false);
					  }
					}

template<typename T1>
					void ActivityChooserView::a::b::onItemClick(h::android::widget::AdapterView<T1> *param1AdapterView, h::android::view::View *param1View, int param1Int, long long param1Long)
					{
					  switch ((static_cast<ActivityChooserView::a*>(param1AdapterView->getAdapter()))->getItemViewType(param1Int))
					  {
						default:
//JAVA TO C++ CONVERTER TODO TASK: This exception's constructor requires an argument:
//ORIGINAL LINE: throw new IllegalArgumentException();
						  throw std::invalid_argument();
						case 1:
						  ActivityChooserView::a(this->a, 2147483647);
						  return;
						case 0:
						  break;
					  }
					  this->a.b();
					  if (ActivityChooserView::b(this->a))
					  {
						if (param1Int > 0)
						{
						  ActivityChooserView::a(this->a).d().c(param1Int);
						  return;
						}
						return;
					  }
					  if (!ActivityChooserView::a(this->a).e())
					  {
						param1Int++;
					  }
					  Intent *intent = ActivityChooserView::a(this->a).d().b(param1Int);
					  if (intent != nullptr)
					  {
						intent->addFlags(524288);
						this->a.getContext().startActivity(intent);
						return;
					  }
					}

					bool ActivityChooserView::a::b::onLongClick(h::android::view::View *param1View)
					{
					  if (param1View == ActivityChooserView::c(this->a))
					  {
						if (ActivityChooserView::a(this->a).getCount() > 0)
						{
						  ActivityChooserView::a(this->a, true);
						  ActivityChooserView::a(this->a, ActivityChooserView::e(this->a));
						}
						return true;
					  }
//JAVA TO C++ CONVERTER TODO TASK: This exception's constructor requires an argument:
//ORIGINAL LINE: throw new IllegalArgumentException();
					  throw std::invalid_argument();
					}
				}
			}
		}
	}
}

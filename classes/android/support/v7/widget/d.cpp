//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "../internal/widget/o.h"
#include "../../v4/h/a.h"
#include "../../v4/h/b.h"
#include "../../v4/h/u.h"
#include "../d/a.h"
#include "../internal/widget/r.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::content::Context;
				using android::content::res::ColorStateList;
				using android::content::res::Resources;
				using android::database::DataSetObserver;
				using android::graphics::PorterDuff;
				using android::graphics::Rect;
				using android::graphics::drawable::Drawable;
				using android::os::Build;
				using k = android::support::v4::h::k;
				using l = android::support::v4::h::l;
				using o = android::support::v7::internal_Renamed::widget::o;
				using r = android::support::v7::internal_Renamed::widget::r;
				using android::util::AttributeSet;
				using android::view::MotionEvent;
				using android::view::View;
				using android::view::ViewGroup;
				using android::view::ViewTreeObserver;
				using android::widget::Adapter;
				using android::widget::AdapterView;
				using android::widget::ListAdapter;
				using android::widget::PopupWindow;
				using android::widget::Spinner;
				using android::widget::SpinnerAdapter;
				using android::widget::ThemedSpinnerAdapter;

				d::StaticConstructor::StaticConstructor()
				{
										bool bool_Renamed;
										if (outerInstance->android.os.Build.VERSION.SDK_INT >= 23)
										{
										  bool_Renamed = true;
										}
										else
										{
										  bool_Renamed = false;
										}
										a = bool_Renamed;
										if (outerInstance->android.os.Build.VERSION.SDK_INT >= 16)
										{
										  bool_Renamed = true;
										}
										else
										{
										  bool_Renamed = false;
										}
										b = bool_Renamed;
										c = std::vector<int> {16843505};
				}

d::StaticConstructor d::staticConstructor;

				d::d(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : d(paramContext, paramAttributeSet, paramInt, -1)
				{
				}

				d::d(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt1, int paramInt2) : d(paramContext, paramAttributeSet, paramInt1, paramInt2, nullptr)
				{
				}

				d::d(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt1, int paramInt2, Resources::Theme *paramTheme)
				{ // Byte code:
				  //   0: aload_0
				  //   1: aload_1
				  //   2: aload_2
				  //   3: iload_3
				  //   4: invokespecial <init> : (Landroid/content/Context;Landroid/util/AttributeSet;I)V
				  //   7: aload_0
				  //   8: new android/graphics/Rect
				  //   11: dup
				  //   12: invokespecial <init> : ()V
				  //   15: putfield l : Landroid/graphics/Rect;
				  //   18: aload_1
				  //   19: aload_2
				  //   20: getstatic android/support/v7/b/a$j.Spinner : [I
				  //   23: iload_3
				  //   24: iconst_0
				  //   25: invokestatic a : (Landroid/content/Context;Landroid/util/AttributeSet;[III)Landroid/support/v7/internal/widget/p;
				  //   28: astore #9
				  //   30: aload_0
				  //   31: aload #9
				  //   33: invokevirtual c : ()Landroid/support/v7/internal/widget/o;
				  //   36: putfield d : Landroid/support/v7/internal/widget/o;
				  //   39: aload_0
				  //   40: new android/support/v7/widget/c
				  //   43: dup
				  //   44: aload_0
				  //   45: aload_0
				  //   46: getfield d : Landroid/support/v7/internal/widget/o;
				  //   49: invokespecial <init> : (Landroid/view/View;Landroid/support/v7/internal/widget/o;)V
				  //   52: putfield e : Landroid/support/v7/widget/c;
				  //   55: aload #5
				  //   57: ifnull -> 295
				  //   60: aload_0
				  //   61: new android/support/v7/internal/view/b
				  //   64: dup
				  //   65: aload_1
				  //   66: aload #5
				  //   68: invokespecial <init> : (Landroid/content/Context;Landroid/content/res/Resources$Theme;)V
				  //   71: putfield f : Landroid/content/Context;
				  //   74: aload_0
				  //   75: getfield f : Landroid/content/Context;
				  //   78: ifnull -> 255
				  //   81: iload #4
				  //   83: istore #7
				  //   85: iload #4
				  //   87: iconst_m1
				  //   88: if_icmpne -> 157
				  //   91: getstatic android/os/Build$VERSION.SDK_INT : I
				  //   94: bipush #11
				  //   96: if_icmplt -> 404
				  //   99: aload_1
				  //   100: aload_2
				  //   101: getstatic android/support/v7/widget/d.c : [I
				  //   104: iload_3
				  //   105: iconst_0
				  //   106: invokevirtual obtainStyledAttributes : (Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;
				  //   109: astore #5
				  //   111: iload #4
				  //   113: istore #6
				  //   115: aload #5
				  //   117: astore_1
				  //   118: aload #5
				  //   120: iconst_0
				  //   121: invokevirtual hasValue : (I)Z
				  //   124: ifeq -> 139
				  //   127: aload #5
				  //   129: astore_1
				  //   130: aload #5
				  //   132: iconst_0
				  //   133: iconst_0
				  //   134: invokevirtual getInt : (II)I
				  //   137: istore #6
				  //   139: iload #6
				  //   141: istore #7
				  //   143: aload #5
				  //   145: ifnull -> 157
				  //   148: aload #5
				  //   150: invokevirtual recycle : ()V
				  //   153: iload #6
				  //   155: istore #7
				  //   157: iload #7
				  //   159: iconst_1
				  //   160: if_icmpne -> 255
				  //   163: new android/support/v7/widget/d$b
				  //   166: dup
				  //   167: aload_0
				  //   168: aload_0
				  //   169: getfield f : Landroid/content/Context;
				  //   172: aload_2
				  //   173: iload_3
				  //   174: invokespecial <init> : (Landroid/support/v7/widget/d;Landroid/content/Context;Landroid/util/AttributeSet;I)V
				  //   177: astore_1
				  //   178: aload_0
				  //   179: getfield f : Landroid/content/Context;
				  //   182: aload_2
				  //   183: getstatic android/support/v7/b/a$j.Spinner : [I
				  //   186: iload_3
				  //   187: iconst_0
				  //   188: invokestatic a : (Landroid/content/Context;Landroid/util/AttributeSet;[III)Landroid/support/v7/internal/widget/p;
				  //   191: astore #5
				  //   193: aload_0
				  //   194: aload #5
				  //   196: getstatic android/support/v7/b/a$j.Spinner_android_dropDownWidth : I
				  //   199: bipush #-2
				  //   201: invokevirtual f : (II)I
				  //   204: putfield k : I
				  //   207: aload_1
				  //   208: aload #5
				  //   210: getstatic android/support/v7/b/a$j.Spinner_android_popupBackground : I
				  //   213: invokevirtual a : (I)Landroid/graphics/drawable/Drawable;
				  //   216: invokevirtual a : (Landroid/graphics/drawable/Drawable;)V
				  //   219: aload_1
				  //   220: aload #9
				  //   222: getstatic android/support/v7/b/a$j.Spinner_android_prompt : I
				  //   225: invokevirtual c : (I)Ljava/lang/String;
				  //   228: invokevirtual a : (Ljava/lang/CharSequence;)V
				  //   231: aload #5
				  //   233: invokevirtual b : ()V
				  //   236: aload_0
				  //   237: aload_1
				  //   238: putfield j : Landroid/support/v7/widget/d$b;
				  //   241: aload_0
				  //   242: new android/support/v7/widget/d$1
				  //   245: dup
				  //   246: aload_0
				  //   247: aload_0
				  //   248: aload_1
				  //   249: invokespecial <init> : (Landroid/support/v7/widget/d;Landroid/view/View;Landroid/support/v7/widget/d$b;)V
				  //   252: putfield g : Landroid/support/v7/widget/h$b;
				  //   255: aload #9
				  //   257: invokevirtual b : ()V
				  //   260: aload_0
				  //   261: iconst_1
				  //   262: putfield i : Z
				  //   265: aload_0
				  //   266: getfield h : Landroid/widget/SpinnerAdapter;
				  //   269: ifnull -> 285
				  //   272: aload_0
				  //   273: aload_0
				  //   274: getfield h : Landroid/widget/SpinnerAdapter;
				  //   277: invokevirtual setAdapter : (Landroid/widget/SpinnerAdapter;)V
				  //   280: aload_0
				  //   281: aconst_null
				  //   282: putfield h : Landroid/widget/SpinnerAdapter;
				  //   285: aload_0
				  //   286: getfield e : Landroid/support/v7/widget/c;
				  //   289: aload_2
				  //   290: iload_3
				  //   291: invokevirtual a : (Landroid/util/AttributeSet;I)V
				  //   294: return
				  //   295: aload #9
				  //   297: getstatic android/support/v7/b/a$j.Spinner_popupTheme : I
				  //   300: iconst_0
				  //   301: invokevirtual g : (II)I
				  //   304: istore #6
				  //   306: iload #6
				  //   308: ifeq -> 328
				  //   311: aload_0
				  //   312: new android/support/v7/internal/view/b
				  //   315: dup
				  //   316: aload_1
				  //   317: iload #6
				  //   319: invokespecial <init> : (Landroid/content/Context;I)V
				  //   322: putfield f : Landroid/content/Context;
				  //   325: goto -> 74
				  //   328: getstatic android/support/v7/widget/d.a : Z
				  //   331: ifne -> 346
				  //   334: aload_1
				  //   335: astore #5
				  //   337: aload_0
				  //   338: aload #5
				  //   340: putfield f : Landroid/content/Context;
				  //   343: goto -> 74
				  //   346: aconst_null
				  //   347: astore #5
				  //   349: goto -> 337
				  //   352: astore #8
				  //   354: aconst_null
				  //   355: astore #5
				  //   357: aload #5
				  //   359: astore_1
				  //   360: ldc 'AppCompatSpinner'
				  //   362: ldc 'Could not read android:spinnerMode'
				  //   364: aload #8
				  //   366: invokestatic i : (Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
				  //   369: pop
				  //   370: iload #4
				  //   372: istore #7
				  //   374: aload #5
				  //   376: ifnull -> 157
				  //   379: aload #5
				  //   381: invokevirtual recycle : ()V
				  //   384: iload #4
				  //   386: istore #7
				  //   388: goto -> 157
				  //   391: astore_2
				  //   392: aconst_null
				  //   393: astore_1
				  //   394: aload_1
				  //   395: ifnull -> 402
				  //   398: aload_1
				  //   399: invokevirtual recycle : ()V
				  //   402: aload_2
				  //   403: athrow
				  //   404: iconst_1
				  //   405: istore #7
				  //   407: goto -> 157
				  //   410: astore_2
				  //   411: goto -> 394
				  //   414: astore #8
				  //   416: goto -> 357
				  // Exception table:
				  //   from	to	target	type
				  //   99	111	352	java/lang/Exception
				  //   99	111	391	finally
				  //   118	127	414	java/lang/Exception
				  //   118	127	410	finally
				  //   130	139	414	java/lang/Exception
				  //   130	139	410	finally
				  //   360	370	410	finally }

			private:
				int a(android.widget::SpinnerAdapter paramSpinnerAdapter, android.graphics::drawable::Drawable paramDrawable)
				{
				  if (paramSpinnerAdapter == nullptr)
				  {
					return 0;
				  }
				  int i2 = android.view::View::MeasureSpec::makeMeasureSpec(getMeasuredWidth(), 0);
				  int i3 = android.view::View::MeasureSpec::makeMeasureSpec(getMeasuredHeight(), 0);
				  int m = std::max(0, getSelectedItemPosition());
				  int i4 = std::min(paramSpinnerAdapter::getCount(), m + 15);
				  int n = std::max(0, m - 15 - i4 - m);
				  View *view = nullptr;
				  int i1 = 0;
				  m = 0;
				  while (n < i4)
				  {
					int i5 = paramSpinnerAdapter::getItemViewType(n);
					if (i5 != m)
					{
					  view = nullptr;
					  m = i5;
					}
					view = paramSpinnerAdapter::getView(n, view, this);
					if (view->getLayoutParams() == nullptr)
					{
					  ViewGroup::LayoutParams tempVar(-2, -2);
					  view->setLayoutParams(&tempVar);
					}
					view->measure(i2, i3);
					i1 = std::max(i1, view->getMeasuredWidth());
					n++;
				  }
				  if (paramDrawable != nullptr)
				  {
					paramDrawable::getPadding(this->l);
					return this->l.left + this->l.right + i1;
				  }
				  return i1;
				}

			protected:
				void drawableStateChanged()
				{
				  Spinner::drawableStateChanged();
				  if (this->e != nullptr)
				  {
					this->e->c_Renamed();
				  }
				}

			public:
				int getDropDownHorizontalOffset()
				{
					return (this->j != nullptr) ? this->j->f() : (b ? Spinner::getDropDownHorizontalOffset() : 0);
				}

				int getDropDownVerticalOffset()
				{
					return (this->j != nullptr) ? this->j->g() : (b ? Spinner::getDropDownVerticalOffset() : 0);
				}

				int getDropDownWidth()
				{
					return (this->j != nullptr) ? this->k : (b ? Spinner::getDropDownWidth() : 0);
				}

				android.graphics::drawable::Drawable getPopupBackground()
				{
					return (this->j != nullptr) ? this->j->d() : (b ? Spinner::getPopupBackground() : nullptr);
				}

				android.content::Context getPopupContext()
				{
					return (this->j != nullptr) ? this->f : (a ? Spinner::getPopupContext() : nullptr);
				}

				CharSequence getPrompt()
				{
					return (this->j != nullptr) ? this->j->a() : Spinner::getPrompt();
				}

				android.content::res::ColorStateList getSupportBackgroundTintList()
				{
					return (this->e != nullptr) ? this->e->a() : nullptr;
				}

				android.graphics::PorterDuff::Mode getSupportBackgroundTintMode()
				{
					return (this->e != nullptr) ? this->e->b() : nullptr;
				}

			protected:
				void onDetachedFromWindow()
				{
				  Spinner::onDetachedFromWindow();
				  if (this->j != nullptr && this->j->k())
				  {
					this->j->i();
				  }
				}

				void onMeasure(int paramInt1, int paramInt2)
				{
				  Spinner::onMeasure(paramInt1, paramInt2);
				  if (this->j != nullptr && android.view::View::MeasureSpec::getMode(paramInt1) == std::numeric_limits<int>::min())
				  {
					setMeasuredDimension(std::min(std::max(getMeasuredWidth(), a(getAdapter(), getBackground())), android.view::View::MeasureSpec::getSize(paramInt1)), getMeasuredHeight());
				  }
				}

			public:
				bool onTouchEvent(android.view::MotionEvent paramMotionEvent)
				{
					return (this->g != nullptr && this->g->onTouch(this, paramMotionEvent)) ? true : Spinner::onTouchEvent(paramMotionEvent);
				}

				bool performClick()
				{
				  if (this->j != nullptr && !this->j->k())
				  {
					this->j->c();
					return true;
				  }
				  return Spinner::performClick();
				}

				void setAdapter(android.widget::SpinnerAdapter paramSpinnerAdapter)
				{
				  if (!this->i)
				  {
					this->h = paramSpinnerAdapter;
					return;
				  }
				  Spinner::setAdapter(paramSpinnerAdapter);
				  if (this->j != nullptr)
				  {
					Context *context;
					if (this->f == nullptr)
					{
					  context = getContext();
					}
					else
					{
					  context = this->f;
					}
					a tempVar2(paramSpinnerAdapter, context->getTheme());
					this->j->a(&tempVar2);
					return;
				  }
				}

				void setBackgroundDrawable(android.graphics::drawable::Drawable paramDrawable)
				{
				  Spinner::setBackgroundDrawable(paramDrawable);
				  if (this->e != nullptr)
				  {
					this->e->a(paramDrawable);
				  }
				}

				void setBackgroundResource(int paramInt)
				{
				  Spinner::setBackgroundResource(paramInt);
				  if (this->e != nullptr)
				  {
					this->e->a(paramInt);
				  }
				}

				void setDropDownHorizontalOffset(int paramInt)
				{
				  if (this->j != nullptr)
				  {
					this->j->b(paramInt);
					return;
				  }
				  if (b)
				  {
					Spinner::setDropDownHorizontalOffset(paramInt);
					return;
				  }
				}

				void setDropDownVerticalOffset(int paramInt)
				{
				  if (this->j != nullptr)
				  {
					this->j->c(paramInt);
					return;
				  }
				  if (b)
				  {
					Spinner::setDropDownVerticalOffset(paramInt);
					return;
				  }
				}

				void setDropDownWidth(int paramInt)
				{
				  if (this->j != nullptr)
				  {
					this->k = paramInt;
					return;
				  }
				  if (b)
				  {
					Spinner::setDropDownWidth(paramInt);
					return;
				  }
				}

				void setPopupBackgroundDrawable(android.graphics::drawable::Drawable paramDrawable)
				{
				  if (this->j != nullptr)
				  {
					this->j->a(paramDrawable);
					return;
				  }
				  if (b)
				  {
					Spinner::setPopupBackgroundDrawable(paramDrawable);
					return;
				  }
				}

				void setPopupBackgroundResource(int paramInt)
				{
					setPopupBackgroundDrawable(getPopupContext().getDrawable(paramInt));
				}

				void setPrompt(CharSequence paramCharSequence)
				{
				  if (this->j != nullptr)
				  {
					this->j->a(paramCharSequence);
					return;
				  }
				  Spinner::setPrompt(paramCharSequence);
				}

				void setSupportBackgroundTintList(android.content::res::ColorStateList paramColorStateList)
				{
				  if (this->e != nullptr)
				  {
					this->e->a(paramColorStateList);
				  }
				}

				void setSupportBackgroundTintMode(android.graphics::PorterDuff::Mode paramMode)
				{
				  if (this->e != nullptr)
				  {
					this->e->a(paramMode);
				  }
				}

			private:
				static class a implements android.widget::ListAdapter, android.widget : public :SpinnerAdapter
				{
				  android.widget::SpinnerAdapter a;

				  android.widget::ListAdapter b;

			  public:
				  a(android.widget::SpinnerAdapter param1SpinnerAdapter, android.content::res::Resources::Theme param1Theme)
				  {
					this->a = param1SpinnerAdapter;
					if (dynamic_cast<ListAdapter*>(param1SpinnerAdapter) != nullptr)
					{
					  this->b = static_cast<ListAdapter*>(param1SpinnerAdapter);
					}
					if (param1Theme != nullptr)
					{
					  if (d_Renamed->a() && dynamic_cast<ThemedSpinnerAdapter*>(param1SpinnerAdapter) != nullptr)
					  {
						themedSpinnerAdapter = static_cast<ThemedSpinnerAdapter*>(param1SpinnerAdapter);
						if (themedSpinnerAdapter::getDropDownViewTheme() != param1Theme)
						{
						  themedSpinnerAdapter::setDropDownViewTheme(param1Theme);
						}
						return;
					  }
					}
					else
					{
					  return;
					}
					if (dynamic_cast<j*>(themedSpinnerAdapter) != nullptr)
					{
					  j *j = static_cast<j*>(themedSpinnerAdapter);
					  if (j->a() == nullptr)
					  {
						j->a(param1Theme);
						return;
					  }
					}
				  }

				  bool areAllItemsEnabled()
				  {
					ListAdapter *listAdapter = this->b;
					return (listAdapter != nullptr) ? listAdapter->areAllItemsEnabled() : 1;
				  }

				  int getCount()
				  {
					  return (this->a == nullptr) ? 0 : this->a.getCount();
				  }

				  android.view::View getDropDownView(int param1Int, android.view::View param1View, android.view::ViewGroup param1ViewGroup)
				  {
					  return (this->a == nullptr) ? nullptr : this->a.getDropDownView(param1Int, param1View, param1ViewGroup);
				  }

				  Object getItem(int param1Int)
				  {
					  return (this->a == nullptr) ? nullptr : this->a.getItem(param1Int);
				  }

				  long long getItemId(int param1Int)
				  {
					  return (this->a == nullptr) ? -1LL : this->a.getItemId(param1Int);
				  }

				  int getItemViewType(int param1Int)
				  {
					  return 0;
				  }

				  android.view::View getView(int param1Int, android.view::View param1View, android.view::ViewGroup param1ViewGroup)
				  {
					  return getDropDownView(param1Int, param1View, param1ViewGroup);
				  }

				  int getViewTypeCount()
				  {
					  return 1;
				  }

				  bool hasStableIds()
				  {
					  return (this->a != nullptr && this->a.hasStableIds());
				  }

				  bool isEmpty()
				  {
					  return (getCount() == 0);
				  }

				  bool isEnabled(int param1Int)
				  {
					ListAdapter *listAdapter = this->b;
					return (listAdapter != nullptr) ? listAdapter->isEnabled(param1Int) : 1;
				  }

				  void registerDataSetObserver(android.database::DataSetObserver param1DataSetObserver)
				  {
					if (this->a != nullptr)
					{
					  this->a.registerDataSetObserver(param1DataSetObserver);
					}
				  }

				  void unregisterDataSetObserver(android.database::DataSetObserver param1DataSetObserver)
				  {
					if (this->a != nullptr)
					{
					  this->a.unregisterDataSetObserver(param1DataSetObserver);
					}
				  }
				}

			private:
				class b extends h
				{
				  CharSequence c;

				  android.widget::ListAdapter d_Renamed;

				  final android.graphics::Rect e = new android.graphics::Rect();

			  public:
				  b(d this$0, android.content::Context param1Context, android.util::AttributeSet param1AttributeSet, int param1Int)
				  {
					Spinner(param1Context, param1AttributeSet, param1Int);
					a(this$0);
					a(true);
					a(0);
					OnItemClickListenerAnonymousInnerClass tempVar3(this, this$0);
					a(&tempVar3);
				  }

			  private:
				  bool b(android.view::View param1View)
				  {
					  return (android.support::v4::h::l::i(param1View) && param1View::getGlobalVisibleRect(this->e));
				  }

			  public:
				  CharSequence a()
				  {
					  return this->c;
				  }

				  void a(android.widget::ListAdapter param1ListAdapter)
				  {
					Spinner::a(param1ListAdapter);
					this->d_Renamed = param1ListAdapter;
				  }

				  void a(CharSequence param1CharSequence)
				  {
					  this->c = param1CharSequence;
				  }

				  void b()
				  {
					int i;
					Drawable *drawable = d();
					if (drawable != nullptr)
					{
					  drawable->getPadding(d_Renamed->b(this->a));
					  if (android.support::v7::internal_Renamed::widget::r::a(this->a))
					  {
						i = (d_Renamed->b(this->a))->right;
					  }
					  else
					  {
						i = -(d_Renamed->b(this->a))->left;
					  }
					}
					else
					{
					  Rect *rect = d_Renamed->b(this->a);
					  (d_Renamed->b(this->a))->right = 0;
					  rect->left = 0;
					  i = 0;
					}
					int j = this->a.getPaddingLeft();
					int android.support::v4::h::k = this->a.getPaddingRight();
					int m = this->a.getWidth();
					if (d_Renamed->c(this->a) == -2)
					{
					  int n = d_Renamed->a(this->a, static_cast<SpinnerAdapter*>(this->d_Renamed), d());
					  int i1 = (this->a.getContext().getResources().getDisplayMetrics()).widthPixels - (d_Renamed->b(this->a))->left - (d_Renamed->b(this->a))->right;
					  if (n > i1)
					  {
						n = i1;
					  }
					  f(std::max(n, m - j - android.support::v4::h::k));
					}
					else if (d_Renamed->c(this->a) == -1)
					{
					  f(m - j - android.support::v4::h::k);
					}
					else
					{
					  f(d_Renamed->c(this->a));
					}
					if (android.support::v7::internal_Renamed::widget::r::a(this->a))
					{
					  i = m - android.support::v4::h::k - h() + i;
					}
					else
					{
					  i += j;
					}
					b(i);
				  }

				  void c()
				  {
					bool bool_Renamed = android.support::v4::h::k();
					b();
					g(2);
					Spinner::c();
					m().setChoiceMode(1);
					h(this->a.getSelectedItemPosition());
					if (!bool_Renamed)
					{
					  ViewTreeObserver *viewTreeObserver = this->a.getViewTreeObserver();
					  if (viewTreeObserver != nullptr)
					  {
						ViewTreeObserver::OnGlobalLayoutListener *onGlobalLayoutListener = new OnGlobalLayoutListenerAnonymousInnerClass(this);
						viewTreeObserver->addOnGlobalLayoutListener(onGlobalLayoutListener);
						OnDismissListenerAnonymousInnerClass tempVar4(this, onGlobalLayoutListener, viewTreeObserver);
						a(&tempVar4);
						return;
					  }
					}
				  }
				}

//JAVA TO C++ CONVERTER TODO TASK: Local classes are not converted by Java to C++ Converter:
//				class nullptr implements android.widget.AdapterView.OnItemClickListener
								//  {
								//	nullptr(d this$0, d param1d)
								//	{
								//	}
								//
								//	public void onItemClick(AdapterView<?> param1AdapterView, View param1View, int param1Int, long param1Long)
								//	{
								//	  this.b.a.setSelection(param1Int);
								//	  if (this.b.a.getOnItemClickListener() != nullptr)
								//		this.b.a.performItemClick(param1View, param1Int, d.b.a(this.b).getItemId(param1Int));
								//	  this.b.i();
								//	}
								//  }

//JAVA TO C++ CONVERTER TODO TASK: Local classes are not converted by Java to C++ Converter:
//				class nullptr implements android.view.ViewTreeObserver.OnGlobalLayoutListener
								//  {
								//	nullptr(d this$0)
								//	{
								//	}
								//
								//	public void onGlobalLayout()
								//	{
								//	  if (!d.b.a(this.a, this.a.a))
								//	  {
								//		this.a.i();
								//		return;
								//	  }
								//	  this.a.b();
								//	  d.b.b(this.a);
								//	}
								//  }

//JAVA TO C++ CONVERTER TODO TASK: Local classes are not converted by Java to C++ Converter:
//				class nullptr implements android.widget.PopupWindow.OnDismissListener
								//  {
								//	nullptr(d this$0, ViewTreeObserver.OnGlobalLayoutListener param1OnGlobalLayoutListener)
								//	{
								//	}
								//
								//	public void onDismiss()
								//	{
								//	  ViewTreeObserver viewTreeObserver = this.b.a.getViewTreeObserver();
								//	  if (viewTreeObserver != nullptr)
								//		viewTreeObserver.removeGlobalOnLayoutListener(this.a);
								//	}
								//  }
				}

				d::OnItemClickListenerAnonymousInnerClass::OnItemClickListenerAnonymousInnerClass(android.support::v4::h::l::d *outerInstance, UnknownType *this$0) : android.widget::AdapterView::OnItemClickListener(outerInstance, this$0)
				{
					this->outerInstance = outerInstance;
				}

template<typename T1>
				void d::OnItemClickListenerAnonymousInnerClass::onItemClick(AdapterView<T1> *param2AdapterView, View *param2View, int param2Int, long long param2Long)
				{
				  this->b.a.setSelection(param2Int);
				  if (this->b.a.getOnItemClickListener() != nullptr)
				  {
					this->b.a.performItemClick(param2View, param2Int, outerInstance->android.support.v4.h.l.d.b.a(this->b).getItemId(param2Int));
				  }
				  this->b.i();
				}

				d::OnGlobalLayoutListenerAnonymousInnerClass::OnGlobalLayoutListenerAnonymousInnerClass(android.support::v4::h::l::d *outerInstance) : android.view::ViewTreeObserver::OnGlobalLayoutListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void d::OnGlobalLayoutListenerAnonymousInnerClass::onGlobalLayout()
				{
				  if (!outerInstance->android.support.v4.h.l.d.b.a(this->a, this->a.a))
				  {
					this->a.i();
					return;
				  }
				  this->a.b();
				  outerInstance->android.support.v4.h.l.d.b.b(this->a);
				}

				d::OnDismissListenerAnonymousInnerClass::OnDismissListenerAnonymousInnerClass(android.support::v4::h::l::d *outerInstance, ViewTreeObserver::OnGlobalLayoutListener *onGlobalLayoutListener, ViewTreeObserver *viewTreeObserver) : android.widget::PopupWindow::OnDismissListener(outerInstance, onGlobalLayoutListener)
				{
					this->outerInstance = outerInstance;
					this->viewTreeObserver = viewTreeObserver;
				}

				void d::OnDismissListenerAnonymousInnerClass::onDismiss()
				{
				  ViewTreeObserver *viewTreeObserver = this->b.a.getViewTreeObserver();
				  if (viewTreeObserver != nullptr)
				  {
					viewTreeObserver->removeGlobalOnLayoutListener(this->a);
				  }
				}
			}
		}
	}
}

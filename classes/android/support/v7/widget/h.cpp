//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "h.h"
#include "../b/a.h"
#include "../../v4/widget/e.h"
#include "../../v4/f/a.h"
#include "../../v4/f/d.h"
#include "../../v4/h/i.h"
#include "a.h"
#include "../../v4/h/u.h"
#include "d.h"
#include "e.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::content::Context;
				using android::content::res::TypedArray;
				using android::database::DataSetObserver;
				using android::graphics::Rect;
				using android::graphics::drawable::Drawable;
				using android::os::Build;
				using android::os::Handler;
				using android::os::SystemClock;
				using d = android::support::v4::0.0f::d;
				using i = android::support::v4::h::i;
				using u = android::support::v4::h::u;
				using d = android::support::v4::widget::d;
				using e = android::support::v4::widget::e;
				using a = android::support::v7::b::a;
				using e = android::support::v7::internal_Renamed::widget::e;
				using h = android::support::v7::internal_Renamed::widget::h;
				using android::util::AttributeSet;
				using android::util::Log;
				using android::view::MotionEvent;
				using android::view::View;
				using android::view::ViewConfiguration;
				using android::view::ViewGroup;
				using android::view::ViewParent;
				using android::widget::AbsListView;
				using android::widget::AdapterView;
				using android::widget::ListAdapter;
				using android::widget::ListView;
				using android::widget::PopupWindow;
Method *h::android;

				h::StaticConstructor::StaticConstructor()
				{
										try
										{
										  outerInstance->android.support.v7.b->a = outerInstance->android::widget::PopupWindow::typeid->getDeclaredMethod(L"setClipToScreenEnabled", std::vector<std::type_info*> {bool::typeid});
										  return;
										}
										catch (const NoSuchMethodException &noSuchMethodException)
										{
										  outerInstance->android.util.Log.i(L"ListPopupWindow", L"Could not find method setClipToScreenEnabled() on PopupWindow. Oh well.");
										  return;
										}
				}

android::support::v7::internal_Renamed::widget::h::StaticConstructor h::staticConstructor;

				internal *h::android->support.v7.internal_Renamed.widget.h(Context *paramContext)
				{
					this(paramContext, nullptr, android->support.v7.b.a::a.listPopupWindowStyle);
				}

				internal *h::android->support.v7.internal_Renamed.widget.h(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt)
				{
					this(paramContext, paramAttributeSet, paramInt, 0);
				}

				internal *h::android->support.v7.internal_Renamed.widget.h(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt1, int paramInt2)
				{
				  this->c = paramContext;
				  TypedArray *typedArray = paramContext->obtainStyledAttributes(paramAttributeSet, android->support.v7.b.a::j.ListPopupWindow, paramInt1, paramInt2);
				  this->i = typedArray->getDimensionPixelOffset(android->support.v7.b.a::j.ListPopupWindow_android_dropDownHorizontalOffset, 0);
				  this->j = typedArray->getDimensionPixelOffset(android->support.v7.b.a::j.ListPopupWindow_android_dropDownVerticalOffset, 0);
				  if (this->j != 0)
				  {
					this->k = true;
				  }
				  typedArray->recycle();
				  this->d = new android->support.v4.widget.e(paramContext, paramAttributeSet, paramInt1);
				  this->d.setInputMethodMode(1);
				  this->D = android->support.v4.0f.d::a((this->c->getResources().getConfiguration()).locale);
				}

				void h::android->support.v7.b.a()
				{
				  if (this->o != nullptr)
				  {
					ViewParent *viewParent = this->o->getParent();
					if (dynamic_cast<ViewGroup*>(viewParent) != nullptr)
					{
					  (static_cast<ViewGroup*>(viewParent))->removeView(this->o);
					}
				  }
				}

				int h::b()
				{ // Byte code:
				  //   0: aload_0
				  //   1: getfield f : Landroid/support/v7/widget/h$a;
				  //   4: ifnonnull -> 465
				  //   7: aload_0
				  //   8: getfield c : Landroid/content/Context;
				  //   11: astore #7
				  //   13: aload_0
				  //   14: new android/support/v7/widget/h$2
				  //   17: dup
				  //   18: aload_0
				  //   19: invokespecial <init> : (Landroid/support/v7/widget/h;)V
				  //   22: putfield z : Ljava/lang/Runnable;
				  //   25: aload_0
				  //   26: getfield C : Z
				  //   29: ifne -> 421
				  //   32: iconst_1
				  //   33: istore #5
				  //   35: aload_0
				  //   36: new android/support/v7/widget/h$a
				  //   39: dup
				  //   40: aload #7
				  //   42: iload #5
				  //   44: invokespecial <init> : (Landroid/content/Context;Z)V
				  //   47: putfield f : Landroid/support/v7/widget/h$a;
				  //   50: aload_0
				  //   51: getfield s : Landroid/graphics/drawable/Drawable;
				  //   54: ifnull -> 68
				  //   57: aload_0
				  //   58: getfield f : Landroid/support/v7/widget/h$a;
				  //   61: aload_0
				  //   62: getfield s : Landroid/graphics/drawable/Drawable;
				  //   65: invokevirtual setSelector : (Landroid/graphics/drawable/Drawable;)V
				  //   68: aload_0
				  //   69: getfield f : Landroid/support/v7/widget/h$a;
				  //   72: aload_0
				  //   73: getfield e : Landroid/widget/ListAdapter;
				  //   76: invokevirtual setAdapter : (Landroid/widget/ListAdapter;)V
				  //   79: aload_0
				  //   80: getfield f : Landroid/support/v7/widget/h$a;
				  //   83: aload_0
				  //   84: getfield t : Landroid/widget/AdapterView$OnItemClickListener;
				  //   87: invokevirtual setOnItemClickListener : (Landroid/widget/AdapterView$OnItemClickListener;)V
				  //   90: aload_0
				  //   91: getfield f : Landroid/support/v7/widget/h$a;
				  //   94: iconst_1
				  //   95: invokevirtual setFocusable : (Z)V
				  //   98: aload_0
				  //   99: getfield f : Landroid/support/v7/widget/h$a;
				  //   102: iconst_1
				  //   103: invokevirtual setFocusableInTouchMode : (Z)V
				  //   106: aload_0
				  //   107: getfield f : Landroid/support/v7/widget/h$a;
				  //   110: new android/support/v7/widget/h$3
				  //   113: dup
				  //   114: aload_0
				  //   115: invokespecial <init> : (Landroid/support/v7/widget/h;)V
				  //   118: invokevirtual setOnItemSelectedListener : (Landroid/widget/AdapterView$OnItemSelectedListener;)V
				  //   121: aload_0
				  //   122: getfield f : Landroid/support/v7/widget/h$a;
				  //   125: aload_0
				  //   126: getfield x : Landroid/support/v7/widget/h$e;
				  //   129: invokevirtual setOnScrollListener : (Landroid/widget/AbsListView$OnScrollListener;)V
				  //   132: aload_0
				  //   133: getfield u : Landroid/widget/AdapterView$OnItemSelectedListener;
				  //   136: ifnull -> 150
				  //   139: aload_0
				  //   140: getfield f : Landroid/support/v7/widget/h$a;
				  //   143: aload_0
				  //   144: getfield u : Landroid/widget/AdapterView$OnItemSelectedListener;
				  //   147: invokevirtual setOnItemSelectedListener : (Landroid/widget/AdapterView$OnItemSelectedListener;)V
				  //   150: aload_0
				  //   151: getfield f : Landroid/support/v7/widget/h$a;
				  //   154: astore #6
				  //   156: aload_0
				  //   157: getfield o : Landroid/view/View;
				  //   160: astore #8
				  //   162: aload #8
				  //   164: ifnull -> 690
				  //   167: new android/widget/LinearLayout
				  //   170: dup
				  //   171: aload #7
				  //   173: invokespecial <init> : (Landroid/content/Context;)V
				  //   176: astore #7
				  //   178: aload #7
				  //   180: iconst_1
				  //   181: invokevirtual setOrientation : (I)V
				  //   184: new android/widget/LinearLayout$LayoutParams
				  //   187: dup
				  //   188: iconst_m1
				  //   189: iconst_0
				  //   190: fconst_1
				  //   191: invokespecial <init> : (IIF)V
				  //   194: astore #9
				  //   196: aload_0
				  //   197: getfield p : I
				  //   200: tableswitch default -> 224, 0 -> 446, 1 -> 427
				  //   224: ldc 'ListPopupWindow'
				  //   226: new java/lang/StringBuilder
				  //   229: dup
				  //   230: invokespecial <init> : ()V
				  //   233: ldc_w 'Invalid hint position '
				  //   236: invokevirtual append : (Ljava/lang/String;)Ljava/lang/StringBuilder;
				  //   239: aload_0
				  //   240: getfield p : I
				  //   243: invokevirtual append : (I)Ljava/lang/StringBuilder;
				  //   246: invokevirtual toString : ()Ljava/lang/String;
				  //   249: invokestatic e : (Ljava/lang/String;Ljava/lang/String;)I
				  //   252: pop
				  //   253: aload #8
				  //   255: aload_0
				  //   256: getfield h : I
				  //   259: ldc_w -2147483648
				  //   262: invokestatic makeMeasureSpec : (II)I
				  //   265: iconst_0
				  //   266: invokevirtual measure : (II)V
				  //   269: aload #8
				  //   271: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   274: checkcast android/widget/LinearLayout$LayoutParams
				  //   277: astore #6
				  //   279: aload #8
				  //   281: invokevirtual getMeasuredHeight : ()I
				  //   284: istore_1
				  //   285: aload #6
				  //   287: getfield topMargin : I
				  //   290: istore_2
				  //   291: aload #6
				  //   293: getfield bottomMargin : I
				  //   296: iload_1
				  //   297: iload_2
				  //   298: iadd
				  //   299: iadd
				  //   300: istore_1
				  //   301: aload #7
				  //   303: astore #6
				  //   305: aload_0
				  //   306: getfield d : Landroid/widget/PopupWindow;
				  //   309: aload #6
				  //   311: invokevirtual setContentView : (Landroid/view/View;)V
				  //   314: aload_0
				  //   315: getfield d : Landroid/widget/PopupWindow;
				  //   318: invokevirtual getBackground : ()Landroid/graphics/drawable/Drawable;
				  //   321: astore #6
				  //   323: aload #6
				  //   325: ifnull -> 523
				  //   328: aload #6
				  //   330: aload_0
				  //   331: getfield B : Landroid/graphics/Rect;
				  //   334: invokevirtual getPadding : (Landroid/graphics/Rect;)Z
				  //   337: pop
				  //   338: aload_0
				  //   339: getfield B : Landroid/graphics/Rect;
				  //   342: getfield top : I
				  //   345: aload_0
				  //   346: getfield B : Landroid/graphics/Rect;
				  //   349: getfield bottom : I
				  //   352: iadd
				  //   353: istore_2
				  //   354: aload_0
				  //   355: getfield k : Z
				  //   358: ifne -> 682
				  //   361: aload_0
				  //   362: aload_0
				  //   363: getfield B : Landroid/graphics/Rect;
				  //   366: getfield top : I
				  //   369: ineg
				  //   370: putfield j : I
				  //   373: aload_0
				  //   374: getfield d : Landroid/widget/PopupWindow;
				  //   377: invokevirtual getInputMethodMode : ()I
				  //   380: iconst_2
				  //   381: if_icmpne -> 384
				  //   384: aload_0
				  //   385: getfield d : Landroid/widget/PopupWindow;
				  //   388: aload_0
				  //   389: invokevirtual e : ()Landroid/view/View;
				  //   392: aload_0
				  //   393: getfield j : I
				  //   396: invokevirtual getMaxAvailableHeight : (Landroid/view/View;I)I
				  //   399: istore #4
				  //   401: aload_0
				  //   402: getfield m : Z
				  //   405: ifne -> 416
				  //   408: aload_0
				  //   409: getfield g : I
				  //   412: iconst_m1
				  //   413: if_icmpne -> 535
				  //   416: iload #4
				  //   418: iload_2
				  //   419: iadd
				  //   420: ireturn
				  //   421: iconst_0
				  //   422: istore #5
				  //   424: goto -> 35
				  //   427: aload #7
				  //   429: aload #6
				  //   431: aload #9
				  //   433: invokevirtual addView : (Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
				  //   436: aload #7
				  //   438: aload #8
				  //   440: invokevirtual addView : (Landroid/view/View;)V
				  //   443: goto -> 253
				  //   446: aload #7
				  //   448: aload #8
				  //   450: invokevirtual addView : (Landroid/view/View;)V
				  //   453: aload #7
				  //   455: aload #6
				  //   457: aload #9
				  //   459: invokevirtual addView : (Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
				  //   462: goto -> 253
				  //   465: aload_0
				  //   466: getfield d : Landroid/widget/PopupWindow;
				  //   469: invokevirtual getContentView : ()Landroid/view/View;
				  //   472: checkcast android/view/ViewGroup
				  //   475: astore #6
				  //   477: aload_0
				  //   478: getfield o : Landroid/view/View;
				  //   481: astore #6
				  //   483: aload #6
				  //   485: ifnull -> 685
				  //   488: aload #6
				  //   490: invokevirtual getLayoutParams : ()Landroid/view/ViewGroup$LayoutParams;
				  //   493: checkcast android/widget/LinearLayout$LayoutParams
				  //   496: astore #7
				  //   498: aload #6
				  //   500: invokevirtual getMeasuredHeight : ()I
				  //   503: istore_1
				  //   504: aload #7
				  //   506: getfield topMargin : I
				  //   509: istore_2
				  //   510: aload #7
				  //   512: getfield bottomMargin : I
				  //   515: iload_1
				  //   516: iload_2
				  //   517: iadd
				  //   518: iadd
				  //   519: istore_1
				  //   520: goto -> 314
				  //   523: aload_0
				  //   524: getfield B : Landroid/graphics/Rect;
				  //   527: invokevirtual setEmpty : ()V
				  //   530: iconst_0
				  //   531: istore_2
				  //   532: goto -> 373
				  //   535: aload_0
				  //   536: getfield h : I
				  //   539: tableswitch default -> 560, -2 -> 604, -1 -> 643
				  //   560: aload_0
				  //   561: getfield h : I
				  //   564: ldc_w 1073741824
				  //   567: invokestatic makeMeasureSpec : (II)I
				  //   570: istore_3
				  //   571: aload_0
				  //   572: getfield f : Landroid/support/v7/widget/h$a;
				  //   575: iload_3
				  //   576: iconst_0
				  //   577: iconst_m1
				  //   578: iload #4
				  //   580: iload_1
				  //   581: isub
				  //   582: iconst_m1
				  //   583: invokevirtual a : (IIIII)I
				  //   586: istore #4
				  //   588: iload_1
				  //   589: istore_3
				  //   590: iload #4
				  //   592: ifle -> 599
				  //   595: iload_1
				  //   596: iload_2
				  //   597: iadd
				  //   598: istore_3
				  //   599: iload #4
				  //   601: iload_3
				  //   602: iadd
				  //   603: ireturn
				  //   604: aload_0
				  //   605: getfield c : Landroid/content/Context;
				  //   608: invokevirtual getResources : ()Landroid/content/res/Resources;
				  //   611: invokevirtual getDisplayMetrics : ()Landroid/util/DisplayMetrics;
				  //   614: getfield widthPixels : I
				  //   617: aload_0
				  //   618: getfield B : Landroid/graphics/Rect;
				  //   621: getfield left : I
				  //   624: aload_0
				  //   625: getfield B : Landroid/graphics/Rect;
				  //   628: getfield right : I
				  //   631: iadd
				  //   632: isub
				  //   633: ldc_w -2147483648
				  //   636: invokestatic makeMeasureSpec : (II)I
				  //   639: istore_3
				  //   640: goto -> 571
				  //   643: aload_0
				  //   644: getfield c : Landroid/content/Context;
				  //   647: invokevirtual getResources : ()Landroid/content/res/Resources;
				  //   650: invokevirtual getDisplayMetrics : ()Landroid/util/DisplayMetrics;
				  //   653: getfield widthPixels : I
				  //   656: aload_0
				  //   657: getfield B : Landroid/graphics/Rect;
				  //   660: getfield left : I
				  //   663: aload_0
				  //   664: getfield B : Landroid/graphics/Rect;
				  //   667: getfield right : I
				  //   670: iadd
				  //   671: isub
				  //   672: ldc_w 1073741824
				  //   675: invokestatic makeMeasureSpec : (II)I
				  //   678: istore_3
				  //   679: goto -> 571
				  //   682: goto -> 373
				  //   685: iconst_0
				  //   686: istore_1
				  //   687: goto -> 314
				  //   690: iconst_0
				  //   691: istore_1
				  //   692: goto -> 305 }

				void b(bool paramBoolean)
				{
				  if (android->support.v7.b.a != nullptr)
				  {
					try
					{
					  android->support.v7.b.a::invoke(this->d, std::vector<void*> {static_cast<Boolean>(paramBoolean)});
					  return;
					}
					catch (const std::exception &exception)
					{
					  android->util.Log.i(L"ListPopupWindow", L"Could not call setClipToScreenEnabled() on PopupWindow. Oh well.");
					  return;
					}
				  }
				}

			public:
				void android->support.v7.b.a(int paramInt)
				{
					this->p = paramInt;
				}

				void android->support.v7.b.a(android->graphics.drawable.Drawable paramDrawable)
				{
					this->d.setBackgroundDrawable(paramDrawable);
				}

				void android->support.v7.b.a(android->view.View paramView)
				{
					this->r = paramView;
				}

				void android->support.v7.b.a(android->widget.AdapterView.OnItemClickListener paramOnItemClickListener)
				{
					this->t = paramOnItemClickListener;
				}

				void android->support.v7.b.a(android->widget.ListAdapter paramListAdapter)
				{
				  if (this->q == nullptr)
				  {
					this->q = new android->support.v4.0f.d(this, nullptr);
				  }
				  else if (this->e != nullptr)
				  {
					this->e.unregisterDataSetObserver(this->q);
				  }
				  this->e = paramListAdapter;
				  if (this->e != nullptr)
				  {
					paramListAdapter::registerDataSetObserver(this->q);
				  }
				  if (this->f != nullptr)
				  {
					this->f->setAdapter(this->e);
				  }
				}

				void android->support.v7.b.a(android->widget.PopupWindow.OnDismissListener paramOnDismissListener)
				{
					this->d.setOnDismissListener(paramOnDismissListener);
				}

				void android->support.v7.b.a(bool paramBoolean)
				{
				  this->C = paramBoolean;
				  this->d.setFocusable(paramBoolean);
				}

				void b(int paramInt)
				{
					this->i = paramInt;
				}

				void c()
				{
				  char b1;
				  bool bool1 = true;
				  char b3 = 0;
				  char b2 = -1;
				  int i1 = b();
				  bool bool2 = l();
				  if (this->d.isShowing())
				  {
					if (this->h == -1)
					{
					  b1 = -1;
					}
					else if (this->h == -2)
					{
					  b1 = android->support.v4.widget.e().getWidth();
					}
					else
					{
					  b1 = this->h;
					}
					if (this->g == -1)
					{
					  if (!bool2)
					  {
						i1 = -1;
					  }
					  if (bool2)
					  {
						PopupWindow *popupWindow2 = this->d;
						if (this->h != -1)
						{
						  b2 = 0;
						}
						popupWindow2->setWindowLayoutMode(b2, 0);
					  }
					  else
					  {
						PopupWindow *popupWindow2 = this->d;
						if (this->h == -1)
						{
						  b2 = -1;
						}
						else
						{
						  b2 = 0;
						}
						popupWindow2->setWindowLayoutMode(b2, -1);
					  }
					}
					else if (this->g != -2)
					{
					  i1 = this->g;
					}
					PopupWindow *popupWindow1 = this->d;
					bool1 = b3;
					if (!this->n)
					{
					  bool1 = b3;
					  if (!this->m)
					  {
						bool1 = true;
					  }
					}
					popupWindow1->setOutsideTouchable(bool1);
					this->d.update(android->support.v4.widget.e(), this->i, this->j, b1, i1);
					return;
				  }
				  if (this->h == -1)
				  {
					b1 = -1;
				  }
				  else if (this->h == -2)
				  {
					this->d.setWidth(android->support.v4.widget.e().getWidth());
					b1 = 0;
				  }
				  else
				  {
					this->d.setWidth(this->h);
					b1 = 0;
				  }
				  if (this->g == -1)
				  {
					i1 = -1;
				  }
				  else if (this->g == -2)
				  {
					this->d.setHeight(i1);
					i1 = 0;
				  }
				  else
				  {
					this->d.setHeight(this->g);
					i1 = 0;
				  }
				  this->d.setWindowLayoutMode(b1, i1);
				  b(true);
				  PopupWindow *popupWindow = this->d;
				  if (this->n || this->m)
				  {
					bool1 = false;
				  }
				  popupWindow->setOutsideTouchable(bool1);
				  this->d.setTouchInterceptor(this->w);
				  android->support.v4.widget.e::a(this->d, android->support.v4.widget.e(), this->i, this->j, this->l);
				  this->f->setSelection(-1);
				  if (!this->C || this->f->isInTouchMode())
				  {
					j();
				  }
				  if (!this->C)
				  {
					this->A->post(this->y);
					return;
				  }
				}

				void c(int paramInt)
				{
				  this->j = paramInt;
				  this->k = true;
				}

				android->graphics.drawable.Drawable android->support.v4.0f.d()
				{
					return this->d.getBackground();
				}

				void android->support.v4.0f.d(int paramInt)
				{
					this->l = paramInt;
				}

				android->view.View android->support.v4.widget.e()
				{
					return this->r;
				}

				void android->support.v4.widget.e(int paramInt)
				{
					this->h = paramInt;
				}

				int f()
				{
					return this->i;
				}

				void f(int paramInt)
				{
				  Drawable *drawable = this->d.getBackground();
				  if (drawable != nullptr)
				  {
					drawable->getPadding(this->B);
					this->h = this->B->left + this->B->right + paramInt;
					return;
				  }
				  android->support.v4.widget.e(paramInt);
				}

				int g()
				{
					return !this->k ? 0 : this->j;
				}

				void g(int paramInt)
				{
					this->d.setInputMethodMode(paramInt);
				}

				int android->support.v7.internal_Renamed.widget.h()
				{
					return this->h;
				}

				void android->support.v7.internal_Renamed.widget.h(int paramInt)
				{
				  a *a1 = this->f;
				  if (k() && a1 != nullptr)
				  {
					android->support.v7.b.a::a(a1, false);
					a1->setSelection(paramInt);
					if (android->os.Build.VERSION.SDK_INT >= 11 && a1->getChoiceMode() != 0)
					{
					  a1->setItemChecked(paramInt, true);
					}
				  }
				}

				void android->support.v4.h.i()
				{
				  this->d.dismiss();
				  android->support.v7.b.a();
				  this->d.setContentView(nullptr);
				  this->f = nullptr;
				  this->A->removeCallbacks(this->v);
				}

				void j()
				{
				  a *a1 = this->f;
				  if (a1 != nullptr)
				  {
					android->support.v7.b.a::a(a1, true);
					a1->requestLayout();
				  }
				}

				bool k()
				{
					return this->d.isShowing();
				}

				bool l()
				{
					return (this->d.getInputMethodMode() == 2);
				}

				android->widget.ListView m()
				{
					return this->f;
				}

			private:
				static class a extends android->support.v7.internal_Renamed.widget.h
				{
				  bool f;

				  bool g;

				  bool android->support.v7.internal_Renamed.widget.h;

				  android->support.v4.h.u android->support.v4.h.i;

				  android->support.v4.0f.d j;

			  public:
				  android->support.v7.b.a(android->content.Context param1Context, bool param1Boolean)
				  {
					__super(param1Context, nullptr, android->support.v7.b.a::a.dropDownListViewStyle);
					this->g = param1Boolean;
					setCacheColorHint(0);
				  }

			  private:
				  void android->support.v7.b.a(android->view.View param1View, int param1Int)
				  {
					  performItemClick(param1View, param1Int, getItemIdAtPosition(param1Int));
				  }

				  void android->support.v7.b.a(android->view.View param1View, int param1Int, float param1Float1, float param1Float2)
				  {
					this->h = true;
					setPressed(true);
					layoutChildren();
					setSelection(param1Int);
					android->support.v7.b.a(param1Int, param1View, param1Float1, param1Float2);
					setSelectorEnabled(false);
					refreshDrawableState();
				  }

				  void android->support.v4.0f.d()
				  {
					this->h = false;
					setPressed(false);
					drawableStateChanged();
					if (this->i != nullptr)
					{
					  this->i.a();
					  this->i = nullptr;
					}
				  }

			  public:
				  bool android->support.v7.b.a(android->view.MotionEvent param1MotionEvent, int param1Int)
				  { // Byte code:
					//   0: aload_1
					//   1: invokestatic a : (Landroid/view/MotionEvent;)I
					//   4: istore_3
					//   5: iload_3
					//   6: tableswitch default -> 32, 1 -> 104, 2 -> 225, 3 -> 96
					//   32: iconst_0
					//   33: istore_2
					//   34: iconst_1
					//   35: istore #6
					//   37: iload #6
					//   39: ifeq -> 46
					//   42: iload_2
					//   43: ifeq -> 50
					//   46: aload_0
					//   47: invokespecial d : ()V
					//   50: iload #6
					//   52: ifeq -> 206
					//   55: aload_0
					//   56: getfield j : Landroid/support/v4/widget/d;
					//   59: ifnonnull -> 74
					//   62: aload_0
					//   63: new android/support/v4/widget/d
					//   66: dup
					//   67: aload_0
					//   68: invokespecial <init> : (Landroid/widget/ListView;)V
					//   71: putfield j : Landroid/support/v4/widget/d;
					//   74: aload_0
					//   75: getfield j : Landroid/support/v4/widget/d;
					//   78: iconst_1
					//   79: invokevirtual a : (Z)Landroid/support/v4/widget/a;
					//   82: pop
					//   83: aload_0
					//   84: getfield j : Landroid/support/v4/widget/d;
					//   87: aload_0
					//   88: aload_1
					//   89: invokevirtual onTouch : (Landroid/view/View;Landroid/view/MotionEvent;)Z
					//   92: pop
					//   93: iload #6
					//   95: ireturn
					//   96: iconst_0
					//   97: istore_2
					//   98: iconst_0
					//   99: istore #6
					//   101: goto -> 37
					//   104: iconst_0
					//   105: istore #6
					//   107: aload_1
					//   108: iload_2
					//   109: invokevirtual findPointerIndex : (I)I
					//   112: istore #4
					//   114: iload #4
					//   116: ifge -> 127
					//   119: iconst_0
					//   120: istore_2
					//   121: iconst_0
					//   122: istore #6
					//   124: goto -> 37
					//   127: aload_1
					//   128: iload #4
					//   130: invokevirtual getX : (I)F
					//   133: f2i
					//   134: istore_2
					//   135: aload_1
					//   136: iload #4
					//   138: invokevirtual getY : (I)F
					//   141: f2i
					//   142: istore #4
					//   144: aload_0
					//   145: iload_2
					//   146: iload #4
					//   148: invokevirtual pointToPosition : (II)I
					//   151: istore #5
					//   153: iload #5
					//   155: iconst_m1
					//   156: if_icmpne -> 164
					//   159: iconst_1
					//   160: istore_2
					//   161: goto -> 37
					//   164: aload_0
					//   165: iload #5
					//   167: aload_0
					//   168: invokevirtual getFirstVisiblePosition : ()I
					//   171: isub
					//   172: invokevirtual getChildAt : (I)Landroid/view/View;
					//   175: astore #7
					//   177: aload_0
					//   178: aload #7
					//   180: iload #5
					//   182: iload_2
					//   183: i2f
					//   184: iload #4
					//   186: i2f
					//   187: invokespecial a : (Landroid/view/View;IFF)V
					//   190: iload_3
					//   191: iconst_1
					//   192: if_icmpne -> 32
					//   195: aload_0
					//   196: aload #7
					//   198: iload #5
					//   200: invokespecial a : (Landroid/view/View;I)V
					//   203: goto -> 32
					//   206: aload_0
					//   207: getfield j : Landroid/support/v4/widget/d;
					//   210: ifnull -> 93
					//   213: aload_0
					//   214: getfield j : Landroid/support/v4/widget/d;
					//   217: iconst_0
					//   218: invokevirtual a : (Z)Landroid/support/v4/widget/a;
					//   221: pop
					//   222: iload #6
					//   224: ireturn
					//   225: iconst_1
					//   226: istore #6
					//   228: goto -> 107 }

			  protected:
				  bool c()
				  {
					  return (this->h || __super::c());
				  }

			  public:
				  bool hasFocus()
				  {
					  return (this->g || __super::hasFocus());
				  }

				  bool hasWindowFocus()
				  {
					  return (this->g || __super::hasWindowFocus());
				  }

				  bool isFocused()
				  {
					  return (this->g || __super::isFocused());
				  }

				  bool isInTouchMode()
				  {
					  return ((this->g && this->f) || __super::isInTouchMode());
				  }
				  }

				static class b_Renamed implements android->view.View.OnTouchListener
				{
			  private:
				  final float android->support.v7.b.a;

				  final int b_Renamed;

				  final int c;

				  final android->view.View android->support.v4.0f.d;

				  Runnable android->support.v4.widget.e;

				  Runnable f;

				  bool g;

				  bool android->support.v7.internal_Renamed.widget.h;

				  int android->support.v4.h.i;

				  final int[] j = std::vector<int>(2);

			  public:
				  b(android->view.View param1View)
				  {
					this->d = param1View;
					this->a = android->view.ViewConfiguration->get(param1View::getContext()).getScaledTouchSlop();
					this->b_Renamed = android->view.ViewConfiguration.getTapTimeout();
					this->c = (this->b_Renamed + android->view.ViewConfiguration.getLongPressTimeout()) / 2;
				  }

			  private:
				  bool android->support.v7.b.a(android->view.MotionEvent param1MotionEvent)
				  {
					View *view = this->d;
					if (view->isEnabled())
					{
					  int k;
					  switch (android->support.v4.h.i::a(param1MotionEvent))
					  {
						default:
						  return false;
						case 0:
						  this->i = param1MotionEvent::getPointerId(0);
						  this->h = false;
						  if (this->e == nullptr)
						  {
							this->e = new android->support.v7.b.a(this, nullptr);
						  }
						  view->postDelayed(this->e, this->b_Renamed);
						  if (this->f == nullptr)
						  {
							this->f = new b(this, nullptr);
						  }
						  view->postDelayed(this->f, this->c);
						  return false;
						case 2:
						  k = param1MotionEvent::findPointerIndex(this->i);
						  if (k >= 0 && !android->support.v7.b.a(view, param1MotionEvent::getX(k), param1MotionEvent::getY(k), this->a))
						  {
							android->support.v4.0f.d();
							view->getParent().requestDisallowInterceptTouchEvent(true);
							return true;
						  }
						  return false;
						case 1:
						case 3:
						  break;
					  }
					  android->support.v4.0f.d();
					  return false;
					}
					return false;
				  }

				  static bool android->support.v7.b.a(android->view.View param1View, float param1Float1, float param1Float2, float param1Float3)
				  {
					  return (param1Float1 >= -param1Float3 && param1Float2 >= -param1Float3 && param1Float1 < (param1View::getRight() - param1View::getLeft()) + param1Float3 && param1Float2 < (param1View::getBottom() - param1View::getTop()) + param1Float3);
				  }

				  bool android->support.v7.b.a(android->view.View param1View, android->view.MotionEvent param1MotionEvent)
				  {
					std::vector<int> arrayOfInt = this->j;
					param1View::getLocationOnScreen(arrayOfInt);
					param1MotionEvent::offsetLocation(-arrayOfInt[0], -arrayOfInt[1]);
					return true;
				  }

				  bool b(android->view.MotionEvent param1MotionEvent)
				  {
					bool bool_Renamed = true;
					View *view = this->d;
					h *h1 = android->support.v7.b.a();
					if (h1 != nullptr && h1->k())
					{
					  h::a *a1 = android->support.v7.internal_Renamed.widget.h::a(h1);
					  if (a1 != nullptr && a1->isShown())
					  {
						MotionEvent *motionEvent = android->view.MotionEvent.obtainNoHistory(param1MotionEvent);
						b(view, motionEvent);
						android->support.v7.b.a(a1, motionEvent);
						bool bool1 = a1->a(motionEvent, this->i);
						motionEvent->recycle();
						int k = android->support.v4.h.i::a(param1MotionEvent);
						if (k != 1 && k != 3)
						{
						  k = 1;
						}
						else
						{
						  k = 0;
						}
						if (!bool1 || k == 0)
						{
						  bool_Renamed = false;
						}
						return bool_Renamed;
					  }
					}
					return false;
				  }

				  bool b(android->view.View param1View, android->view.MotionEvent param1MotionEvent)
				  {
					std::vector<int> arrayOfInt = this->j;
					param1View::getLocationOnScreen(arrayOfInt);
					param1MotionEvent::offsetLocation(arrayOfInt[0], arrayOfInt[1]);
					return true;
				  }

				  void android->support.v4.0f.d()
				  {
					if (this->f != nullptr)
					{
					  this->d.removeCallbacks(this->f);
					}
					if (this->e != nullptr)
					{
					  this->d.removeCallbacks(this->e);
					}
				  }

				  void android->support.v4.widget.e()
				  {
					android->support.v4.0f.d();
					View *view = this->d;
					if (view->isEnabled() && !view->isLongClickable() && b())
					{
					  view->getParent().requestDisallowInterceptTouchEvent(true);
					  long long l = android->os.SystemClock.uptimeMillis();
					  MotionEvent *motionEvent = android->view.MotionEvent.obtain(l, l, 3, 0.0F, 0.0F, 0);
					  view->onTouchEvent(motionEvent);
					  motionEvent->recycle();
					  this->g = true;
					  this->h = true;
					  return;
					}
				  }

			  public:
				  = 0 android->support.v7.internal_Renamed.widget.h android->support.v7.b.a();

			  protected:
				  bool b()
				  {
					h *h1 = android->support.v7.b.a();
					if (h1 != nullptr && !h1->k())
					{
					  h1->c();
					}
					return true;
				  }

				  bool c()
				  {
					h *h1 = android->support.v7.b.a();
					if (h1 != nullptr && h1->k())
					{
					  h1->i();
					}
					return true;
				  }

			  public:
				  bool onTouch(android->view.View param1View, android->view.MotionEvent param1MotionEvent)
				  {
					int k;
					char b1 = 0;
					bool bool_Renamed = this->g;
					if (bool_Renamed)
					{
					  if (this->h)
					  {
						k = b(param1MotionEvent);
					  }
					  else if (b(param1MotionEvent) || !c())
					  {
						k = 1;
					  }
					  else
					  {
						k = 0;
					  }
					}
					else
					{
					  if (android->support.v7.b.a(param1MotionEvent) && b())
					  {
						k = 1;
					  }
					  else
					  {
						k = 0;
					  }
					  if (k)
					  {
						long long l = android->os.SystemClock.uptimeMillis();
						MotionEvent *motionEvent = android->view.MotionEvent.obtain(l, l, 3, 0.0F, 0.0F, 0);
						this->d.onTouchEvent(motionEvent);
						motionEvent->recycle();
					  }
					}
					this->g = k;
					if (!k)
					{
					  k = b1;
					  return bool_Renamed ? true : k;
					}
					return true;
				  }

			  private:
				  class a implements Runnable
				  {
					android->support.v7.b.a(android->support.v7.internal_Renamed.widget.h::b this$0)
					{
					}

				public:
					void run()
					{
						android->support.v7.internal_Renamed.widget.h::b.a(this->a).getParent().requestDisallowInterceptTouchEvent(true);
					}
				  }

			  private:
				  class b_Renamed implements Runnable
				  {
					b(android->support.v7.internal_Renamed.widget.h::b this$0)
					{
					}

				public:
					void run()
					{
						android->support.v7.internal_Renamed.widget.h::b.b(this->a);
					}
				  }
				}

			private:
				class a implements Runnable
				{
				  android->support.v7.b.a(android->support.v7.internal_Renamed.widget.h this$0)
				  {
				  }

			  public:
				  void run()
				  {
					  android->support.v7.internal_Renamed.widget.h::b.a(this->a).getParent().requestDisallowInterceptTouchEvent(true);
				  }
				}

			private:
				class b_Renamed implements Runnable
				{
				  b(android->support.v7.internal_Renamed.widget.h this$0)
				  {
				  }

			  public:
				  void run()
				  {
					  android->support.v7.internal_Renamed.widget.h::b.b(this->a);
				  }
				}

			private:
				class c implements Runnable
				{
				  c(android->support.v7.internal_Renamed.widget.h this$0)
				  {
				  }

			  public:
				  void run()
				  {
					  this->a.j();
				  }
				}

			private:
				class d::d extends android->database.DataSetObserver
				{
				  android->support.v4.0f.d(android->support.v7.internal_Renamed.widget.h this$0)
				  {
				  }

			  public:
				  void onChanged()
				  {
					if (this->a.k())
					{
					  this->a.c();
					}
				  }

				  void onInvalidated()
				  {
					  this->a.i();
				  }
				}

			private:
				class e implements android->widget.AbsListView.OnScrollListener
				{
				  android->support.v4.widget.e(android->support.v7.internal_Renamed.widget.h this$0)
				  {
				  }

			  public:
				  void onScroll(android->widget.AbsListView param1AbsListView, int param1Int1, int param1Int2, int param1Int3)
				  {
				  }

				  void onScrollStateChanged(android->widget.AbsListView param1AbsListView, int param1Int)
				  {
					if (param1Int == 1 && !this->a.l() && android->support.v7.internal_Renamed.widget.h::b(this->a).getContentView() != nullptr)
					{
					  android->support.v7.internal_Renamed.widget.h::d(this->a).removeCallbacks(android->support.v7.internal_Renamed.widget.h::c(this->a));
					  android->support.v7.internal_Renamed.widget.h::c(this->a).run();
					}
				  }
				}

			private:
				class f implements android->view.View.OnTouchListener
				{
				  f(android->support.v7.internal_Renamed.widget.h this$0)
				  {
				  }

			  public:
				  bool onTouch(android->view.View param1View, android->view.MotionEvent param1MotionEvent)
				  {
					int android->support.v4.h->i = param1MotionEvent::getAction();
					int j = static_cast<int>(param1MotionEvent::getX());
					int k = static_cast<int>(param1MotionEvent::getY());
					if (android->support.v4.h->i == 0 && android->support.v7.internal_Renamed.widget.h::b(this->a) != nullptr && android->support.v7.internal_Renamed.widget.h::b(this->a).isShowing() && j >= 0 && j < android->support.v7.internal_Renamed.widget.h::b(this->a).getWidth() && k >= 0 && k < android->support.v7.internal_Renamed.widget.h::b(this->a).getHeight())
					{
					  android->support.v7.internal_Renamed.widget.h::d(this->a).postDelayed(android->support.v7.internal_Renamed.widget.h::c(this->a), 250LL);
					  return false;
					}
					if (android->support.v4.h->i == 1)
					{
					  android->support.v7.internal_Renamed.widget.h::d(this->a).removeCallbacks(android->support.v7.internal_Renamed.widget.h::c(this->a));
					}
					return false;
				  }
				}

			private:
				class g implements Runnable
				{
				  g(android->support.v7.internal_Renamed.widget.h this$0)
				  {
				  }

			  public:
				  void run()
				  {
					if (android->support.v7.internal_Renamed.widget.h::a(this->a) != nullptr && android->support.v7.internal_Renamed.widget.h::a(this->a).getCount() > android->support.v7.internal_Renamed.widget.h::a(this->a).getChildCount() && android->support.v7.internal_Renamed.widget.h::a(this->a).getChildCount() <= this->a.b)
					{
					  android->support.v7.internal_Renamed.widget.h::b(this->a).setInputMethodMode(2);
					  this->a.c();
					}
				  }
				}
				}
				}
			}
		}
	}
}
	}
}
}

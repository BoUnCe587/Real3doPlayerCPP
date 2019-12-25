//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "SearchView.h"
#include "../../v4/widget/a.h"
#include "../../v4/widget/b.h"
#include "a.h"
#include "b.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::annotation::TargetApi;
				using android::app::SearchableInfo;
				using android::content::Context;
				using android::content::Intent;
				using android::graphics::Rect;
				using android::graphics::drawable::Drawable;
				using android::net::Uri;
				using android::os::Build;
				using android::os::Bundle;
				using b = android::support::v4::widget::b;
				using a = android::support::v7::b::a;
				using a = android::support::v7::d::a;
				using android::text::Editable;
				using android::text::SpannableStringBuilder;
				using android::text::TextUtils;
				using android::text::style::ImageSpan;
				using android::util::AttributeSet;
				using android::view::KeyEvent;
				using android::view::View;
				using android::view::inputmethod::InputMethodManager;
				using android::widget::AutoCompleteTextView;
				using android::widget::ImageView;
SearchView::android::support::v7::b::a *const android;

				SearchView::StaticConstructor::StaticConstructor()
				{
										bool bool_Renamed;
										if (android->os.Build.VERSION.SDK_INT >= 8)
										{
										  bool_Renamed = true;
										}
										else
										{
										  bool_Renamed = false;
										}
										android->support.v4.widget->b = bool_Renamed;
										android->support.v7.b->a = new android->support.v7.b.a();
				}

SearchView::StaticConstructor SearchView::staticConstructor;

				Intent *SearchView::android->support.v7.b.a(const std::wstring &paramString1, Uri *paramUri, const std::wstring &paramString2, const std::wstring &paramString3, int paramInt, const std::wstring &paramString4)
				{
				  Intent *intent = new android->content.Intent(paramString1);
				  intent->addFlags(268435456);
				  if (paramUri != nullptr)
				  {
					intent->setData(paramUri);
				  }
				  intent->putExtra(L"user_query", this->E);
				  if (paramString3 != L"")
				  {
					intent->putExtra(L"query", paramString3);
				  }
				  if (paramString2 != L"")
				  {
					intent->putExtra(L"intent_extra_data_key", paramString2);
				  }
				  if (this->I != nullptr)
				  {
					intent->putExtra(L"app_data", this->I);
				  }
				  if (paramInt != 0)
				  {
					intent->putExtra(L"action_key", paramInt);
					intent->putExtra(L"action_msg", paramString4);
				  }
				  if (android->support.v4.widget.b)
				  {
					intent->setComponent(this->H->getSearchActivity());
				  }
				  return intent;
				}

				void SearchView::android->support.v7.b.a(int paramInt, const std::wstring &paramString1, const std::wstring &paramString2)
				{
				  Intent *intent = android->support.v7.b.a(L"android.intent.action.SEARCH", nullptr, nullptr, paramString2, paramInt, paramString1);
				  getContext().startActivity(intent);
				}

				void SearchView::android->support.v7.b.a(bool paramBoolean)
				{
				  bool bool_Renamed;
				  char b1;
				  bool bool1 = true;
				  char b2 = 8;
				  this->w = paramBoolean;
				  if (paramBoolean)
				  {
					b1 = 0;
				  }
				  else
				  {
					b1 = 8;
				  }
				  if (!android->text.TextUtils->isEmpty(this->c->getText()))
				  {
					bool_Renamed = true;
				  }
				  else
				  {
					bool_Renamed = false;
				  }
				  this->f->setVisibility(b1);
				  android->support.v4.widget.b(bool_Renamed);
				  View *view = this->d;
				  if (paramBoolean)
				  {
					b1 = 8;
				  }
				  else
				  {
					b1 = 0;
				  }
				  view->setVisibility(b1);
				  ImageView *imageView = this->j;
				  if (this->v)
				  {
					b1 = b2;
				  }
				  else
				  {
					b1 = 0;
				  }
				  imageView->setVisibility(b1);
				  i();
				  if (!bool_Renamed)
				  {
					paramBoolean = bool1;
				  }
				  else
				  {
					paramBoolean = false;
				  }
				  c(paramBoolean);
				  h();
				}

				bool SearchView::android->support.v7.b.a(Context *paramContext)
				{
					return ((paramContext->getResources().getConfiguration())->orientation == 2);
				}

				CharSequence *SearchView::android->support.v4.widget.b(CharSequence *paramCharSequence)
				{
				  if (!this->v || this->k == nullptr)
				  {
					return paramCharSequence;
				  }
				  int i1 = static_cast<int>(this->c->getTextSize() * 1.25);
				  this->k->setBounds(0, 0, i1, i1);
				  SpannableStringBuilder *spannableStringBuilder = new android->text.SpannableStringBuilder(L"   ");
				  android->text::style::ImageSpan tempVar(this->k);
				  spannableStringBuilder->setSpan(&tempVar, 1, 2, 33);
				  spannableStringBuilder->append(paramCharSequence);
				  return spannableStringBuilder;
				}

				void SearchView::android->support.v4.widget.b(bool paramBoolean)
				{ // Byte code:
				  //   0: bipush #8
				  //   2: istore_3
				  //   3: iload_3
				  //   4: istore_2
				  //   5: aload_0
				  //   6: getfield y : Z
				  //   9: ifeq -> 45
				  //   12: iload_3
				  //   13: istore_2
				  //   14: aload_0
				  //   15: invokespecial f : ()Z
				  //   18: ifeq -> 45
				  //   21: iload_3
				  //   22: istore_2
				  //   23: aload_0
				  //   24: invokevirtual hasFocus : ()Z
				  //   27: ifeq -> 45
				  //   30: iload_1
				  //   31: ifne -> 43
				  //   34: iload_3
				  //   35: istore_2
				  //   36: aload_0
				  //   37: getfield D : Z
				  //   40: ifne -> 45
				  //   43: iconst_0
				  //   44: istore_2
				  //   45: aload_0
				  //   46: getfield g : Landroid/widget/ImageView;
				  //   49: iload_2
				  //   50: invokevirtual setVisibility : (I)V
				  //   53: return }

				void c(bool paramBoolean)
				{
				  char b1;
				  if (this->D && !c() && paramBoolean)
				  {
					b1 = 0;
					this->g->setVisibility(8);
				  }
				  else
				  {
					b1 = 8;
				  }
				  this->i->setVisibility(b1);
				}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(8) private boolean e()
				bool e()
				{
				  char b1 = 0;
				  int i1 = b1;
				  if (this->H != nullptr)
				  {
					i1 = b1;
					if (this->H->getVoiceSearchEnabled())
					{
					  Intent *intent = nullptr;
					  if (this->H->getVoiceSearchLaunchWebSearch())
					  {
						intent = this->n;
					  }
					  else if (this->H->getVoiceSearchLaunchRecognizer())
					  {
						intent = this->o;
					  }
					  i1 = b1;
					  if (intent != nullptr)
					  {
						i1 = b1;
						if (getContext().getPackageManager().resolveActivity(intent, 65536) != nullptr)
						{
						  i1 = 1;
						}
					  }
					}
				  }
				  return i1;
				}

				bool f()
				{
					return ((this->y || this->D) && !c());
				}

				int getPreferredWidth()
				{
					return getContext().getResources().getDimensionPixelSize(android->support.v7.b.a::c.abc_search_view_preferred_width);
				}

				void h()
				{ // Byte code:
				  //   0: bipush #8
				  //   2: istore_2
				  //   3: iload_2
				  //   4: istore_1
				  //   5: aload_0
				  //   6: invokespecial f : ()Z
				  //   9: ifeq -> 36
				  //   12: aload_0
				  //   13: getfield g : Landroid/widget/ImageView;
				  //   16: invokevirtual getVisibility : ()I
				  //   19: ifeq -> 34
				  //   22: iload_2
				  //   23: istore_1
				  //   24: aload_0
				  //   25: getfield i : Landroid/widget/ImageView;
				  //   28: invokevirtual getVisibility : ()I
				  //   31: ifne -> 36
				  //   34: iconst_0
				  //   35: istore_1
				  //   36: aload_0
				  //   37: getfield e : Landroid/view/View;
				  //   40: iload_1
				  //   41: invokevirtual setVisibility : (I)V
				  //   44: return }

				void i()
				{
				  bool bool_Renamed;
				  char b3 = 1;
				  char b2 = 0;
				  if (!android->text.TextUtils->isEmpty(this->c->getText()))
				  {
					bool_Renamed = true;
				  }
				  else
				  {
					bool_Renamed = false;
				  }
				  char b1 = b3;
				  if (!bool_Renamed)
				  {
					if (this->v && !this->F)
					{
					  b1 = b3;
					}
					else
					{
					  b1 = 0;
					}
				  }
				  ImageView *imageView = this->h;
				  if (b1 != 0)
				  {
					b1 = b2;
				  }
				  else
				  {
					b1 = 8;
				  }
				  imageView->setVisibility(b1);
				  Drawable *drawable = this->h->getDrawable();
				  if (drawable != nullptr)
				  {
					std::vector<int> arrayOfInt;
					if (bool_Renamed)
					{
					  arrayOfInt = ENABLED_STATE_SET;
					}
					else
					{
					  arrayOfInt = EMPTY_STATE_SET;
					}
					drawable->setState(arrayOfInt);
				  }
				}

				void j()
				{
					post(this->K);
				}

				void k()
				{
				  CharSequence *charSequence2 = getQueryHint();
				  SearchAutoComplete *searchAutoComplete = this->c;
				  CharSequence *charSequence1 = charSequence2;
				  if (charSequence2 == nullptr)
				  {
					charSequence1 = L"";
				  }
				  searchAutoComplete->setHint(android->support.v4.widget.b(charSequence1));
				}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(8) private void l()
				void l()
				{
				  int i2 = 1;
				  this->c->setThreshold(this->H->getSuggestThreshold());
				  this->c->setImeOptions(this->H->getImeOptions());
				  int i3 = this->H->getInputType();
				  int i1 = i3;
				  if ((i3 & 0xF) == 1)
				  {
					i3 &= 0xFFFEFFFF;
					i1 = i3;
					if (this->H->getSuggestAuthority() != nullptr)
					{
					  i1 = i3 | 0x10000 | 0x80000;
					}
				  }
				  this->c->setInputType(i1);
				  if (this->x != nullptr)
				  {
					this->x->a(nullptr);
				  }
				  if (this->H->getSuggestAuthority() != nullptr)
				  {
					this->x = new i(getContext(), this, this->H, this->M);
					this->c->setAdapter(this->x);
					i *i4 = static_cast<i*>(this->x);
					i1 = i2;
					if (this->A)
					{
					  i1 = 2;
					}
					i4->a(i1);
				  }
				}

				void m()
				{
				  Editable *editable = this->c->getText();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
				  if (editable != nullptr && android->text.TextUtils.getTrimmedLength(editable) > 0 && (this->q == nullptr || !this->q->a(editable->toString())))
				  {
					if (this->H != nullptr)
					{
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					  android->support.v7.b.a(0, nullptr, editable->toString());
					}
					setImeVisibility(false);
					n();
				  }
				}

				void n()
				{
					this->c->dismissDropDown();
				}

				void o()
				{
				  if (android->text.TextUtils->isEmpty(this->c->getText()))
				  {
					if (this->v && (this->r == nullptr || !this->r->a()))
					{
					  clearFocus();
					  android->support.v7.b.a(true);
					}
					return;
				  }
				  this->c->setText(L"");
				  this->c->requestFocus();
				  setImeVisibility(true);
				}

				void p()
				{
				  android->support.v7.b.a(false);
				  this->c->requestFocus();
				  setImeVisibility(true);
				  if (this->u != nullptr)
				  {
					this->u->onClick(this);
				  }
				}

				void q()
				{
				  android->support.v7.b.a::a(this->c);
				  android->support.v7.b.a::b(this->c);
				}

				void setImeVisibility(bool paramBoolean)
				{
				  if (paramBoolean)
				  {
					post(this->J);
					return;
				  }
				  removeCallbacks(this->J);
				  InputMethodManager *inputMethodManager = static_cast<InputMethodManager*>(getContext().getSystemService(L"input_method"));
				  if (inputMethodManager != nullptr)
				  {
					inputMethodManager->hideSoftInputFromWindow(getWindowToken(), 0);
					return;
				  }
				}

				void setQuery(CharSequence paramCharSequence)
				{
				  int i1;
				  this->c->setText(paramCharSequence);
				  SearchAutoComplete *searchAutoComplete = this->c;
				  if (android->text.TextUtils->isEmpty(paramCharSequence))
				  {
					i1 = 0;
				  }
				  else
				  {
					i1 = paramCharSequence->length();
				  }
				  searchAutoComplete->setSelection(i1);
				}

			public:
				void android->support.v7.b.a()
				{
				  if (this->F)
				  {
					return;
				  }
				  this->F = true;
				  this->G = this->c->getImeOptions();
				  this->c->setImeOptions(this->G | 0x2000000);
				  this->c->setText(L"");
				  setIconified(false);
				}

				void android->support.v7.b.a(CharSequence paramCharSequence)
				{
					setQuery(paramCharSequence);
				}

				void android->support.v7.b.a(CharSequence paramCharSequence, bool paramBoolean)
				{
				  this->c->setText(paramCharSequence);
				  if (paramCharSequence != nullptr)
				  {
					this->c->setSelection(this->c->length());
					this->E = paramCharSequence;
				  }
				  if (paramBoolean && !android->text.TextUtils->isEmpty(paramCharSequence))
				  {
					m();
				  }
				}

				void android->support.v4.widget.b()
				{
				  android->support.v7.b.a(L"", false);
				  clearFocus();
				  android->support.v7.b.a(true);
				  this->c->setImeOptions(this->G);
				  this->F = false;
				}

				bool c()
				{
					return this->w;
				}

				void clearFocus()
				{
				  this->B = true;
				  setImeVisibility(false);
				  g::clearFocus();
				  this->c->clearFocus();
				  this->B = false;
				}

				void d()
				{
				  android->support.v7.b.a(c());
				  j();
				  if (this->c->hasFocus())
				  {
					q();
				  }
				}

				int getImeOptions()
				{
					return this->c->getImeOptions();
				}

				int getInputType()
				{
					return this->c->getInputType();
				}

				int getMaxWidth()
				{
					return this->C;
				}

				CharSequence getQuery()
				{
					return this->c->getText();
				}

				CharSequence getQueryHint()
				{
					return (this->z != nullptr) ? this->z : ((android->support.v4.widget.b && this->H != nullptr && this->H->getHintId() != 0) ? getContext().getText(this->H->getHintId()) : this->p);
				}

				int getSuggestionCommitIconResId()
				{
					return this->m;
				}

				int getSuggestionRowLayout()
				{
					return this->l;
				}

				android->support.v4.widget.b getSuggestionsAdapter()
				{
					return this->x;
				}

			protected:
				void onDetachedFromWindow()
				{
				  removeCallbacks(this->K);
				  post(this->L);
				  g::onDetachedFromWindow();
				}

				void onMeasure(int paramInt1, int paramInt2)
				{
				  if (c())
				  {
					g::onMeasure(paramInt1, paramInt2);
					return;
				  }
				  int i2 = android->view.View.MeasureSpec.getMode(paramInt1);
				  int i1 = android->view.View.MeasureSpec.getSize(paramInt1);
				  switch (i2)
				  {
					default:
					  paramInt1 = i1;
					  g::onMeasure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt1, 1073741824), paramInt2);
					  return;
					case -2147483648:
					  if (this->C > 0)
					  {
						paramInt1 = std::min(this->C, i1);
					  }
					  else
					  {
						paramInt1 = std::min(getPreferredWidth(), i1);
					  }
					  g::onMeasure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt1, 1073741824), paramInt2);
					  return;
					case 1073741824:
					  paramInt1 = i1;
					  if (this->C > 0)
					  {
						paramInt1 = std::min(this->C, i1);
					  }
					  g::onMeasure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt1, 1073741824), paramInt2);
					  return;
					case 0:
					  break;
				  }
				  if (this->C > 0)
				  {
					paramInt1 = this->C;
				  }
				  else
				  {
					paramInt1 = getPreferredWidth();
				  }
				  g::onMeasure(android->view.View.MeasureSpec.makeMeasureSpec(paramInt1, 1073741824), paramInt2);
				}

			public:
				void onWindowFocusChanged(bool paramBoolean)
				{
				  g::onWindowFocusChanged(paramBoolean);
				  j();
				}

				bool requestFocus(int paramInt, android->graphics.Rect paramRect)
				{
				  if (!this->B && isFocusable())
				  {
					if (!c())
					{
					  bool bool_Renamed = this->c->requestFocus(paramInt, paramRect);
					  if (bool_Renamed)
					  {
						android->support.v7.b.a(false);
					  }
					  return bool_Renamed;
					}
					return g::requestFocus(paramInt, paramRect);
				  }
				  return false;
				}

				void setAppSearchData(android->os.Bundle paramBundle)
				{
					this->I = paramBundle;
				}

				void setIconified(bool paramBoolean)
				{
				  if (paramBoolean)
				  {
					o();
					return;
				  }
				  p();
				}

				void setIconifiedByDefault(bool paramBoolean)
				{
				  if (this->v == paramBoolean)
				  {
					return;
				  }
				  this->v = paramBoolean;
				  android->support.v7.b.a(paramBoolean);
				  k();
				}

				void setImeOptions(int paramInt)
				{
					this->c->setImeOptions(paramInt);
				}

				void setInputType(int paramInt)
				{
					this->c->setInputType(paramInt);
				}

				void setMaxWidth(int paramInt)
				{
				  this->C = paramInt;
				  requestLayout();
				}

				void setOnCloseListener(android->support.v4.widget.b paramb)
				{
					this->r = paramb;
				}

				void setOnQueryTextFocusChangeListener(android->view.View.OnFocusChangeListener paramOnFocusChangeListener)
				{
					this->s = paramOnFocusChangeListener;
				}

				void setOnQueryTextListener(c paramc)
				{
					this->q = paramc;
				}

				void setOnSearchClickListener(android->view.View.OnClickListener paramOnClickListener)
				{
					this->u = paramOnClickListener;
				}

				void setOnSuggestionListener(d paramd)
				{
					this->t = paramd;
				}

				void setQueryHint(CharSequence paramCharSequence)
				{
				  this->z = paramCharSequence;
				  k();
				}

				void setQueryRefinementEnabled(bool paramBoolean)
				{
				  this->A = paramBoolean;
				  if (dynamic_cast<i*>(this->x) != nullptr)
				  {
					char b1;
					i *i1 = static_cast<i*>(this->x);
					if (paramBoolean)
					{
					  b1 = 2;
					}
					else
					{
					  b1 = 1;
					}
					i1->a(b1);
				  }
				}

				void setSearchableInfo(android->app.SearchableInfo paramSearchableInfo)
				{
				  bool bool_Renamed;
				  this->H = paramSearchableInfo;
				  if (this->H != nullptr)
				  {
					if (android->support.v4.widget.b)
					{
					  l();
					}
					k();
				  }
				  if (android->support.v4.widget.b && e())
				  {
					bool_Renamed = true;
				  }
				  else
				  {
					bool_Renamed = false;
				  }
				  this->D = bool_Renamed;
				  if (this->D)
				  {
					this->c->setPrivateImeOptions(L"nm");
				  }
				  android->support.v7.b.a(c());
				}

				void setSubmitButtonEnabled(bool paramBoolean)
				{
				  this->y = paramBoolean;
				  android->support.v7.b.a(c());
				}

				void setSuggestionsAdapter(android->support.v4.widget.b paramb)
				{
				  this->x = paramb;
				  this->c->setAdapter(this->x);
				}

				static class SearchAutoComplete extends android->support.v4.widget.b
				{
			  private:
				  int android->support.v7.b->a = getThreshold();

				  SearchView android->support.v4.widget.b;

			  public:
				  SearchAutoComplete(android->content.Context param1Context)
				  {
					  this(param1Context, nullptr);
				  }

				  SearchAutoComplete(android->content.Context param1Context, android->util.AttributeSet param1AttributeSet)
				  {
					  this(param1Context, param1AttributeSet, android->support.v7.b.a::a.autoCompleteTextViewStyle);
				  }

				  SearchAutoComplete(android->content.Context param1Context, android->util.AttributeSet param1AttributeSet, int param1Int)
				  {
					  g(param1Context, param1AttributeSet, param1Int);
				  }

				  bool enoughToFilter()
				  {
					  return (this->a <= 0 || g::enoughToFilter());
				  }

			  protected:
				  void onFocusChanged(bool param1Boolean, int param1Int, android->graphics.Rect param1Rect)
				  {
					g::onFocusChanged(param1Boolean, param1Int, param1Rect);
					this->b.d();
				  }

			  public:
				  bool onKeyPreIme(int param1Int, android->view.KeyEvent param1KeyEvent)
				  {
					if (param1Int == 4)
					{
					  if (param1KeyEvent::getAction() == 0 && param1KeyEvent::getRepeatCount() == 0)
					  {
						KeyEvent::DispatcherState *dispatcherState = getKeyDispatcherState();
						if (dispatcherState != nullptr)
						{
						  dispatcherState->startTracking(param1KeyEvent, this);
						}
						return true;
					  }
					  if (param1KeyEvent::getAction() == 1)
					  {
						KeyEvent::DispatcherState *dispatcherState = getKeyDispatcherState();
						if (dispatcherState != nullptr)
						{
						  dispatcherState->handleUpEvent(param1KeyEvent);
						}
						if (param1KeyEvent::isTracking() && !param1KeyEvent::isCanceled())
						{
						  this->b.clearFocus();
						  SearchView::a(this->b, false);
						  return true;
						}
					  }
					}
					return g::onKeyPreIme(param1Int, param1KeyEvent);
				  }

				  void onWindowFocusChanged(bool param1Boolean)
				  {
					g::onWindowFocusChanged(param1Boolean);
					if (param1Boolean && this->b.hasFocus() && getVisibility() == 0)
					{
					  (static_cast<InputMethodManager*>(getContext().getSystemService(L"input_method")))->showSoftInput(this, 0);
					  if (SearchView::a(getContext()))
					  {
						SearchView::a::a(this, true);
					  }
					}
				  }

				  void performCompletion()
				  {
				  }

			  protected:
				  void replaceText(CharSequence param1CharSequence)
				  {
				  }

				  void setSearchView(SearchView param1SearchView)
				  {
					  this->b = param1SearchView;
				  }

			  public:
				  void setThreshold(int param1Int)
				  {
					g::setThreshold(param1Int);
					this->a = param1Int;
				  }
				}

			private:
				static class a
				{
				  Method android->support.v7.b.a;

				  Method android->support.v4.widget.b;

				  Method c;

				  Method d;

				  android->support.v7.b.a()
				  {
					try
					{
					  this->a = AutoCompleteTextView::typeid->getDeclaredMethod(L"doBeforeTextChanged", std::vector<std::type_info*>(0));
					  this->a.setAccessible(true);
					}
					catch (const NoSuchMethodException &noSuchMethodException)
					{
					}
					try
					{
					  this->b = AutoCompleteTextView::typeid->getDeclaredMethod(L"doAfterTextChanged", std::vector<std::type_info*>(0));
					  this->b.setAccessible(true);
					}
					catch (const NoSuchMethodException &noSuchMethodException)
					{
					}
					try
					{
					  this->c = AutoCompleteTextView::typeid->getMethod(L"ensureImeVisible", std::vector<std::type_info*> {bool::typeid});
					  this->c->setAccessible(true);
					}
					catch (const NoSuchMethodException &noSuchMethodException)
					{
					}
					try
					{
					  this->d = InputMethodManager::typeid->getMethod(L"showSoftInputUnchecked", std::vector<std::type_info*> {int::typeid, android::os::ResultReceiver::typeid});
					  this->d->setAccessible(true);
					  return;
					}
					catch (const NoSuchMethodException &noSuchMethodException)
					{
					  return;
					}
				  }

				  void android->support.v7.b.a(android->widget.AutoCompleteTextView param1AutoCompleteTextView)
				  {
					if (this->a != nullptr)
					{
					  try
					  {
						this->a.invoke(param1AutoCompleteTextView, std::vector<void*>(0));
						return;
					  }
					  catch (const std::exception &param1AutoCompleteTextView)
					  {
						return;
					  }
					}
				  }

				  void android->support.v7.b.a(android->widget.AutoCompleteTextView param1AutoCompleteTextView, bool param1Boolean)
				  {
					if (this->c != nullptr)
					{
					  try
					  {
						this->c->invoke(param1AutoCompleteTextView, std::vector<void*> {static_cast<Boolean>(param1Boolean)});
						return;
					  }
					  catch (const std::exception &param1AutoCompleteTextView)
					  {
						return;
					  }
					}
				  }

				  void android->support.v4.widget.b(android->widget.AutoCompleteTextView param1AutoCompleteTextView)
				  {
					if (this->b != nullptr)
					{
					  try
					  {
						this->b.invoke(param1AutoCompleteTextView, std::vector<void*>(0));
						return;
					  }
					  catch (const std::exception &param1AutoCompleteTextView)
					  {
						return;
					  }
					}
				  }
				}

			public:
				static interface b
				{
				  bool android->support.v7.b.a();
				}

				static interface c
				{
				  bool android->support.v7.b.a(std::wstring param1String);
				}

				static interface d
				{
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

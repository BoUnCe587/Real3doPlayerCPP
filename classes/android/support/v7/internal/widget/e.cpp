//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "e.h"
#include "../../b/a.h"
#include "p.h"
#include "i.h"

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
					using android::annotation::TargetApi;
					using android::content::Context;
					using android::os::Build;
					using e = android::support::v4::widget::e;
					using a = android::support::v7::b::a;
					using android::util::AttributeSet;
					using android::util::Log;
					using android::view::View;
					using android::view::ViewTreeObserver;
					using android::widget::PopupWindow;

					e::StaticConstructor::StaticConstructor()
					{
												bool bool_Renamed;
												if (android.os::Build::VERSION::SDK_INT < 21)
												{
												  bool_Renamed = true;
												}
												else
												{
												  bool_Renamed = false;
												}
												android.support::v7::b::a = bool_Renamed;
					}

android::support::v4::widget::e::StaticConstructor e::staticConstructor;

					internal *e::android.support::v4::widget::e(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt)
					{
					  PopupWindow(paramContext, paramAttributeSet, paramInt);
					  p *p = p::a(paramContext, paramAttributeSet, android.support::v7::b::a::j::PopupWindow, paramInt, 0);
					  if (p->d(android.support::v7::b::a::j::PopupWindow_overlapAnchor))
					  {
						android.support::v7::b::a(p->a(android.support::v7::b::a::j::PopupWindow_overlapAnchor, false));
					  }
					  setBackgroundDrawable(p->a(android.support::v7::b::a::j::PopupWindow_android_popupBackground));
					  p->b();
					  if (android.os::Build::VERSION::SDK_INT < 14)
					  {
						android.support::v7::b::a(this);
					  }
					}

					void e::android.support::v7::b::a(PopupWindow *paramPopupWindow)
					{
					  try
					  {
						Field *field1 = PopupWindow::typeid->getDeclaredField(L"mAnchor");
						field1->setAccessible(true);
						Field *field2 = PopupWindow::typeid->getDeclaredField(L"mOnScrollChangedListener");
						field2->setAccessible(true);
						OnScrollChangedListenerAnonymousInnerClass tempVar(field1, paramPopupWindow, static_cast<ViewTreeObserver::OnScrollChangedListener*>(field2->get(paramPopupWindow)));
						field2->set(paramPopupWindow, &tempVar);
						return;
					  }
					  catch (const std::exception &paramPopupWindow)
					  {
						android.util::Log::d(L"AppCompatPopupWindow", L"Exception while installing workaround OnScrollChangedListener", paramPopupWindow);
						return;
					  }
					}

					e::OnScrollChangedListenerAnonymousInnerClass::OnScrollChangedListenerAnonymousInnerClass(Field *field1, PopupWindow *paramPopupWindow, ViewTreeObserver::OnScrollChangedListener *get) : android.view::ViewTreeObserver::OnScrollChangedListener(field1, paramPopupWindow, get)
					{
					}

					void e::OnScrollChangedListenerAnonymousInnerClass::onScrollChanged()
					{
					  try
					  {
						WeakReference *weakReference = static_cast<WeakReference*>(this->a->get(this->b));
						if (weakReference != nullptr)
						{
						  if (weakReference->get() == nullptr)
						  {
							return;
						  }
						  this->c.onScrollChanged();
						  return;
						}
					  }
					  catch (const IllegalAccessException &illegalAccessException)
					  {
					  }
					}

					void e::android.support::v7::b::a(bool paramBoolean)
					{
					  if (android.support::v7::b::a)
					  {
						this->b = paramBoolean;
						return;
					  }
					  android.support::v4::widget::e::a(this, paramBoolean);
					}

					void e::showAsDropDown(View *paramView, int paramInt1, int paramInt2)
					{
					  int i = paramInt2;
					  if (android.support::v7::b::a)
					  {
						i = paramInt2;
						if (this->b)
						{
						  i = paramInt2 - paramView->getHeight();
						}
					  }
					  PopupWindow::showAsDropDown(paramView, paramInt1, i);
					}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(19) public void showAsDropDown(android.view.View paramView, int paramInt1, int paramInt2, int paramInt3)
					void e::showAsDropDown(View *paramView, int paramInt1, int paramInt2, int paramInt3)
					{
					  int i = paramInt2;
					  if (android.support::v7::b::a)
					  {
						i = paramInt2;
						if (this->b)
						{
						  i = paramInt2 - paramView->getHeight();
						}
					  }
					  PopupWindow::showAsDropDown(paramView, paramInt1, i, paramInt3);
					}

					void e::update(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
					  if (android.support::v7::b::a && this->b)
					  {
						paramInt2 -= paramView->getHeight();
					  }
					  PopupWindow::update(paramView, paramInt1, paramInt2, paramInt3, paramInt4);
					}
				}
			}
		}
	}
}

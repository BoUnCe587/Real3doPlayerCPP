//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "ViewStubCompat.h"
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
					using android::content::Context;
					using android::content::res::TypedArray;
					using android::graphics::Canvas;
					using a = android::support::v7::b::a;
					using android::util::AttributeSet;
					using android::view::LayoutInflater;
					using android::view::View;
					using android::view::ViewGroup;
					using android::view::ViewParent;

					ViewStubCompat::ViewStubCompat(Context *paramContext, AttributeSet *paramAttributeSet) : ViewStubCompat(paramContext, paramAttributeSet, 0)
					{
					}

					ViewStubCompat::ViewStubCompat(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt) : android.view::View(paramContext, paramAttributeSet, paramInt)
					{
					  TypedArray *typedArray = paramContext->obtainStyledAttributes(paramAttributeSet, android.support::v7::b::a::j::ViewStubCompat, paramInt, 0);
					  this->b = typedArray->getResourceId(android.support::v7::b::a::j::ViewStubCompat_android_inflatedId, -1);
					  this->a = typedArray->getResourceId(android.support::v7::b::a::j::ViewStubCompat_android_layout, 0);
					  setId(typedArray->getResourceId(android.support::v7::b::a::j::ViewStubCompat_android_id, -1));
					  typedArray->recycle();
					  setVisibility(8);
					  setWillNotDraw(true);
					}

					View *ViewStubCompat::android.support::v7::b::a()
					{
					  ViewParent *viewParent = getParent();
					  if (viewParent != nullptr && dynamic_cast<ViewGroup*>(viewParent) != nullptr)
					  {
						if (this->a != 0)
						{
						  LayoutInflater *layoutInflater;
						  ViewGroup *viewGroup = static_cast<ViewGroup*>(viewParent);
						  if (this->d != nullptr)
						  {
							layoutInflater = this->d;
						  }
						  else
						  {
							layoutInflater = android.view::LayoutInflater::from(getContext());
						  }
						  View *view = layoutInflater->inflate(this->a, viewGroup, false);
						  if (this->b != -1)
						  {
							view->setId(this->b);
						  }
						  int i = viewGroup->indexOfChild(this);
						  viewGroup->removeViewInLayout(this);
						  ViewGroup::LayoutParams *layoutParams = getLayoutParams();
						  if (layoutParams != nullptr)
						  {
							viewGroup->addView(view, i, layoutParams);
						  }
						  else
						  {
							viewGroup->addView(view, i);
						  }
						  this->c = new WeakReference(view);
						  if (this->e != nullptr)
						  {
							this->e->a(this, view);
						  }
						  return view;
						}
						throw std::invalid_argument("ViewStub must have a valid layoutResource");
					  }
					  throw IllegalStateException(L"ViewStub must have a non-null ViewGroup viewParent");
					}

					void ViewStubCompat::dispatchDraw(Canvas *paramCanvas)
					{
					}

					void ViewStubCompat::draw(Canvas *paramCanvas)
					{
					}

					int ViewStubCompat::getInflatedId()
					{
						return this->b;
					}

					LayoutInflater *ViewStubCompat::getLayoutInflater()
					{
						return this->d;
					}

					int ViewStubCompat::getLayoutResource()
					{
						return this->a;
					}

					void ViewStubCompat::onMeasure(int paramInt1, int paramInt2)
					{
						setMeasuredDimension(0, 0);
					}

					void ViewStubCompat::setInflatedId(int paramInt)
					{
						this->b = paramInt;
					}

					void ViewStubCompat::setLayoutInflater(LayoutInflater *paramLayoutInflater)
					{
						this->d = paramLayoutInflater;
					}

					void ViewStubCompat::setLayoutResource(int paramInt)
					{
						this->a = paramInt;
					}

					void ViewStubCompat::setOnInflateListener(a *parama)
					{
						this->e = parama;
					}

					void ViewStubCompat::setVisibility(int paramInt)
					{
					  if (this->c != nullptr)
					  {
						View *view = static_cast<View*>(this->c->get());
						if (view != nullptr)
						{
						  view->setVisibility(paramInt);
						  return;
						}
						throw IllegalStateException(L"setVisibility called on un-referenced view");
					  }
					  View::setVisibility(paramInt);
					  if (paramInt == 0 || paramInt == 4)
					  {
						android.support::v7::b::a();
						return;
					  }
					}
				}
			}
		}
	}
}

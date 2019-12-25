//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "v.h"
#include "a.h"
#include "u.h"
#include "x.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{
				using android::animation::Animator;
				using android::animation::AnimatorListenerAdapter;
				using android::view::View;

				void v::a(View *paramView)
				{
					paramView->animate().cancel();
				}

				void v::a(View *paramView, float paramFloat)
				{
					paramView->animate().translationY(paramFloat);
				}

				void v::a(View *paramView, x *paramx)
				{
				  if (paramx != nullptr)
				  {
					AnimatorListenerAdapterAnonymousInnerClass tempVar(paramx, paramView);
					paramView->animate().setListener(&tempVar);
					return;
				  }
				  paramView->animate().setListener(nullptr);
				}

				v::AnimatorListenerAdapterAnonymousInnerClass::AnimatorListenerAdapterAnonymousInnerClass(android::support::v4::h::x *paramx, View *paramView) : android::animation::AnimatorListenerAdapter(paramx, paramView)
				{
				}

				void v::AnimatorListenerAdapterAnonymousInnerClass::onAnimationCancel(Animator *param1Animator)
				{
					this->a.c(this->b);
				}

				void v::AnimatorListenerAdapterAnonymousInnerClass::onAnimationEnd(Animator *param1Animator)
				{
					this->a.b(this->b);
				}

				void v::AnimatorListenerAdapterAnonymousInnerClass::onAnimationStart(Animator *param1Animator)
				{
					this->a.a(this->b);
				}
			}
		}
	}
}

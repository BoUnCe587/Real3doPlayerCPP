#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class a; } } } }
namespace android { namespace support { namespace v4 { namespace h { class x; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace h
			{

				using android::view::View;

				class w
				{
			  public:
				  static void a(View *paramView, x *paramx);

			  private:
				  class AnimatorListenerAdapterAnonymousInnerClass : public AnimatorListenerAdapter
				  {
				  public:
					  AnimatorListenerAdapterAnonymousInnerClass(android::support::v4::h::x *paramx, View *paramView);

					  virtual void onAnimationCancel(Animator *param1Animator);

					  virtual void onAnimationEnd(Animator *param1Animator);

					  virtual void onAnimationStart(Animator *param1Animator);
				  };
				};
			}
		}
	}
}

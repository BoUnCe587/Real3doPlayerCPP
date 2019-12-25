#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace ru { namespace vastness { namespace altmer { namespace real3doplayer { class a; } } } }

namespace ru
{
	namespace vastness
	{
		namespace altmer
		{
			namespace real3doplayer
			{

				using android::app::Activity;
				using android::os::Bundle;
				using android::view::KeyEvent;
				using android::view::MotionEvent;
				using android::view::SurfaceHolder;
				using android::view::View;

				class EmulatorActivity : public Activity, public SurfaceHolder::Callback, public View::OnTouchListener
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int a_Renamed = 0;

				  int b = 0;

				  void a(const std::wstring &paramString);

			  protected:
				  virtual void onCreate(Bundle *paramBundle);

				  virtual void onDestroy();

			  public:
				  virtual bool onKeyDown(int paramInt, KeyEvent *paramKeyEvent);

				  virtual bool onKeyUp(int paramInt, KeyEvent *paramKeyEvent);

			  protected:
				  virtual void onPause();

				  virtual void onResume();

				  virtual void onStart();

				  virtual void onStop();

			  public:
				  virtual bool onTouch(View *paramView, MotionEvent *paramMotionEvent);

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(19) public void onWindowFocusChanged(boolean paramBoolean)
				  virtual void onWindowFocusChanged(bool paramBoolean);

				  virtual void surfaceChanged(SurfaceHolder *paramSurfaceHolder, int paramInt1, int paramInt2, int paramInt3);

				  virtual void surfaceCreated(SurfaceHolder *paramSurfaceHolder);

				  virtual void surfaceDestroyed(SurfaceHolder *paramSurfaceHolder);
				};
			}
		}
	}
}

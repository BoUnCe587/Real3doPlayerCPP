//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "EmulatorActivity.h"
#include "NativeCore.h"

namespace ru
{
	namespace vastness
	{
		namespace altmer
		{
			namespace real3doplayer
			{
				using android::annotation::TargetApi;
				using android::app::Activity;
				using android::app::UiModeManager;
				using android::content::Intent;
				using android::graphics::Point;
				using android::os::Bundle;
				using android::view::Display;
				using android::view::KeyEvent;
				using android::view::MotionEvent;
				using android::view::SurfaceHolder;
				using android::view::SurfaceView;
				using android::view::View;
				using android::widget::Toast;

				void EmulatorActivity::a(const std::wstring &paramString)
				{
				}

				void EmulatorActivity::onCreate(Bundle *paramBundle)
				{
				  Activity::onCreate(paramBundle);
				  requestWindowFeature(1);
				  getWindow().setFlags(1024, 1024);
				  setContentView(2130968600);
				  SurfaceView *surfaceView = static_cast<SurfaceView*>(findViewById(2131558477));
				  surfaceView->getHolder().addCallback(this);
				  surfaceView->setOnTouchListener(this);
				  Intent *intent = getIntent();
				  this->a_Renamed = intent->getIntExtra(L"lunchMode", 0);
				  NativeCore::nativeOnCreate(this->a_Renamed);
				  if ((static_cast<UiModeManager*>(getSystemService(L"uimode")))->getCurrentModeType() == 4)
				  {
					a(L"Running on a TV Device");
				  }
				  else
				  {
					a(L"Running on a non-TV Device");
					Display *display = getWindowManager().getDefaultDisplay();
					int i = display->getRotation();
					Point *point = new Point();
					display->getSize(point);
					if (i == 0 || i == 2)
					{
					  if (point->x > point->y)
					  {
						if (i == 0)
						{
						  i = 0;
						}
						else
						{
						  i = 8;
						}
					  }
					  else if (i == 0)
					  {
						i = 1;
					  }
					  else
					  {
						i = 9;
					  }
					}
					else if (point->x > point->y)
					{
					  if (i == 1)
					  {
						i = 0;
					  }
					  else
					  {
						i = 8;
					  }
					}
					else if (i == 1)
					{
					  i = 9;
					}
					else
					{
					  i = 1;
					}
					if (intent->getBooleanExtra(L"lockOrient", true) && this->a_Renamed == 0)
					{
					  setRequestedOrientation(i);
					}
				  }
				  this->b = 0;
				}

				void EmulatorActivity::onDestroy()
				{
				  NativeCore::nativeOnDestroy();
				  Activity::onDestroy();
				  a(L"emu onDestroy()");
				}

				bool EmulatorActivity::onKeyDown(int paramInt, KeyEvent *paramKeyEvent)
				{
				  if (paramInt == 4)
				  {
					this->b++;
					if (this->b < 2)
					{
					  if (this->a_Renamed != 0)
					  {
						Toast::makeText(this, L"Once more...", 0).show();
					  }
					  return true;
					}
				  }
				  else
				  {
					int i = NativeCore::onKeyEvent(paramInt, 1, paramKeyEvent->getScanCode());
					if (i != 0)
					{
					  if (i == 1)
					  {
						this->b = 0;
						return true;
					  }
					  if (i == 2)
					  {
						finish();
						return true;
					  }
					  return true;
					}
				  }
				  return Activity::onKeyDown(paramInt, paramKeyEvent);
				}

				bool EmulatorActivity::onKeyUp(int paramInt, KeyEvent *paramKeyEvent)
				{
				  if (paramInt != 4)
				  {
					int i = NativeCore::onKeyEvent(paramInt, 0, paramKeyEvent->getScanCode());
					if (i != 0)
					{
					  if (i == 1)
					  {
						this->b = 0;
						return true;
					  }
					  if (i == 2)
					  {
						finish();
						return true;
					  }
					  return true;
					}
				  }
				  else if (this->b < 2)
				  {
					NativeCore::onKeyEvent(0, 2, 0);
					return true;
				  }
				  return Activity::onKeyUp(paramInt, paramKeyEvent);
				}

				void EmulatorActivity::onPause()
				{
				  NativeCore::nativeOnPause();
				  Activity::onPause();
				  a(L"onPause()");
				}

				void EmulatorActivity::onResume()
				{
				  Activity::onResume();
				  NativeCore::nativeOnResume();
				  a(L"onResume()");
				}

				void EmulatorActivity::onStart()
				{
				  Activity::onStart();
				  NativeCore::nativeOnStart();
				  a(L"onStart()");
				}

				void EmulatorActivity::onStop()
				{
				  NativeCore::nativeOnStop();
				  Activity::onStop();
				  a(L"onStop()");
				}

				bool EmulatorActivity::onTouch(View *paramView, MotionEvent *paramMotionEvent)
				{
				  int i = paramMotionEvent->getActionIndex();
				  int j = paramMotionEvent->getPointerCount();
				  switch (paramMotionEvent->getActionMasked())
				  {
					default:
					  return true;
					case 0:
					case 5:
					  i = NativeCore::onTouchEvent(paramMotionEvent->getPointerId(i), static_cast<int>(paramMotionEvent->getX(i)), static_cast<int>(paramMotionEvent->getY(i)), 513);
					  if (i == 1)
					  {
						this->b = 0;
						return true;
					  }
					  if (i == 2)
					  {
						finish();
						return true;
					  }
					case 1:
					case 6:
					  i = NativeCore::onTouchEvent(paramMotionEvent->getPointerId(i), static_cast<int>(paramMotionEvent->getX(i)), static_cast<int>(paramMotionEvent->getY(i)), 512);
					  if (i == 1)
					  {
						this->b = 0;
						return true;
					  }
					  if (i == 2)
					  {
						finish();
						return true;
					  }
					case 2:
					  break;
				  }
				  char b1 = 0;
				  while (true)
				  {
					if (b1 < j)
					{
					  i = 4097;
					  if (!b1)
					  {
						i = 4353;
					  }
					  int k = i;
					  if (b1 == j - 1)
					  {
						k = i | 0x200;
					  }
					  if (NativeCore::onTouchEvent(paramMotionEvent->getPointerId(b1), static_cast<int>(paramMotionEvent->getX(b1)), static_cast<int>(paramMotionEvent->getY(b1)), k) == 1)
					  {
						this->b = 0;
					  }
					  b1++;
					}
				  }
				}

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(19) public void onWindowFocusChanged(boolean paramBoolean)
				void EmulatorActivity::onWindowFocusChanged(bool paramBoolean)
				{
				  Activity::onWindowFocusChanged(paramBoolean);
				  if (paramBoolean)
				  {
					getWindow().getDecorView().setSystemUiVisibility(5894);
				  }
				}

				void EmulatorActivity::surfaceChanged(SurfaceHolder *paramSurfaceHolder, int paramInt1, int paramInt2, int paramInt3)
				{
				  float f = (getResources().getDisplayMetrics()).density;
				  NativeCore::nativeSetSurface(paramSurfaceHolder->getSurface(), f);
				  this->b = 0;
				  a(L"emu surfaceChanged()");
				}

				void EmulatorActivity::surfaceCreated(SurfaceHolder *paramSurfaceHolder)
				{
				  float f = (getResources().getDisplayMetrics()).density;
				  NativeCore::nativeSetSurface(paramSurfaceHolder->getSurface(), f);
				  a(L"emu surfaceCreated()");
				}

				void EmulatorActivity::surfaceDestroyed(SurfaceHolder *paramSurfaceHolder)
				{
				  NativeCore::nativeSetSurface(nullptr, 0.0F);
				  a(L"emu surfaceDestroyed()");
				}
			}
		}
	}
}

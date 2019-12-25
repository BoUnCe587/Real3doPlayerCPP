#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace ru { namespace vastness { namespace altmer { namespace real3doplayer { class MainActivity; } } } }

namespace ru
{
	namespace vastness
	{
		namespace altmer
		{
			namespace real3doplayer
			{


				class NativeCore
				{
							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();

								  private:
									  class OnItemClickListenerAnonymousInnerClass : public android::widget::AdapterView::OnItemClickListener
									  {
									  private:
										  MainActivity *outerInstance;

										  android::content::Intent *intent;

									  public:
										  OnItemClickListenerAnonymousInnerClass(MainActivity *outerInstance, android::content::Intent *intent);

										  template<typename T1>
										  void onItemClick(AdapterView<T1> *param1AdapterView, View *param1View, int param1Int, long long param1Long);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass2 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass2(MainActivity *outerInstance);

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass4 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass4(MainActivity *outerInstance);

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass6 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass6(MainActivity *outerInstance);

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass8 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass8(MainActivity *outerInstance);

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass10 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass10(MainActivity *outerInstance, bool bool_Renamed);

										  bool a = false;

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass11 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass11(MainActivity *outerInstance);

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass12 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass12(MainActivity *outerInstance, bool bool_Renamed);

										  bool a = false;

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };

								  private:
									  class OnClickListenerAnonymousInnerClass13 : public android::content::DialogInterface::OnClickListener
									  {
									  private:
										  MainActivity *outerInstance;

									  public:
										  OnClickListenerAnonymousInnerClass13(MainActivity *outerInstance);

										  virtual void onClick(DialogInterface *param1DialogInterface, int param1Int);
									  };
								  };

							  private:
								  static NativeCore::StaticConstructor staticConstructor;


//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native int countGames(String paramString);
			  public:
				  __declspec(dllimport) static int countGames(const std::wstring &paramString);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void execCommand(String paramString1, String paramString2);
				  __declspec(dllimport) static void execCommand(const std::wstring &paramString1, const std::wstring &paramString2);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native String getResult(String paramString);
				  __declspec(dllimport) static std::wstring getResult(const std::wstring &paramString);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native String nameOfBios();
				  __declspec(dllimport) static std::wstring nameOfBios();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native String nameOfGame(int paramInt);
				  __declspec(dllimport) static std::wstring nameOfGame(int paramInt);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnCreate(int paramInt);
				  __declspec(dllimport) static void nativeOnCreate(int paramInt);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnDestroy();
				  __declspec(dllimport) static void nativeOnDestroy();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnMainCreate();
				  __declspec(dllimport) static void nativeOnMainCreate();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnMainDestroy();
				  __declspec(dllimport) static void nativeOnMainDestroy();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnPause();
				  __declspec(dllimport) static void nativeOnPause();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnResume();
				  __declspec(dllimport) static void nativeOnResume();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnStart();
				  __declspec(dllimport) static void nativeOnStart();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeOnStop();
				  __declspec(dllimport) static void nativeOnStop();

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void nativeSetSurface(android.view.Surface paramSurface, float paramFloat);
				  __declspec(dllimport) static void nativeSetSurface(Surface *paramSurface, float paramFloat);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native int onKeyEvent(int paramInt1, int paramInt2, int paramInt3);
				  __declspec(dllimport) static int onKeyEvent(int paramInt1, int paramInt2, int paramInt3);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native int onTouchEvent(int paramInt1, int paramInt2, int paramInt3, int paramInt4);
				  __declspec(dllimport) static int onTouchEvent(int paramInt1, int paramInt2, int paramInt3, int paramInt4);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void selectGame(int paramInt);
				  __declspec(dllimport) static void selectGame(int paramInt);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void setConfig(String paramString1, String paramString2);
				  __declspec(dllimport) static void setConfig(const std::wstring &paramString1, const std::wstring &paramString2);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void setImageRes(String paramString, int[] paramArrayOfInt, int paramInt1, int paramInt2);
				  __declspec(dllimport) static void setImageRes(const std::wstring &paramString, std::vector<int> &paramArrayOfInt, int paramInt1, int paramInt2);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native void setStoragePath(String paramString);
				  __declspec(dllimport) static void setStoragePath(const std::wstring &paramString);

//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//				  public static native String stringFromJNI();
				  __declspec(dllimport) static std::wstring stringFromJNI();
				};
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "ILicensingService.h"
#include "a.h"
#include "k.h"
#include "a/b.h"

namespace com
{
	namespace google
	{
		namespace android
		{
			namespace vending
			{
				namespace licensing
				{
					using android::content::ComponentName;
					using android::content::Context;
					using android::content::ServiceConnection;
					using android::content::pm::PackageManager;
					using android::os::Handler;
					using android::os::HandlerThread;
					using android::os::IBinder;
					using android::os::RemoteException;
					using android::util::Log;
					using a = com::google::android::vending::licensing::a::a;
					using b = com::google::android::vending::licensing::a::b;
constexpr java::security::SecureRandom *d::com;

					d::d(Context *paramContext, i *parami, const std::wstring &paramString) : d(paramContext), e(parami), g(this->d_Renamed->getPackageName()), h(a(paramContext, this->g))
					{
					  this->c = com->google.android.vending.licensing.a::a(paramString);
					  HandlerThread *handlerThread = new HandlerThread(L"background thread");
					  handlerThread->start();
					  this->f = new Handler(handlerThread->getLooper());
					}

					std::wstring d::com->google.android.vending.licensing.a::a(Context *paramContext, const std::wstring &paramString)
					{
					  try
					  {
						int k = (paramContext->getPackageManager().getPackageInfo(paramString, 0)).versionCode;
						return std::to_wstring(k);
					  }
					  catch (const NameNotFoundException &paramContext)
					  {
						Log::e(L"LicenseChecker", L"Package not found. could not get version code.");
						return L"";
					  }
					}

					PublicKey *d::com->google.android.vending.licensing.a::a(const std::wstring &paramString)
					{
					  try
					  {
						std::vector<char> arrayOfByte = com->google.android.vending.licensing.a::a::a(paramString);
						X509EncodedKeySpec tempVar(arrayOfByte);
						return KeyFactory::getInstance(L"RSA").generatePublic(&tempVar);
					  }
					  catch (const NoSuchAlgorithmException &paramString)
					  {
//JAVA TO C++ CONVERTER TODO TASK: The std::exception constructor has no parameters:
//ORIGINAL LINE: throw new RuntimeException(paramString);
						throw std::exception();
					  }
					  catch (const b &paramString)
					  {
						Log::e(L"LicenseChecker", L"Could not decode from Base64.");
						throw std::invalid_argument(paramString);
					  }
					  catch (const InvalidKeySpecException &paramString)
					  {
						Log::e(L"LicenseChecker", L"Invalid key specification.");
						throw std::invalid_argument(paramString);
					  }
					}

					void d::com->google.android.vending.licensing.a::a(f *paramf)
					{ // Byte code:
					  //   0: aload_0
					  //   1: monitorenter
					  //   2: aload_0
					  //   3: getfield i : Ljava/util/Set;
					  //   6: aload_1
					  //   7: invokeinterface remove : (Ljava/lang/Object;)Z
					  //   12: pop
					  //   13: aload_0
					  //   14: getfield i : Ljava/util/Set;
					  //   17: invokeinterface isEmpty : ()Z
					  //   22: ifeq -> 29
					  //   25: aload_0
					  //   26: invokespecial c : ()V
					  //   29: aload_0
					  //   30: monitorexit
					  //   31: return
					  //   32: astore_1
					  //   33: aload_0
					  //   34: monitorexit
					  //   35: aload_1
					  //   36: athrow
					  // Exception table:
					  //   from	to	target	type
					  //   2	29	32	finally }

					void com->google.android.vending.licensing.a::b()
					{
					  while (true)
					  {
						f *f1 = static_cast<f*>(this->j.pop_front());
						if (f1 != nullptr)
						{
						  try
						  {
							Log::i(L"LicenseChecker", L"Calling checkLicense on service for " + f1->c());
							com->google::android::vending::licensing::a::a tempVar(this, f1);
							this->b.a(f1->b(), f1->c(), &tempVar);
							this->i->add(f1);
							continue;
						  }
						  catch (const RemoteException &remoteException)
						  {
							Log::w(L"LicenseChecker", L"RemoteException in checkLicense call.", remoteException);
							com->google.android.vending.licensing.a::b(f1);
							continue;
						  }
						}
						break;
					  }
					}

					void com->google.android.vending.licensing.a::b(f paramf)
					{ // Byte code:
					  //   0: aload_0
					  //   1: monitorenter
					  //   2: aload_0
					  //   3: getfield e : Lcom/google/android/vending/licensing/i;
					  //   6: sipush #291
					  //   9: aconst_null
					  //   10: invokeinterface a : (ILcom/google/android/vending/licensing/k;)V
					  //   15: aload_0
					  //   16: getfield e : Lcom/google/android/vending/licensing/i;
					  //   19: invokeinterface a : ()Z
					  //   24: ifeq -> 42
					  //   27: aload_1
					  //   28: invokevirtual a : ()Lcom/google/android/vending/licensing/e;
					  //   31: sipush #291
					  //   34: invokeinterface a : (I)V
					  //   39: aload_0
					  //   40: monitorexit
					  //   41: return
					  //   42: aload_1
					  //   43: invokevirtual a : ()Lcom/google/android/vending/licensing/e;
					  //   46: sipush #291
					  //   49: invokeinterface b : (I)V
					  //   54: goto -> 39
					  //   57: astore_1
					  //   58: aload_0
					  //   59: monitorexit
					  //   60: aload_1
					  //   61: athrow
					  // Exception table:
					  //   from	to	target	type
					  //   2	39	57	finally
					  //   42	54	57	finally }

					void c()
					{
					  if (this->b != nullptr)
					  {
						try
						{
						  this->d_Renamed->unbindService(this);
						}
						catch (const std::invalid_argument &illegalArgumentException)
						{
						  Log::e(L"LicenseChecker", L"Unable to unbind from licensing service (already unbound)");
						}
						this->b = nullptr;
					  }
					}

					int d()
					{
						return com->google.android.vending.licensing.a::a::nextInt();
					}

				public:
					void com->google.android.vending.licensing.a::a()
					{ // Byte code:
					  //   0: aload_0
					  //   1: monitorenter
					  //   2: aload_0
					  //   3: invokespecial c : ()V
					  //   6: aload_0
					  //   7: getfield f : Landroid/os/Handler;
					  //   10: invokevirtual getLooper : ()Landroid/os/Looper;
					  //   13: invokevirtual quit : ()V
					  //   16: aload_0
					  //   17: monitorexit
					  //   18: return
					  //   19: astore_1
					  //   20: aload_0
					  //   21: monitorexit
					  //   22: aload_1
					  //   23: athrow
					  // Exception table:
					  //   from	to	target	type
					  //   2	16	19	finally }

					void com->google.android.vending.licensing.a::a(e parame)
					{ // Byte code:
					  //   0: aload_0
					  //   1: monitorenter
					  //   2: aload_0
					  //   3: getfield e : Lcom/google/android/vending/licensing/i;
					  //   6: invokeinterface a : ()Z
					  //   11: ifeq -> 35
					  //   14: ldc 'LicenseChecker'
					  //   16: ldc_w 'Using cached license response'
					  //   19: invokestatic i : (Ljava/lang/String;Ljava/lang/String;)I
					  //   22: pop
					  //   23: aload_1
					  //   24: sipush #256
					  //   27: invokeinterface a : (I)V
					  //   32: aload_0
					  //   33: monitorexit
					  //   34: return
					  //   35: new com/google/android/vending/licensing/f
					  //   38: dup
					  //   39: aload_0
					  //   40: getfield e : Lcom/google/android/vending/licensing/i;
					  //   43: new com/google/android/vending/licensing/g
					  //   46: dup
					  //   47: invokespecial <init> : ()V
					  //   50: aload_1
					  //   51: aload_0
					  //   52: invokespecial d : ()I
					  //   55: aload_0
					  //   56: getfield g : Ljava/lang/String;
					  //   59: aload_0
					  //   60: getfield h : Ljava/lang/String;
					  //   63: invokespecial <init> : (Lcom/google/android/vending/licensing/i;Lcom/google/android/vending/licensing/b;Lcom/google/android/vending/licensing/e;ILjava/lang/String;Ljava/lang/String;)V
					  //   66: astore_2
					  //   67: aload_0
					  //   68: getfield b : Lcom/google/android/vending/licensing/ILicensingService;
					  //   71: ifnonnull -> 177
					  //   74: ldc 'LicenseChecker'
					  //   76: ldc_w 'Binding to licensing service.'
					  //   79: invokestatic i : (Ljava/lang/String;Ljava/lang/String;)I
					  //   82: pop
					  //   83: aload_0
					  //   84: getfield d : Landroid/content/Context;
					  //   87: new android/content/Intent
					  //   90: dup
					  //   91: new java/lang/String
					  //   94: dup
					  //   95: ldc_w 'Y29tLmFuZHJvaWQudmVuZGluZy5saWNlbnNpbmcuSUxpY2Vuc2luZ1NlcnZpY2U='
					  //   98: invokestatic a : (Ljava/lang/String;)[B
					  //   101: invokespecial <init> : ([B)V
					  //   104: invokespecial <init> : (Ljava/lang/String;)V
					  //   107: ldc_w 'com.android.vending'
					  //   110: invokevirtual setPackage : (Ljava/lang/String;)Landroid/content/Intent;
					  //   113: aload_0
					  //   114: iconst_1
					  //   115: invokevirtual bindService : (Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
					  //   118: ifeq -> 152
					  //   121: aload_0
					  //   122: getfield j : Ljava/util/Queue;
					  //   125: aload_2
					  //   126: invokeinterface offer : (Ljava/lang/Object;)Z
					  //   131: pop
					  //   132: goto -> 32
					  //   135: astore_2
					  //   136: aload_1
					  //   137: bipush #6
					  //   139: invokeinterface c : (I)V
					  //   144: goto -> 32
					  //   147: astore_1
					  //   148: aload_0
					  //   149: monitorexit
					  //   150: aload_1
					  //   151: athrow
					  //   152: ldc 'LicenseChecker'
					  //   154: ldc_w 'Could not bind to service.'
					  //   157: invokestatic e : (Ljava/lang/String;Ljava/lang/String;)I
					  //   160: pop
					  //   161: aload_0
					  //   162: aload_2
					  //   163: invokespecial b : (Lcom/google/android/vending/licensing/f;)V
					  //   166: goto -> 32
					  //   169: astore_1
					  //   170: aload_1
					  //   171: invokevirtual printStackTrace : ()V
					  //   174: goto -> 32
					  //   177: aload_0
					  //   178: getfield j : Ljava/util/Queue;
					  //   181: aload_2
					  //   182: invokeinterface offer : (Ljava/lang/Object;)Z
					  //   187: pop
					  //   188: aload_0
					  //   189: invokespecial b : ()V
					  //   192: goto -> 32
					  // Exception table:
					  //   from	to	target	type
					  //   2	32	147	finally
					  //   35	83	147	finally
					  //   83	132	135	java/lang/SecurityException
					  //   83	132	169	com/google/android/vending/licensing/a/b
					  //   83	132	147	finally
					  //   136	144	147	finally
					  //   152	166	135	java/lang/SecurityException
					  //   152	166	169	com/google/android/vending/licensing/a/b
					  //   152	166	147	finally
					  //   170	174	147	finally
					  //   177	192	147	finally }

					void onServiceConnected(ComponentName paramComponentName, IBinder paramIBinder)
					{ // Byte code:
					  //   0: aload_0
					  //   1: monitorenter
					  //   2: aload_0
					  //   3: aload_2
					  //   4: invokestatic a : (Landroid/os/IBinder;)Lcom/google/android/vending/licensing/ILicensingService;
					  //   7: putfield b : Lcom/google/android/vending/licensing/ILicensingService;
					  //   10: aload_0
					  //   11: invokespecial b : ()V
					  //   14: aload_0
					  //   15: monitorexit
					  //   16: return
					  //   17: astore_1
					  //   18: aload_0
					  //   19: monitorexit
					  //   20: aload_1
					  //   21: athrow
					  // Exception table:
					  //   from	to	target	type
					  //   2	14	17	finally }

					void onServiceDisconnected(ComponentName paramComponentName)
					{ // Byte code:
					  //   0: aload_0
					  //   1: monitorenter
					  //   2: ldc 'LicenseChecker'
					  //   4: ldc_w 'Service unexpectedly disconnected.'
					  //   7: invokestatic w : (Ljava/lang/String;Ljava/lang/String;)I
					  //   10: pop
					  //   11: aload_0
					  //   12: aconst_null
					  //   13: putfield b : Lcom/google/android/vending/licensing/ILicensingService;
					  //   16: aload_0
					  //   17: monitorexit
					  //   18: return
					  //   19: astore_1
					  //   20: aload_0
					  //   21: monitorexit
					  //   22: aload_1
					  //   23: athrow
					  // Exception table:
					  //   from	to	target	type
					  //   2	16	19	finally }

				private:
					class a extends c->a
					{
					  final f com->google.android.vending.licensing.a::b;

					  Runnable c;

				  public:
					  com->google.android.vending.licensing.a::a(d this$0, f param1f)
					  {
						this->b = param1f;
						this->c = [&] ()
						{
						  Log::i(L"LicenseChecker", L"Check timed out.");
						  d_Renamed->a(this->b.a, d_Renamed->a.a(this->b));
						  d_Renamed->b(this->b.a, d_Renamed->a.a(this->b));
						};
						com->google.android.vending.licensing.a::a();
					  }

				  private:
					  void com->google.android.vending.licensing.a::a()
					  {
						Log::i(L"LicenseChecker", L"Start monitoring timeout.");
						d_Renamed->c(this->a).postDelayed(this->c, 10000LL);
					  }

					  void com->google.android.vending.licensing.a::b()
					  {
						Log::i(L"LicenseChecker", L"Clearing timeout.");
						d_Renamed->c(this->a).removeCallbacks(this->c);
					  }

				  public:
					  void com->google.android.vending.licensing.a::a(int param1Int, std::wstring param1String1, std::wstring param1String2)
					  {
						  d_Renamed->c(this->a).post([&] ()
						  {
							Log::i(L"LicenseChecker", L"Received response.");
							if (d_Renamed->a(this->d_Renamed->a)->contains(d_Renamed->a.a(this->d_Renamed)))
							{
							  d_Renamed->a.b(this->d_Renamed);
							  d_Renamed->a.a(this->d_Renamed).a(d_Renamed->b(this->d_Renamed->a), this->a, this->b, this->c);
							  d_Renamed->b(this->d_Renamed->a, d_Renamed->a.a(this->d_Renamed));
							}
						  }
						   );
					  }
					}

//JAVA TO C++ CONVERTER TODO TASK: Local classes are not converted by Java to C++ Converter:
//					class nullptr implements Runnable
										//  {
										//	nullptr(d this$0, d param1d)
										//	{
										//	}
										//
										//	public void run()
										//	{
										//	  Log.i("LicenseChecker", "Check timed out.");
										//	  d.a(this.b.a, d.a.a(this.b));
										//	  d.b(this.b.a, d.a.a(this.b));
										//	}
										//  }

//JAVA TO C++ CONVERTER TODO TASK: Local classes are not converted by Java to C++ Converter:
//					class nullptr implements Runnable
										//  {
										//	nullptr(d this$0, int param1Int, String param1String1, String param1String2)
										//	{
										//	}
										//
										//	public void run()
										//	{
										//	  Log.i("LicenseChecker", "Received response.");
										//	  if (d.a(this.d.a).contains(d.a.a(this.d)))
										//	  {
										//		d.a.b(this.d);
										//		d.a.a(this.d).a(d.b(this.d.a), this.a, this.b, this.c);
										//		d.b(this.d.a, d.a.a(this.d));
										//	  }
										//	}
										//  }
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

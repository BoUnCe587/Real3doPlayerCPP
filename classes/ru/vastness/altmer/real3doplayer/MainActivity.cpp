//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "MainActivity.h"
#include "../../../../com/google/android/vending/licensing/e.h"
#include "../../../../com/google/android/vending/licensing/d.h"
#include "NativeCore.h"
#include "EmulatorActivity.h"
#include "../../../../com/google/android/vending/licensing/l.h"

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
				using android::app::AlertDialog;
				using android::app::Dialog;
				using android::app::UiModeManager;
				using android::content::Context;
				using android::content::DialogInterface;
				using android::content::Intent;
				using android::graphics::Bitmap;
				using android::graphics::BitmapFactory;
				using android::net::Uri;
				using android::os::Build;
				using android::os::Bundle;
				using android::os::Environment;
				using android::os::Handler;
				using android::provider::Settings;
				using a = android::support::v4::a::a;
				using a = android::support::v4::b::a;
				using android::text::Html;
				using android::text::TextUtils;
				using android::view::LayoutInflater;
				using android::view::View;
				using android::view::ViewGroup;
				using android::widget::AdapterView;
				using android::widget::BaseAdapter;
				using android::widget::ImageView;
				using android::widget::ListView;
				using android::widget::Switch;
				using android::widget::TabHost;
				using android::widget::TextView;
				using android::widget::Toast;
				using com::google::android::vending::licensing::a;
				using d = com::google::android::vending::licensing::d;
				using e = com::google::android::vending::licensing::e;
				using l = com::google::android::vending::licensing::l;

				View *MainActivity::android.support::v4::a::a(int paramInt)
				{
				  View *view = android.view::LayoutInflater::from(this).inflate(2130968616, nullptr);
				  (static_cast<ImageView*>(view->findViewById(2131558521)))->setImageResource(paramInt);
				  return view;
				}

				void MainActivity::android.support::v4::a::a(int paramInt, const std::wstring &paramString)
				{
				  try
				  {
					Bitmap *bitmap = android.graphics::BitmapFactory::decodeStream(getResources().openRawResource(paramInt));
					if (bitmap == nullptr)
					{
					  return;
					}
					paramInt = bitmap->getWidth();
					int i1 = bitmap->getHeight();
					std::vector<int> arrayOfInt(paramInt * i1);
					bitmap->getPixels(arrayOfInt, 0, paramInt, 0, 0, paramInt, i1);
					NativeCore::setImageRes(paramString, arrayOfInt, paramInt, i1);
					return;
				  }
				  catch (const std::exception &paramString)
				  {
					c(L"can't load resource");
					return;
				  }
				}

				void MainActivity::b(int paramInt)
				{
					this->m->post([&] ()
					{
						this->b_Renamed->showDialog(this->a);
					}
					 );
				}

				void MainActivity::c(const std::wstring &paramString)
				{
				}

				void MainActivity::f()
				{
				  android.support::v4::a::a(2131099648, L"a0");
				  android.support::v4::a::a(2131099649, L"b0");
				  android.support::v4::a::a(2131099650, L"c0");
				  android.support::v4::a::a(2131099652, L"cr");
				  android.support::v4::a::a(2131099655, L"l0");
				  android.support::v4::a::a(2131099657, L"r0");
				  android.support::v4::a::a(2131099659, L"x0");
				  android.support::v4::a::a(2131099656, L"p0");
				  android.support::v4::a::a(2131099651, L"ccfg");
				}

				void MainActivity::g()
				{
				  setProgressBarIndeterminateVisibility(true);
				  this->k->a(this->j);
				}

				int MainActivity::h()
				{
					return (android.os::Build::VERSION::SDK_INT >= 17) ? Runtime::getRuntime().availableProcessors() : i();
				}

				int MainActivity::i()
				{
				  try
				  {
					File tempVar(L"/sys/devices/system/cpu/");
					a tempVar2(this);
					return (&tempVar)->listFiles(&tempVar2)->length;
				  }
				  catch (const std::exception &exception)
				  {
					return 1;
				  }
				}

				std::wstring MainActivity::android.support::v4::a::a(const std::wstring &paramString)
				{
				  try
				  {
					File *file = new File(paramString);
					if (file->exists() && file->isDirectory())
					{
					  std::vector<std::wstring> arrayOfString = file->list();
					  for (char b1 = 0; b1 < arrayOfString.size(); b1++)
					  {
						if (StringHelper::toLower(arrayOfString[b1])->compareTo(L"3do") == 0)
						{
						  new File(paramString + L"/" + arrayOfString[b1]);
						  if (file->exists() && file->isDirectory())
						  {
							return paramString + L"/" + arrayOfString[b1];
						  }
						}
					  }
					}
				  }
				  catch (const std::exception &paramString)
				  {
					c(L"can't open path");
				  }
				  return L"";
				}

				Set<std::wstring> *MainActivity::android.support::v4::a::a()
				{
				  char b1 = 1;
				  char b2 = 0;
				  std::unordered_set hashSet = std::unordered_set();
				  try
				  {
					std::wstring str1 = System::getenv(L"EXTERNAL_STORAGE");
					std::wstring str2 = System::getenv(L"SECONDARY_STORAGE");
					std::wstring str3 = System::getenv(L"EMULATED_STORAGE_TARGET");
					if (android.text::TextUtils->isEmpty(str3))
					{
					  if (android.text::TextUtils->isEmpty(str1))
					  {
						hashSet.insert(L"/storage/sdcard0");
					  }
					  else
					  {
						hashSet.insert(str1);
					  }
					}
					else
					{
					  std::wstring str;
					  if (android.os::Build::VERSION::SDK_INT < 17)
					  {
						str1 = L"";
					  }
					  else
					  {
						str1 = android.os::Environment::getExternalStorageDirectory().getAbsolutePath();
						std::vector<std::wstring> arrayOfString = this->b_Renamed->split(str1);
						str = arrayOfString[arrayOfString.size() - 1];
						try
						{
						  std::stoi(str);
						}
						catch (const NumberFormatException &numberFormatException)
						{
						  b1 = 0;
						}
						if (!b1)
						{
						  str = L"";
						}
					  }
					  if (android.text::TextUtils->isEmpty(str))
					  {
						hashSet.insert(str3);
					  }
					  else
					  {
						hashSet.insert(str3 + File::separator + str);
					  }
					}
					if (!android.text::TextUtils->isEmpty(str2))
					{
					  Collections::addAll(hashSet, str2.split(File::pathSeparator));
					}
				  }
				  catch (const std::exception &exception)
				  {
				  }
				  try
				  {
					File *file = new File(L"/mnt/");
					if (file->isDirectory())
					{
					  std::vector<std::wstring> arrayOfString = file->list();
					  std::vector list = Arrays::asList(std::vector<std::wstring> {L"external_sd", L"ext_sd", L"external", L"extSdCard"});
					  int i1 = arrayOfString.size();
					  for (b1 = b2; b1 < i1; b1++)
					  {
						std::wstring str = arrayOfString[b1];
						std::vector::const_iterator iterator = list.begin();
						while (iterator != list.end())
						{
						  if (str.find((std::wstring)*iterator) != std::wstring::npos)
						  {
							hashSet.insert(L"/mnt/" + str);
							break;
						  }
							iterator++;
						}
					  }
					}
				  }
				  catch (const std::exception &exception)
				  {
				  }
				  return hashSet;
				}

				std::wstring MainActivity::b(const std::wstring &paramString)
				{
				  try
				  {
					std::vector<char> arrayOfByte = MessageDigest::getInstance(L"MD5").digest(paramString.getBytes());
					StringBuilder *stringBuffer = new StringBuilder();
					for (char b1 = 0; b1 < arrayOfByte.size(); b1++)
					{
					  stringBuffer->append(Integer::toHexString(arrayOfByte[b1] & 0xFF | 0x100)->substr(1, 2));
					}
					return stringBuffer->toString();
				  }
				  catch (const NoSuchAlgorithmException &paramString)
				  {
					return L"";
				  }
				}

				Set<std::wstring> *MainActivity::b()
				{ // Byte code:
				  //   0: new java/util/HashSet
				  //   3: dup
				  //   4: invokespecial <init> : ()V
				  //   7: astore #5
				  //   9: new java/lang/StringBuilder
				  //   12: dup
				  //   13: invokespecial <init> : ()V
				  //   16: astore #6
				  //   18: new java/lang/ProcessBuilder
				  //   21: dup
				  //   22: iconst_0
				  //   23: anewarray java/lang/String
				  //   26: invokespecial <init> : ([Ljava/lang/String;)V
				  //   29: iconst_1
				  //   30: anewarray java/lang/String
				  //   33: dup
				  //   34: iconst_0
				  //   35: ldc_w 'mount'
				  //   38: aastore
				  //   39: invokevirtual command : ([Ljava/lang/String;)Ljava/lang/ProcessBuilder;
				  //   42: iconst_1
				  //   43: invokevirtual redirectErrorStream : (Z)Ljava/lang/ProcessBuilder;
				  //   46: invokevirtual start : ()Ljava/lang/Process;
				  //   49: astore #7
				  //   51: aload #7
				  //   53: invokevirtual waitFor : ()I
				  //   56: pop
				  //   57: aload #7
				  //   59: invokevirtual getInputStream : ()Ljava/io/InputStream;
				  //   62: astore #7
				  //   64: sipush #1024
				  //   67: newarray byte
				  //   69: astore #8
				  //   71: aload #7
				  //   73: aload #8
				  //   75: invokevirtual read : ([B)I
				  //   78: iconst_m1
				  //   79: if_icmpeq -> 232
				  //   82: aload #6
				  //   84: new java/lang/String
				  //   87: dup
				  //   88: aload #8
				  //   90: invokespecial <init> : ([B)V
				  //   93: invokevirtual append : (Ljava/lang/String;)Ljava/lang/StringBuilder;
				  //   96: pop
				  //   97: goto -> 71
				  //   100: astore #7
				  //   102: aload #7
				  //   104: invokevirtual printStackTrace : ()V
				  //   107: aload #6
				  //   109: invokevirtual toString : ()Ljava/lang/String;
				  //   112: ldc_w '\\n'
				  //   115: invokevirtual split : (Ljava/lang/String;)[Ljava/lang/String;
				  //   118: astore #6
				  //   120: aload #6
				  //   122: arraylength
				  //   123: istore_3
				  //   124: iconst_0
				  //   125: istore_1
				  //   126: iload_1
				  //   127: iload_3
				  //   128: if_icmpge -> 249
				  //   131: aload #6
				  //   133: iload_1
				  //   134: aaload
				  //   135: astore #7
				  //   137: aload #7
				  //   139: invokevirtual toLowerCase : ()Ljava/lang/String;
				  //   142: ldc_w 'asec'
				  //   145: invokevirtual contains : (Ljava/lang/CharSequence;)Z
				  //   148: ifne -> 240
				  //   151: aload #7
				  //   153: ldc_w '.*vold.*(vfat|ntfs|exfat|fat32|ext3|ext4).*rw.*'
				  //   156: invokevirtual matches : (Ljava/lang/String;)Z
				  //   159: ifeq -> 240
				  //   162: aload #7
				  //   164: ldc_w ' '
				  //   167: invokevirtual split : (Ljava/lang/String;)[Ljava/lang/String;
				  //   170: astore #7
				  //   172: aload #7
				  //   174: arraylength
				  //   175: istore #4
				  //   177: iconst_0
				  //   178: istore_2
				  //   179: iload_2
				  //   180: iload #4
				  //   182: if_icmpge -> 240
				  //   185: aload #7
				  //   187: iload_2
				  //   188: aaload
				  //   189: astore #8
				  //   191: aload #8
				  //   193: ldc '/'
				  //   195: invokevirtual startsWith : (Ljava/lang/String;)Z
				  //   198: ifeq -> 225
				  //   201: aload #8
				  //   203: invokevirtual toLowerCase : ()Ljava/lang/String;
				  //   206: ldc_w 'vold'
				  //   209: invokevirtual contains : (Ljava/lang/CharSequence;)Z
				  //   212: ifne -> 225
				  //   215: aload #5
				  //   217: aload #8
				  //   219: invokeinterface add : (Ljava/lang/Object;)Z
				  //   224: pop
				  //   225: iload_2
				  //   226: iconst_1
				  //   227: iadd
				  //   228: istore_2
				  //   229: goto -> 179
				  //   232: aload #7
				  //   234: invokevirtual close : ()V
				  //   237: goto -> 107
				  //   240: iload_1
				  //   241: iconst_1
				  //   242: iadd
				  //   243: istore_1
				  //   244: goto -> 126
				  //   247: astore #6
				  //   249: aload #5
				  //   251: areturn
				  // Exception table:
				  //   from	to	target	type
				  //   9	18	247	java/lang/Exception
				  //   18	71	100	java/lang/Exception
				  //   71	97	100	java/lang/Exception
				  //   102	107	247	java/lang/Exception
				  //   107	124	247	java/lang/Exception
				  //   137	177	247	java/lang/Exception
				  //   191	225	247	java/lang/Exception
				  //   232	237	100	java/lang/Exception }

				std::wstring c()
				{
				  Set *set = android.support::v4::a::a();
				  set->addAll(b());
				  Set::const_iterator iterator = set->begin();
				  while (iterator != set->end())
				  {
					std::wstring str = android.support::v4::a::a((std::wstring)*iterator);
					if (str != L"")
					{
					  return str;
					}
					  iterator++;
				  }
				  return android.os::Environment::getExternalStorageDirectory().getAbsolutePath();
				}

				std::wstring com->google.android.vending.licensing.d()
				{
				  std::wstring str2 = getApplicationContext().getFilesDir().getAbsolutePath();
				  std::wstring str1 = str2;
				  if (this->i_Renamed->d(L"saves"))
				  {
					str1 = str2;
					if (!this->i_Renamed->f(L"saves")->isEmpty())
					{
					  str1 = this->i_Renamed->f(L"saves");
					}
				  }
				  return str1;
				}

				void com->google.android.vending.licensing.e()
				{
				  Intent *intent = new android.content::Intent(getApplicationContext(), EmulatorActivity::typeid);
				  try
				  {
					if (this->i_Renamed->d(L"lockOri"))
					{
					  intent->putExtra(L"lockOrient", static_cast<Boolean>(this->i_Renamed->f(L"lockOri")));
					}
					if (this->i_Renamed->d(L"keepAspect"))
					{
					  NativeCore::setConfig(L"keepAspect", this->i_Renamed->f(L"keepAspect"));
					}
					if (this->i_Renamed->d(L"dspMT"))
					{
					  NativeCore::setConfig(L"dspMT", this->i_Renamed->f(L"dspMT"));
					}
					if (this->i_Renamed->d(L"celMT"))
					{
					  NativeCore::setConfig(L"celMT", this->i_Renamed->f(L"celMT"));
					}
				  }
				  catch (const std::exception &exception)
				  {
				  }
				  if ((static_cast<UiModeManager*>(getSystemService(L"uimode")))->getCurrentModeType() == 4)
				  {
					intent->putExtra(L"lockOrient", false);
				  }
				  if (this->f_Renamed != L"")
				  {
					NativeCore::setConfig(L"ext-rom", this->f_Renamed);
				  }
				  if (this->g_Renamed != L"")
				  {
					NativeCore::setConfig(L"ext-font", this->g_Renamed);
				  }
				  if (this->h_Renamed != L"")
				  {
					NativeCore::setConfig(L"ext-cd", this->h_Renamed);
				  }
				  intent->putExtra(L"lunchMode", 0);
				  startActivityForResult(intent, 3);
				}

				final void onActivityResult(int paramInt1, int paramInt2, android.content::Intent paramIntent)
				{
				  if (paramInt1 == 3)
				  {
					if (this->e)
					{
					  finish();
					}
					return;
				  }
				  if (paramInt1 == 1)
				  {
					std::wstring str = NativeCore::getResult(L"dialogResult");
					if (str != L"" && !str.isEmpty())
					{
					  this->c_Renamed->a(str);
					  this->c_Renamed->notifyDataSetChanged();
					  (static_cast<TabHost*>(findViewById(2131558482)))->setCurrentTab(0);
					  this->i_Renamed->a(L"dumps", str);
					  str = getResources().getString(2131165211) + L" " + str;
					  (static_cast<TextView*>(findViewById(2131558488)))->setText(str);
					  return;
					}
					return;
				  }
				  if (paramInt1 == 2)
				  {
					std::wstring str = NativeCore::getResult(L"dialogResult");
					if (str != L"" && !str.isEmpty())
					{
					  this->i_Renamed->a(L"saves", str);
					  b(4);
					}
					NativeCore::setConfig(L"userStorage", com->google.android.vending.licensing.d());
					str = getResources().getString(2131165217) + L" " + com->google.android.vending.licensing.d();
					(static_cast<TextView*>(findViewById(2131558490)))->setText(str);
					return;
				  }
				}

				void onCfgControls(android.view::View paramView)
				{
				  Intent *intent = new android.content::Intent(getApplicationContext(), EmulatorActivity::typeid);
				  intent->putExtra(L"lockOrient", false);
				  intent->putExtra(L"lunchMode", 1);
				  startActivity(intent);
				}

				void onCleanNVRAM(android.view::View paramView)
				{
					b(3);
				}

				void onCreate(android.os::Bundle paramBundle)
				{
				  Activity::onCreate(paramBundle);
				  requestWindowFeature(5);
				  requestWindowFeature(1);
				  getWindow().setFlags(1024, 1024);
				  Intent *intent = getIntent();
				  this->f_Renamed = intent->getStringExtra(L"rom");
				  this->h_Renamed = intent->getStringExtra(L"cd");
				  this->g_Renamed = intent->getStringExtra(L"font");
				  if (this->h_Renamed != L"" || this->f_Renamed != L"")
				  {
					this->e = true;
					setContentView(2130968601);
				  }
				  else
				  {
					setContentView(2130968603);
					TabHost *tabHost = static_cast<TabHost*>(findViewById(2131558482));
					tabHost->setup();
					TabHost::TabSpec *tabSpec = tabHost->newTabSpec(L"tag1");
					tabSpec->setIndicator(android.support::v4::a::a(2130837571));
					tabSpec->setContent(2131558483);
					tabHost->addTab(tabSpec);
					tabSpec = tabHost->newTabSpec(L"tag2");
					tabSpec->setIndicator(android.support::v4::a::a(2130837575));
					tabSpec->setContent(2131558485);
					tabHost->addTab(tabSpec);
					tabSpec = tabHost->newTabSpec(L"tag3");
					tabSpec->setIndicator(android.support::v4::a::a(2130837568));
					tabSpec->setContent(2131558501);
					tabHost->addTab(tabSpec);
				  }
				  if (android.os::Build::VERSION::SDK_INT >= 23 && (android.support::v4::a::a::a(this, L"android.permission.WRITE_EXTERNAL_STORAGE") != 0 || android.support::v4::a::a::a(this, L"android.permission.READ_EXTERNAL_STORAGE") != 0))
				  {
					android.support::v4::a::a::a(this, std::vector<std::wstring> {L"android.permission.WRITE_EXTERNAL_STORAGE", L"android.permission.READ_EXTERNAL_STORAGE"}, 1);
				  }
				  NativeCore::nativeOnMainCreate();
				  str1 = android.os::Build::BOARD + android.os::Build::BRAND + android.os::Build::CPU_ABI + android.os::Build::DEVICE + android.os::Build::DISPLAY + android.os::Build::HOST + android.os::Build::ID + android.os::Build::MANUFACTURER + android.os::Build::MODEL + android.os::Build::PRODUCT + android.os::Build::TAGS + android.os::Build::TYPE + android.os::Build::USER;
				  std::wstring str2 = android.provider::Settings::Secure::getString(getContentResolver(), L"android_id");
				  str2 = b(str1 + str2);
				  if (str2.isEmpty())
				  {
					finish();
				  }
				  this->i_Renamed = new android.support::v4::a::a(getApplicationContext(), L"Real3DOPalyer-preferences", str2 + L"JustPlay", true);
				  if (!this->e)
				  {
					try
					{
					  if (this->i_Renamed->d(L"lockOri"))
					  {
						(static_cast<Switch*>(findViewById(2131558495)))->setChecked(static_cast<Boolean>(this->i_Renamed->f(L"lockOri")).booleanValue());
					  }
					  if (this->i_Renamed->d(L"keepAspect"))
					  {
						(static_cast<Switch*>(findViewById(2131558496)))->setChecked(static_cast<Boolean>(this->i_Renamed->f(L"keepAspect")).booleanValue());
					  }
					  if (this->i_Renamed->d(L"dspMT"))
					  {
						(static_cast<Switch*>(findViewById(2131558497)))->setChecked(static_cast<Boolean>(this->i_Renamed->f(L"dspMT")).booleanValue());
					  }
					  if (this->i_Renamed->d(L"celMT"))
					  {
						(static_cast<Switch*>(findViewById(2131558498)))->setChecked(static_cast<Boolean>(this->i_Renamed->f(L"celMT")).booleanValue());
					  }
					}
					catch (const std::exception &str1)
					{
					}
					if ((static_cast<UiModeManager*>(getSystemService(L"uimode")))->getCurrentModeType() == 4)
					{
					  (static_cast<Switch*>(findViewById(2131558495)))->setEnabled(false);
					}
					str1 = c();
					if (this->i_Renamed->d(L"dumps"))
					{
					  str1 = this->i_Renamed->f(L"dumps");
					}
					str = getResources().getString(2131165211) + L" " + str1;
					(static_cast<TextView*>(findViewById(2131558488)))->setText(str);
					int i2 = -1;
					int i1 = i2;
					try
					{
					  if (this->i_Renamed->d(L"selectedIndex"))
					  {
						i1 = static_cast<Integer>(this->i_Renamed->f(L"selectedIndex")).intValue();
					  }
					}
					catch (const std::exception &str)
					{
					  i1 = i2;
					}
					this->c_Renamed = new b(this, this, str1, i1);
					this->d = static_cast<ListView*>(findViewById(2131558484));
					this->d.setAdapter(this->c_Renamed);
					OnItemClickListenerAnonymousInnerClass tempVar(this, intent);
					this->d.setOnItemClickListener(&tempVar);
					try
					{
					  if (this->i_Renamed->d(L"listSelection"))
					  {
						int i3 = static_cast<Integer>(this->i_Renamed->f(L"selectedIndex")).intValue();
						i2 = static_cast<Integer>(this->i_Renamed->f(L"listSelection")).intValue();
						i1 = i2;
						if (i3 > i2)
						{
						  i1 = i2 + 1;
						}
						this->d.setSelection(i1);
					  }
					}
					catch (const std::exception &str1)
					{
					}
				  }
				  else
				  {
					NativeCore::setConfig(L"userStorage", com->google.android.vending.licensing.d());
					str1 = c();
					if (this->i_Renamed->d(L"dumps"))
					{
					  str1 = this->i_Renamed->f(L"dumps");
					}
					NativeCore::countGames(str1);
				  }
				  this->m = new android.os::Handler();
				  this->j = new c(this, nullptr);
				  com->google::android::vending::licensing::l tempVar2(this, new android.support::v4::a::a(android.support::v4::a::a, getPackageName(), str2));
				  this->k = new com->google.android.vending.licensing.d(this, &tempVar2, L"MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAnGH6Mr50ugKqMhJzlOKyBLa3pwrYOmVqVYCMycP5g2tTZB0jw//SYmntvg4FUJ2S8pj98kizRTB7EsbrOQNAFLukrEevLixHuytIkWUjHcGCXcF3rqm5Oi1TVdFcVa7rqqKAIZjyrjt6rubpegE0icRn9nHWqSn9tSrN39N4BLOMcg7NVH9F/NNaNXldT27KPpzbYgu2boD7bMo/bH668SPXJMIdci635A+SlG2sozLaOQmTQ5IlOL+IlGe1x6DcDRZCnfT3Plz9VeEMFSAx+m4/hV8dbChgaEs6i/TyYshNhxxFXiqGoEzBCrlVJq6bOruqbZpQE++LzXVV4wpX0wIDAQAB");
				  NativeCore::setConfig(L"cores", std::to_wstring(h()));
				  NativeCore::setStoragePath(getApplicationContext().getFilesDir().getAbsolutePath());
				  NativeCore::setConfig(L"userStorage", com->google.android.vending.licensing.d());
				  str1 = NativeCore::getResult(L"checkUserStorage");
				  if (str1 == nullptr || str1->compareTo(L"Ok") != 0)
				  {
					if (this->i_Renamed->d(L"saves"))
					{
					  this->i_Renamed->e(L"saves");
					}
					NativeCore::setConfig(L"userStorage", com->google.android.vending.licensing.d());
				  }
				  if (!this->e)
				  {
					if (NativeCore::nameOfBios()->isEmpty())
					{
					  android.widget::Toast::makeText(this, 2131165216, 0).show();
					}
					str1 = getResources().getString(2131165217) + L" " + com->google.android.vending.licensing.d();
					(static_cast<TextView*>(findViewById(2131558490)))->setText(str1);
					str1 = L"<b>" + getResources().getString(2131165204) + L"</b> " + L"1.0.32" + L" - " + getResources().getString(2131165203) + L" " + NativeCore::stringFromJNI() + L".";
					(static_cast<TextView*>(findViewById(2131558504)))->setText(L"\n\t");
					(static_cast<TextView*>(findViewById(2131558504)))->append(android.text::Html::fromHtml(str1));
				  }
				  f();
				  android.support::v4::a::a(2131099653, L"dir");
				  android.support::v4::a::a(2131099654, L"file");
				  android.support::v4::a::a(2131099658, L"remove");
				  c(L"onCreate() " + NativeCore::stringFromJNI());
				  g();
				}

			protected:
				android.app::Dialog onCreateDialog(int paramInt)
				{
				  bool bool_Renamed = true;
				  if (paramInt == 6)
				  {
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
					return (new android.app.AlertDialog.Builder(this)).setTitle(L"Reset ALL settings").setMessage(L"Are you sure?\nAll settings will be removed!\nApplication will shut down.").setNegativeButton(L"No", new android.content.DialogInterface.OnClickListener(this)
					{
					  public:
						  void onClick(android.content::DialogInterface param1DialogInterface, int param1Int)
						  {
						  }
					}
				  }
					   ).setPositiveButton(L"Yes", new OnClickListenerAnonymousInnerClass2(this)
					   ).create();
				  if (paramInt == 5)
				  {
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
					return (new android.app.AlertDialog.Builder(this)).setTitle(L"Sync default storage directory").setMessage(L"Do you want to copy saves to private directory?\nFiles will be overwritten!").setNegativeButton(L"No", new android.content.DialogInterface.OnClickListener(this)
					{
						  void onClick(android.content::DialogInterface param1DialogInterface, int param1Int)
						  {
						  }
					}
				  }
					   ).setPositiveButton(L"Yes", new OnClickListenerAnonymousInnerClass4(this)
					   ).create();
				  if (paramInt == 4)
				  {
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
					return (new android.app.AlertDialog.Builder(this)).setTitle(L"Sync new storage directory").setMessage(L"Do you want to copy saves to selected directory?\nFiles will be overwritten!").setNegativeButton(L"No", new android.content.DialogInterface.OnClickListener(this)
					{
						  void onClick(android.content::DialogInterface param1DialogInterface, int param1Int)
						  {
						  }
					}
				  }
					   ).setPositiveButton(L"Yes", new OnClickListenerAnonymousInnerClass6(this)
					   ).create();
				  if (paramInt == 3)
				  {
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
					return (new android.app.AlertDialog.Builder(this)).setTitle(L"Clean private storage").setMessage(L"Are you sure?\nAll private saves will be removed!").setNegativeButton(L"No", new android.content.DialogInterface.OnClickListener(this)
					{
						  void onClick(android.content::DialogInterface param1DialogInterface, int param1Int)
						  {
						  }
					}
				  }
					   ).setPositiveButton(L"Yes", new OnClickListenerAnonymousInnerClass8(this)
					   ).create();
				  if (paramInt == 2)
				  {
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
					return (new android.app.AlertDialog.Builder(this)).setTitle(2131165213).setMessage(this.o).setNegativeButton(2131165214, new android.content.DialogInterface.OnClickListener(this)
					{
						  void onClick(android.content::DialogInterface param1DialogInterface, int param1Int)
						  {
							  this->a.finish();
						  }
					}
				  }
					   ).create();
				  if (paramInt != 1)
				  {
					bool_Renamed = false;
				  }
				  AlertDialog::Builder tempVar3(this);
				  AlertDialog::Builder *builder = (&tempVar3)->setTitle(2131165221);
				  if (bool_Renamed)
				  {
					paramInt = 2131165220;
				  }
				  else
				  {
					paramInt = 2131165219;
				  }
				  builder = builder->setMessage(paramInt);
				  if (bool_Renamed)
				  {
					paramInt = 2131165215;
					OnClickListenerAnonymousInnerClass10 tempVar4(this, bool_Renamed);
					return builder->setPositiveButton(paramInt, &tempVar4)
					   OnClickListenerAnonymousInnerClass11 tempVar5(this);
					   .setNegativeButton(2131165214, &tempVar5)
					   .create();
				  }
				  paramInt = 2131165207;
				  OnClickListenerAnonymousInnerClass12 tempVar6(this, bool_Renamed);
				  return builder->setPositiveButton(paramInt, &tempVar6)
					 OnClickListenerAnonymousInnerClass13 tempVar7(this);
					 .setNegativeButton(2131165214, &tempVar7)
					 .create();
				}

				void onDefSaveDirSelect(android.view::View paramView)
				{
				  if (this->i_Renamed->d(L"saves"))
				  {
					this->n = this->i_Renamed->f(L"saves");
					if (!this->n.isEmpty())
					{
					  b(5);
					}
					this->i_Renamed->e(L"saves");
				  }
				  NativeCore::setConfig(L"userStorage", com->google.android.vending.licensing.d());
				  std::wstring str = getResources().getString(2131165217) + L" " + com->google.android.vending.licensing.d();
				  (static_cast<TextView*>(findViewById(2131558490)))->setText(str);
				}

			protected:
				void onDestroy()
				{
				  NativeCore::nativeOnMainDestroy();
				  if (!this->e)
				  {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					this->i_Renamed->a(L"lockOri", Boolean::toString((static_cast<Switch*>(findViewById(2131558495)))->isChecked()));
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					this->i_Renamed->a(L"keepAspect", Boolean::toString((static_cast<Switch*>(findViewById(2131558496)))->isChecked()));
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					this->i_Renamed->a(L"dspMT", Boolean::toString((static_cast<Switch*>(findViewById(2131558497)))->isChecked()));
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					this->i_Renamed->a(L"celMT", Boolean::toString((static_cast<Switch*>(findViewById(2131558498)))->isChecked()));
				  }
				  this->k->a();
				  Activity::onDestroy();
				  c(L"onDestroy()");
				}

			public:
				void onDirSelect(android.view::View paramView)
				{ // Byte code:
				  //   0: new android/content/Intent
				  //   3: dup
				  //   4: aload_0
				  //   5: invokevirtual getApplicationContext : ()Landroid/content/Context;
				  //   8: ldc_w ru/vastness/altmer/real3doplayer/EmulatorActivity
				  //   11: invokespecial <init> : (Landroid/content/Context;Ljava/lang/Class;)V
				  //   14: astore_3
				  //   15: aload_3
				  //   16: ldc_w 'lockOrient'
				  //   19: iconst_0
				  //   20: invokevirtual putExtra : (Ljava/lang/String;Z)Landroid/content/Intent;
				  //   23: pop
				  //   24: aload_3
				  //   25: ldc_w 'lunchMode'
				  //   28: iconst_2
				  //   29: invokevirtual putExtra : (Ljava/lang/String;I)Landroid/content/Intent;
				  //   32: pop
				  //   33: ldc_w 'writeTest'
				  //   36: iconst_0
				  //   37: invokestatic toString : (Z)Ljava/lang/String;
				  //   40: invokestatic setConfig : (Ljava/lang/String;Ljava/lang/String;)V
				  //   43: aload_0
				  //   44: invokevirtual c : ()Ljava/lang/String;
				  //   47: astore_1
				  //   48: aload_0
				  //   49: getfield i : Lru/vastness/altmer/real3doplayer/a;
				  //   52: ldc_w 'dumps'
				  //   55: invokevirtual d : (Ljava/lang/String;)Z
				  //   58: ifeq -> 72
				  //   61: aload_0
				  //   62: getfield i : Lru/vastness/altmer/real3doplayer/a;
				  //   65: ldc_w 'dumps'
				  //   68: invokevirtual f : (Ljava/lang/String;)Ljava/lang/String;
				  //   71: astore_1
				  //   72: aload_1
				  //   73: ifnull -> 85
				  //   76: aload_1
				  //   77: astore_2
				  //   78: aload_1
				  //   79: invokevirtual isEmpty : ()Z
				  //   82: ifeq -> 88
				  //   85: ldc '/'
				  //   87: astore_2
				  //   88: ldc_w 'path'
				  //   91: aload_2
				  //   92: invokestatic setConfig : (Ljava/lang/String;Ljava/lang/String;)V
				  //   95: aload_0
				  //   96: aload_3
				  //   97: iconst_1
				  //   98: invokevirtual startActivityForResult : (Landroid/content/Intent;I)V
				  //   101: return }

				void onResetAll(android.view::View paramView)
				{
					b(6);
				}

				void onSaveDirSelect(android.view::View paramView)
				{ // Byte code:
				  //   0: new android/content/Intent
				  //   3: dup
				  //   4: aload_0
				  //   5: invokevirtual getApplicationContext : ()Landroid/content/Context;
				  //   8: ldc_w ru/vastness/altmer/real3doplayer/EmulatorActivity
				  //   11: invokespecial <init> : (Landroid/content/Context;Ljava/lang/Class;)V
				  //   14: astore_3
				  //   15: aload_3
				  //   16: ldc_w 'lockOrient'
				  //   19: iconst_0
				  //   20: invokevirtual putExtra : (Ljava/lang/String;Z)Landroid/content/Intent;
				  //   23: pop
				  //   24: aload_3
				  //   25: ldc_w 'lunchMode'
				  //   28: iconst_2
				  //   29: invokevirtual putExtra : (Ljava/lang/String;I)Landroid/content/Intent;
				  //   32: pop
				  //   33: ldc_w 'writeTest'
				  //   36: iconst_1
				  //   37: invokestatic toString : (Z)Ljava/lang/String;
				  //   40: invokestatic setConfig : (Ljava/lang/String;Ljava/lang/String;)V
				  //   43: aload_0
				  //   44: invokevirtual c : ()Ljava/lang/String;
				  //   47: astore_1
				  //   48: aload_0
				  //   49: getfield i : Lru/vastness/altmer/real3doplayer/a;
				  //   52: ldc_w 'saves'
				  //   55: invokevirtual d : (Ljava/lang/String;)Z
				  //   58: ifeq -> 72
				  //   61: aload_0
				  //   62: getfield i : Lru/vastness/altmer/real3doplayer/a;
				  //   65: ldc_w 'saves'
				  //   68: invokevirtual f : (Ljava/lang/String;)Ljava/lang/String;
				  //   71: astore_1
				  //   72: aload_1
				  //   73: ifnull -> 85
				  //   76: aload_1
				  //   77: astore_2
				  //   78: aload_1
				  //   79: invokevirtual isEmpty : ()Z
				  //   82: ifeq -> 88
				  //   85: ldc '/'
				  //   87: astore_2
				  //   88: ldc_w 'path'
				  //   91: aload_2
				  //   92: invokestatic setConfig : (Ljava/lang/String;Ljava/lang/String;)V
				  //   95: aload_0
				  //   96: aload_3
				  //   97: iconst_2
				  //   98: invokevirtual startActivityForResult : (Landroid/content/Intent;I)V
				  //   101: return }

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @TargetApi(19) public void onWindowFocusChanged(boolean paramBoolean)
				void onWindowFocusChanged(bool paramBoolean)
				{
				  Activity::onWindowFocusChanged(paramBoolean);
				  if (paramBoolean)
				  {
					getWindow().getDecorView().setSystemUiVisibility(5894);
				  }
				}

//JAVA TO C++ CONVERTER TODO TASK: Local classes are not converted by Java to C++ Converter:
//				class a implements java.io.FileFilter
								//  {
								//	a(MainActivity this$0)
								//	{
								//	}
								//
								//	public boolean accept(File param1File)
								//	{
								//		return Pattern.matches("cpu[0-9]+", param1File.getName());
								//	}
								//  }

				class b_Renamed extends android.widget::BaseAdapter
				{
				  int android.support::v4::a::a;

			  private:
				  std::vector<std::wstring> c_Renamed;

				  std::wstring com->google.android.vending.licensing.d;

				  android.content::Context com->google.android.vending.licensing.e;

			  public:
				  b(MainActivity this$0, android.content::Context param1Context, std::wstring param1String, int param1Int)
				  {
					this->a = param1Int;
					android.support::v4::a::a(param1String);
					this->e = param1Context;
				  }

				  std::wstring android.support::v4::a::a(int param1Int)
				  {
					  return !this->d->isEmpty() ? ((param1Int != 0) ? static_cast<std::wstring>(this->c_Renamed->get(param1Int - 1)): this->d) : static_cast<std::wstring>(this->c_Renamed->get(param1Int));
				  }

				  void android.support::v4::a::a(std::wstring param1String)
				  {
					this->c_Renamed = std::vector();
					this->d = L"";
					if (param1String != nullptr)
					{
					  int i = NativeCore::countGames(param1String);
					  this->d = NativeCore::nameOfBios();
					  for (char b1 = 0; b1 < i; b1++)
					  {
						this->c_Renamed->add(NativeCore::nameOfGame(b1));
					  }
					}
				  }

				  int getCount()
				  {
					  return !this->d->isEmpty() ? (this->c_Renamed->size() + 1) : this->c_Renamed->size();
				  }

				  long long getItemId(int param1Int)
				  {
					  return (!this->d->isEmpty() && param1Int == 0) ? 1LL : 0LL;
				  }

				  android.view::View getView(int param1Int, android.view::View param1View, android.view::ViewGroup param1ViewGroup)
				  {
					View *view = param1View;
					if (param1View == nullptr)
					{
					  new android.view::View(this->e);
					  view = this->b_Renamed->getLayoutInflater().inflate(2130968602, param1ViewGroup, false);
					}
					ImageView *imageView = static_cast<ImageView*>(view->findViewById(2131558480));
					TextView *textView = static_cast<TextView*>(view->findViewById(2131558481));
					if (param1Int == this->a)
					{
					  textView->setTypeface(nullptr, 1);
					}
					else
					{
					  textView->setTypeface(nullptr, 0);
					}
					if (!this->d->isEmpty())
					{
					  if (param1Int == 0)
					  {
						imageView->setImageResource(2130837574);
						textView->setText(this->d);
						return view;
					  }
					  imageView->setImageResource(2130837567);
					  textView->setText(static_cast<CharSequence*>(this->c_Renamed->get(param1Int - 1)));
					  return view;
					}
					imageView->setImageResource(2130837567);
					textView->setText(static_cast<CharSequence*>(this->c_Renamed->get(param1Int)));
					return view;
				  }
				}

			private:
				class c_Renamed implements com->google.android.vending.licensing.e
				{
				  c(MainActivity this$0)
				  {
				  }

			  public:
				  void android.support::v4::a::a(int param1Int)
				  {
					if (!this->a.isFinishing())
					{
					  MainActivity::a(this->a, true);
					  MainActivity::b(this->a).a(L"license", L"1.0.32");
					  if (MainActivity::g(this->a))
					  {
						this->a.e();
						return;
					  }
					}
				  }

				  void b(int param1Int)
				  {
					int i = 1;
					if (!this->a.isFinishing())
					{
					  try
					  {
						if (MainActivity::b(this->a).d(L"license"))
						{
						  if (param1Int == 561)
						  {
							MainActivity::b(this->a).e(L"license");
						  }
						  else
						  {
							if (MainActivity::b(this->a).f(L"license")->compareTo(L"1.0.32") == 0)
							{
							  MainActivity::a(this->a, true);
							  if (MainActivity::g(this->a))
							  {
								this->a.e();
								return;
							  }
							  return;
							}
							MainActivity::b(this->a).e(L"license");
						  }
						}
					  }
					  catch (const NumberFormatException &numberFormatException)
					  {
					  }
					  MainActivity *mainActivity = this->a;
					  if (param1Int == 291)
					  {
						param1Int = i;
					  }
					  else
					  {
						param1Int = 0;
					  }
					  MainActivity::a(mainActivity, param1Int);
					  return;
					}
				  }

				  void c(int param1Int)
				  { // Byte code:
					//   0: aload_0
					//   1: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   4: invokevirtual isFinishing : ()Z
					//   7: ifeq -> 11
					//   10: return
					//   11: aload_0
					//   12: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   15: invokestatic b : (Lru/vastness/altmer/real3doplayer/MainActivity;)Lru/vastness/altmer/real3doplayer/a;
					//   18: ldc 'license'
					//   20: invokevirtual d : (Ljava/lang/String;)Z
					//   23: ifeq -> 74
					//   26: aload_0
					//   27: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   30: invokestatic b : (Lru/vastness/altmer/real3doplayer/MainActivity;)Lru/vastness/altmer/real3doplayer/a;
					//   33: ldc 'license'
					//   35: invokevirtual f : (Ljava/lang/String;)Ljava/lang/String;
					//   38: ldc '1.0.32'
					//   40: invokevirtual compareTo : (Ljava/lang/String;)I
					//   43: ifne -> 114
					//   46: aload_0
					//   47: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   50: iconst_1
					//   51: invokestatic a : (Lru/vastness/altmer/real3doplayer/MainActivity;Z)Z
					//   54: pop
					//   55: aload_0
					//   56: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   59: invokestatic g : (Lru/vastness/altmer/real3doplayer/MainActivity;)Z
					//   62: ifeq -> 10
					//   65: aload_0
					//   66: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   69: invokevirtual e : ()V
					//   72: return
					//   73: astore_2
					//   74: aload_0
					//   75: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   78: aload_0
					//   79: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   82: ldc 2131165205
					//   84: invokevirtual getString : (I)Ljava/lang/String;
					//   87: iconst_1
					//   88: anewarray java/lang/Object
					//   91: dup
					//   92: iconst_0
					//   93: iload_1
					//   94: invokestatic valueOf : (I)Ljava/lang/Integer;
					//   97: aastore
					//   98: invokestatic format : (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
					//   101: invokestatic b : (Lru/vastness/altmer/real3doplayer/MainActivity;Ljava/lang/String;)Ljava/lang/String;
					//   104: pop
					//   105: aload_0
					//   106: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   109: iconst_2
					//   110: invokestatic a : (Lru/vastness/altmer/real3doplayer/MainActivity;I)V
					//   113: return
					//   114: aload_0
					//   115: getfield a : Lru/vastness/altmer/real3doplayer/MainActivity;
					//   118: invokestatic b : (Lru/vastness/altmer/real3doplayer/MainActivity;)Lru/vastness/altmer/real3doplayer/a;
					//   121: ldc 'license'
					//   123: invokevirtual e : (Ljava/lang/String;)V
					//   126: goto -> 74
					// Exception table:
					//   from	to	target	type
					//   11	72	73	java/lang/NumberFormatException
					//   114	126	73	java/lang/NumberFormatException }
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

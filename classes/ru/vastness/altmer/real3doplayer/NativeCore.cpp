//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "NativeCore.h"
#include "MainActivity.h"
#include "EmulatorActivity.h"

namespace ru
{
	namespace vastness
	{
		namespace altmer
		{
			namespace real3doplayer
			{
				using android::view::Surface;

				NativeCore::StaticConstructor::StaticConstructor()
				{
										System::loadLibrary(L"phoenixcore");
				}

				NativeCore::StaticConstructor::OnItemClickListenerAnonymousInnerClass::OnItemClickListenerAnonymousInnerClass(MainActivity *outerInstance, android::content::Intent *intent) : android::widget::AdapterView::OnItemClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
					this->intent = intent;
				}

template<typename T1>
				void NativeCore::StaticConstructor::OnItemClickListenerAnonymousInnerClass::onItemClick(AdapterView<T1> *param1AdapterView, View *param1View, int param1Int, long long param1Long)
				{
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
				  MainActivity::b(this->a).a(L"listSelection", Integer::toString(MainActivity::a(this->a).getFirstVisiblePosition()));
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
				  MainActivity::b(this->a).a(L"selectedIndex", Integer::toString(param1Int));
				  (MainActivity::c(this->a))->a = param1Int;
				  MainActivity::c(this->a).notifyDataSetChanged();
				  if (!NativeCore::nameOfBios()->isEmpty() && MainActivity::d(this->a))
				  {
					NativeCore::selectGame(param1Int - 1);
					MainActivity::a(this->a, L"onLunch " + std::to_wstring(param1Int - 1));
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					NativeCore::setConfig(L"keepAspect", Boolean::toString((static_cast<Switch*>(this->a.findViewById(2131558496)))->isChecked()));
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					NativeCore::setConfig(L"dspMT", Boolean::toString((static_cast<Switch*>(this->a.findViewById(2131558497)))->isChecked()));
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					NativeCore::setConfig(L"celMT", Boolean::toString((static_cast<Switch*>(this->a.findViewById(2131558498)))->isChecked()));
					Intent *intent = new Intent(param1View->getContext(), EmulatorActivity::typeid);
					intent->putExtra(L"lockOrient", (static_cast<Switch*>(this->a.findViewById(2131558495)))->isChecked());
					intent->putExtra(L"lunchMode", 0);
					param1View->getContext().startActivity(intent);
					return;
				  }
				  if (NativeCore::nameOfBios()->isEmpty())
				  {
					Toast::makeText(param1View->getContext(), 2131165206, 0).show();
					return;
				  }
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass2::OnClickListenerAnonymousInnerClass2(MainActivity *outerInstance) : android::content::DialogInterface::OnClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass2::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
				  NativeCore::execCommand(L"clearSettings", L"all");
				  MainActivity::b(this->a).b();
				  (static_cast<Switch*>(this->a.findViewById(2131558495)))->setChecked(false);
				  (static_cast<Switch*>(this->a.findViewById(2131558496)))->setChecked(false);
				  (static_cast<Switch*>(this->a.findViewById(2131558497)))->setChecked(false);
				  (static_cast<Switch*>(this->a.findViewById(2131558498)))->setChecked(false);
				  this->a.finish();
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass4::OnClickListenerAnonymousInnerClass4(MainActivity *outerInstance) : android::content::DialogInterface::OnClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass4::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
					NativeCore::execCommand(L"synkToPrivate", MainActivity::e(this->a));
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass6::OnClickListenerAnonymousInnerClass6(MainActivity *outerInstance) : android::content::DialogInterface::OnClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass6::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
					NativeCore::execCommand(L"synkToUser", this->a.d());
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass8::OnClickListenerAnonymousInnerClass8(MainActivity *outerInstance) : android::content::DialogInterface::OnClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass8::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
					NativeCore::execCommand(L"clearPrivate", L"all");
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass10::OnClickListenerAnonymousInnerClass10(MainActivity *outerInstance, bool bool_Renamed) : android::content::DialogInterface::OnClickListener(outerInstance, bool_Renamed)
				{
					this->outerInstance = outerInstance;
					a = this->b;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass10::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
				  if (this->a)
				  {
					MainActivity::f(this->c);
					return;
				  }
				  Intent *intent = new Intent(L"android.intent.action.VIEW", Uri::parse(L"market://details?id=" + this->c.getPackageName()));
				  this->c.startActivity(intent);
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass11::OnClickListenerAnonymousInnerClass11(MainActivity *outerInstance) : android::content::DialogInterface::OnClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass11::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
					this->a.finish();
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass12::OnClickListenerAnonymousInnerClass12(MainActivity *outerInstance, bool bool_Renamed) : android::content::DialogInterface::OnClickListener(outerInstance, bool_Renamed)
				{
					this->outerInstance = outerInstance;
					a = this->b;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass12::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
				  if (this->a)
				  {
					MainActivity::f(this->c);
					return;
				  }
				  Intent *intent = new Intent(L"android.intent.action.VIEW", Uri::parse(L"market://details?id=" + this->c.getPackageName()));
				  this->c.startActivity(intent);
				}

				NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass13::OnClickListenerAnonymousInnerClass13(MainActivity *outerInstance) : android::content::DialogInterface::OnClickListener(outerInstance)
				{
					this->outerInstance = outerInstance;
				}

				void NativeCore::StaticConstructor::OnClickListenerAnonymousInnerClass13::onClick(DialogInterface *param1DialogInterface, int param1Int)
				{
					this->a.finish();
				}

NativeCore::StaticConstructor NativeCore::staticConstructor;
			}
		}
	}
}

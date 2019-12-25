//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "../../d/a.h"
#include "e.h"
#include "../../../v4/c/a.h"

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
					using android::content::ComponentName;
					using android::content::Context;
					using android::content::Intent;
					using android::content::pm::ResolveInfo;
					using android::database::DataSetObservable;
					using android::os::AsyncTask;
					using a = android::support::v4::e::a;
					using android::text::TextUtils;
					using android::util::Log;
					using android::util::Xml;
					using org::xmlpull::v1::XmlPullParser;
					using org::xmlpull::v1::XmlPullParserException;
					using org::xmlpull::v1::XmlSerializer;
const std::wstring d::android;
void *const d::b = nullptr;
const std::unordered_map<std::wstring, android::support::v7::internal_Renamed::widget::d*> d::c = std::unordered_map();

					bool d::android.support::v4::e::a(android::support::v7::internal_Renamed::widget::c *paramc)
					{
					  bool bool_Renamed = this->f_Renamed.push_back(paramc);
					  if (bool_Renamed)
					  {
						this->n = true;
						i();
						d_Renamed();
						f();
						notifyChanged();
					  }
					  return bool_Renamed;
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void d::d_Renamed()
					{
					  if (!this->m)
					  {
						throw IllegalStateException(L"No preceding call to #readHistoricalData");
					  }
					  if (this->n)
					  {
						this->n = false;
						if (!android.text::TextUtils->isEmpty(this->h_Renamed))
						{
						  android::support::v7::internal_Renamed::widget::e tempVar(this, nullptr);
						  android.support::v4::e::a::a(&tempVar, std::vector<void*> {std::vector(this->f_Renamed), this->h_Renamed});
						  return;
						}
					  }
					}

					void d::e()
					{
					  bool bool1 = g();
					  bool bool2 = h();
					  i();
					  if (bool1 | bool2)
					  {
						f();
						notifyChanged();
					  }
					}

					bool d::f()
					{
					  if (this->j_Renamed != nullptr && this->i_Renamed != nullptr && !this->e_Renamed.empty() && !this->f_Renamed.empty())
					  {
						this->j_Renamed->a(this->i_Renamed, this->e_Renamed, Collections::unmodifiableList(this->f_Renamed));
						return true;
					  }
					  return false;
					}

					bool d::g()
					{
					  char b1 = 0;
					  int i1 = b1;
					  if (this->o)
					  {
						i1 = b1;
						if (this->i_Renamed != nullptr)
						{
						  this->o = false;
						  this->e_Renamed.clear();
						  std::vector list = this->g_Renamed->getPackageManager().queryIntentActivities(this->i_Renamed, 0);
						  int i2 = list.size();
						  for (char b2 = 0; b2 < i2; b2++)
						  {
							ResolveInfo *resolveInfo = static_cast<ResolveInfo*>(list[b2]);
							a tempVar(this, resolveInfo);
							this->e_Renamed.push_back(&tempVar);
						  }
						  i1 = 1;
						}
					  }
					  return i1;
					}

					bool d::h()
					{
					  if (this->l && this->n && !android.text::TextUtils->isEmpty(this->h_Renamed))
					  {
						this->l = false;
						this->m = true;
						j();
						return true;
					  }
					  return false;
					}

					void d::i()
					{
					  int i1 = this->f_Renamed.size() - this->k;
					  if (i1 > 0)
					  {
						this->n = true;
						char b1 = 0;
						while (true)
						{
						  if (b1 < i1)
						  {
							android::support::v7::internal_Renamed::widget::c *c1 = static_cast<android::support::v7::internal_Renamed::widget::c*>(this->f_Renamed.erase(this->f_Renamed.begin()));
							b1++;
							continue;
						  }
						  return;
						}
					  }
					}

					void d::j()
					{
					  try
					  {
						fileInputStream = this->g_Renamed->openFileInput(this->h_Renamed);
						try
						{
						  XmlPullParser *xmlPullParser = android.util::Xml::newPullParser();
						  xmlPullParser->setInput(fileInputStream, L"UTF-8");
						  int i1;
						  for (i1 = 0; i1 != 1 && i1 != 2; i1 = xmlPullParser->next())
						  {
							  ;
						  }
						  if (L"historical-records" != xmlPullParser->getName())
						  {
							throw XmlPullParserException(L"Share records file does not start with historical-records tag.");
						  }
						  std::vector list = this->f_Renamed;
						  list.clear();
						  while (true)
						  {
							i1 = xmlPullParser->next();
							if (i1 == 1)
							{
							  return;
							}
							if (i1 != 3 && i1 != 4)
							{
							  if (L"historical-record" != xmlPullParser->getName())
							  {
								throw XmlPullParserException(L"Share records file not well-formed.");
							  }
							  android::support::v7::internal_Renamed::widget::c tempVar(xmlPullParser->getAttributeValue(nullptr, L"activity"), static_cast<long long>(xmlPullParser->getAttributeValue(nullptr, L"time")), static_cast<Float>(xmlPullParser->getAttributeValue(nullptr, L"weight")));
							  list.push_back(&tempVar);
							}
						  }
						}
						catch (const XmlPullParserException &xmlPullParserException)
						{
						  android.util::Log::e(android.support::v4::e::a, L"Error reading historical recrod file: " + this->h_Renamed, xmlPullParserException);
						  return;
						}
						catch (const IOException &iOException)
						{
						  android.util::Log::e(android.support::v4::e::a, L"Error reading historical recrod file: " + this->h_Renamed, iOException);
						  return;
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
						  if (fileInputStream != nullptr)
						  {
							try
							{
							  delete fileInputStream;
							}
							catch (const IOException &fileInputStream)
							{
							}
						  }
						}
					  }
					  catch (const FileNotFoundException &fileNotFoundException)
					  {
						return;
					  }
					}

					int d::android.support::v4::e::a()
					{
//JAVA TO C++ CONVERTER TODO TASK: Multithread locking is not converted to native C++ unless you choose one of the options on the 'Miscellaneous Options' dialog:
					  synchronized(this->d_Renamed)
					  {
						e();
						return this->e_Renamed.size();
					  }
					}

					int d::android.support::v4::e::a(ResolveInfo *paramResolveInfo)
					{
//JAVA TO C++ CONVERTER TODO TASK: Multithread locking is not converted to native C++ unless you choose one of the options on the 'Miscellaneous Options' dialog:
					  synchronized(this->d_Renamed)
					  {
						e();
						std::vector list = this->e_Renamed;
						int i1 = list.size();
						for (char b1 = 0;; b1++)
						{
						  if (b1 < i1)
						  {
							if ((static_cast<a*>(list[b1]))->a == paramResolveInfo)
							{
							  return b1;
							}
						  }
						  else
						  {
							return -1;
						  }
						}
					  }
					}

					ResolveInfo *d::android.support::v4::e::a(int paramInt)
					{
//JAVA TO C++ CONVERTER TODO TASK: Multithread locking is not converted to native C++ unless you choose one of the options on the 'Miscellaneous Options' dialog:
					  synchronized(this->d_Renamed)
					  {
						e();
						return (static_cast<a*>(this->e_Renamed[paramInt]))->a;
					  }
					}

					Intent *d::b(int paramInt)
					{
//JAVA TO C++ CONVERTER TODO TASK: Multithread locking is not converted to native C++ unless you choose one of the options on the 'Miscellaneous Options' dialog:
					  synchronized(this->d_Renamed)
					  {
						if (this->i_Renamed == nullptr)
						{
						  return nullptr;
						}
						e();
						a *a1 = static_cast<a*>(this->e_Renamed[paramInt]);
						ComponentName *componentName = new android.content::ComponentName(a1->a.activityInfo.packageName, a1->a.activityInfo.name);
						Intent *intent = new android.content::Intent(this->i_Renamed);
						intent->setComponent(componentName);
						if (this->p != nullptr)
						{
						  Intent *intent1 = new android.content::Intent(intent);
						  if (this->p->a(this, intent1))
						  {
							return nullptr;
						  }
						}
						android::support::v7::internal_Renamed::widget::c tempVar(componentName, System::currentTimeMillis(), 1.0F);
						android.support::v4::e::a(&tempVar);
						return intent;
					  }
					}

					ResolveInfo *d::b()
					{
//JAVA TO C++ CONVERTER TODO TASK: Multithread locking is not converted to native C++ unless you choose one of the options on the 'Miscellaneous Options' dialog:
					  synchronized(this->d_Renamed)
					  {
						e();
						if (!this->e_Renamed.empty())
						{
						  return (static_cast<a*>(this->e_Renamed[0]))->a;
						}
						return nullptr;
					  }
					}

					void d::c(int paramInt)
					{
//JAVA TO C++ CONVERTER TODO TASK: Multithread locking is not converted to native C++ unless you choose one of the options on the 'Miscellaneous Options' dialog:
					  synchronized(this->d_Renamed)
					  {
						float f1;
						e();
						a *a1 = static_cast<a*>(this->e_Renamed[paramInt]);
						a *a2 = static_cast<a*>(this->e_Renamed[0]);
						if (a2 != nullptr)
						{
						  f1 = a2->b - a1->b + 5.0F;
						}
						else
						{
						  f1 = 1.0F;
						}
						android::support::v7::internal_Renamed::widget::c tempVar(new android.content::ComponentName(a1->a.activityInfo.packageName, a1->a.activityInfo.name), System::currentTimeMillis(), f1);
						android.support::v4::e::a(&tempVar);
						return;
					  }
					}

					internal *d::a::android->support.v4.e.a(d *this$0, ResolveInfo *param1ResolveInfo)
					{
						this->a = param1ResolveInfo;
					}

					int d::a::android->support.v4.e.a(a *param1a)
					{
						return Float::floatToIntBits(param1a->b) - Float::floatToIntBits(this->b);
					}

					bool d::a::equals(void *param1Object)
					{
					  if (this != param1Object)
					  {
						if (param1Object == nullptr)
						{
						  return false;
						}
						if (getClass() != param1Object->getClass())
						{
						  return false;
						}
						param1Object = static_cast<a*>(param1Object);
						if (Float::floatToIntBits(this->b) != Float::floatToIntBits(param1Object->b))
						{
						  return false;
						}
					  }
					  return true;
					}

					int d::a::hashCode()
					{
						return Float::floatToIntBits(this->b) + 31;
					}

					std::wstring d::a::toString()
					{
					  StringBuilder *stringBuilder = new StringBuilder();
					  stringBuilder->append(L"[");
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					  stringBuilder->append(L"resolveInfo:")->append(this->a->toString());
					  stringBuilder->append(L"; weight:")->append(BigDecimal(this->b));
					  stringBuilder->append(L"]");
					  return stringBuilder->toString();
					}

					d::c::c(ComponentName *param1ComponentName, long long param1Long, float param1Float) : b(param1Long), c(param1Float)
					{
					  this->a = param1ComponentName;
					}

					d::c::c(const std::wstring &param1String, long long param1Long, float param1Float) : c(ComponentName::unflattenFromString(param1String), param1Long, param1Float)
					{
					}

					bool d::c::equals(void *param1Object)
					{
					  if (this != param1Object)
					  {
						if (param1Object == nullptr)
						{
						  return false;
						}
						if (getClass() != param1Object->getClass())
						{
						  return false;
						}
						param1Object = static_cast<c*>(param1Object);
						if (this->a == nullptr)
						{
						  if (param1Object->a != nullptr)
						  {
							return false;
						  }
						}
						else if (!this->a.equals(param1Object->a))
						{
						  return false;
						}
						if (this->b != param1Object->b)
						{
						  return false;
						}
						if (Float::floatToIntBits(this->c_Renamed) != Float::floatToIntBits(param1Object->c))
						{
						  return false;
						}
					  }
					  return true;
					}

					int d::c::hashCode()
					{
					  if (this->a == nullptr)
					  {
						bool bool_Renamed = false;
						return ((bool_Renamed + 31) * 31 + static_cast<int>(this->b ^ static_cast<long long>(static_cast<unsigned long long>(this->b) >> 32))) * 31 + Float::floatToIntBits(this->c_Renamed);
					  }
					  int i = this->a.hashCode();
					  return ((i + 31) * 31 + static_cast<int>(this->b ^ static_cast<long long>(static_cast<unsigned long long>(this->b) >> 32))) * 31 + Float::floatToIntBits(this->c_Renamed);
					}

					std::wstring d::c::toString()
					{
					  StringBuilder *stringBuilder = new StringBuilder();
					  stringBuilder->append(L"[");
					  stringBuilder->append(L"; activity:")->append(this->a);
					  stringBuilder->append(L"; time:")->append(this->b);
					  stringBuilder->append(L"; weight:")->append(BigDecimal(this->c_Renamed));
					  stringBuilder->append(L"]");
					  return stringBuilder->toString();
					}

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private e(d this$0)
					d::e::e(*outerInstance, d *this$0) : outerInstance()
					{
					}

					Void *d::e::android.support::v4::e::a(std::vector<Object> &param1VarArgs)
					{
					  char b = 0;
					  list = static_cast<std::vector>(param1VarArgs[0]);
					  XmlSerializer *xmlSerializer = static_cast<std::wstring>(param1VarArgs[1]);
					  try
					  {
						fileOutputStream = d::a(this->a).openFileOutput(xmlSerializer, 0);
						xmlSerializer = android.util::Xml::newSerializer();
						try
						{
						  xmlSerializer->setOutput(fileOutputStream, nullptr);
						  xmlSerializer->startDocument(L"UTF-8", static_cast<Boolean>(true));
						  xmlSerializer->startTag(nullptr, L"historical-records");
						  int i = list->size();
						  while (b < i)
						  {
							d::c *c = static_cast<d::c*>(list->remove(0));
							xmlSerializer->startTag(nullptr, L"historical-record");
							xmlSerializer->attribute(nullptr, L"activity", c->a.flattenToString());
							xmlSerializer->attribute(nullptr, L"time", std::to_wstring(c->b));
							xmlSerializer->attribute(nullptr, L"weight", std::wstring::valueOf(c->c_Renamed));
							xmlSerializer->endTag(nullptr, L"historical-record");
							b++;
						  }
						  xmlSerializer->endTag(nullptr, L"historical-records");
						  xmlSerializer->endDocument();
						  d::a(this->a, true);
						  return nullptr;
						}
						catch (const std::invalid_argument &list)
						{
						  android.util::Log::e(d::c(), L"Error writing historical recrod file: " + d::b(this->a), list);
						  d::a(this->a, true);
						  return nullptr;
						}
						catch (const IllegalStateException &list)
						{
						  android.util::Log::e(d::c(), L"Error writing historical recrod file: " + d::b(this->a), list);
						  d::a(this->a, true);
						  return nullptr;
						}
						catch (const IOException &list)
						{
						  android.util::Log::e(d::c(), L"Error writing historical recrod file: " + d::b(this->a), list);
						  d::a(this->a, true);
						  return nullptr;
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
						  list = nullptr;
						}
					  }
					  catch (const FileNotFoundException &param1VarArgs)
					  {
						android.util::Log::e(d::c(), L"Error writing historical recrod file: " + xmlSerializer, param1VarArgs);
						return nullptr;
					  }
					  if (param1VarArgs != nullptr)
					  {
						try
						{
						  delete param1VarArgs;
						}
						catch (const IOException &param1VarArgs)
						{
						}
					  }
					  throw list;
					}
				}
			}
		}
	}
}

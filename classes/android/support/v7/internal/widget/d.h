#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include "k.h"
#include "l.h"
#include "m.h"
#include "n.h"
#include "o.h"
#include "p.h"
#include "../a.h"
#include "a.h"
#include "../../../v4/e/a.h"
#include <string>
#include <unordered_map>
#include <vector>
#include <stdexcept>
#include "exceptionhelper.h"
#include "stringbuilder.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace e { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class e; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class f; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class g; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class h; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class i; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class j; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class d; } } } } }

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

					class d : public android.database::DataSetObservable
					{
				  private:
					  static const std::wstring android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static void *const b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  static const std::unordered_map<std::wstring, android::support::v7::internal_Renamed::widget::d*> c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  void *const d_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  const std::vector<a*> e_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  const std::vector<android::support::v7::internal_Renamed::widget::c*> f_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Context *const g_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  const std::wstring h_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  Intent *i_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  android::support::v7::internal_Renamed::widget::b *j_Renamed;

					  int k = 0;

					  bool l = false;

					  bool m = false;

					  bool n = false;

					  bool o = false;

					  android::support::v7::internal_Renamed::widget::d *p;

				  public:
					  virtual ~d()
					  {
						  delete d;
						  delete g;
						  delete i;
						  delete j;
						  delete p;
					  }

				  private:
					  bool android.support::v4::e::a(android::support::v7::internal_Renamed::widget::c *paramc);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  void d_Renamed();

					  void e();

					  bool f();

					  bool g();

					  bool h();

					  void i();

					  void j();

				  public:
					  virtual int android.support::v4::e::a();

					  virtual int android.support::v4::e::a(ResolveInfo *paramResolveInfo);

					  virtual ResolveInfo *android.support::v4::e::a(int paramInt);

					  virtual Intent *b(int paramInt);

					  virtual ResolveInfo *b();

					  virtual void c(int paramInt);

				  public:
					  class a final : public Object, public Comparable<a*>
					  {
									  private:
										  d *outerInstance;

					public:
						ResolveInfo *const android;

						float b = 0;

						virtual ~a()
						{
							delete android;
							delete outerInstance;
						}

						internal *android->support.v4.e.a(d *this$0, ResolveInfo *param1ResolveInfo);

						int android->support.v4.e.a(a *param1a);

						bool equals(void *param1Object) override;

						int hashCode() override;

						std::wstring toString() override;
					  };

				  public:
					  class b
					  {
					public:
						virtual void a(Intent *param1Intent, std::vector<d::a*> &param1List1, std::vector<d::c*> &param1List2) = 0;
					  };

				  public:
					  class c final
					  {
					public:
						ComponentName *const android;

						const long long b;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						const float c_Renamed;

						virtual ~c()
						{
							delete android;
						}

						c(ComponentName *param1ComponentName, long long param1Long, float param1Float);

						c(const std::wstring &param1String, long long param1Long, float param1Float);

						bool equals(void *param1Object) override;

						int hashCode() override;

						std::wstring toString() override;
					  };

				  public:
					  class d
					  {
					public:
						virtual bool a(android::support::v7::internal_Renamed::widget::d *param1d, Intent *param1Intent) = 0;
					  };

				  private:
					  class e final : public android.os::AsyncTask<void*, Void*, Void*>
					  {
									  private:
										  *e;

					public:
						virtual ~e()
						{
							delete outerInstance;
						}

					private:
//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private e(d this$0)
						e(*outerInstance, d *this$0);

					public:
						Void *android.support::v4::e::a(std::vector<Object> &param1VarArgs);
					  };
					};
				}
			}
		}
	}
}

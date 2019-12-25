#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{

					using android::content::Context;
					using a = android::support::v7::b::a;
					using android::view::ViewConfiguration;

					class a
					{
				  private:
					  Context *android;

				  public:
					  virtual ~a()
					  {
						  delete android;
					  }

				  private:
					  internal *android->support.v7.b.a(Context *paramContext);

				  public:
					  static a *android->support.v7.b.a(Context *paramContext);

					  virtual int android->support.v7.b.a();

					  virtual bool b();

					  virtual int c();

					  virtual bool d();

					  virtual int e();

					  virtual int f();
					};
				}
			}
		}
	}
}

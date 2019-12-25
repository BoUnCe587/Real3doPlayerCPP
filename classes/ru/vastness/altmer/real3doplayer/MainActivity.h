#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include <string>
#include <vector>
#include <stdexcept>
#include "stringhelper.h"
#include "stringbuilder.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class e; } } } } }
namespace com { namespace google { namespace android { namespace vending { namespace licensing { class d; } } } } }

namespace ru
{
	namespace vastness
	{
		namespace altmer
		{
			namespace real3doplayer
			{

				using android::app::Activity;
				using android::os::Handler;
				using a = android::support::v4::a::a;
				using android::view::View;
				using android::widget::ListView;
				using d = com::google::android::vending::licensing::d;
				using e = com::google::android::vending::licensing::e;
				using l = com::google::android::vending::licensing::l;

				class MainActivity : public android.app::Activity
				{
			  private:
				  static std::vector<char> const android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Pattern *const b_Renamed = Pattern::compile(L"/");

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  b *c_Renamed;

				  ListView *com;

				  bool com = false;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  std::wstring f_Renamed = L"";

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  std::wstring g_Renamed = L"";

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  std::wstring h_Renamed = L"";

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  a *i_Renamed;

				  e *j;

				  d *k;

				  bool com = false;

				  Handler *m;

				  std::wstring n;

				  std::wstring o;

			  public:
				  virtual ~MainActivity()
				  {
					  delete b;
					  delete c;
					  delete com;
					  delete i;
					  delete j;
					  delete k;
					  delete m;
				  }

			  private:
				  View *android.support::v4::a::a(int paramInt);

				  void android.support::v4::a::a(int paramInt, const std::wstring &paramString);

				  void b(int paramInt);

				  void c(const std::wstring &paramString);

				  void f();

				  void g();

				  int h();

				  int i();

			  public:
				  virtual std::wstring android.support::v4::a::a(const std::wstring &paramString);

				  virtual Set<std::wstring> *android.support::v4::a::a();

				  virtual std::wstring b(const std::wstring &paramString);

				  virtual Set<std::wstring> *b();

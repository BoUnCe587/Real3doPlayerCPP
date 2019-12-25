#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../b/a.h"
#include "g.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include <string>
#include <vector>
#include <stdexcept>
#include <typeinfo>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class b; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class d; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::app::SearchableInfo;
				using android::content::Context;
				using android::content::Intent;
				using android::graphics::drawable::Drawable;
				using android::net::Uri;
				using android::os::Bundle;
				using b = android::support::v4::widget::b;
				using a = android::support::v7::b::a;
				using android::view::View;
				using android::widget::ImageView;

				class SearchView : public g, public android->support.v7.b.a
				{
			  public:
				  static a *const android;

			  private:
				  static const bool android = false;

				  bool A = false;

				  bool B = false;

				  int C = 0;

				  bool D = false;

				  CharSequence *E;

				  bool F = false;

				  int G = 0;

				  SearchableInfo *H;

				  Bundle *I;

				  Runnable J;

				  const Runnable K;

				  Runnable L;

				  WeakHashMap<std::wstring, Drawable::ConstantState*> *const M;

				  SearchAutoComplete *const c;

				  View *const d;

				  View *const e;

				  ImageView *const f;

				  ImageView *const g;

				  ImageView *const h;

				  ImageView *const i;

				  ImageView *const j;

				  Drawable *const k;

				  const int l;

				  const int m;

				  Intent *const n;

				  Intent *const o;

				  CharSequence *const p;

				  c *q;

				  b *r;

				  View::OnFocusChangeListener *s;

				  d *t;

				  View::OnClickListener *u;

				  bool v = false;

				  bool w = false;

				  b *x;

				  bool y = false;

				  CharSequence *z;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static SearchView::StaticConstructor staticConstructor;


			  public:
				  virtual ~SearchView()
				  {
					  delete E;
					  delete H;
					  delete I;
					  delete M;
					  delete c;
					  delete d;
					  delete e;
					  delete f;
					  delete g;
					  delete h;
					  delete i;
					  delete j;
					  delete k;
					  delete n;
					  delete o;
					  delete p;
					  delete q;
					  delete r;
					  delete s;
					  delete t;
					  delete u;
					  delete x;
					  delete z;
				  }

			  private:
				  Intent *android->support.v7.b.a(const std::wstring &paramString1, Uri *paramUri, const std::wstring &paramString2, const std::wstring &paramString3, int paramInt, const std::wstring &paramString4);

				  void android->support.v7.b.a(int paramInt, const std::wstring &paramString1, const std::wstring &paramString2);

				  void android->support.v7.b.a(bool paramBoolean);

			  public:
				  static bool android->support.v7.b.a(Context *paramContext);

			  private:
				  CharSequence *android->support.v4.widget.b(CharSequence *paramCharSequence);

				  void android->support.v4.widget.b(bool paramBoolean);

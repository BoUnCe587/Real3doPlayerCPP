#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include <string>
#include <vector>
#include <stdexcept>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace widget { class SearchView; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class i; } } } }
namespace android { namespace support { namespace v4 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class f; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class g; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::app::SearchManager;
				using android::app::SearchableInfo;
				using android::content::ComponentName;
				using android::content::Context;
				using android::content::res::ColorStateList;
				using android::content::res::Resources;
				using android::database::Cursor;
				using android::graphics::drawable::Drawable;
				using android::net::Uri;
				using android::os::Bundle;
				using a = android::support::v4::b::a;
				using i = android::support::v4::widget::i;
				using a = android::support::v7::b::a;
				using android::util::TypedValue;
				using android::view::View;
				using android::view::ViewGroup;
				using android::widget::ImageView;
				using android::widget::TextView;

				class i : public i, public View::OnClickListener
				{
			  private:
				  SearchManager *const j = static_cast<SearchManager*>(this->d.getSystemService(L"search"));

				  SearchView *const k;

				  SearchableInfo *const l;

				  Context *const m;

				  WeakHashMap<std::wstring, Drawable::ConstantState*> *const n;

				  const int o;

				  bool p = false;

				  int q = 1;

				  ColorStateList *r;

				  int s = -1;

				  int t = -1;

				  int u = -1;

				  int v = -1;

				  int w = -1;

				  int x = -1;

			  public:
				  virtual ~i()
				  {
					  delete j;
					  delete k;
					  delete l;
					  delete m;
					  delete n;
					  delete r;
				  }

				  virtual internal *i(Context *paramContext, SearchView *paramSearchView, SearchableInfo *paramSearchableInfo, WeakHashMap<std::wstring, Drawable::ConstantState*> *paramWeakHashMap);

			  private:
				  Drawable *a(ComponentName *paramComponentName);

				  Drawable *a(const std::wstring &paramString);

				  static std::wstring a(Cursor *paramCursor, int paramInt);

			  public:
				  static std::wstring a(Cursor *paramCursor, const std::wstring &paramString);

			  private:
				  void a(ImageView *paramImageView, Drawable *paramDrawable, int paramInt);

				  void a(TextView *paramTextView, CharSequence *paramCharSequence);

				  void a(const std::wstring &paramString, Drawable *paramDrawable);

				  Drawable *b(ComponentName *paramComponentName);

				  Drawable *b(Uri *paramUri);

				  Drawable *b(const std::wstring &paramString);

				  CharSequence *b(CharSequence *paramCharSequence);

				  void d(Cursor *paramCursor);

				  Drawable *e(Cursor *paramCursor);

				  Drawable *f(Cursor *paramCursor);

				  Drawable *g(Cursor *paramCursor);

			  public:
				  virtual Cursor *a(SearchableInfo *paramSearchableInfo, const std::wstring &paramString, int paramInt);

				  Cursor *a(CharSequence *paramCharSequence) override;

				  virtual Drawable *a(Uri *paramUri);

				  View *a(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup) override;

				  virtual void a(int paramInt);

				  void a(Cursor *paramCursor) override;

				  virtual void a(View *paramView, Context *paramContext, Cursor *paramCursor);

				  CharSequence *c(Cursor *paramCursor) override;

				  View *getView(int paramInt, View *paramView, ViewGroup *paramViewGroup) override;

				  bool hasStableIds() override;

				  virtual void notifyDataSetChanged();

				  virtual void notifyDataSetInvalidated();

				  virtual void onClick(View *paramView);

			  private:
				  class a final
				  {
				public:
					TextView *const android;

					TextView *const b;

					ImageView *const c;

					ImageView *const d;

					ImageView *const e;

					virtual ~a()
					{
						delete android;
						delete b;
						delete c;
						delete d;
						delete e;
					}

					internal *android->support.v4.b.a(View *param1View);
				  };
				};
			}
		}
	}
}

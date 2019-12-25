#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../c/a.h"
#include "c.h"
#include "../c/a/a.h"
#include "a.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class b; } } } }
namespace android { namespace support { namespace v4 { namespace c { namespace a { class a; } } } } }
namespace android { namespace support { namespace v4 { namespace widget { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{

				using android::content::Context;
				using android::database::ContentObserver;
				using android::database::Cursor;
				using android::database::DataSetObserver;
				using android::view::View;
				using android::view::ViewGroup;
				using android::widget::BaseAdapter;
				using android::widget::Filter;
				using android::widget::FilterQueryProvider;
				using android::widget::Filterable;

				class b : public BaseAdapter, public c->a, public Filterable
				{
			  protected:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  bool a_Renamed = false;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  bool b_Renamed = false;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  Cursor *c_Renamed;

				  Context *d;

				  int e = 0;

				  android::support::v4::c::a::a::a *f;

				  DataSetObserver *g;

				  android::support::v4::widget::c *h;

				  FilterQueryProvider *i;

			  public:
				  b(Context *paramContext, Cursor *paramCursor, bool paramBoolean);

				  virtual Cursor *a();

				  virtual Cursor *a(CharSequence *paramCharSequence);

				  virtual View *a(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup) = 0;

				  virtual void a(Context *paramContext, Cursor *paramCursor, int paramInt);

				  virtual void a(Cursor *paramCursor);

				  virtual void a(View *paramView, Context *paramContext, Cursor *paramCursor) = 0;

				  Cursor b(Cursor *paramCursor);

				  View b(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup);

			  protected:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  virtual void b_Renamed();

			  public:
				  virtual CharSequence *c(Cursor *paramCursor);

				  virtual int getCount();

				  virtual View *getDropDownView(int paramInt, View *paramView, ViewGroup *paramViewGroup);

				  virtual Filter *getFilter();

				  virtual void *getItem(int paramInt);

				  virtual long long getItemId(int paramInt);

				  virtual View *getView(int paramInt, View *paramView, ViewGroup *paramViewGroup);

				  virtual bool hasStableIds();

			  private:
				  class a : public ContentObserver
				  {
							  private:
								  b *outerInstance;

				public:
					virtual ~a()
					{
						delete outerInstance;
					}

					a(b *outerInstance, b *this$0);

					virtual bool deliverSelfNotifications();

					virtual void onChange(bool param1Boolean);
				  };

			  private:
				  class b : public DataSetObserver
				  {
							  private:
								  *e;

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private b(b this$0)
					b(*outerInstance, android::support::v4::widget::b *this$0);

				public:
					virtual void onChanged();

					virtual void onInvalidated();
				  };
				};

			}
		}
	}
}

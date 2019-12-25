//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"

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
				using android::os::Handler;
				using android::view::View;
				using android::view::ViewGroup;
				using android::widget::BaseAdapter;
				using android::widget::Filter;
				using android::widget::FilterQueryProvider;
				using android::widget::Filterable;

				b::b(Context *paramContext, Cursor *paramCursor, bool paramBoolean)
				{
				  if (paramBoolean)
				  {
					b1 = 1;
				  }
				  else
				  {
					b1 = 2;
				  }
				  a(paramContext, paramCursor, b1);
				}

				Cursor *b::a()
				{
					return this->c_Renamed;
				}

				Cursor *b::a(CharSequence *paramCharSequence)
				{
					return (this->i != nullptr) ? this->i->runQuery(paramCharSequence) : this->c_Renamed;
				}

				void b::a(Context *paramContext, Cursor *paramCursor, int paramInt)
				{
				  char b1;
				  bool bool_Renamed = true;
				  if ((paramInt & true) == 1)
				  {
					paramInt |= 0x2;
					this->b_Renamed = true;
				  }
				  else
				  {
					this->b_Renamed = false;
				  }
				  if (paramCursor == nullptr)
				  {
					bool_Renamed = false;
				  }
				  this->c_Renamed = paramCursor;
				  this->a_Renamed = bool_Renamed;
				  this->d = paramContext;
				  if (bool_Renamed)
				  {
					b1 = paramCursor->getColumnIndexOrThrow(L"_id");
				  }
				  else
				  {
					b1 = -1;
				  }
				  this->e = b1;
				  if ((paramInt & 0x2) == 2)
				  {
					this->f = new a(this, this);
					this->g = new b(this, nullptr);
				  }
				  else
				  {
					this->f = nullptr;
					this->g = nullptr;
				  }
				  if (bool_Renamed)
				  {
					if (this->f != nullptr)
					{
					  paramCursor->registerContentObserver(this->f);
					}
					if (this->g != nullptr)
					{
					  paramCursor->registerDataSetObserver(this->g);
					}
				  }
				}

				void b::a(Cursor *paramCursor)
				{
				  paramCursor = b(paramCursor);
				  if (paramCursor != nullptr)
				  {
					delete paramCursor;
				  }
				}

				Cursor b::b(Cursor *paramCursor)
				{
				  if (paramCursor == this->c_Renamed)
				  {
					return nullptr;
				  }
				  Cursor *cursor = this->c_Renamed;
				  if (cursor != nullptr)
				  {
					if (this->f != nullptr)
					{
					  cursor->unregisterContentObserver(this->f);
					}
					if (this->g != nullptr)
					{
					  cursor->unregisterDataSetObserver(this->g);
					}
				  }
				  this->c_Renamed = paramCursor;
				  if (paramCursor != nullptr)
				  {
					if (this->f != nullptr)
					{
					  paramCursor->registerContentObserver(this->f);
					}
					if (this->g != nullptr)
					{
					  paramCursor->registerDataSetObserver(this->g);
					}
					this->e = paramCursor->getColumnIndexOrThrow(L"_id");
					this->a_Renamed = true;
					notifyDataSetChanged();
					return cursor;
				  }
				  this->e = -1;
				  this->a_Renamed = false;
				  notifyDataSetInvalidated();
				  return cursor;
				}

				View b::b(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup)
				{
					return a(paramContext, paramCursor, paramViewGroup);
				}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				void b::b_Renamed()
				{
				  if (this->b_Renamed && this->c_Renamed != nullptr && !this->c_Renamed->isClosed())
				  {
					this->a_Renamed = this->c_Renamed->requery();
				  }
				}

				CharSequence *b::c(Cursor *paramCursor)
				{
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					return (paramCursor == nullptr) ? L"" : paramCursor->toString();
				}

				int b::getCount()
				{
					return (this->a_Renamed && this->c_Renamed != nullptr) ? this->c_Renamed->getCount() : 0;
				}

				View *b::getDropDownView(int paramInt, View *paramView, ViewGroup *paramViewGroup)
				{
				  if (this->a_Renamed)
				  {
					this->c_Renamed->moveToPosition(paramInt);
					View *view = paramView;
					if (paramView == nullptr)
					{
					  view = b(this->d, this->c_Renamed, paramViewGroup);
					}
					a(view, this->d, this->c_Renamed);
					return view;
				  }
				  return nullptr;
				}

				Filter *b::getFilter()
				{
				  if (this->h == nullptr)
				  {
					this->h = new c(this);
				  }
				  return this->h;
				}

				void *b::getItem(int paramInt)
				{
				  if (this->a_Renamed && this->c_Renamed != nullptr)
				  {
					this->c_Renamed->moveToPosition(paramInt);
					return this->c_Renamed;
				  }
				  return nullptr;
				}

				long long b::getItemId(int paramInt)
				{
				  long long l2 = 0LL;
				  long long l1 = l2;
				  if (this->a_Renamed)
				  {
					l1 = l2;
					if (this->c_Renamed != nullptr)
					{
					  l1 = l2;
					  if (this->c_Renamed->moveToPosition(paramInt))
					  {
						l1 = this->c_Renamed->getLong(this->e);
					  }
					}
				  }
				  return l1;
				}

				View *b::getView(int paramInt, View *paramView, ViewGroup *paramViewGroup)
				{
				  if (!this->a_Renamed)
				  {
					throw IllegalStateException(L"this should only be called when the cursor is valid");
				  }
				  if (!this->c_Renamed->moveToPosition(paramInt))
				  {
					throw IllegalStateException(L"couldn't move cursor to position " + std::to_wstring(paramInt));
				  }
				  View *view = paramView;
				  if (paramView == nullptr)
				  {
					view = a(this->d, this->c_Renamed, paramViewGroup);
				  }
				  a(view, this->d, this->c_Renamed);
				  return view;
				}

				bool b::hasStableIds()
				{
					return true;
				}

				b::a::a(b *outerInstance, b *this$0) : android::database::ContentObserver(new Handler()), outerInstance(outerInstance)
				{
				}

				bool b::a::deliverSelfNotifications()
				{
					return true;
				}

				void b::a::onChange(bool param1Boolean)
				{
					this->a.b();
				}

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: private b(b this$0)
				b::b::b(*outerInstance, android::support::v4::widget::b *this$0) : outerInstance()
				{
				}

				void b::b::onChanged()
				{
				  this->a_Renamed.a = true;
				  this->a_Renamed.notifyDataSetChanged();
				}

				void b::b::onInvalidated()
				{
				  this->a_Renamed.a = false;
				  this->a_Renamed.notifyDataSetInvalidated();
				}
			}
		}
	}
}

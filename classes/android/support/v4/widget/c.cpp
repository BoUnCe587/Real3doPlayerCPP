//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "c.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::database::Cursor;
				using android::widget::Filter;

				c::c(a *parama)
				{
					this->a = parama;
				}

				CharSequence *c::convertResultToString(void *paramObject)
				{
					return this->a->c(static_cast<Cursor*>(paramObject));
				}

				Filter::FilterResults *c::performFiltering(CharSequence *paramCharSequence)
				{
				  Cursor *cursor = this->a->a(paramCharSequence);
				  Filter::FilterResults *filterResults = new Filter::FilterResults();
				  if (cursor != nullptr)
				  {
					filterResults->count = cursor->getCount();
					filterResults->values = cursor;
					return filterResults;
				  }
				  filterResults->count = 0;
				  filterResults->values = nullptr;
				  return filterResults;
				}

				void c::publishResults(CharSequence *paramCharSequence, Filter::FilterResults *paramFilterResults)
				{
				  Cursor *cursor = this->a->a();
				  if (paramFilterResults->values != nullptr && paramFilterResults->values != cursor)
				  {
					this->a->a(static_cast<Cursor*>(paramFilterResults->values));
				  }
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"

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

				class c : public Filter
				{
			  public:
				  a *a;

				  virtual ~c()
				  {
					  delete a;
				  }

				  c(a *parama);

				  virtual CharSequence *convertResultToString(void *paramObject);

			  protected:
				  virtual Filter::FilterResults *performFiltering(CharSequence *paramCharSequence);

				  virtual void publishResults(CharSequence *paramCharSequence, Filter::FilterResults *paramFilterResults);

			  public:
				  class a
				  {
				public:
					virtual Cursor *a() = 0;

					virtual Cursor *a(CharSequence *param1CharSequence) = 0;

					virtual void a(Cursor *param1Cursor) = 0;

					virtual CharSequence *c(Cursor *param1Cursor) = 0;
				  };
				};

			}
		}
	}
}

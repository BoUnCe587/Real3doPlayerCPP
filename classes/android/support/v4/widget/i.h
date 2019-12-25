#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"
#include "j.h"
#include "k.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace c { namespace a { class a; } } } } }
namespace android { namespace support { namespace v4 { namespace widget { class a; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class b; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{

				using android::content::Context;
				using android::database::Cursor;
				using android::view::LayoutInflater;
				using android::view::View;
				using android::view::ViewGroup;

				class i : public b
				{
			  private:
				  int j = 0;

				  int k = 0;

				  LayoutInflater *l;

			  public:
				  virtual ~i()
				  {
					  delete l;
				  }

				  i(Context *paramContext, int paramInt, Cursor *paramCursor, bool paramBoolean);

				  View *a(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup) override;

				  View *b(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup) override;
				};
			}
		}
	}
}

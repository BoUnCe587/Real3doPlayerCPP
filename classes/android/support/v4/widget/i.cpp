//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "i.h"
#include "../c/a/a.h"

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

				i::i(Context *paramContext, int paramInt, Cursor *paramCursor, bool paramBoolean) : b(paramContext, paramCursor, paramBoolean)
				{
				  this->k = paramInt;
				  this->j = paramInt;
				  this->l = static_cast<LayoutInflater*>(paramContext->getSystemService(L"layout_inflater"));
				}

				View *i::a(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup)
				{
					return this->l->inflate(this->j, paramViewGroup, false);
				}

				View *i::b(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup)
				{
					return this->l->inflate(this->k, paramViewGroup, false);
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "e.h"
#include "f.h"
#include "i.h"
#include "j.h"
#include "k.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{
				using android::view::View;
				using android::widget::ListView;

				d::d(ListView *paramListView) : a(paramListView), a(paramListView)
				{
				}

				void d::a(int paramInt1, int paramInt2)
				{
				  ListView *listView = this->a_Renamed;
				  paramInt1 = listView->getFirstVisiblePosition();
				  if (paramInt1 != -1)
				  {
					View *view = listView->getChildAt(0);
					if (view != nullptr)
					{
					  listView->setSelectionFromTop(paramInt1, view->getTop() - paramInt2);
					  return;
					}
				  }
				}

				bool d::e(int paramInt)
				{
					return false;
				}

				bool d::f(int paramInt)
				{
				  ListView *listView = this->a_Renamed;
				  int i = listView->getCount();
				  if (i != 0)
				  {
					int j = listView->getChildCount();
					int k = listView->getFirstVisiblePosition();
					if (paramInt > 0)
					{
					  return (k + j < i || listView->getChildAt(j - 1).getBottom() > listView->getHeight());
					}
					if (paramInt < 0)
					{
					  return !(k <= 0 && listView->getChildAt(0).getTop() >= 0);
					}
				  }
				  return false;
				}
			}
		}
	}
}

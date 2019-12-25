#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"
#include "c.h"
#include "f.h"
#include "d.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace widget { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace widget
			{

				using android::view::View;
				using android::widget::PopupWindow;

				class e
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  static android::support::v4::widget::f *const a_Renamed;

							  private:
								  class StaticConstructor
								  {
								  public:
									  StaticConstructor();
								  };

							  private:
								  static e::StaticConstructor staticConstructor;


			  public:
				  static void a(PopupWindow *paramPopupWindow, View *paramView, int paramInt1, int paramInt2, int paramInt3);

				  static void a(PopupWindow *paramPopupWindow, bool paramBoolean);

			  public:
				  class a;

			  public:
				  class b : public a
				  {
				public:
					void a(PopupWindow *param1PopupWindow, bool param1Boolean) override;
				  };

			  public:
				  class c : public f
				  {
				public:
					virtual void a(PopupWindow *param1PopupWindow, View *param1View, int param1Int1, int param1Int2, int param1Int3);

					virtual void a(PopupWindow *param1PopupWindow, bool param1Boolean);
				  };

			  public:
				  class d : public c
				  {
				  };

			  public:
				  class e : public d
				  {
				public:
					virtual void a(PopupWindow *param1PopupWindow, View *param1View, int param1Int1, int param1Int2, int param1Int3);
				  };

			  public:
				  class f
				  {
				public:
					virtual void a(PopupWindow *param1PopupWindow, View *param1View, int param1Int1, int param1Int2, int param1Int3) = 0;

					virtual void a(PopupWindow *param1PopupWindow, bool param1Boolean) = 0;
				  };
				};
			}
		}
	}
}
			  class e::a : public e
			  {
			public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				virtual void a_Renamed(PopupWindow *param1PopupWindow, bool param1Boolean);
			  };

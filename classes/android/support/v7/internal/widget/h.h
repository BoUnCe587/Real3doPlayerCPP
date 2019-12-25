#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "f.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "g.h"
#include "../../../v4/c/a.h"
#include "../../c/a/b.h"
#include "../a.h"
#include "a.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace c { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class c; } } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace widget
				{

					using android::content::Context;
					using android::graphics::Canvas;
					using android::graphics::Rect;
					using android::graphics::drawable::Drawable;
					using a = android::support::v4::c::a::a;
					using b = android::support::v7::c::a::b;
					using android::util::AttributeSet;
					using android::view::View;
					using android::widget::ListAdapter;
					using android::widget::ListView;

					class h : public android->widget.ListView
					{
				  private:
					  static std::vector<int> const f = {0};

				  public:
					  Rect *const android;

					  int android = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  int c_Renamed = 0;

					  int d = 0;

					  int e = 0;

				  private:
					  Field *g;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  a *h_Renamed;

				  public:
					  virtual ~h()
					  {
						  delete android;
						  delete g;
						  delete h;
					  }

					  h(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

					  virtual int android->support.v4.c.a::a(int paramInt1, int paramInt2, int paramInt3, int paramInt4, int paramInt5);

				  protected:
					  virtual void android->support.v4.c.a::a();

					  virtual void android->support.v4.c.a::a(int paramInt, View *paramView);

					  virtual void android->support.v4.c.a::a(int paramInt, View *paramView, float paramFloat1, float paramFloat2);

					  virtual void android->support.v4.c.a::a(Canvas *paramCanvas);

					  virtual void android->support.v7.c.a.b(int paramInt, View *paramView);

					  virtual bool android->support.v7.c.a.b();

					  virtual bool c();

					  virtual void dispatchDraw(Canvas *paramCanvas);

					  virtual void drawableStateChanged();

				  public:
					  virtual void setSelector(Drawable *paramDrawable);

				  protected:
					  virtual void setSelectorEnabled(bool paramBoolean);

				  private:
					  class a : public android.support::v7::c::a::b
					  {
					private:
						bool android = false;

					public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual internal *android.support::v4::c::a::a(Drawable *param1Drawable);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void android.support::v4::c::a::a(bool param1Boolean);

						void draw(Canvas *param1Canvas) override;

						void setHotspot(float param1Float1, float param1Float2) override;

						void setHotspotBounds(int param1Int1, int param1Int2, int param1Int3, int param1Int4) override;

						bool setState(std::vector<int> &param1ArrayOfInt) override;

						bool setVisible(bool param1Boolean1, bool param1Boolean2) override;
					  };
					};
				}
			}
		}
	}
}

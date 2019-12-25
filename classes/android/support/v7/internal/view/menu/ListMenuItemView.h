#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "k.h"
#include "../b.h"
#include "b.h"
#include "../c.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include "l.h"
#include "m.h"
#include "n.h"
#include <limits>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class b; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class b; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class c; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class d; } } } } } }
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{
					namespace menu
					{

						using android::content::Context;
						using android::graphics::drawable::Drawable;
						using a = android::support::v7::b::a;
						using android::util::AttributeSet;
						using android::view::LayoutInflater;
						using android::widget::CheckBox;
						using android::widget::ImageView;
						using android::widget::LinearLayout;
						using android::widget::RadioButton;
						using android::widget::TextView;

						class ListMenuItemView : public android->widget.LinearLayout, public k.a
						{
					  private:
						  f *android;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  ImageView *b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  RadioButton *c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  TextView *d_Renamed;

						  CheckBox *e;

						  TextView *f;

						  Drawable *g;

						  int h = 0;

						  Context *i;

						  bool j = false;

						  int k = 0;

						  Context *l;

						  LayoutInflater *m;

						  bool n = false;

					  public:
						  virtual ~ListMenuItemView()
						  {
							  delete android;
							  delete b;
							  delete c;
							  delete d;
							  delete e;
							  delete f;
							  delete g;
							  delete i;
							  delete l;
							  delete m;
						  }

						  ListMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet);

						  ListMenuItemView(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

					  private:
						  void b();

						  void c();

						  void d();

						  LayoutInflater *getInflater();

					  public:
						  virtual void android->support.v7.b.a(f *paramf, int paramInt);

						  virtual void android->support.v7.b.a(bool paramBoolean, wchar_t paramChar);

						  virtual bool android->support.v7.b.a();

						  virtual f *getItemData();

					  protected:
						  virtual void onFinishInflate();

						  virtual void onMeasure(int paramInt1, int paramInt2);

					  public:
						  virtual void setCheckable(bool paramBoolean);

						  virtual void setChecked(bool paramBoolean);

						  virtual void setForceShowIcon(bool paramBoolean);

						  virtual void setIcon(Drawable *paramDrawable);

						  virtual void setTitle(CharSequence *paramCharSequence);
						};
					}
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace widget { class a; } } } } }

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
					using android::graphics::Rect;
					using android::util::AttributeSet;
					using android::util::TypedValue;
					using android::widget::FrameLayout;

					class ContentFrameLayout : public FrameLayout
					{
				  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					  TypedValue *a_Renamed;

					  TypedValue *b;

					  TypedValue *c;

					  TypedValue *d;

					  TypedValue *e;

					  TypedValue *f;

					  Rect *const g = new Rect();

				  public:
					  virtual ~ContentFrameLayout()
					  {
						  delete a;
						  delete b;
						  delete c;
						  delete d;
						  delete e;
						  delete f;
						  delete g;
					  }

					  ContentFrameLayout(Context *paramContext);

					  ContentFrameLayout(Context *paramContext, AttributeSet *paramAttributeSet);

					  ContentFrameLayout(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

					  virtual void a(Rect *paramRect);

					  virtual TypedValue *getFixedHeightMajor();

					  virtual TypedValue *getFixedHeightMinor();

					  virtual TypedValue *getFixedWidthMajor();

					  virtual TypedValue *getFixedWidthMinor();

					  virtual TypedValue *getMinWidthMajor();

					  virtual TypedValue *getMinWidthMinor();

				  protected:
					  virtual void onMeasure(int paramInt1, int paramInt2);
					}
				}
			}
		}
	}

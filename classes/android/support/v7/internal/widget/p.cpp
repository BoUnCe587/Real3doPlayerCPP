//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "p.h"
#include "o.h"
#include "i.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "g.h"

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
					using android::content::res::TypedArray;
					using android::graphics::drawable::Drawable;
					using android::util::AttributeSet;

					p::p(Context *paramContext, TypedArray *paramTypedArray) : a(paramContext), b(paramTypedArray)
					{
					}

					p *p::a(Context *paramContext, AttributeSet *paramAttributeSet, std::vector<int> &paramArrayOfInt)
					{
						return new p(paramContext, paramContext->obtainStyledAttributes(paramAttributeSet, paramArrayOfInt));
					}

					p *p::a(Context *paramContext, AttributeSet *paramAttributeSet, std::vector<int> &paramArrayOfInt, int paramInt1, int paramInt2)
					{
						return new p(paramContext, paramContext->obtainStyledAttributes(paramAttributeSet, paramArrayOfInt, paramInt1, paramInt2));
					}

					float p::a(int paramInt, float paramFloat)
					{
						return this->b_Renamed->getFloat(paramInt, paramFloat);
					}

					int p::a()
					{
						return this->b_Renamed->length();
					}

					int p::a(int paramInt1, int paramInt2)
					{
						return this->b_Renamed->getInt(paramInt1, paramInt2);
					}

					Drawable *p::a(int paramInt)
					{
					  if (this->b_Renamed->hasValue(paramInt))
					  {
						int i = this->b_Renamed->getResourceId(paramInt, 0);
						if (i != 0)
						{
						  return c()->a(i);
						}
					  }
					  return this->b_Renamed->getDrawable(paramInt);
					}

					bool p::a(int paramInt, bool paramBoolean)
					{
						return this->b_Renamed->getBoolean(paramInt, paramBoolean);
					}

					int p::b(int paramInt1, int paramInt2)
					{
						return this->b_Renamed->getColor(paramInt1, paramInt2);
					}

					CharSequence *p::b(int paramInt)
					{
						return this->b_Renamed->getText(paramInt);
					}

					void p::b()
					{
						this->b_Renamed->recycle();
					}

					int p::c(int paramInt1, int paramInt2)
					{
						return this->b_Renamed->getInteger(paramInt1, paramInt2);
					}

					o *p::c()
					{
					  if (this->c_Renamed == nullptr)
					  {
						this->c_Renamed = o::a(this->a_Renamed);
					  }
					  return this->c_Renamed;
					}

					std::wstring p::c(int paramInt)
					{
						return this->b_Renamed->getString(paramInt);
					}

					int p::d(int paramInt1, int paramInt2)
					{
						return this->b_Renamed->getDimensionPixelOffset(paramInt1, paramInt2);
					}

					bool p::d(int paramInt)
					{
						return this->b_Renamed->hasValue(paramInt);
					}

					int p::e(int paramInt1, int paramInt2)
					{
						return this->b_Renamed->getDimensionPixelSize(paramInt1, paramInt2);
					}

					int p::f(int paramInt1, int paramInt2)
					{
						return this->b_Renamed->getLayoutDimension(paramInt1, paramInt2);
					}

					int p::g(int paramInt1, int paramInt2)
					{
						return this->b_Renamed->getResourceId(paramInt1, paramInt2);
					}
				}
			}
		}
	}
}

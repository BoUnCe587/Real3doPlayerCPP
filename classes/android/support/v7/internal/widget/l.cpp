//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "l.h"
#include "../../../v4/c/a.h"
#include "../../../v4/c/a/a.h"
#include "../../../v4/c/a/b.h"

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
					using android::content::res::ColorStateList;
					using android::content::res::TypedArray;
					using android::graphics::Color;
					using android::support::v4::c::a;
					using android::util::TypedValue;
ThreadLocal<android::util::TypedValue*> *const l::i = new ThreadLocal();

					l::StaticConstructor::StaticConstructor()
					{
												android.support::v4::c::a = std::vector<int> {-16842910};
												b_Renamed = std::vector<int> {16842908};
												c_Renamed = std::vector<int> {16843518};
												d = std::vector<int> {16842919};
												e = std::vector<int> {16842912};
												f = std::vector<int> {16842913};
												g = std::vector<int> {-16842919, -16842908};
												h = std::vector<int>(0);
												j = std::vector<int>(1);
					}

l::StaticConstructor l::staticConstructor;

					int l::android.support::v4::c::a(Context *paramContext, int paramInt)
					{
					  j[0] = paramInt;
					  typedArray = paramContext->obtainStyledAttributes(nullptr, j);
					  try
					  {
						return typedArray::getColor(0, 0);
					  }
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
					  finally
					  {
						typedArray::recycle();
					  }
					}

					int l::android.support::v4::c::a(Context *paramContext, int paramInt, float paramFloat)
					{
					  paramInt = android.support::v4::c::a(paramContext, paramInt);
					  return android.support::v4::c::a::b(paramInt, std::round(android.graphics::Color::alpha(paramInt) * paramFloat));
					}

					ColorStateList *l::android.support::v4::c::a(int paramInt1, int paramInt2)
					{
						return new android.content::res::ColorStateList(std::vector<std::vector<int>> {android.support::v4::c::a, h}, std::vector<int> {paramInt2, paramInt1});
					}

					TypedValue *l::android.support::v4::c::a()
					{
					  TypedValue *typedValue2 = static_cast<TypedValue*>(i->get());
					  TypedValue *typedValue1 = typedValue2;
					  if (typedValue2 == nullptr)
					  {
						typedValue1 = new android.util::TypedValue();
						i->set(typedValue1);
					  }
					  return typedValue1;
					}

					ColorStateList *l::b(Context *paramContext, int paramInt)
					{
					  j[0] = paramInt;
					  typedArray = paramContext->obtainStyledAttributes(nullptr, j);
					  try
					  {
						return typedArray::getColorStateList(0);
					  }
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
					  finally
					  {
						typedArray::recycle();
					  }
					}

					int l::c(Context *paramContext, int paramInt)
					{
					  ColorStateList *colorStateList = b(paramContext, paramInt);
					  if (colorStateList != nullptr && colorStateList->isStateful())
					  {
						return colorStateList->getColorForState(android.support::v4::c::a, colorStateList->getDefaultColor());
					  }
					  TypedValue *typedValue = android.support::v4::c::a();
					  paramContext->getTheme().resolveAttribute(16842803, typedValue, true);
					  return android.support::v4::c::a(paramContext, paramInt, typedValue->getFloat());
					}
				}
			}
		}
	}
}

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "i.h"

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
					using android::content::res::AssetFileDescriptor;
					using android::content::res::ColorStateList;
					using android::content::res::Configuration;
					using android::content::res::Resources;
					using android::content::res::TypedArray;
					using android::content::res::XmlResourceParser;
					using android::graphics::Movie;
					using android::graphics::drawable::Drawable;
					using android::os::Bundle;
					using android::util::AttributeSet;
					using android::util::DisplayMetrics;
					using android::util::TypedValue;

					i::i(Resources *paramResources) : android::content::res::Resources(paramResources->getAssets(), paramResources->getDisplayMetrics(), paramResources->getConfiguration()), a(paramResources)
					{
					}

					XmlResourceParser *i::getAnimation(int paramInt)
					{
						return this->a->getAnimation(paramInt);
					}

					bool i::getBoolean(int paramInt)
					{
						return this->a->getBoolean(paramInt);
					}

					int i::getColor(int paramInt)
					{
						return this->a->getColor(paramInt);
					}

					ColorStateList *i::getColorStateList(int paramInt)
					{
						return this->a->getColorStateList(paramInt);
					}

					Configuration *i::getConfiguration()
					{
						return this->a->getConfiguration();
					}

					float i::getDimension(int paramInt)
					{
						return this->a->getDimension(paramInt);
					}

					int i::getDimensionPixelOffset(int paramInt)
					{
						return this->a->getDimensionPixelOffset(paramInt);
					}

					int i::getDimensionPixelSize(int paramInt)
					{
						return this->a->getDimensionPixelSize(paramInt);
					}

					DisplayMetrics *i::getDisplayMetrics()
					{
						return this->a->getDisplayMetrics();
					}

					Drawable *i::getDrawable(int paramInt)
					{
						return this->a->getDrawable(paramInt);
					}

					Drawable *i::getDrawable(int paramInt, Resources::Theme *paramTheme)
					{
						return this->a->getDrawable(paramInt, paramTheme);
					}

					Drawable *i::getDrawableForDensity(int paramInt1, int paramInt2)
					{
						return this->a->getDrawableForDensity(paramInt1, paramInt2);
					}

					Drawable *i::getDrawableForDensity(int paramInt1, int paramInt2, Resources::Theme *paramTheme)
					{
						return this->a->getDrawableForDensity(paramInt1, paramInt2, paramTheme);
					}

					float i::getFraction(int paramInt1, int paramInt2, int paramInt3)
					{
						return this->a->getFraction(paramInt1, paramInt2, paramInt3);
					}

					int i::getIdentifier(const std::wstring &paramString1, const std::wstring &paramString2, const std::wstring &paramString3)
					{
						return this->a->getIdentifier(paramString1, paramString2, paramString3);
					}

					std::vector<int> i::getIntArray(int paramInt)
					{
						return this->a->getIntArray(paramInt);
					}

					int i::getInteger(int paramInt)
					{
						return this->a->getInteger(paramInt);
					}

					XmlResourceParser *i::getLayout(int paramInt)
					{
						return this->a->getLayout(paramInt);
					}

					Movie *i::getMovie(int paramInt)
					{
						return this->a->getMovie(paramInt);
					}

					std::wstring i::getQuantityString(int paramInt1, int paramInt2)
					{
						return this->a->getQuantityString(paramInt1, paramInt2);
					}

					std::wstring i::getQuantityString(int paramInt1, int paramInt2, std::vector<Object> &paramVarArgs)
					{
						return this->a->getQuantityString(paramInt1, paramInt2, paramVarArgs);
					}

					CharSequence *i::getQuantityText(int paramInt1, int paramInt2)
					{
						return this->a->getQuantityText(paramInt1, paramInt2);
					}

					std::wstring i::getResourceEntryName(int paramInt)
					{
						return this->a->getResourceEntryName(paramInt);
					}

					std::wstring i::getResourceName(int paramInt)
					{
						return this->a->getResourceName(paramInt);
					}

					std::wstring i::getResourcePackageName(int paramInt)
					{
						return this->a->getResourcePackageName(paramInt);
					}

					std::wstring i::getResourceTypeName(int paramInt)
					{
						return this->a->getResourceTypeName(paramInt);
					}

					std::wstring i::getString(int paramInt)
					{
						return this->a->getString(paramInt);
					}

					std::wstring i::getString(int paramInt, std::vector<Object> &paramVarArgs)
					{
						return this->a->getString(paramInt, paramVarArgs);
					}

					std::vector<std::wstring> i::getStringArray(int paramInt)
					{
						return this->a->getStringArray(paramInt);
					}

					CharSequence *i::getText(int paramInt)
					{
						return this->a->getText(paramInt);
					}

					CharSequence *i::getText(int paramInt, CharSequence *paramCharSequence)
					{
						return this->a->getText(paramInt, paramCharSequence);
					}

					std::vector<CharSequence*> i::getTextArray(int paramInt)
					{
						return this->a->getTextArray(paramInt);
					}

					void i::getValue(int paramInt, TypedValue *paramTypedValue, bool paramBoolean)
					{
						this->a->getValue(paramInt, paramTypedValue, paramBoolean);
					}

					void i::getValue(const std::wstring &paramString, TypedValue *paramTypedValue, bool paramBoolean)
					{
						this->a->getValue(paramString, paramTypedValue, paramBoolean);
					}

					void i::getValueForDensity(int paramInt1, int paramInt2, TypedValue *paramTypedValue, bool paramBoolean)
					{
						this->a->getValueForDensity(paramInt1, paramInt2, paramTypedValue, paramBoolean);
					}

					XmlResourceParser *i::getXml(int paramInt)
					{
						return this->a->getXml(paramInt);
					}

					TypedArray *i::obtainAttributes(AttributeSet *paramAttributeSet, std::vector<int> &paramArrayOfInt)
					{
						return this->a->obtainAttributes(paramAttributeSet, paramArrayOfInt);
					}

					TypedArray *i::obtainTypedArray(int paramInt)
					{
						return this->a->obtainTypedArray(paramInt);
					}

					InputStream *i::openRawResource(int paramInt)
					{
						return this->a->openRawResource(paramInt);
					}

					InputStream *i::openRawResource(int paramInt, TypedValue *paramTypedValue)
					{
						return this->a->openRawResource(paramInt, paramTypedValue);
					}

					AssetFileDescriptor *i::openRawResourceFd(int paramInt)
					{
						return this->a->openRawResourceFd(paramInt);
					}

					void i::parseBundleExtra(const std::wstring &paramString, AttributeSet *paramAttributeSet, Bundle *paramBundle)
					{
						this->a->parseBundleExtra(paramString, paramAttributeSet, paramBundle);
					}

					void i::parseBundleExtras(XmlResourceParser *paramXmlResourceParser, Bundle *paramBundle)
					{
						this->a->parseBundleExtras(paramXmlResourceParser, paramBundle);
					}

					void i::updateConfiguration(Configuration *paramConfiguration, DisplayMetrics *paramDisplayMetrics)
					{
					  Resources::updateConfiguration(paramConfiguration, paramDisplayMetrics);
					  if (this->a != nullptr)
					  {
						this->a->updateConfiguration(paramConfiguration, paramDisplayMetrics);
					  }
					}
				}
			}
		}
	}
}

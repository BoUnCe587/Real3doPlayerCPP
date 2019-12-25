#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../a.h"
#include "a.h"
#include <string>
#include <vector>

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

					class i : public Resources
					{
				  private:
					  Resources *const a;

				  public:
					  virtual ~i()
					  {
						  delete a;
					  }

					  i(Resources *paramResources);

					  virtual XmlResourceParser *getAnimation(int paramInt);

					  virtual bool getBoolean(int paramInt);

					  virtual int getColor(int paramInt);

					  virtual ColorStateList *getColorStateList(int paramInt);

					  virtual Configuration *getConfiguration();

					  virtual float getDimension(int paramInt);

					  virtual int getDimensionPixelOffset(int paramInt);

					  virtual int getDimensionPixelSize(int paramInt);

					  virtual DisplayMetrics *getDisplayMetrics();

					  virtual Drawable *getDrawable(int paramInt);

					  virtual Drawable *getDrawable(int paramInt, Resources::Theme *paramTheme);

					  virtual Drawable *getDrawableForDensity(int paramInt1, int paramInt2);

					  virtual Drawable *getDrawableForDensity(int paramInt1, int paramInt2, Resources::Theme *paramTheme);

					  virtual float getFraction(int paramInt1, int paramInt2, int paramInt3);

					  virtual int getIdentifier(const std::wstring &paramString1, const std::wstring &paramString2, const std::wstring &paramString3);

					  virtual std::vector<int> getIntArray(int paramInt);

					  virtual int getInteger(int paramInt);

					  virtual XmlResourceParser *getLayout(int paramInt);

					  virtual Movie *getMovie(int paramInt);

					  virtual std::wstring getQuantityString(int paramInt1, int paramInt2);

					  virtual std::wstring getQuantityString(int paramInt1, int paramInt2, std::vector<Object> &paramVarArgs);

					  virtual CharSequence *getQuantityText(int paramInt1, int paramInt2);

					  virtual std::wstring getResourceEntryName(int paramInt);

					  virtual std::wstring getResourceName(int paramInt);

					  virtual std::wstring getResourcePackageName(int paramInt);

					  virtual std::wstring getResourceTypeName(int paramInt);

					  virtual std::wstring getString(int paramInt);

					  virtual std::wstring getString(int paramInt, std::vector<Object> &paramVarArgs);

					  virtual std::vector<std::wstring> getStringArray(int paramInt);

					  virtual CharSequence *getText(int paramInt);

					  virtual CharSequence *getText(int paramInt, CharSequence *paramCharSequence);

					  virtual std::vector<CharSequence*> getTextArray(int paramInt);

					  virtual void getValue(int paramInt, TypedValue *paramTypedValue, bool paramBoolean);

					  virtual void getValue(const std::wstring &paramString, TypedValue *paramTypedValue, bool paramBoolean);

					  virtual void getValueForDensity(int paramInt1, int paramInt2, TypedValue *paramTypedValue, bool paramBoolean);

					  virtual XmlResourceParser *getXml(int paramInt);

					  virtual TypedArray *obtainAttributes(AttributeSet *paramAttributeSet, std::vector<int> &paramArrayOfInt);

					  virtual TypedArray *obtainTypedArray(int paramInt);

					  virtual InputStream *openRawResource(int paramInt);

					  virtual InputStream *openRawResource(int paramInt, TypedValue *paramTypedValue);

					  virtual AssetFileDescriptor *openRawResourceFd(int paramInt);

					  virtual void parseBundleExtra(const std::wstring &paramString, AttributeSet *paramAttributeSet, Bundle *paramBundle);

					  virtual void parseBundleExtras(XmlResourceParser *paramXmlResourceParser, Bundle *paramBundle);

					  virtual void updateConfiguration(Configuration *paramConfiguration, DisplayMetrics *paramDisplayMetrics);
					};
				}
			}
		}
	}
}

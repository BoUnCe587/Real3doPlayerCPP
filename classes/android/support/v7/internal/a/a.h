#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace a
				{

					using android::content::Context;
					using android::graphics::Rect;
					using android::text::method::TransformationMethod;
					using android::view::View;

					class a : public TransformationMethod
					{
				  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  Locale *a_Renamed;

				  public:
					  virtual ~a()
					  {
						  delete a;
					  }

					  a(Context *paramContext);

					  virtual CharSequence *getTransformation(CharSequence *paramCharSequence, View *paramView);

					  virtual void onFocusChanged(View *paramView, CharSequence *paramCharSequence, bool paramBoolean, int paramInt, Rect *paramRect);
					};
				}
			}
		}
	}
}

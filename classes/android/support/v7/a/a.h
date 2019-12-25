#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace a
			{

				using android::content::Context;
				using android::graphics::drawable::Drawable;
				using a = android::support::v7::b::a;
				using android::util::AttributeSet;
				using android::view::View;
				using android::view::ViewGroup;

				class a
				{
			  public:
				  class a : public android.view::ViewGroup::MarginLayoutParams
				  {
				public:
					int android = 0;

					virtual internal *android.support::v7::b::a(int param1Int1, int param1Int2);

					virtual internal *android.support::v7::b::a(Context *param1Context, AttributeSet *param1AttributeSet);

					virtual internal *android.support::v7::b::a(a *param1a);

					virtual internal *android.support::v7::b::a(ViewGroup::LayoutParams *param1LayoutParams);
				  };

			  public:
				  class b
				  {
				public:
					virtual Drawable *a() = 0;

					CharSequence b()

					virtual View *c() = 0;

					virtual void d() = 0;

					virtual CharSequence *e() = 0;
				  };
				};
			}
		}
	}
}

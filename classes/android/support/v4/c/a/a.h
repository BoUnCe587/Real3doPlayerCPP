#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace c { namespace a { class b; } } } } }
namespace android { namespace support { namespace v4 { namespace c { class a; } } } }
namespace android { namespace support { namespace v4 { namespace c { namespace a { class a; } } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace c
			{
				namespace a
				{

					using android::content::res::ColorStateList;
					using android::graphics::PorterDuff;
					using android::graphics::drawable::Drawable;

					class a
					{
				  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static android::support::v4::c::a::b *const a_Renamed;

									  private:
										  class StaticConstructor
										  {
										  public:
											  StaticConstructor();
										  };

									  private:
										  static a::StaticConstructor staticConstructor;


				  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static void a_Renamed(Drawable *paramDrawable);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static void a_Renamed(Drawable *paramDrawable, float paramFloat1, float paramFloat2);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static void a_Renamed(Drawable *paramDrawable, int paramInt);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static void a_Renamed(Drawable *paramDrawable, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static void a_Renamed(Drawable *paramDrawable, ColorStateList *paramColorStateList);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static void a_Renamed(Drawable *paramDrawable, PorterDuff::Mode *paramMode);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					  static void a_Renamed(Drawable *paramDrawable, bool paramBoolean);

					  static bool b(Drawable *paramDrawable);

					  static Drawable *c(Drawable *paramDrawable);

				  public:
					  class a : public b
					  {
					public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(Drawable *param1Drawable);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(Drawable *param1Drawable, float param1Float1, float param1Float2);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(Drawable *param1Drawable, int param1Int);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(Drawable *param1Drawable, int param1Int1, int param1Int2, int param1Int3, int param1Int4);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(Drawable *param1Drawable, ColorStateList *param1ColorStateList);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(Drawable *param1Drawable, PorterDuff::Mode *param1Mode);

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						virtual void a_Renamed(Drawable *param1Drawable, bool param1Boolean);

						virtual bool b(Drawable *param1Drawable);

						virtual Drawable *c(Drawable *param1Drawable);
					  };

				  public:
					  class b
					  {
					public:
						virtual void a(Drawable *param1Drawable) = 0;

						virtual void a(Drawable *param1Drawable, float param1Float1, float param1Float2) = 0;

						virtual void a(Drawable *param1Drawable, int param1Int) = 0;

						virtual void a(Drawable *param1Drawable, int param1Int1, int param1Int2, int param1Int3, int param1Int4) = 0;

						virtual void a(Drawable *param1Drawable, ColorStateList *param1ColorStateList) = 0;

						virtual void a(Drawable *param1Drawable, PorterDuff::Mode *param1Mode) = 0;

						virtual void a(Drawable *param1Drawable, bool param1Boolean) = 0;

						virtual bool b(Drawable *param1Drawable) = 0;

						virtual Drawable *c(Drawable *param1Drawable) = 0;
					  };

				  public:
					  class c : public a
					  {
					public:
						void a(Drawable *param1Drawable) override;

						Drawable c(Drawable *param1Drawable);
					  };

				  public:
					  class d : public c
					  {
					  };

				  public:
					  class e : public d
					  {
					public:
						virtual void a(Drawable *param1Drawable, bool param1Boolean);

						virtual bool b(Drawable *param1Drawable);

						virtual Drawable *c(Drawable *param1Drawable);
					  };

				  public:
					  class f : public e
					  {
					public:
						virtual void a(Drawable *param1Drawable, float param1Float1, float param1Float2);

						virtual void a(Drawable *param1Drawable, int param1Int);

						virtual void a(Drawable *param1Drawable, int param1Int1, int param1Int2, int param1Int3, int param1Int4);

						virtual void a(Drawable *param1Drawable, ColorStateList *param1ColorStateList);

						virtual void a(Drawable *param1Drawable, PorterDuff::Mode *param1Mode);

						Drawable *c(Drawable *param1Drawable) override;
					  };

				  public:
					  class g : public f
					  {
					public:
						Drawable *c(Drawable *param1Drawable) override;
					  };

				  public:
					  class h : public g
					  {
					  public:
						  virtual ~h()
						  {
							  delete b;
							  delete c;
							  delete d;
							  delete f;
						  }

					  };
					};
				}
			}
		}
	}
}

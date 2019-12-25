//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "i.h"
#include "h.h"
#include "g.h"
#include "f.h"
#include "e.h"
#include "d.h"
#include "../../e/b.h"
#include "../../a/b.h"

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
					using android::os::Build;
android::support::v4::c::a::b *const a::a;

					a::StaticConstructor::StaticConstructor()
					{
												int i = Build::VERSION::SDK_INT;
												if (i >= 23)
												{
												  a_Renamed = new h();
												  return;
												}
												if (i >= 22)
												{
												  a_Renamed = new g();
												  return;
												}
												if (i >= 21)
												{
												  a_Renamed = new f();
												  return;
												}
												if (i >= 19)
												{
												  a_Renamed = new e();
												  return;
												}
												if (i >= 17)
												{
												  a_Renamed = new d();
												  return;
												}
												if (i >= 11)
												{
												  a_Renamed = new c();
												  return;
												}
												a_Renamed = new a();
					}

a::StaticConstructor a::staticConstructor;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(Drawable *paramDrawable)
					{
						a_Renamed->a(paramDrawable);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(Drawable *paramDrawable, float paramFloat1, float paramFloat2)
					{
						a_Renamed->a(paramDrawable, paramFloat1, paramFloat2);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(Drawable *paramDrawable, int paramInt)
					{
						a_Renamed->a(paramDrawable, paramInt);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(Drawable *paramDrawable, int paramInt1, int paramInt2, int paramInt3, int paramInt4)
					{
						a_Renamed->a(paramDrawable, paramInt1, paramInt2, paramInt3, paramInt4);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(Drawable *paramDrawable, ColorStateList *paramColorStateList)
					{
						a_Renamed->a(paramDrawable, paramColorStateList);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(Drawable *paramDrawable, PorterDuff::Mode *paramMode)
					{
						a_Renamed->a(paramDrawable, paramMode);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a_Renamed(Drawable *paramDrawable, bool paramBoolean)
					{
						a_Renamed->a(paramDrawable, paramBoolean);
					}

					bool a::b(Drawable *paramDrawable)
					{
						return a_Renamed->b(paramDrawable);
					}

					Drawable *a::c(Drawable *paramDrawable)
					{
						return a_Renamed->c(paramDrawable);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(Drawable *param1Drawable)
					{
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(Drawable *param1Drawable, float param1Float1, float param1Float2)
					{
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(Drawable *param1Drawable, int param1Int)
					{
						c::a(param1Drawable, param1Int);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(Drawable *param1Drawable, int param1Int1, int param1Int2, int param1Int3, int param1Int4)
					{
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(Drawable *param1Drawable, ColorStateList *param1ColorStateList)
					{
						c::a(param1Drawable, param1ColorStateList);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(Drawable *param1Drawable, PorterDuff::Mode *param1Mode)
					{
						c::a(param1Drawable, param1Mode);
					}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					void a::a::a_Renamed(Drawable *param1Drawable, bool param1Boolean)
					{
					}

					bool a::a::b(Drawable *param1Drawable)
					{
						return false;
					}

					Drawable *a::a::c(Drawable *param1Drawable)
					{
						return c::a(param1Drawable);
					}

					void a::c::a(Drawable *param1Drawable)
					{
						d::a(param1Drawable);
					}

					Drawable a::c::c(Drawable *param1Drawable)
					{
						return d::b(param1Drawable);
					}

					void a::e::a(Drawable *param1Drawable, bool param1Boolean)
					{
						e::a(param1Drawable, param1Boolean);
					}

					bool a::e::b(Drawable *param1Drawable)
					{
						return e::a(param1Drawable);
					}

					Drawable *a::e::c(Drawable *param1Drawable)
					{
						return e::b(param1Drawable);
					}

					void a::f::a(Drawable *param1Drawable, float param1Float1, float param1Float2)
					{
						f::a(param1Drawable, param1Float1, param1Float2);
					}

					void a::f::a(Drawable *param1Drawable, int param1Int)
					{
						f::a(param1Drawable, param1Int);
					}

					void a::f::a(Drawable *param1Drawable, int param1Int1, int param1Int2, int param1Int3, int param1Int4)
					{
						f::a(param1Drawable, param1Int1, param1Int2, param1Int3, param1Int4);
					}

					void a::f::a(Drawable *param1Drawable, ColorStateList *param1ColorStateList)
					{
						f::a(param1Drawable, param1ColorStateList);
					}

					void a::f::a(Drawable *param1Drawable, PorterDuff::Mode *param1Mode)
					{
						f::a(param1Drawable, param1Mode);
					}

					Drawable *a::f::c(Drawable *param1Drawable)
					{
						return f::a(param1Drawable);
					}

					Drawable *a::g::c(Drawable *param1Drawable)
					{
						return b::a(param1Drawable);
					}
				}
			}
		}
	}
}

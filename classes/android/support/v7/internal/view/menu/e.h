#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../../../../v4/b/a.h"
#include "d.h"
#include "../b.h"
#include "b.h"
#include "../c.h"
#include "c.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include "k.h"
#include "l.h"
#include "m.h"
#include "n.h"
#include "o.h"
#include <vector>
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class j; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class n; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class c; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class c; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { template<typename T>class d; } } } } } }

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
						using android::content::res::Resources;
						using android::graphics::drawable::Drawable;
						using a = android::support::v4::b::a;
						using a = android::support::v7::b::a;
						using android::view::ContextMenu;
						using android::view::KeyEvent;
						using android::view::View;

						class e : public android->support.v4.b.a
						{
					  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  static std::vector<int> const d_Renamed = {1, 4, 5, 3, 2, 0};

					  public:
						  CharSequence *android;

						  Drawable *b;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  View *c_Renamed;

					  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  Context *const e_Renamed;

						  Resources *const f;

						  bool g = false;

						  bool h = false;

						  a *i;

						  std::vector<f*> j;

						  std::vector<f*> k;

						  bool l = false;

						  std::vector<f*> m;

						  std::vector<f*> n;

						  bool o = false;

						  int p = 0;

						  ContextMenu::ContextMenuInfo *q;

						  bool r = false;

						  bool s = false;

						  bool t = false;

						  bool u = false;

						  std::vector<f*> v = std::vector();

						  CopyOnWriteArrayList<WeakReference<j*>*> *w = new CopyOnWriteArrayList();

						  f *x;

						  bool y = false;

					  public:
						  virtual ~e()
						  {
							  delete android;
							  delete b;
							  delete c;
							  delete e;
							  delete f;
							  delete i;
							  delete q;
							  delete w;
							  delete x;
						  }

						  e(Context *paramContext);

					  private:
						  static int android->support.v4.b.a(std::vector<f*> &paramArrayList, int paramInt);

						  f *android->support.v4.b.a(int paramInt1, int paramInt2, int paramInt3, int paramInt4, CharSequence *paramCharSequence, int paramInt5);

						  void android->support.v4.b.a(int paramInt1, CharSequence *paramCharSequence, int paramInt2, Drawable *paramDrawable, View *paramView);

						  void android->support.v4.b.a(int paramInt, bool paramBoolean);

						  bool android->support.v4.b.a(n *paramn, j *paramj);

						  static int c(int paramInt);

						  void c(bool paramBoolean);

						  void d(bool paramBoolean);

					  public:
						  virtual int android->support.v4.b.a(int paramInt);

						  virtual int android->support.v4.b.a(int paramInt1, int paramInt2);

					  protected:
						  virtual e *android->support.v4.b.a(Drawable *paramDrawable);

						  virtual e *android->support.v4.b.a(View *paramView);

						  virtual e *android->support.v4.b.a(CharSequence *paramCharSequence);

					  public:
						  virtual f *android->support.v4.b.a(int paramInt, KeyEvent *paramKeyEvent);
						}
					}
				}
			}
		}
	}

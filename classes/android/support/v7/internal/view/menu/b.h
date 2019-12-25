#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "j.h"
#include "../../a.h"
#include "../a.h"
#include "a.h"
#include "../c.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "../../../../v4/h/l.h"
#include "f.h"
#include "g.h"
#include "h.h"
#include "i.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace h { class k; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class b; } } } } }
namespace android { namespace support { namespace v4 { namespace h { class l; } } } }
namespace android { namespace support { namespace v4 { namespace h { class j; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { class a; } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { class a; } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class a; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class n; } } } } } }

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
						using android::view::LayoutInflater;
						using android::view::View;
						using android::view::ViewGroup;

						class b : public j
						{
					  protected:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
						  Context *a_Renamed;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  Context *b_Renamed;

						  e *c;

						  LayoutInflater *d;

						  LayoutInflater *e;

						  l::k *f;

					  private:
						  l::j::a *g;

						  int h = 0;

						  int i = 0;

					  public:
						  virtual ~b()
						  {
							  delete a;
							  delete b;
							  delete c;
							  delete d;
							  delete e;
							  delete f;
							  delete g;
						  }

						  b(Context *paramContext, int paramInt1, int paramInt2);

						  virtual l::j::a *a();

						  virtual l::k::a *a(ViewGroup *paramViewGroup);

						  virtual View *a(f *paramf, View *paramView, ViewGroup *paramViewGroup);

						  virtual void a(Context *paramContext, e *parame);

						  virtual void a(e *parame, bool paramBoolean);

						  virtual void a(f *paramf, l::k::a *parama) = 0;

						  virtual void a(l::j::a *parama);

					  protected:
						  virtual void a(View *paramView, int paramInt);

					  public:
						  virtual bool a(int paramInt, f *paramf);

						  virtual bool a(e *parame, f *paramf);

						  virtual bool a(n *paramn);

					  protected:
						  virtual bool a(ViewGroup *paramViewGroup, int paramInt);

					  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						  virtual void b_Renamed(bool paramBoolean);

						  bool b();

						  bool b(e *parame, f *paramf);
						};
					}
				}
			}
		}
	}
}

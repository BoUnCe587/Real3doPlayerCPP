#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../../a.h"
#include "../a.h"
#include "a.h"
#include "../b.h"
#include "b.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class e; } } } } } }
namespace android { namespace support { namespace v7 { namespace @internal { namespace view { namespace menu { class f; } } } } } }
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

						class j
						{
					  public:
						  virtual void a(Context *paramContext, e *parame) = 0;

						  virtual void a(e *parame, bool paramBoolean) = 0;

						  virtual bool a(e *parame, f *paramf) = 0;

						  virtual bool a(n *paramn) = 0;

						  virtual void b(bool paramBoolean) = 0;

						  virtual bool b() = 0;

						  virtual bool b(e *parame, f *paramf) = 0;

						  class a
						  {
						public:
							virtual void a(e *param1e, bool param1Boolean) = 0;

							virtual bool a(e *param1e) = 0;
						  };
						};
					}
				}
			}
		}
	}
}

#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace e { class a; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace e
			{

				using android::os::AsyncTask;

				class b
				{
			  public:
				  template<typename Params, typename Progress, typename Result>
				  static void a(AsyncTask<Params, Progress, Result> *paramAsyncTask, std::vector<Params> &paramVarArgs);
				};

			}
		}
	}
}

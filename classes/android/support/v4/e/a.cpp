//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace e
			{
				using android::os::AsyncTask;
				using android::os::Build;

template<typename Params, typename Progress, typename Result>
				AsyncTask<Params, Progress, Result> a::a(AsyncTask<Params, Progress, Result> *paramAsyncTask, std::vector<Params> &paramVarArgs)
				{
				  if (paramAsyncTask == nullptr)
				  {
					throw std::invalid_argument("task can not be null");
				  }
				  if (Build::VERSION::SDK_INT >= 11)
				  {
					b::a(paramAsyncTask, paramVarArgs);
					return paramAsyncTask;
				  }
				  paramAsyncTask->execute(paramVarArgs);
				  return paramAsyncTask;
				}
			}
		}
	}
}

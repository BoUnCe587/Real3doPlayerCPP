//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "a.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace e
			{
				using android::os::AsyncTask;

template<typename Params, typename Progress, typename Result>
				void b::a(AsyncTask<Params, Progress, Result> *paramAsyncTask, std::vector<Params> &paramVarArgs)
				{
					paramAsyncTask->executeOnExecutor(AsyncTask::THREAD_POOL_EXECUTOR, paramVarArgs);
				}
			}
		}
	}
}

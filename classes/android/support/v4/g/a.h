#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "e.h"
#include "b.h"
#include <unordered_map>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace g { class b; } } } }
namespace android { namespace support { namespace v4 { namespace g { template<typename Ktypename V>class c; } } } }

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace g
			{


				template<typename K, typename V>
				class a : public e<K, V>, public std::unordered_map<K, V>
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  d<K, V> *a_Renamed;

				  virtual ~a()
				  {
					  delete a;
				  }

			  private:
				  d<K, V> *b()
				  {
					if (this->a_Renamed == nullptr)
					{
					  this->a_Renamed = new dAnonymousInnerClass(this);
					}
					return this->a_Renamed;
				  }

			  private:
				  class dAnonymousInnerClass : public d<K*, V*>
				  {
				  private:
					  a<K*, V*> *outerInstance;

				  public:
					  dAnonymousInnerClass(a<K*, V*> *outerInstance);

				  protected:
					  int a() override;

					  int a(void *param1Object) override;

					  void *a(int param1Int1, int param1Int2) override;

					  V *a(int param1Int, V *param1V) override;

					  void a(int param1Int) override;

					  void a(K *param1K, V *param1V) override;

					  int b(void *param1Object) override;

					  std::unordered_map<K*, V*> b() override;

					  void c() override;
				  };

			  public:
				  virtual Set<std::unordered_map::Entry<K, V>*> *entrySet()
				  {
					  return b()->d();
				  }

				  virtual Set<K> *keySet()
				  {
					  return b()->e();
				  }

				  template<typename T1, typename T1>
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ template equivalent to this generic constraint:
//ORIGINAL LINE: public void putAll(java.util.Map<? extends K, ? extends V> paramMap)
				  void putAll(std::unordered_map<T1> paramMap)
				  {
					a(this->h + paramMap.size());
					for (auto entry : paramMap)
					{
					  put(entry.first, entry.second);
					}
				  }

				  virtual Collection<V> *values()
				  {
					  return b()->f();
				  }
				};

			}
		}
	}
}

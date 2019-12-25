//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "d.h"
#include "../b/a.h"

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace g
			{

				d<K, V>::b::b(d<K, V> *outerInstance, d *this$0) : outerInstance(outerInstance)
				{
				}

				bool d<K, V>::b::a(std::unordered_map::Entry<K*, V*> param1Entry)
				{
					throw UnsupportedOperationException();
				}

template<typename T1>
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ template equivalent to this generic constraint:
//ORIGINAL LINE: public boolean addAll(java.util.Collection<? extends java.util.Map.Entry<K, V>> param1Collection)
				bool d<K, V>::b::addAll(Collection<T1> *param1Collection)
				{
				  int i = this->a_Renamed.a();
				  for (auto entry : param1Collection)
				  {
					this->a_Renamed.a(entry.first, entry.second);
				  }
				  return (i != this->a_Renamed.a());
				}

				void d<K, V>::b::clear()
				{
					this->a_Renamed.c();
				}

				bool d<K, V>::b::contains(void *param1Object)
				{
				  if (dynamic_cast<std::unordered_map::Entry>(param1Object) != nullptr)
				  {
					param1Object = static_cast<std::unordered_map::Entry>(param1Object);
					int i = this->a_Renamed.a(param1Object->getKey());
					if (i >= 0)
					{
					  return outerInstance->b_Renamed->a(this->a_Renamed.a(i, 1), param1Object->getValue());
					}
				  }
				  return false;
				}

template<typename T1>
				bool d<K, V>::b::containsAll(Collection<T1> *param1Collection)
				{
//JAVA TO C++ CONVERTER TODO TASK: Java wildcard generics are not converted to C++:
//ORIGINAL LINE: java.util.Iterator iterator = param1Collection.iterator();
				  Collection<?>::const_iterator iterator = param1Collection->begin();
				  while (iterator != param1Collection->end())
				  {
					if (!contains(*iterator))
					{
					  return false;
					}
					  iterator++;
				  }
				  return true;
				}

				bool d<K, V>::b::equals(void *param1Object)
				{
					return outerInstance->d_Renamed->a(this, param1Object);
				}

				int d<K, V>::b::hashCode()
				{
				  int j = this->a_Renamed.a() - 1;
				  int i;
				  for (i = 0; j >= 0; i += (m ^ k))
				  {
					int m;
					int k;
					auto object1 = this->a_Renamed.a(j, 0);
					auto object2 = this->a_Renamed.a(j, 1);
					if (object1 == nullptr)
					{
					  k = 0;
					}
					else
					{
					  k = object1->hashCode();
					}
					if (object2 == nullptr)
					{
					  m = 0;
					}
					else
					{
					  m = object2->hashCode();
					}
					j--;
				  }
				  return i;
				}

				bool d<K, V>::b::isEmpty()
				{
					return (this->a_Renamed.a() == 0);
				}

				Iterator<std::unordered_map::Entry<K*, V*>*> *d<K, V>::b::iterator()
				{
					return new d->d(this->a_Renamed);
				}

				bool d<K, V>::b::remove(void *param1Object)
				{
					throw UnsupportedOperationException();
				}

template<typename T1>
				bool d<K, V>::b::removeAll(Collection<T1> *param1Collection)
				{
					throw UnsupportedOperationException();
				}

template<typename T1>
				bool d<K, V>::b::retainAll(Collection<T1> *param1Collection)
				{
					throw UnsupportedOperationException();
				}

				int d<K, V>::b::size()
				{
					return this->a_Renamed.a();
				}

				std::vector<void*> d<K, V>::b::toArray()
				{
					throw UnsupportedOperationException();
				}

template<typename T>
				std::vector<T> d<K, V>::b::toArray(std::vector<T> &param1ArrayOfT)
				{
					throw UnsupportedOperationException();
				}

				d<K, V>::c::c(d<K, V> *outerInstance, d *this$0) : outerInstance(outerInstance)
				{
				}

				bool d<K, V>::c::add(K *param1K)
				{
					throw UnsupportedOperationException();
				}

template<typename T1>
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ template equivalent to this generic constraint:
//ORIGINAL LINE: public boolean addAll(java.util.Collection<? extends K> param1Collection)
				bool d<K, V>::c::addAll(Collection<T1> *param1Collection)
				{
					throw UnsupportedOperationException();
				}

				void d<K, V>::c::clear()
				{
					this->a.c();
				}

				bool d<K, V>::c::contains(void *param1Object)
				{
					return (this->a.a(param1Object) >= 0);
				}

template<typename T1>
				bool d<K, V>::c::containsAll(Collection<T1> *param1Collection)
				{
					return outerInstance->d_Renamed->a(this->a.b(), param1Collection);
				}

				bool d<K, V>::c::equals(void *param1Object)
				{
					return outerInstance->d_Renamed->a(this, param1Object);
				}

				int d<K, V>::c::hashCode()
				{
				  int i = this->a.a() - 1;
				  int j = 0;
				  while (i >= 0)
				  {
					int k;
					auto object = this->a.a(i, 0);
					if (object == nullptr)
					{
					  k = 0;
					}
					else
					{
					  k = object->hashCode();
					}
					j += k;
					i--;
				  }
				  return j;
				}

				bool d<K, V>::c::isEmpty()
				{
					return (this->a.a() == 0);
				}

				Iterator<K*> *d<K, V>::c::iterator()
				{
					return new d->a(outerInstance, this->a, 0);
				}

				bool d<K, V>::c::remove(void *param1Object)
				{
				  int i = this->a.a(param1Object);
				  if (i >= 0)
				  {
					this->a.a(i);
					return true;
				  }
				  return false;
				}

template<typename T1>
				bool d<K, V>::c::removeAll(Collection<T1> *param1Collection)
				{
					return outerInstance->d_Renamed->b(this->a.b(), param1Collection);
				}

template<typename T1>
				bool d<K, V>::c::retainAll(Collection<T1> *param1Collection)
				{
					return outerInstance->d_Renamed->c(this->a.b(), param1Collection);
				}

				int d<K, V>::c::size()
				{
					return this->a.a();
				}

				std::vector<void*> d<K, V>::c::toArray()
				{
					return this->a.b(0);
				}

template<typename T>
				std::vector<T> d<K, V>::c::toArray(std::vector<T> &param1ArrayOfT)
				{
					return static_cast<std::vector<T>>(this->a.a(param1ArrayOfT, 0));
				}

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: d(d this$0)
				d<K, V>::d::d(*outerInstance, const d &this$0) : outerInstance()
				{
				  this->a_Renamed = this$0->a() - 1;
				  this->b_Renamed = -1;
				}

				std::unordered_map::Entry<K, V> d<K, V>::d::a()
				{
				  this->b_Renamed++;
				  this->c_Renamed = true;
				  return this;
				}

				bool d<K, V>::d::equals(void *param1Object)
				{
				  bool bool_Renamed = true;
				  if (!this->c_Renamed)
				  {
					throw IllegalStateException(L"This container does not support retaining Map.Entry objects");
				  }
				  if (!(dynamic_cast<std::unordered_map::Entry>(param1Object) != nullptr))
				  {
					return false;
				  }
				  param1Object = static_cast<std::unordered_map::Entry>(param1Object);
				  if (!b_Renamed->a(param1Object->getKey(), this->d_Renamed->a(this->b_Renamed, 0)) || !b_Renamed->a(param1Object->getValue(), this->d_Renamed->a(this->b_Renamed, 1)))
				  {
					bool_Renamed = false;
				  }
				  return bool_Renamed;
				}

				K d<K, V>::d::getKey()
				{
				  if (!this->c_Renamed)
				  {
					throw IllegalStateException(L"This container does not support retaining Map.Entry objects");
				  }
				  return static_cast<K>(this->d_Renamed->a(this->b_Renamed, 0));
				}

				V d<K, V>::d::getValue()
				{
				  if (!this->c_Renamed)
				  {
					throw IllegalStateException(L"This container does not support retaining Map.Entry objects");
				  }
				  return static_cast<V>(this->d_Renamed->a(this->b_Renamed, 1));
				}

				bool d<K, V>::d::hasNext()
				{
					return (this->b_Renamed < this->a_Renamed);
				}

				int d<K, V>::d::hashCode()
				{
				  int i;
				  int j = 0;
				  if (!this->c_Renamed)
				  {
					throw IllegalStateException(L"This container does not support retaining Map.Entry objects");
				  }
				  auto object1 = this->d_Renamed->a(this->b_Renamed, 0);
				  auto object2 = this->d_Renamed->a(this->b_Renamed, 1);
				  if (object1 == nullptr)
				  {
					i = 0;
				  }
				  else
				  {
					i = object1->hashCode();
				  }
				  if (object2 != nullptr)
				  {
					j = object2->hashCode();
				  }
				  return j ^ i;
				}

				void d<K, V>::d::remove()
				{
				  if (!this->c_Renamed)
				  {
					throw IllegalStateException();
				  }
				  this->d_Renamed->a(this->b_Renamed);
				  this->b_Renamed--;
				  this->a_Renamed--;
				  this->c_Renamed = false;
				}

				V d<K, V>::d::setValue(V param1V)
				{
				  if (!this->c_Renamed)
				  {
					throw IllegalStateException(L"This container does not support retaining Map.Entry objects");
				  }
				  return static_cast<V>(this->d_Renamed->a(this->b_Renamed, param1V));
				}

				std::wstring d<K, V>::d::toString()
				{
					return getKey() + L"=" + getValue();
				}

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: e(d this$0)
				d<K, V>::e::e(*outerInstance, d *this$0) : outerInstance()
				{
				}

				bool d<K, V>::e::add(V *param1V)
				{
					throw UnsupportedOperationException();
				}

template<typename T1>
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ template equivalent to this generic constraint:
//ORIGINAL LINE: public boolean addAll(java.util.Collection<? extends V> param1Collection)
				bool d<K, V>::e::addAll(Collection<T1> *param1Collection)
				{
					throw UnsupportedOperationException();
				}

				void d<K, V>::e::clear()
				{
					this->a.c();
				}

				bool d<K, V>::e::contains(void *param1Object)
				{
					return (this->a.b(param1Object) >= 0);
				}

template<typename T1>
				bool d<K, V>::e::containsAll(Collection<T1> *param1Collection)
				{
//JAVA TO C++ CONVERTER TODO TASK: Java wildcard generics are not converted to C++:
//ORIGINAL LINE: java.util.Iterator iterator = param1Collection.iterator();
				  Collection<?>::const_iterator iterator = param1Collection->begin();
				  while (iterator != param1Collection->end())
				  {
					if (!contains(*iterator))
					{
					  return false;
					}
					  iterator++;
				  }
				  return true;
				}

				bool d<K, V>::e::isEmpty()
				{
					return (this->a.a() == 0);
				}

				Iterator<V*> *d<K, V>::e::iterator()
				{
					return new d::a(this->a, 1);
				}

				bool d<K, V>::e::remove(void *param1Object)
				{
				  int i = this->a.b(param1Object);
				  if (i >= 0)
				  {
					this->a.a(i);
					return true;
				  }
				  return false;
				}

template<typename T1>
				bool d<K, V>::e::removeAll(Collection<T1> *param1Collection)
				{
				  char b = 0;
				  int i = this->a.a();
				  bool bool_Renamed = false;
				  while (b < i)
				  {
					char b1 = b;
					int j = i;
					if (param1Collection->contains(this->a.a(b, 1)))
					{
					  this->a.a(b);
					  b1 = b - 1;
					  j = i - 1;
					  bool_Renamed = true;
					}
					b = b1 + 1;
					i = j;
				  }
				  return bool_Renamed;
				}

template<typename T1>
				bool d<K, V>::e::retainAll(Collection<T1> *param1Collection)
				{
				  char b = 0;
				  int i = this->a.a();
				  bool bool_Renamed = false;
				  while (b < i)
				  {
					char b1 = b;
					int j = i;
					if (!param1Collection->contains(this->a.a(b, 1)))
					{
					  this->a.a(b);
					  b1 = b - 1;
					  j = i - 1;
					  bool_Renamed = true;
					}
					b = b1 + 1;
					i = j;
				  }
				  return bool_Renamed;
				}

				int d<K, V>::e::size()
				{
					return this->a.a();
				}

				std::vector<void*> d<K, V>::e::toArray()
				{
					return this->a.b(1);
				}

template<typename T>
				std::vector<T> d<K, V>::e::toArray(std::vector<T> &param1ArrayOfT)
				{
					return static_cast<std::vector<T>>(this->a.a(param1ArrayOfT, 1));
				}
			}
		}
	}
}

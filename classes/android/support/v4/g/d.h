#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"
#include "e.h"
#include "a.h"
#include <string>
#include <unordered_map>
#include <vector>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v4 { namespace g { class e; } } } }
namespace android { namespace support { namespace v4 { namespace g { class d; } } } }
namespace android { namespace support { namespace v4 { namespace g { class b; } } } }
namespace android { namespace support { namespace v4 { namespace g { template<typename Ktypename V>class a; } } } }
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
				class d : public Object
				{
			  public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  android::support::v4::g::b *b_Renamed;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  android::support::v4::g::c *c_Renamed;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  android::support::v4::g::e *d_Renamed;

				  virtual ~d()
				  {
					  delete b;
					  delete c;
					  delete d;
				  }

				  template<typename K, typename V, typename T1>
				  static bool a(std::unordered_map<K, V> &paramMap, Collection<T1> *paramCollection)
				  {
//JAVA TO C++ CONVERTER TODO TASK: Java wildcard generics are not converted to C++:
//ORIGINAL LINE: java.util.Iterator iterator = paramCollection.iterator();
					Collection<?>::const_iterator iterator = paramCollection->begin();
					while (iterator != paramCollection->end())
					{
					  if (paramMap.find(*iterator) == paramMap.end())
					  {
						return false;
					  }
						iterator++;
					}
					return true;
				  }

				  template<typename T>
				  static bool a(Set<T> *paramSet, void *paramObject)
				  {
					bool bool1 = true;
					bool bool_Renamed = false;
					if (paramSet == paramObject)
					{
					  return true;
					}
					if (dynamic_cast<Set*>(paramObject) != nullptr)
					{
					  paramObject = static_cast<Set*>(paramObject);
					  try
					  {
						if (paramSet->size() == paramObject->size())
						{
						  bool_Renamed = paramSet->containsAll(paramObject);
						  if (bool_Renamed)
						  {
							return bool1;
						  }
						}
						return false;
					  }
					  catch (const NullPointerException &paramSet)
					  {
						return false;
					  }
					  catch (const ClassCastException &paramSet)
					  {
						return false;
					  }
					}
					return bool_Renamed;
				  }

				  template<typename K, typename V, typename T1>
				  static bool b(std::unordered_map<K, V> &paramMap, Collection<T1> *paramCollection)
				  {
					int i = paramMap.size();
//JAVA TO C++ CONVERTER TODO TASK: Java wildcard generics are not converted to C++:
//ORIGINAL LINE: java.util.Iterator iterator = paramCollection.iterator();
					Collection<?>::const_iterator iterator = paramCollection->begin();
					while (iterator != paramCollection->end())
					{
					  paramMap.erase(*iterator);
						iterator++;
					}
					return (i != paramMap.size());
				  }

				  template<typename K, typename V, typename T1>
				  static bool c(std::unordered_map<K, V> &paramMap, Collection<T1> *paramCollection)
				  {
					int i = paramMap.size();
					Iterator iterator = paramMap.keySet().begin();
					while (iterator->hasNext())
					{
					  if (!paramCollection->contains(iterator->next()))
					  {
						iterator->remove();
					  }
						iterator++;
					}
					return (i != paramMap.size());
				  }

			  protected:
				  virtual int a() = 0;

				  virtual int a(void *paramObject) = 0;

				  virtual void *a(int paramInt1, int paramInt2) = 0;

				  virtual V a(int paramInt, V paramV) = 0;

				  virtual void a(int paramInt) = 0;

				  virtual void a(K paramK, V paramV) = 0;

			  public:
				  template<typename T>
				  std::vector<T> a(std::vector<T> &paramArrayOfT, int paramInt)
				  {
					int i = a();
					if (paramArrayOfT.size() < i)
					{
					  paramArrayOfT = static_cast<std::vector<T>>(static_cast<std::vector<void*>>(Array::newInstance(paramArrayOfT.getClass().getComponentType(), i)));
					}
					for (char b1 = 0; b1 < i; b1++)
					{
					  paramArrayOfT[b1] = a(b1, paramInt);
					}
					if (paramArrayOfT.size() > i)
					{
					  paramArrayOfT[i] = nullptr;
					}
					return paramArrayOfT;
				  }

			  protected:
				  virtual int b(void *paramObject) = 0;

				  virtual std::unordered_map<K, V> b() = 0;

			  public:
				  virtual std::vector<void*> b(int paramInt)
				  {
					int i = a();
					std::vector<void*> arrayOfObject(i);
					for (char b1 = 0; b1 < i; b1++)
					{
					  arrayOfObject[b1] = a(b1, paramInt);
					}
					return arrayOfObject;
				  }

			  protected:
				  virtual void c() = 0;

			  public:
				  Set<std::unordered_map::Entry<K, V>> d()
				  {
					if (this->b_Renamed == nullptr)
					{
					  this->b_Renamed = new b(this, this);
					}
					return this->b_Renamed;
				  }

				  virtual Set<K> *e()
				  {
					if (this->c_Renamed == nullptr)
					{
					  this->c_Renamed = new c(this, this);
					}
					return this->c_Renamed;
				  }

				  virtual Collection<V> *f()
				  {
					if (this->d_Renamed == nullptr)
					{
					  this->d_Renamed = new e(this);
					}
					return this->d_Renamed;
				  }

			  public:
				  template<typename T>
				  class a final : public Object, public Iterator<T>
				  {
							  private:
								  d<K*, V*> *outerInstance;

				public:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
					const int a_Renamed;

					int b = 0;

					int c = 0;

					bool d = false;

					virtual ~a()
					{
						delete outerInstance;
					}

					a(d<K, V> *outerInstance, d *this$0, int param1Int) : a(param1Int), outerInstance(outerInstance)
					{
					  this->b = this$0->a();
					}

					bool hasNext()
					{
						return (this->c < this->b);
					}

					T next()
					{
					  auto object = this->e.a(this->c, this->a_Renamed);
					  this->c++;
					  this->d = true;
					  return static_cast<T>(object);
					}

					void remove()
					{
					  if (!this->d)
					  {
						throw IllegalStateException();
					  }
					  this->c--;
					  this->b--;
					  this->d = false;
					  this->e.a(this->c);
					}
				  };

			  public:
				  class b final : public Object, public Set<std::unordered_map::Entry<K*, V*>*>
				  {
							  private:
								  d<K*, V*> *outerInstance;

				public:
					virtual ~b()
					{
						delete outerInstance;
					}

					b(d<K, V> *outerInstance, d *this$0);

					bool a(std::unordered_map::Entry<K*, V*> param1Entry);

					template<typename T1>
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ template equivalent to this generic constraint:
//ORIGINAL LINE: public boolean addAll(java.util.Collection<? extends java.util.Map.Entry<K, V>> param1Collection)
					bool addAll(Collection<T1> *param1Collection);

					void clear();

					bool contains(void *param1Object);

					template<typename T1>
					bool containsAll(Collection<T1> *param1Collection);

					bool equals(void *param1Object) override;

					int hashCode() override;

					bool isEmpty();

					Iterator<std::unordered_map::Entry<K*, V*>*> *iterator();

					bool remove(void *param1Object);

					template<typename T1>
					bool removeAll(Collection<T1> *param1Collection);

					template<typename T1>
					bool retainAll(Collection<T1> *param1Collection);

					int size();

					std::vector<void*> toArray();

					template<typename T>
					std::vector<T> toArray(std::vector<T> &param1ArrayOfT);
				  };

			  public:
				  class c final : public Object, public Set<K*>
				  {
							  private:
								  d<K*, V*> *outerInstance;

				public:
					virtual ~c()
					{
						delete outerInstance;
					}

					c(d<K, V> *outerInstance, d *this$0);

					bool add(K *param1K);

					template<typename T1>
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ template equivalent to this generic constraint:
//ORIGINAL LINE: public boolean addAll(java.util.Collection<? extends K> param1Collection)
					bool addAll(Collection<T1> *param1Collection);

					void clear();

					bool contains(void *param1Object);

					template<typename T1>
					bool containsAll(Collection<T1> *param1Collection);

					bool equals(void *param1Object) override;

					int hashCode() override;

					bool isEmpty();

					Iterator<K*> *iterator();

					bool remove(void *param1Object);

					template<typename T1>
					bool removeAll(Collection<T1> *param1Collection);

					template<typename T1>
					bool retainAll(Collection<T1> *param1Collection);

					int size();

					std::vector<void*> toArray();

					template<typename T>
					std::vector<T> toArray(std::vector<T> &param1ArrayOfT);
				  };

			  public:
				  class d final : public Object, public Iterator<std::unordered_map::Entry<K, V>*>, public std::unordered_map::Entry<K, V>
				  {
							  private:
								  *e;

				public:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					int a_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					int b_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
					bool c_Renamed = false;

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: d(d this$0)
					d(*outerInstance, const d &this$0);

					std::unordered_map::Entry<K, V> a();

					bool equals(void *param1Object) final override;

					K getKey();

					V getValue();

					bool hasNext();

					int hashCode() final override;

					void remove();

					V setValue(V param1V);

					std::wstring toString() final override;
				  };

			  public:
				  class e final : public Object, public Collection<V*>
				  {
							  private:
//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
								  *e_Renamed;

				public:
					virtual ~e()
					{
						delete outerInstance;
					}

//JAVA TO C++ CONVERTER TODO TASK: The following line could not be converted:
//ORIGINAL LINE: e(d this$0)
					e(*outerInstance, d *this$0);

					bool add(V *param1V);

					template<typename T1>
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ template equivalent to this generic constraint:
//ORIGINAL LINE: public boolean addAll(java.util.Collection<? extends V> param1Collection)
					bool addAll(Collection<T1> *param1Collection);

					void clear();

					bool contains(void *param1Object);

					template<typename T1>
					bool containsAll(Collection<T1> *param1Collection);

					bool isEmpty();

					Iterator<V*> *iterator();

					bool remove(void *param1Object);

					template<typename T1>
					bool removeAll(Collection<T1> *param1Collection);

					template<typename T1>
					bool retainAll(Collection<T1> *param1Collection);

					int size();

					std::vector<void*> toArray();

					template<typename T>
					std::vector<T> toArray(std::vector<T> &param1ArrayOfT);
				  };
				};

			}
		}
	}
}

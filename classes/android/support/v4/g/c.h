#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "b.h"
#include "d.h"
#include "e.h"
#include <string>
#include <stdexcept>

namespace android
{
	namespace support
	{
		namespace v4
		{
			namespace g
			{


				template<typename K, typename V>
				class c : public Object
				{
			  private:
//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  LinkedHashMap<K, V> *const a_Renamed;

				  int b = 0;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  int c_Renamed = 0;

				  int d = 0;

				  int e = 0;

				  int f = 0;

				  int g = 0;

				  int h = 0;

			  public:
				  virtual ~c()
				  {
					  delete a;
				  }

				  c(int paramInt) : a(new LinkedHashMap(0, 0.75F, true))
				  {
					if (paramInt <= 0)
					{
					  throw std::invalid_argument("maxSize <= 0");
					}
					this->c_Renamed = paramInt;
				  }

			  private:
				  int c(K paramK, V paramV)
				  {
					int i = b(paramK, paramV);
					if (i < 0)
					{
					  throw IllegalStateException(L"Negative size: " + paramK + L"=" + paramV);
					}
					return i;
				  }

			  public:
				  V a(K paramK)
				  { // Byte code:
					//   0: aload_1
					//   1: ifnonnull -> 14
					//   4: new java/lang/NullPointerException
					//   7: dup
					//   8: ldc 'key == null'
					//   10: invokespecial <init> : (Ljava/lang/String;)V
					//   13: athrow
					//   14: aload_0
					//   15: monitorenter
					//   16: aload_0
					//   17: getfield a : Ljava/util/LinkedHashMap;
					//   20: aload_1
					//   21: invokevirtual get : (Ljava/lang/Object;)Ljava/lang/Object;
					//   24: astore_2
					//   25: aload_2
					//   26: ifnull -> 43
					//   29: aload_0
					//   30: aload_0
					//   31: getfield g : I
					//   34: iconst_1
					//   35: iadd
					//   36: putfield g : I
					//   39: aload_0
					//   40: monitorexit
					//   41: aload_2
					//   42: areturn
					//   43: aload_0
					//   44: aload_0
					//   45: getfield h : I
					//   48: iconst_1
					//   49: iadd
					//   50: putfield h : I
					//   53: aload_0
					//   54: monitorexit
					//   55: aload_0
					//   56: aload_1
					//   57: invokevirtual b : (Ljava/lang/Object;)Ljava/lang/Object;
					//   60: astore_2
					//   61: aload_2
					//   62: ifnonnull -> 72
					//   65: aconst_null
					//   66: areturn
					//   67: astore_1
					//   68: aload_0
					//   69: monitorexit
					//   70: aload_1
					//   71: athrow
					//   72: aload_0
					//   73: monitorenter
					//   74: aload_0
					//   75: aload_0
					//   76: getfield e : I
					//   79: iconst_1
					//   80: iadd
					//   81: putfield e : I
					//   84: aload_0
					//   85: getfield a : Ljava/util/LinkedHashMap;
					//   88: aload_1
					//   89: aload_2
					//   90: invokevirtual put : (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
					//   93: astore_3
					//   94: aload_3
					//   95: ifnull -> 124
					//   98: aload_0
					//   99: getfield a : Ljava/util/LinkedHashMap;
					//   102: aload_1
					//   103: aload_3
					//   104: invokevirtual put : (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
					//   107: pop
					//   108: aload_0
					//   109: monitorexit
					//   110: aload_3
					//   111: ifnull -> 147
					//   114: aload_0
					//   115: iconst_0
					//   116: aload_1
					//   117: aload_2
					//   118: aload_3
					//   119: invokevirtual a : (ZLjava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V
					//   122: aload_3
					//   123: areturn
					//   124: aload_0
					//   125: aload_0
					//   126: getfield b : I
					//   129: aload_0
					//   130: aload_1
					//   131: aload_2
					//   132: invokespecial c : (Ljava/lang/Object;Ljava/lang/Object;)I
					//   135: iadd
					//   136: putfield b : I
					//   139: goto -> 108
					//   142: astore_1
					//   143: aload_0
					//   144: monitorexit
					//   145: aload_1
					//   146: athrow
					//   147: aload_0
					//   148: aload_0
					//   149: getfield c : I
					//   152: invokevirtual a : (I)V
					//   155: aload_2
					//   156: areturn
					// Exception table:
					//   from	to	target	type
					//   16	25	67	finally
					//   29	41	67	finally
					//   43	55	67	finally
					//   68	70	67	finally
					//   74	94	142	finally
					//   98	108	142	finally
					//   108	110	142	finally
					//   124	139	142	finally
					//   143	145	142	finally }

				  final V a(K paramK, V paramV)
				  { // Byte code:
					//   0: aload_1
					//   1: ifnull -> 8
					//   4: aload_2
					//   5: ifnonnull -> 18
					//   8: new java/lang/NullPointerException
					//   11: dup
					//   12: ldc 'key == null || value == null'
					//   14: invokespecial <init> : (Ljava/lang/String;)V
					//   17: athrow
					//   18: aload_0
					//   19: monitorenter
					//   20: aload_0
					//   21: aload_0
					//   22: getfield d : I
					//   25: iconst_1
					//   26: iadd
					//   27: putfield d : I
					//   30: aload_0
					//   31: aload_0
					//   32: getfield b : I
					//   35: aload_0
					//   36: aload_1
					//   37: aload_2
					//   38: invokespecial c : (Ljava/lang/Object;Ljava/lang/Object;)I
					//   41: iadd
					//   42: putfield b : I
					//   45: aload_0
					//   46: getfield a : Ljava/util/LinkedHashMap;
					//   49: aload_1
					//   50: aload_2
					//   51: invokevirtual put : (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
					//   54: astore_3
					//   55: aload_3
					//   56: ifnull -> 74
					//   59: aload_0
					//   60: aload_0
					//   61: getfield b : I
					//   64: aload_0
					//   65: aload_1
					//   66: aload_3
					//   67: invokespecial c : (Ljava/lang/Object;Ljava/lang/Object;)I
					//   70: isub
					//   71: putfield b : I
					//   74: aload_0
					//   75: monitorexit
					//   76: aload_3
					//   77: ifnull -> 88
					//   80: aload_0
					//   81: iconst_0
					//   82: aload_1
					//   83: aload_3
					//   84: aload_2
					//   85: invokevirtual a : (ZLjava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V
					//   88: aload_0
					//   89: aload_0
					//   90: getfield c : I
					//   93: invokevirtual a : (I)V
					//   96: aload_3
					//   97: areturn
					//   98: astore_1
					//   99: aload_0
					//   100: monitorexit
					//   101: aload_1
					//   102: athrow
					// Exception table:
					//   from	to	target	type
					//   20	55	98	finally
					//   59	74	98	finally
					//   74	76	98	finally
					//   99	101	98	finally }

				  void a(int paramInt)
				  { // Byte code:
					//   0: aload_0
					//   1: monitorenter
					//   2: aload_0
					//   3: getfield b : I
					//   6: iflt -> 26
					//   9: aload_0
					//   10: getfield a : Ljava/util/LinkedHashMap;
					//   13: invokevirtual isEmpty : ()Z
					//   16: ifeq -> 64
					//   19: aload_0
					//   20: getfield b : I
					//   23: ifeq -> 64
					//   26: new java/lang/IllegalStateException
					//   29: dup
					//   30: new java/lang/StringBuilder
					//   33: dup
					//   34: invokespecial <init> : ()V
					//   37: aload_0
					//   38: invokevirtual getClass : ()Ljava/lang/Class;
					//   41: invokevirtual getName : ()Ljava/lang/String;
					//   44: invokevirtual append : (Ljava/lang/String;)Ljava/lang/StringBuilder;
					//   47: ldc '.sizeOf() is reporting inconsistent results!'
					//   49: invokevirtual append : (Ljava/lang/String;)Ljava/lang/StringBuilder;
					//   52: invokevirtual toString : ()Ljava/lang/String;
					//   55: invokespecial <init> : (Ljava/lang/String;)V
					//   58: athrow
					//   59: astore_2
					//   60: aload_0
					//   61: monitorexit
					//   62: aload_2
					//   63: athrow
					//   64: aload_0
					//   65: getfield b : I
					//   68: iload_1
					//   69: if_icmple -> 82
					//   72: aload_0
					//   73: getfield a : Ljava/util/LinkedHashMap;
					//   76: invokevirtual isEmpty : ()Z
					//   79: ifeq -> 85
					//   82: aload_0
					//   83: monitorexit
					//   84: return
					//   85: aload_0
					//   86: getfield a : Ljava/util/LinkedHashMap;
					//   89: invokevirtual entrySet : ()Ljava/util/Set;
					//   92: invokeinterface iterator : ()Ljava/util/Iterator;
					//   97: invokeinterface next : ()Ljava/lang/Object;
					//   102: checkcast java/util/Map$Entry
					//   105: astore_3
					//   106: aload_3
					//   107: invokeinterface getKey : ()Ljava/lang/Object;
					//   112: astore_2
					//   113: aload_3
					//   114: invokeinterface getValue : ()Ljava/lang/Object;
					//   119: astore_3
					//   120: aload_0
					//   121: getfield a : Ljava/util/LinkedHashMap;
					//   124: aload_2
					//   125: invokevirtual remove : (Ljava/lang/Object;)Ljava/lang/Object;
					//   128: pop
					//   129: aload_0
					//   130: aload_0
					//   131: getfield b : I
					//   134: aload_0
					//   135: aload_2
					//   136: aload_3
					//   137: invokespecial c : (Ljava/lang/Object;Ljava/lang/Object;)I
					//   140: isub
					//   141: putfield b : I
					//   144: aload_0
					//   145: aload_0
					//   146: getfield f : I
					//   149: iconst_1
					//   150: iadd
					//   151: putfield f : I
					//   154: aload_0
					//   155: monitorexit
					//   156: aload_0
					//   157: iconst_1
					//   158: aload_2
					//   159: aload_3
					//   160: aconst_null
					//   161: invokevirtual a : (ZLjava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V
					//   164: goto -> 0
					// Exception table:
					//   from	to	target	type
					//   2	26	59	finally
					//   26	59	59	finally
					//   60	62	59	finally
					//   64	82	59	finally
					//   82	84	59	finally
					//   85	156	59	finally }

			  protected:
				  void a(bool paramBoolean, K paramK, V paramV1, V paramV2)
				  {
				  }

				  int b(K paramK, V paramV)
				  {
					  return 1;
				  }

				  V b(K paramK)
				  {
					  return nullptr;
				  }

			  public:
				  final std::wstring toString()
				  { // Byte code:
					//   0: iconst_0
					//   1: istore_1
					//   2: aload_0
					//   3: monitorenter
					//   4: aload_0
					//   5: getfield g : I
					//   8: aload_0
					//   9: getfield h : I
					//   12: iadd
					//   13: istore_2
					//   14: iload_2
					//   15: ifeq -> 28
					//   18: aload_0
					//   19: getfield g : I
					//   22: bipush #100
					//   24: imul
					//   25: iload_2
					//   26: idiv
					//   27: istore_1
					//   28: ldc 'LruCache[maxSize=%d,hits=%d,misses=%d,hitRate=%d%%]'
					//   30: iconst_4
					//   31: anewarray java/lang/Object
					//   34: dup
					//   35: iconst_0
					//   36: aload_0
					//   37: getfield c : I
					//   40: invokestatic valueOf : (I)Ljava/lang/Integer;
					//   43: aastore
					//   44: dup
					//   45: iconst_1
					//   46: aload_0
					//   47: getfield g : I
					//   50: invokestatic valueOf : (I)Ljava/lang/Integer;
					//   53: aastore
					//   54: dup
					//   55: iconst_2
					//   56: aload_0
					//   57: getfield h : I
					//   60: invokestatic valueOf : (I)Ljava/lang/Integer;
					//   63: aastore
					//   64: dup
					//   65: iconst_3
					//   66: iload_1
					//   67: invokestatic valueOf : (I)Ljava/lang/Integer;
					//   70: aastore
					//   71: invokestatic format : (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
					//   74: astore_3
					//   75: aload_0
					//   76: monitorexit
					//   77: aload_3
					//   78: areturn
					//   79: astore_3
					//   80: aload_0
					//   81: monitorexit
					//   82: aload_3
					//   83: athrow
					// Exception table:
					//   from	to	target	type
					//   4	14	79	finally
					//   18	28	79	finally
					//   28	75	79	finally }
				  }

				  }
				  }
				  }
				}

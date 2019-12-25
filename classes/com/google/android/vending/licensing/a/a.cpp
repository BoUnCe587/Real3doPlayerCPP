//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "a.h"
#include "../k.h"
#include "../j.h"
#include "../i.h"
#include "../m.h"

namespace com
{
	namespace google
	{
		namespace android
		{
			namespace vending
			{
				namespace licensing
				{
					namespace a
					{

						a::StaticConstructor::StaticConstructor()
						{
														bool bool_Renamed;
														if (!a::typeid->desiredAssertionStatus())
														{
														  bool_Renamed = true;
														}
														else
														{
														  bool_Renamed = false;
														}
														a = bool_Renamed;
														b = std::vector<char> {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47};
														c = std::vector<char> {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95};
														d = std::vector<char> {-9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -5, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, 62, -9, -9, -9, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -9, -9, -9, -1, -9, -9, -9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -9, -9, -9, -9, -9, -9, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -9, -9, -9, -9, -9};
														e = std::vector<char> {-9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -5, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, 62, -9, -9, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -9, -9, -9, -1, -9, -9, -9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -9, -9, -9, -9, 63, -9, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -9, -9, -9, -9, -9};
						}

a::StaticConstructor a::staticConstructor;

						int a::a(std::vector<char> &paramArrayOfByte1, int paramInt1, std::vector<char> &paramArrayOfByte2, int paramInt2, std::vector<char> &paramArrayOfByte3)
						{
						  if (paramArrayOfByte1[paramInt1 + 2] == 61)
						  {
							paramArrayOfByte2[paramInt2] = static_cast<char>(static_cast<int>(static_cast<unsigned int>((static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1]] << 24) >> 6) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1 + 1]] << 24) >> 12))) >> 16));
							return 1;
						  }
						  if (paramArrayOfByte1[paramInt1 + 3] == 61)
						  {
							paramInt1 = static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1]] << 24) >> 6) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1 + 1]] << 24) >> 12) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1 + 2]] << 24) >> 18);
							paramArrayOfByte2[paramInt2] = static_cast<char>(static_cast<int>(static_cast<unsigned int>(paramInt1) >> 16));
							paramArrayOfByte2[paramInt2 + 1] = static_cast<char>(static_cast<int>(static_cast<unsigned int>(paramInt1) >> 8));
							return 2;
						  }
						  paramInt1 = static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1]] << 24) >> 6) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1 + 1]] << 24) >> 12) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1 + 2]] << 24) >> 18) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte3[paramArrayOfByte1[paramInt1 + 3]] << 24) >> 24);
						  paramArrayOfByte2[paramInt2] = static_cast<char>(paramInt1 >> 16);
						  paramArrayOfByte2[paramInt2 + 1] = static_cast<char>(paramInt1 >> 8);
						  paramArrayOfByte2[paramInt2 + 2] = static_cast<char>(paramInt1);
						  return 3;
						}

						std::wstring a::a(std::vector<char> &paramArrayOfByte)
						{
							return a(paramArrayOfByte, 0, paramArrayOfByte.size(), b, true);
						}

						std::wstring a::a(std::vector<char> &paramArrayOfByte1, int paramInt1, int paramInt2, std::vector<char> &paramArrayOfByte2, bool paramBoolean)
						{
						  paramArrayOfByte1 = a(paramArrayOfByte1, paramInt1, paramInt2, paramArrayOfByte2, 2147483647);
						  for (paramInt1 = paramArrayOfByte1.size();; paramInt1--)
						  {
							if (paramBoolean || paramInt1 <= 0 || paramArrayOfByte1[paramInt1 - 1] != 61)
							{
							  return std::wstring(paramArrayOfByte1, 0, paramInt1);
							}
						  }
						}

						char[] a::a(const std::wstring &paramString)
						{
						  std::vector<char> arrayOfByte = paramString.getBytes();
						  return a(arrayOfByte, 0, arrayOfByte.size());
						}

						char[] a::a(std::vector<char> &paramArrayOfByte, int paramInt1, int paramInt2)
						{
							return a(paramArrayOfByte, paramInt1, paramInt2, d);
						}

						char[] a::a(std::vector<char> &paramArrayOfByte1, int paramInt1, int paramInt2, std::vector<char> &paramArrayOfByte2)
						{
						  std::vector<char> arrayOfByte1(paramInt2 * 3 / 4 + 2);
						  std::vector<char> arrayOfByte2(4);
						  int k = 0;
						  int j = 0;
						  int i = 0;
						  while (true)
						  {
							int m;
							if (k < paramInt2)
							{
							  char b1 = static_cast<char>(paramArrayOfByte1[k + paramInt1] & 0x7F);
							  char b2 = paramArrayOfByte2[b1];
							  if (b2 >= -5)
							  {
								if (b2 >= -1)
								{
								  if (b1 == 61)
								  {
									int n = paramInt2 - k;
									paramInt1 = static_cast<char>(paramArrayOfByte1[paramInt2 - 1 + paramInt1] & 0x7F);
									if (!j || j == 1)
									{
									  throw b(L"invalid padding byte '=' at byte offset " + std::to_wstring(k));
									}
									if ((j == 3 && n > 2) || (j == 4 && n > 1))
									{
									  throw b(L"padding byte '=' falsely signals end of encoded value at offset " + std::to_wstring(k));
									}
									if (paramInt1 != 61 && paramInt1 != 10)
									{
									  throw b(L"encoded value has invalid trailing byte");
									}
								  }
								  else
								  {
									b2 = j + true;
									arrayOfByte2[j] = b1;
									if (b2 == 4)
									{
									  j = a(arrayOfByte2, 0, arrayOfByte1, i, paramArrayOfByte2) + i;
									  i = 0;
									}
									else
									{
									  j = i;
									  m = b2;
									}
									int n = k + 1;
									k = j;
									j = m;
									m = k;
									k = n;
								  }
								}
								else
								{
								  int n = m;
								  m = j;
								  j = n;
								  n = k + 1;
								  k = j;
								  j = m;
								  m = k;
								  k = n;
								}
							  }
							  else
							  {
								throw b(L"Bad Base64 input character at " + std::to_wstring(k) + L": " + std::to_wstring(paramArrayOfByte1[k + paramInt1]) + L"(decimal)");
							  }
							}
							paramInt1 = m;
							if (j != 0)
							{
							  if (j == 1)
							  {
								throw b(L"single trailing character at offset " + std::to_wstring(paramInt2 - 1));
							  }
							  arrayOfByte2[j] = 61;
							  paramInt1 = m + a(arrayOfByte2, 0, arrayOfByte1, m, paramArrayOfByte2);
							}
							paramArrayOfByte1 = std::vector<char>(paramInt1);
							System::arraycopy(arrayOfByte1, 0, paramArrayOfByte1, 0, paramInt1);
							return paramArrayOfByte1;
						  }
						}

						char[] a::a(std::vector<char> &paramArrayOfByte1, int paramInt1, int paramInt2, std::vector<char> &paramArrayOfByte2, int paramInt3)
						{
						  int i = (paramInt2 + 2) / 3 * 4;
						  std::vector<char> arrayOfByte(i + i / paramInt3);
						  char b1 = 0;
						  i = 0;
						  int j = 0;
						  while (j < paramInt2 - 2)
						  {
							char b2 = static_cast<int>(static_cast<unsigned int>(paramArrayOfByte1[j + paramInt1] << 24) >> 8) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte1[j + 1 + paramInt1] << 24) >> 16) | static_cast<int>(static_cast<unsigned int>(paramArrayOfByte1[j + 2 + paramInt1] << 24) >> 24);
							arrayOfByte[i] = paramArrayOfByte2[static_cast<int>(static_cast<unsigned int>(b2) >> 18)];
							arrayOfByte[i + 1] = paramArrayOfByte2[static_cast<int>(static_cast<unsigned int>(b2) >> 12) & 0x3F];
							arrayOfByte[i + 2] = paramArrayOfByte2[static_cast<int>(static_cast<unsigned int>(b2) >> 6) & 0x3F];
							arrayOfByte[i + 3] = paramArrayOfByte2[b2 & 0x3F];
							char b3 = b1 + 4;
							b1 = b3;
							int m = i;
							if (b3 == paramInt3)
							{
							  arrayOfByte[i + 4] = 10;
							  m = i + 1;
							  b1 = 0;
							}
							j += 3;
							i = m + 4;
						  }
						  int k = i;
						  if (j < paramInt2)
						  {
							a(paramArrayOfByte1, j + paramInt1, paramInt2 - j, arrayOfByte, i, paramArrayOfByte2);
							paramInt1 = i;
							if (b1 + 4 == paramInt3)
							{
							  arrayOfByte[i + 4] = 10;
							  paramInt1 = i + 1;
							}
							k = paramInt1 + 4;
						  }
						  if (!a && k != arrayOfByte.size())
						  {
							throw AssertionError();
						  }
						  return arrayOfByte;
						}

						char[] a::a(std::vector<char> &paramArrayOfByte1, int paramInt1, int paramInt2, std::vector<char> &paramArrayOfByte2, int paramInt3, std::vector<char> &paramArrayOfByte3)
						{
						  char b2;
						  char b1;
						  char b3 = 0;
						  if (paramInt2 > 0)
						  {
							b1 = static_cast<int>(static_cast<unsigned int>(paramArrayOfByte1[paramInt1] << 24) >> 8);
						  }
						  else
						  {
							b1 = 0;
						  }
						  if (paramInt2 > 1)
						  {
							b2 = static_cast<int>(static_cast<unsigned int>(paramArrayOfByte1[paramInt1 + 1] << 24) >> 16);
						  }
						  else
						  {
							b2 = 0;
						  }
						  if (paramInt2 > 2)
						  {
							b3 = static_cast<int>(static_cast<unsigned int>(paramArrayOfByte1[paramInt1 + 2] << 24) >> 24);
						  }
						  paramInt1 = b3 | b2 | b1;
						  switch (paramInt2)
						  {
							default:
							  return paramArrayOfByte2;
							case 3:
							  paramArrayOfByte2[paramInt3] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 18)];
							  paramArrayOfByte2[paramInt3 + 1] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 12) & 0x3F];
							  paramArrayOfByte2[paramInt3 + 2] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 6) & 0x3F];
							  paramArrayOfByte2[paramInt3 + 3] = paramArrayOfByte3[paramInt1 & 0x3F];
							  return paramArrayOfByte2;
							case 2:
							  paramArrayOfByte2[paramInt3] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 18)];
							  paramArrayOfByte2[paramInt3 + 1] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 12) & 0x3F];
							  paramArrayOfByte2[paramInt3 + 2] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 6) & 0x3F];
							  paramArrayOfByte2[paramInt3 + 3] = 61;
							  return paramArrayOfByte2;
							case 1:
							  break;
						  }
						  paramArrayOfByte2[paramInt3] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 18)];
						  paramArrayOfByte2[paramInt3 + 1] = paramArrayOfByte3[static_cast<int>(static_cast<unsigned int>(paramInt1) >> 12) & 0x3F];
						  paramArrayOfByte2[paramInt3 + 2] = 61;
						  paramArrayOfByte2[paramInt3 + 3] = 61;
						  return paramArrayOfByte2;
						}
					}
				}
			}
		}
	}
}

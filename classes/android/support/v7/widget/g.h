#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "h.h"
#include "i.h"
#include "j.h"
#include <vector>
#include <limits>
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace android { namespace support { namespace v7 { namespace b { class a; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class c; } } } }
namespace android { namespace support { namespace v7 { namespace widget { class d; } } } }

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{

				using android::content::Context;
				using android::graphics::drawable::Drawable;
				using l = android::support::v4::h::l;
				using a = android::support::v7::b::a;
				using android::util::AttributeSet;
				using android::view::View;
				using android::view::ViewGroup;

				class g : public android.view::ViewGroup
				{
			  private:
				  bool android = false;

				  int b = -1;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int c_Renamed = 0;

//JAVA TO C++ CONVERTER NOTE: Fields cannot have the same name as methods:
				  int d_Renamed = 0;

				  int e = 8388659;

				  int f = 0;

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
				  float g_Renamed = 0;

				  bool h = false;

				  std::vector<int> i;

				  std::vector<int> j;

				  Drawable *k;

				  int android = 0;

				  int m = 0;

				  int n = 0;

				  int o = 0;

			  public:
				  virtual ~g()
				  {
					  delete k;
				  }

				  g(Context *paramContext);

				  g(Context *paramContext, AttributeSet *paramAttributeSet);

				  g(Context *paramContext, AttributeSet *paramAttributeSet, int paramInt);

			  private:
				  void android.support::v7::b::a(View *paramView, int paramInt1, int paramInt2, int paramInt3, int paramInt4);

				  void c(int paramInt1, int paramInt2);

				  void d(int paramInt1, int paramInt2);

			  public:
				  virtual int android.support::v7::b::a(View *paramView);

				  virtual int android.support::v7::b::a(View *paramView, int paramInt);

				  virtual void android.support::v7::b::a(int paramInt1, int paramInt2);

				  virtual void android.support::v7::b::a(int paramInt1, int paramInt2, int paramInt3, int paramInt4);

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "b.h"
#include "n.h"
#include "m.h"

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
						using l = android::support::v4::h::l;
						using android::view::LayoutInflater;
						using android::view::View;
						using android::view::ViewGroup;

						b::b(Context *paramContext, int paramInt1, int paramInt2)
						{
						  this->a_Renamed = paramContext;
						  this->d = LayoutInflater::from(paramContext);
						  this->h = paramInt1;
						  this->i = paramInt2;
						}

						l::j::a *b::a()
						{
							return this->g;
						}

						l::k::a *b::a(ViewGroup *paramViewGroup)
						{
							return static_cast<l::k::a*>(this->d->inflate(this->i, paramViewGroup, false));
						}

						View *b::a(f *paramf, View *paramView, ViewGroup *paramViewGroup)
						{
						  if (dynamic_cast<l::k::a*>(paramView) != nullptr)
						  {
							l::k::a *a2 = static_cast<l::k::a*>(paramView);
							a(paramf, a2);
							return static_cast<View*>(a2);
						  }
						  l::k::a *a1 = a(paramViewGroup);
						  a(paramf, a1);
						  return static_cast<View*>(a1);
						}

						void b::a(Context *paramContext, e *parame)
						{
						  this->b_Renamed = paramContext;
						  this->e = LayoutInflater::from(this->b_Renamed);
						  this->c = parame;
						}

						void b::a(e *parame, bool paramBoolean)
						{
						  if (this->g != nullptr)
						  {
							this->g->a_Renamed(parame, paramBoolean);
						  }
						}

						void b::a(l::j::a *parama)
						{
							this->g = parama;
						}

						void b::a(View *paramView, int paramInt)
						{
						  ViewGroup *viewGroup = static_cast<ViewGroup*>(paramView->getParent());
						  if (viewGroup != nullptr)
						  {
							viewGroup->removeView(paramView);
						  }
						  (static_cast<ViewGroup*>(this->f))->addView(paramView, paramInt);
						}

						bool b::a(int paramInt, f *paramf)
						{
							return true;
						}

						bool b::a(e *parame, f *paramf)
						{
							return false;
						}

						bool b::a(n *paramn)
						{
							return (this->g != nullptr) ? this->g->a(paramn) : 0;
						}

						bool b::a(ViewGroup *paramViewGroup, int paramInt)
						{
						  paramViewGroup->removeViewAt(paramInt);
						  return true;
						}

//JAVA TO C++ CONVERTER NOTE: Members cannot have the same name as their enclosing type:
						void b::b_Renamed(bool paramBoolean)
						{
						  ViewGroup *viewGroup = static_cast<ViewGroup*>(this->f);
						  if (viewGroup != nullptr)
						  {
							char b1;
							if (this->c != nullptr)
							{
							  this->c->i();
							  std::vector arrayList = this->c->h();
							  int m = arrayList.size();
							  char b3 = 0;
							  char b2 = 0;
							  while (true)
							  {
								b1 = b2;
								if (b3 < m)
								{
								  f *f1 = static_cast<f*>(arrayList[b3]);
								  if (a(b2, f1))
								  {
									void *object;
									View *view1 = viewGroup->getChildAt(b2);
									if (dynamic_cast<l::k::a*>(view1) != nullptr)
									{
									  object = (static_cast<l::k::a*>(view1))->getItemData();
									}
									else
									{
									  object = nullptr;
									}
									View *view2 = a(f1, view1, viewGroup);
									if (f1 != object)
									{
									  view2->setPressed(false);
									  l::h(view2);
									}
									if (view2 != view1)
									{
									  a(view2, b2);
									}
									b2++;
								  }
								  b3++;
								  continue;
								}
								break;
							  }
							}
							else
							{
							  b1 = 0;
							}
							while (true)
							{
							  if (b1 < viewGroup->getChildCount())
							  {
								if (!a(viewGroup, b1))
								{
								  b1++;
								}
								continue;
							  }
							  return;
							}
						  }
						}

						bool b::b()
						{
							return false;
						}

						bool b::b(e *parame, f *paramf)
						{
							return false;
						}
					}
				}
			}
		}
	}
}

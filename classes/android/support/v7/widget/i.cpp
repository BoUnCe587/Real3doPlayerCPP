//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "i.h"
#include "SearchView.h"
#include "../../v4/b/a.h"
#include "g.h"
#include "f.h"

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace widget
			{
				using android::app::SearchManager;
				using android::app::SearchableInfo;
				using android::content::ComponentName;
				using android::content::Context;
				using android::content::pm::ActivityInfo;
				using android::content::pm::PackageManager;
				using android::content::pm::ResolveInfo;
				using android::content::res::ColorStateList;
				using android::content::res::Resources;
				using android::database::Cursor;
				using android::graphics::drawable::Drawable;
				using android::net::Uri;
				using android::os::Bundle;
				using a = android::support::v4::b::a;
				using i = android::support::v4::widget::i;
				using a = android::support::v7::b::a;
				using android::text::SpannableString;
				using android::text::TextUtils;
				using android::text::style::TextAppearanceSpan;
				using android::util::Log;
				using android::util::TypedValue;
				using android::view::View;
				using android::view::ViewGroup;
				using android::widget::ImageView;
				using android::widget::TextView;

				internal *i::i(Context *paramContext, SearchView *paramSearchView, SearchableInfo *paramSearchableInfo, WeakHashMap<std::wstring, Drawable::ConstantState*> *paramWeakHashMap)
				{
				  i(paramContext, paramSearchView->getSuggestionRowLayout(), nullptr, true);
				  this->k = paramSearchView;
				  this->l = paramSearchableInfo;
				  this->o = paramSearchView->getSuggestionCommitIconResId();
				  this->m = paramContext;
				  this->n = paramWeakHashMap;
				}

				Drawable *i::a(ComponentName *paramComponentName)
				{
				  Drawable::ConstantState *constantState2 = nullptr;
				  std::wstring str = paramComponentName->flattenToShortString();
				  if (this->n->containsKey(str))
				  {
					constantState1 = static_cast<Drawable::ConstantState*>(this->n->get(str));
					return (constantState1 == nullptr) ? nullptr : constantState1::newDrawable(this->m->getResources());
				  }
				  Drawable *drawable = b(constantState1);
				  if (drawable == nullptr)
				  {
					constantState1 = constantState2;
					this->n->put(str, constantState1);
					return drawable;
				  }
				  Drawable::ConstantState *constantState1 = drawable->getConstantState();
				  this->n->put(str, constantState1);
				  return drawable;
				}

				Drawable *i::a(const std::wstring &paramString)
				{
				  if (paramString == L"" || paramString.length() == 0 || L"0" == paramString)
				  {
					return nullptr;
				  }
				  try
				  {
					int i1 = std::stoi(paramString);
					std::wstring str = L"android.resource://" + this->m->getPackageName() + L"/" + std::to_wstring(i1);
					Drawable *drawable2 = b(str);
					Drawable *drawable1 = drawable2;
					if (drawable2 == nullptr)
					{
					  drawable1 = a::a(this->m, i1);
					  a(str, drawable1);
					  return drawable1;
					}
					return drawable1;
				  }
				  catch (const NumberFormatException &numberFormatException)
				  {
					Drawable *drawable2 = b(paramString);
					Drawable *drawable1 = drawable2;
					if (drawable2 == nullptr)
					{
					  drawable1 = b(Uri::parse(paramString));
					  a(paramString, drawable1);
					  return drawable1;
					}
					return drawable1;
				  }
				  catch (const NotFoundException &notFoundException)
				  {
					Log::w(L"SuggestionsAdapter", L"Icon resource not found: " + paramString);
					return nullptr;
				  }
				}

				std::wstring i::a(Cursor *paramCursor, int paramInt)
				{
				  if (paramInt == -1)
				  {
					return L"";
				  }
				  try
				  {
					return paramCursor->getString(paramInt);
				  }
				  catch (const std::exception &paramCursor)
				  {
					Log::e(L"SuggestionsAdapter", L"unexpected error retrieving valid column from cursor, did the remote process die?", paramCursor);
					return L"";
				  }
				}

				std::wstring i::a(Cursor *paramCursor, const std::wstring &paramString)
				{
					return a(paramCursor, paramCursor->getColumnIndex(paramString));
				}

				void i::a(ImageView *paramImageView, Drawable *paramDrawable, int paramInt)
				{
				  paramImageView->setImageDrawable(paramDrawable);
				  if (paramDrawable == nullptr)
				  {
					paramImageView->setVisibility(paramInt);
					return;
				  }
				  paramImageView->setVisibility(0);
				  paramDrawable->setVisible(false, false);
				  paramDrawable->setVisible(true, false);
				}

				void i::a(TextView *paramTextView, CharSequence *paramCharSequence)
				{
				  paramTextView->setText(paramCharSequence);
				  if (TextUtils->isEmpty(paramCharSequence))
				  {
					paramTextView->setVisibility(8);
					return;
				  }
				  paramTextView->setVisibility(0);
				}

				void i::a(const std::wstring &paramString, Drawable *paramDrawable)
				{
				  if (paramDrawable != nullptr)
				  {
					this->n->put(paramString, paramDrawable->getConstantState());
				  }
				}

				Drawable *i::b(ComponentName *paramComponentName)
				{
				  ActivityInfo *activityInfo;
				  int i1;
				  PackageManager *packageManager = this->d.getPackageManager();
				  try
				  {
					activityInfo = packageManager->getActivityInfo(paramComponentName, 128);
					i1 = activityInfo->getIconResource();
					if (i1 == 0)
					{
					  return nullptr;
					}
				  }
				  catch (const NameNotFoundException &paramComponentName)
				  {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					Log::w(L"SuggestionsAdapter", paramComponentName->toString());
					return nullptr;
				  }
				  Drawable *drawable = packageManager->getDrawable(paramComponentName->getPackageName(), i1, activityInfo->applicationInfo);
				  if (drawable == nullptr)
				  {
					Log::w(L"SuggestionsAdapter", L"Invalid icon resource " + std::to_wstring(i1) + L" for " + paramComponentName->flattenToShortString());
					return nullptr;
				  }
				  return drawable;
				}

				Drawable *i::b(Uri *paramUri)
				{
				  try
				  {
					bool bool_Renamed = L"android.resource" == paramUri->getScheme();
					if (bool_Renamed)
					{
					  try
					  {
						return a(paramUri);
					  }
					  catch (const NotFoundException &notFoundException)
					  {
						throw FileNotFoundException(L"Resource does not exist: " + paramUri);
					  }
					}
				  }
				  catch (const FileNotFoundException &fileNotFoundException)
				  {
					Log::w(L"SuggestionsAdapter", L"Icon not found: " + paramUri + L", " + fileNotFoundException->getMessage());
					return nullptr;
				  }
				  inputStream = this->m->getContentResolver().openInputStream(paramUri);
				  if (inputStream == nullptr)
				  {
					throw FileNotFoundException(L"Failed to open " + paramUri);
				  }
				  try
				  {
					resolveInfo = Drawable::createFromStream(inputStream, nullptr);
				  }
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
				  finally
				  {
					resolveInfo = nullptr;
				  }
				  throw resolveInfo;
				}

				Drawable *i::b(const std::wstring &paramString)
				{
				  Drawable::ConstantState *constantState = static_cast<Drawable::ConstantState*>(this->n->get(paramString));
				  return (constantState == nullptr) ? nullptr : constantState->newDrawable();
				}

				CharSequence *i::b(CharSequence *paramCharSequence)
				{
				  if (this->r == nullptr)
				  {
					TypedValue *typedValue = new TypedValue();
					this->d.getTheme().resolveAttribute(a::a::textColorSearchUrl, typedValue, true);
					this->r = this->d.getResources().getColorStateList(typedValue->resourceId);
				  }
				  SpannableString *spannableString = new SpannableString(paramCharSequence);
				  TextAppearanceSpan tempVar(nullptr, 0, 0, this->r, nullptr);
				  spannableString->setSpan(&tempVar, 0, paramCharSequence->length(), 33);
				  return spannableString;
				}

				void i::d(Cursor *paramCursor)
				{
				  if (paramCursor != nullptr)
				  {
					Bundle *bundle = paramCursor->getExtras();
				  }
				  else
				  {
					paramCursor = nullptr;
				  }
				  if (paramCursor == nullptr || paramCursor->getBoolean(L"in_progress"))
				  {
					  ;
				  }
				}

				Drawable *i::e(Cursor *paramCursor)
				{
				  if (this->v == -1)
				  {
					return nullptr;
				  }
				  Drawable *drawable2 = a(paramCursor->getString(this->v));
				  Drawable *drawable1 = drawable2;
				  return (drawable2 == nullptr) ? g(paramCursor) : drawable1;
				}

				Drawable *i::f(Cursor *paramCursor)
				{
					return (this->w == -1) ? nullptr : a(paramCursor->getString(this->w));
				}

				Drawable *i::g(Cursor *paramCursor)
				{
				  Drawable *drawable = a(this->l->getSearchActivity());
				  return (drawable != nullptr) ? drawable : this->d.getPackageManager().getDefaultActivityIcon();
				}

				Cursor *i::a(SearchableInfo *paramSearchableInfo, const std::wstring &paramString, int paramInt)
				{
				  if (paramSearchableInfo != nullptr)
				  {
					std::wstring str = paramSearchableInfo->getSuggestAuthority();
					if (str != L"")
					{
					  Uri::Builder tempVar();
					  Uri::Builder *builder = (&tempVar)->scheme(L"content").authority(str).query(L"").fragment(L"");
					  std::wstring str1 = paramSearchableInfo->getSuggestPath();
					  if (str1 != L"")
					  {
						builder->appendEncodedPath(str1);
					  }
					  builder->appendPath(L"search_suggest_query");
					  str1 = paramSearchableInfo->getSuggestSelection();
					  if (str1 != L"")
					  {
						std::vector<std::wstring> arrayOfString(1);
						arrayOfString[0] = paramString;
					  }
					  else
					  {
						builder->appendPath(paramString);
						paramSearchableInfo = nullptr;
					  }
					  if (paramInt > 0)
					  {
						builder->appendQueryParameter(L"limit", std::to_wstring(paramInt));
					  }
					  Uri *uri = builder->build();
					  return this->d.getContentResolver().query(uri, nullptr, str1, paramSearchableInfo, nullptr);
					}
				  }
				  return nullptr;
				}

				Cursor *i::a(CharSequence *paramCharSequence)
				{
				  if (paramCharSequence == nullptr)
				  {
					paramCharSequence = L"";
				  }
				  else
				  {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					paramCharSequence = paramCharSequence->toString();
				  }
				  if (this->k->getVisibility() != 0 || this->k->getWindowVisibility() != 0)
				  {
					return nullptr;
				  }
				  try
				  {
					Cursor *cursor = a(this->l, paramCharSequence, 50);
					if (cursor != nullptr)
					{
					  cursor->getCount();
					  return cursor;
					}
				  }
				  catch (const std::exception &paramCharSequence)
				  {
					Log::w(L"SuggestionsAdapter", L"Search suggestions query threw an exception.", paramCharSequence);
				  }
				  return nullptr;
				}

				Drawable *i::a(Uri *paramUri)
				{
				  std::vector list;
				  Resources *resources;
				  str = paramUri->getAuthority();
				  if (TextUtils->isEmpty(str))
				  {
					throw FileNotFoundException(L"No authority: " + paramUri);
				  }
				  try
				  {
					resources = this->d.getPackageManager().getResourcesForApplication(str);
					list = paramUri->getPathSegments();
					if (list.empty())
					{
					  throw FileNotFoundException(L"No path: " + paramUri);
					}
				  }
				  catch (const NameNotFoundException &str)
				  {
					throw FileNotFoundException(L"No package found for authority: " + paramUri);
				  }
				  int i1 = list.size();
				  if (i1 == 1)
				  {
					try
					{
					  i1 = std::stoi(static_cast<std::wstring>(list[0]));
					  if (i1 == 0)
					  {
						throw FileNotFoundException(L"No resource found for: " + paramUri);
					  }
					}
					catch (const NumberFormatException &str)
					{
					  throw FileNotFoundException(L"Single path segment is not a resource ID: " + paramUri);
					}
				  }
				  else
				  {
					if (i1 == 2)
					{
					  i1 = resources->getIdentifier(static_cast<std::wstring>(list[1]), static_cast<std::wstring>(list[0]), str);
					}
					else
					{
					  throw FileNotFoundException(L"More than two path segments: " + paramUri);
					}
					if (i1 == 0)
					{
					  throw FileNotFoundException(L"No resource found for: " + paramUri);
					}
				  }
				  return resources->getDrawable(i1);
				}

				View *i::a(Context *paramContext, Cursor *paramCursor, ViewGroup *paramViewGroup)
				{
				  View *view = i::a(paramContext, paramCursor, paramViewGroup);
				  a tempVar(view);
				  view->setTag(&tempVar);
				  (static_cast<ImageView*>(view->findViewById(a::e::edit_query)))->setImageResource(this->o);
				  return view;
				}

				void i::a(int paramInt)
				{
					this->q = paramInt;
				}

				void i::a(Cursor *paramCursor)
				{
				  if (this->p)
				  {
					Log::w(L"SuggestionsAdapter", L"Tried to change cursor after adapter was closed.");
					if (paramCursor != nullptr)
					{
					  delete paramCursor;
					}
					return;
				  }
				  try
				  {
					i::a(paramCursor);
					if (paramCursor != nullptr)
					{
					  this->s = paramCursor->getColumnIndex(L"suggest_text_1");
					  this->t = paramCursor->getColumnIndex(L"suggest_text_2");
					  this->u = paramCursor->getColumnIndex(L"suggest_text_2_url");
					  this->v = paramCursor->getColumnIndex(L"suggest_icon_1");
					  this->w = paramCursor->getColumnIndex(L"suggest_icon_2");
					  this->x = paramCursor->getColumnIndex(L"suggest_flags");
					  return;
					}
					return;
				  }
				  catch (const std::exception &paramCursor)
				  {
					Log::e(L"SuggestionsAdapter", L"error changing cursor and caching columns", paramCursor);
					return;
				  }
				}

				void i::a(View *paramView, Context *paramContext, Cursor *paramCursor)
				{
				  bool bool_Renamed;
				  a a = static_cast<a*>(paramView->getTag());
				  if (this->x != -1)
				  {
					bool_Renamed = paramCursor->getInt(this->x);
				  }
				  else
				  {
					bool_Renamed = false;
				  }
				  if (a::a != nullptr)
				  {
					std::wstring str = a(paramCursor, this->s);
					a(a::a, str);
				  }
				  if (a::b != nullptr)
				  {
					std::wstring str = a(paramCursor, this->u);
					if (str != L"")
					{
					  CharSequence *charSequence = b(str);
					}
					else
					{
					  str = a(paramCursor, this->t);
					}
					if (TextUtils->isEmpty(str))
					{
					  if (a::a != nullptr)
					  {
						a::a::setSingleLine(false);
						a::a::setMaxLines(2);
					  }
					}
					else if (a::a != nullptr)
					{
					  a::a::setSingleLine(true);
					  a::a::setMaxLines(1);
					}
					a(a::b, str);
				  }
				  if (a::c != nullptr)
				  {
					a(a::c, e(paramCursor), 4);
				  }
				  if (a::d != nullptr)
				  {
					a(a::d, f(paramCursor), 8);
				  }
				  if (this->q == 2 || (this->q == 1 && bool_Renamed & true))
				  {
					a::e::setVisibility(0);
					a::e::setTag(a::a::getText());
					a::e::setOnClickListener(this);
					return;
				  }
				  a::e::setVisibility(8);
				}

				CharSequence *i::c(Cursor *paramCursor)
				{
				  if (paramCursor != nullptr)
				  {
					std::wstring str = a(paramCursor, L"suggest_intent_query");
					if (str != L"")
					{
					  return str;
					}
					if (this->l->shouldRewriteQueryFromData())
					{
					  str = a(paramCursor, L"suggest_intent_data");
					  if (str != L"")
					  {
						return str;
					  }
					}
					if (this->l->shouldRewriteQueryFromText())
					{
					  std::wstring str1 = a(paramCursor, L"suggest_text_1");
					  if (str1 != L"")
					  {
						return str1;
					  }
					}
				  }
				  return nullptr;
				}

				View *i::getView(int paramInt, View *paramView, ViewGroup *paramViewGroup)
				{
				  try
				  {
					return i::getView(paramInt, paramView, paramViewGroup);
				  }
				  catch (const std::exception &paramView)
				  {
					Log::w(L"SuggestionsAdapter", L"Search suggestions cursor threw exception.", paramView);
					View *view = a(this->d, this->c, paramViewGroup);
					if (view != nullptr)
					{
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
					  (static_cast<a*>(view->getTag()))->a.setText(paramView->toString());
					}
					return view;
				  }
				}

				bool i::hasStableIds()
				{
					return false;
				}

				void i::notifyDataSetChanged()
				{
				  i::notifyDataSetChanged();
				  d(a());
				}

				void i::notifyDataSetInvalidated()
				{
				  i::notifyDataSetInvalidated();
				  d(a());
				}

				void i::onClick(View *paramView)
				{
				  auto object = paramView->getTag();
				  if (dynamic_cast<CharSequence*>(object) != nullptr)
				  {
					this->k->a(static_cast<CharSequence*>(object));
				  }
				}

				internal *i::a::android->support.v4.b.a(View *param1View)
				{
				  this->a_Renamed = static_cast<TextView*>(param1View->findViewById(16908308));
				  this->b_Renamed = static_cast<TextView*>(param1View->findViewById(16908309));
				  this->c = static_cast<ImageView*>(param1View->findViewById(16908295));
				  this->d = static_cast<ImageView*>(param1View->findViewById(16908296));
				  this->e = static_cast<ImageView*>(param1View->findViewById(android->support.v4.b.a::e.edit_query));
				}
			}
		}
	}
}

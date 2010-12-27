/*================================================================================
  code generated by: java2cpp
  class: android.text.TextWatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_DECL
#define J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }


#include <android/text/Editable.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace text {

	class TextWatcher;
	class TextWatcher
		: public cpp_object<TextWatcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		TextWatcher(jobject jobj)
		: cpp_object<TextWatcher>(jobj)
		{
		}

		void beforeTextChanged(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void onTextChanged(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void afterTextChanged(local_ref< android::text::Editable > const&);
	}; //class TextWatcher

} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_IMPL

namespace j2cpp {


void android::text::TextWatcher::beforeTextChanged(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::text::TextWatcher::onTextChanged(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::text::TextWatcher::afterTextChanged(local_ref< android::text::Editable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::TextWatcher,"android/text/TextWatcher")
J2CPP_DEFINE_METHOD(android::text::TextWatcher,0,"beforeTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::text::TextWatcher,1,"onTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::text::TextWatcher,2,"afterTextChanged","(Landroid/text/Editable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
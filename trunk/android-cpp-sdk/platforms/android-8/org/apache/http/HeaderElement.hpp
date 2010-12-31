/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.HeaderElement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class NameValuePair; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/NameValuePair.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HeaderElement;
	class HeaderElement
		: public cpp_object<HeaderElement>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		HeaderElement(jobject jobj)
		: cpp_object<HeaderElement>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> > getParameters();
		local_ref< org::apache::http::NameValuePair > getParameterByName(local_ref< java::lang::String > const&);
		cpp_int getParameterCount();
		local_ref< org::apache::http::NameValuePair > getParameter(cpp_int const&);
	}; //class HeaderElement

} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::String > org::apache::http::HeaderElement::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::HeaderElement::getValue()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> > org::apache::http::HeaderElement::getParameters()
{
	return local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::HeaderElement::getParameterByName(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::NameValuePair >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::HeaderElement::getParameterCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::HeaderElement::getParameter(cpp_int const &a0)
{
	return local_ref< org::apache::http::NameValuePair >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::HeaderElement,"org/apache/http/HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,0,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,1,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,2,"getParameters","()[org.apache.http.NameValuePair")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,3,"getParameterByName","(Ljava/lang/String;)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,4,"getParameterCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,5,"getParameter","(I)Lorg/apache/http/NameValuePair;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
/*================================================================================
  code generated by: java2cpp
  class: java.security.UnrecoverableKeyException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security {

	class UnrecoverableKeyException;
	class UnrecoverableKeyException
		: public cpp_object<UnrecoverableKeyException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		UnrecoverableKeyException(jobject jobj)
		: cpp_object<UnrecoverableKeyException>(jobj)
		{
		}

	}; //class UnrecoverableKeyException

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::UnrecoverableKeyException > create< java::security::UnrecoverableKeyException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::security::UnrecoverableKeyException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::UnrecoverableKeyException::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::UnrecoverableKeyException::J2CPP_CLASS_NAME, java::security::UnrecoverableKeyException::J2CPP_METHOD_NAME(0), java::security::UnrecoverableKeyException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::security::UnrecoverableKeyException > create< java::security::UnrecoverableKeyException>()
{
	return local_ref< java::security::UnrecoverableKeyException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::UnrecoverableKeyException::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::UnrecoverableKeyException::J2CPP_CLASS_NAME, java::security::UnrecoverableKeyException::J2CPP_METHOD_NAME(1), java::security::UnrecoverableKeyException::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::UnrecoverableKeyException,"java/security/UnrecoverableKeyException")
J2CPP_DEFINE_METHOD(java::security::UnrecoverableKeyException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::UnrecoverableKeyException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
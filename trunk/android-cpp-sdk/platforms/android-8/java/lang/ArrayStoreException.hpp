/*================================================================================
  code generated by: java2cpp
  class: java.lang.ArrayStoreException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ARRAYSTOREEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_ARRAYSTOREEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ArrayStoreException;
	class ArrayStoreException
		: public cpp_object<ArrayStoreException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		ArrayStoreException(jobject jobj)
		: cpp_object<ArrayStoreException>(jobj)
		{
		}

	}; //class ArrayStoreException

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ARRAYSTOREEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ARRAYSTOREEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ARRAYSTOREEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::ArrayStoreException > create< java::lang::ArrayStoreException>()
{
	return local_ref< java::lang::ArrayStoreException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::ArrayStoreException::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::ArrayStoreException::J2CPP_CLASS_NAME, java::lang::ArrayStoreException::J2CPP_METHOD_NAME(0), java::lang::ArrayStoreException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::lang::ArrayStoreException > create< java::lang::ArrayStoreException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::ArrayStoreException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::ArrayStoreException::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::ArrayStoreException::J2CPP_CLASS_NAME, java::lang::ArrayStoreException::J2CPP_METHOD_NAME(1), java::lang::ArrayStoreException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::ArrayStoreException,"java/lang/ArrayStoreException")
J2CPP_DEFINE_METHOD(java::lang::ArrayStoreException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ArrayStoreException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ARRAYSTOREEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
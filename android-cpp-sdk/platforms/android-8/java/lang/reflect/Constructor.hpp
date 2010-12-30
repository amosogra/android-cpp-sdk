/*================================================================================
  code generated by: java2cpp
  class: java.lang.reflect.Constructor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_CONSTRUCTOR_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_CONSTRUCTOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class TypeVariable; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Type; } } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/lang/reflect/TypeVariable.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Constructor;
	class Constructor
		: public cpp_object<Constructor>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)

		Constructor(jobject jobj)
		: cpp_object<Constructor>(jobj)
		{
		}

		local_ref< cpp_object_array<java::lang::reflect::TypeVariable, 1> > getTypeParameters();
		local_ref< java::lang::String > toGenericString();
		local_ref< cpp_object_array<java::lang::reflect::Type, 1> > getGenericParameterTypes();
		local_ref< cpp_object_array<java::lang::reflect::Type, 1> > getGenericExceptionTypes();
		local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > getDeclaredAnnotations();
		local_ref< cpp_object_array<java::lang::annotation::Annotation, 2> > getParameterAnnotations();
		cpp_boolean isVarArgs();
		cpp_boolean isSynthetic();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Class > getDeclaringClass();
		local_ref< cpp_object_array<java::lang::Class, 1> > getExceptionTypes();
		cpp_int getModifiers();
		local_ref< java::lang::String > getName();
		local_ref< cpp_object_array<java::lang::Class, 1> > getParameterTypes();
		cpp_int hashCode();
		local_ref< java::lang::Object > newInstance(local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::lang::String > toString();
	}; //class Constructor

} //namespace reflect
} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_CONSTRUCTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_CONSTRUCTOR_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_CONSTRUCTOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::reflect::Constructor > create< java::lang::reflect::Constructor>()
{
	return local_ref< java::lang::reflect::Constructor >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::reflect::Constructor::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::reflect::Constructor::J2CPP_CLASS_NAME, java::lang::reflect::Constructor::J2CPP_METHOD_NAME(0), java::lang::reflect::Constructor::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::TypeVariable, 1> > java::lang::reflect::Constructor::getTypeParameters()
{
	return local_ref< cpp_object_array<java::lang::reflect::TypeVariable, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::reflect::Constructor::toGenericString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Type, 1> > java::lang::reflect::Constructor::getGenericParameterTypes()
{
	return local_ref< cpp_object_array<java::lang::reflect::Type, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Type, 1> > java::lang::reflect::Constructor::getGenericExceptionTypes()
{
	return local_ref< cpp_object_array<java::lang::reflect::Type, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > java::lang::reflect::Constructor::getDeclaredAnnotations()
{
	return local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::annotation::Annotation, 2> > java::lang::reflect::Constructor::getParameterAnnotations()
{
	return local_ref< cpp_object_array<java::lang::annotation::Annotation, 2> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::lang::reflect::Constructor::isVarArgs()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean java::lang::reflect::Constructor::isSynthetic()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_boolean java::lang::reflect::Constructor::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Class > java::lang::reflect::Constructor::getDeclaringClass()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Class, 1> > java::lang::reflect::Constructor::getExceptionTypes()
{
	return local_ref< cpp_object_array<java::lang::Class, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int java::lang::reflect::Constructor::getModifiers()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::reflect::Constructor::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Class, 1> > java::lang::reflect::Constructor::getParameterTypes()
{
	return local_ref< cpp_object_array<java::lang::Class, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int java::lang::reflect::Constructor::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::Object > java::lang::reflect::Constructor::newInstance(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::reflect::Constructor::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::reflect::Constructor,"java/lang/reflect/Constructor")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,1,"getTypeParameters","()[java.lang.reflect.TypeVariable")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,2,"toGenericString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,3,"getGenericParameterTypes","()[java.lang.reflect.Type")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,4,"getGenericExceptionTypes","()[java.lang.reflect.Type")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,5,"getDeclaredAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,6,"getParameterAnnotations","()[[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,7,"isVarArgs","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,8,"isSynthetic","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,9,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,10,"getDeclaringClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,11,"getExceptionTypes","()[java.lang.Class")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,12,"getModifiers","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,13,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,14,"getParameterTypes","()[java.lang.Class")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,15,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,16,"newInstance","([java.lang.Object)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Constructor,17,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_CONSTRUCTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
/*================================================================================
  code generated by: java2cpp
  class: java.sql.SQLWarning
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLWARNING_HPP_DECL
#define J2CPP_JAVA_SQL_SQLWARNING_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLWarning;
	class SQLWarning
		: public cpp_object<SQLWarning>
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

		SQLWarning(jobject jobj)
		: cpp_object<SQLWarning>(jobj)
		{
		}

		local_ref< java::sql::SQLWarning > getNextWarning();
		void setNextWarning(local_ref< java::sql::SQLWarning > const&);
	}; //class SQLWarning

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLWARNING_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLWARNING_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLWARNING_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>()
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(0), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(1), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(2), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(3), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>(local_ref< java::lang::Throwable > const &a0)
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(4), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(5), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(6), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLWarning > create< java::sql::SQLWarning>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, local_ref< java::lang::Throwable > const &a3)
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLWarning::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLWarning::J2CPP_CLASS_NAME, java::sql::SQLWarning::J2CPP_METHOD_NAME(7), java::sql::SQLWarning::J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::sql::SQLWarning > java::sql::SQLWarning::getNextWarning()
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::sql::SQLWarning::setNextWarning(local_ref< java::sql::SQLWarning > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::SQLWarning,"java/sql/SQLWarning")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,2,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,3,"<init>","(Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,4,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,5,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,6,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,7,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,8,"getNextWarning","()Ljava/sql/SQLWarning;")
J2CPP_DEFINE_METHOD(java::sql::SQLWarning,9,"setNextWarning","(Ljava/sql/SQLWarning;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLWARNING_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
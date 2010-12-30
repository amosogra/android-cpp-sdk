/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.ParserCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class ParserCursor;
	class ParserCursor
		: public object<ParserCursor>
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

		explicit ParserCursor(jobject jobj)
		: object<ParserCursor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ParserCursor(jint, jint);
		jint getLowerBound();
		jint getUpperBound();
		jint getPos();
		void updatePos(jint);
		jboolean atEnd();
		local_ref< java::lang::String > toString();
	}; //class ParserCursor

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_HPP_IMPL

namespace j2cpp {



org::apache::http::message::ParserCursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::message::ParserCursor::ParserCursor(jint a0, jint a1)
: object<org::apache::http::message::ParserCursor>(
	call_new_object<
		org::apache::http::message::ParserCursor::J2CPP_CLASS_NAME,
		org::apache::http::message::ParserCursor::J2CPP_METHOD_NAME(0),
		org::apache::http::message::ParserCursor::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


jint org::apache::http::message::ParserCursor::getLowerBound()
{
	return call_method<
		org::apache::http::message::ParserCursor::J2CPP_CLASS_NAME,
		org::apache::http::message::ParserCursor::J2CPP_METHOD_NAME(1),
		org::apache::http::message::ParserCursor::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint org::apache::http::message::ParserCursor::getUpperBound()
{
	return call_method<
		org::apache::http::message::ParserCursor::J2CPP_CLASS_NAME,
		org::apache::http::message::ParserCursor::J2CPP_METHOD_NAME(2),
		org::apache::http::message::ParserCursor::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint org::apache::http::message::ParserCursor::getPos()
{
	return call_method<
		org::apache::http::message::ParserCursor::J2CPP_CLASS_NAME,
		org::apache::http::message::ParserCursor::J2CPP_METHOD_NAME(3),
		org::apache::http::message::ParserCursor::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void org::apache::http::message::ParserCursor::updatePos(jint a0)
{
	return call_method<
		org::apache::http::message::ParserCursor::J2CPP_CLASS_NAME,
		org::apache::http::message::ParserCursor::J2CPP_METHOD_NAME(4),
		org::apache::http::message::ParserCursor::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean org::apache::http::message::ParserCursor::atEnd()
{
	return call_method<
		org::apache::http::message::ParserCursor::J2CPP_CLASS_NAME,
		org::apache::http::message::ParserCursor::J2CPP_METHOD_NAME(5),
		org::apache::http::message::ParserCursor::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::String > org::apache::http::message::ParserCursor::toString()
{
	return call_method<
		org::apache::http::message::ParserCursor::J2CPP_CLASS_NAME,
		org::apache::http::message::ParserCursor::J2CPP_METHOD_NAME(6),
		org::apache::http::message::ParserCursor::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::message::ParserCursor,"org/apache/http/message/ParserCursor")
J2CPP_DEFINE_METHOD(org::apache::http::message::ParserCursor,0,"<init>","(II)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::ParserCursor,1,"getLowerBound","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::ParserCursor,2,"getUpperBound","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::ParserCursor,3,"getPos","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::ParserCursor,4,"updatePos","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::ParserCursor,5,"atEnd","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::ParserCursor,6,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
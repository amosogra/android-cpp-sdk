/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.Wire
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_WIRE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_WIRE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace commons { namespace logging { class Log; } } } } }


#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/commons/logging/Log.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class Wire;
	class Wire
		: public object<Wire>
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

		explicit Wire(jobject jobj)
		: object<Wire>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Wire(local_ref< org::apache::commons::logging::Log > const&);
		jboolean enabled();
		void output(local_ref< java::io::InputStream >  const&);
		void input(local_ref< java::io::InputStream >  const&);
		void output(local_ref< array<jbyte,1> >  const&, jint, jint);
		void input(local_ref< array<jbyte,1> >  const&, jint, jint);
		void output(local_ref< array<jbyte,1> >  const&);
		void input(local_ref< array<jbyte,1> >  const&);
		void output(jint);
		void input(jint);
		void output(local_ref< java::lang::String >  const&);
		void input(local_ref< java::lang::String >  const&);
	}; //class Wire

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_WIRE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_WIRE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_WIRE_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::Wire::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::conn::Wire::Wire(local_ref< org::apache::commons::logging::Log > const &a0)
: object<org::apache::http::impl::conn::Wire>(
	call_new_object<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jboolean org::apache::http::impl::conn::Wire::enabled()
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

void org::apache::http::impl::conn::Wire::output(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::Wire::input(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::Wire::output(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::conn::Wire::input(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::conn::Wire::output(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::Wire::input(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::Wire::output(jint a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::Wire::input(jint a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::Wire::output(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::Wire::input(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::Wire::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_NAME(11),
		org::apache::http::impl::conn::Wire::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::Wire,"org/apache/http/impl/conn/Wire")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,0,"<init>","(Lorg/apache/commons/logging/Log;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,1,"enabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,2,"output","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,3,"input","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,4,"output","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,5,"input","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,6,"output","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,7,"input","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,8,"output","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,9,"input","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,10,"output","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::Wire,11,"input","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_WIRE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
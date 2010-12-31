/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.NonReadableChannelException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_NONREADABLECHANNELEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_NONREADABLECHANNELEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class IllegalStateException; } } }


#include <java/lang/IllegalStateException.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class NonReadableChannelException;
	class NonReadableChannelException
		: public object<NonReadableChannelException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit NonReadableChannelException(jobject jobj)
		: object<NonReadableChannelException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalStateException>() const;


		NonReadableChannelException();
	}; //class NonReadableChannelException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_NONREADABLECHANNELEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_NONREADABLECHANNELEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_NONREADABLECHANNELEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::NonReadableChannelException::operator local_ref<java::lang::IllegalStateException>() const
{
	return local_ref<java::lang::IllegalStateException>(get_jobject());
}


java::nio::channels::NonReadableChannelException::NonReadableChannelException()
: object<java::nio::channels::NonReadableChannelException>(
	call_new_object<
		java::nio::channels::NonReadableChannelException::J2CPP_CLASS_NAME,
		java::nio::channels::NonReadableChannelException::J2CPP_METHOD_NAME(0),
		java::nio::channels::NonReadableChannelException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::NonReadableChannelException,"java/nio/channels/NonReadableChannelException")
J2CPP_DEFINE_METHOD(java::nio::channels::NonReadableChannelException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_NONREADABLECHANNELEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
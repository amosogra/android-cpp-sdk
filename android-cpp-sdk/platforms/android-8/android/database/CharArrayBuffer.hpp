/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.CharArrayBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CHARARRAYBUFFER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CHARARRAYBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace database {

	class CharArrayBuffer;
	class CharArrayBuffer
		: public object<CharArrayBuffer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit CharArrayBuffer(jobject jobj)
		: object<CharArrayBuffer>(jobj)
		, data(jobj)
		, sizeCopied(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CharArrayBuffer(jint);
		CharArrayBuffer(local_ref< array<jchar,1> > const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< array<jchar,1> > > data;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > sizeCopied;
	}; //class CharArrayBuffer

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CHARARRAYBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CHARARRAYBUFFER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CHARARRAYBUFFER_HPP_IMPL

namespace j2cpp {



android::database::CharArrayBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::CharArrayBuffer::CharArrayBuffer(jint a0)
: object<android::database::CharArrayBuffer>(
	call_new_object<
		android::database::CharArrayBuffer::J2CPP_CLASS_NAME,
		android::database::CharArrayBuffer::J2CPP_METHOD_NAME(0),
		android::database::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
, data(get_jobject())
, sizeCopied(get_jobject())
{
}



android::database::CharArrayBuffer::CharArrayBuffer(local_ref< array<jchar,1> > const &a0)
: object<android::database::CharArrayBuffer>(
	call_new_object<
		android::database::CharArrayBuffer::J2CPP_CLASS_NAME,
		android::database::CharArrayBuffer::J2CPP_METHOD_NAME(1),
		android::database::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, data(get_jobject())
, sizeCopied(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::database::CharArrayBuffer,"android/database/CharArrayBuffer")
J2CPP_DEFINE_METHOD(android::database::CharArrayBuffer,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::database::CharArrayBuffer,1,"<init>","([C)V")
J2CPP_DEFINE_FIELD(android::database::CharArrayBuffer,0,"data","[C")
J2CPP_DEFINE_FIELD(android::database::CharArrayBuffer,1,"sizeCopied","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CHARARRAYBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
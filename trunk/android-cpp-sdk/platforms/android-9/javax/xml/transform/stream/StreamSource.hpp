/*================================================================================
  code generated by: java2cpp
  class: javax.xml.transform.stream.StreamSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform { namespace stream {

	class StreamSource;
	class StreamSource
		: public cpp_object<StreamSource>
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
		J2CPP_DECLARE_FIELD(0)

		StreamSource(jobject jobj)
		: cpp_object<StreamSource>(jobj)
		{
		}

		void setInputStream(local_ref< java::io::InputStream > const&);
		local_ref< java::io::InputStream > getInputStream();
		void setReader(local_ref< java::io::Reader > const&);
		local_ref< java::io::Reader > getReader();
		void setPublicId(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getPublicId();
		void setSystemId(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getSystemId();
		void setSystemId(local_ref< java::io::File > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > FEATURE;
	}; //class StreamSource

} //namespace stream
} //namespace transform
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::transform::stream::StreamSource > create< javax::xml::transform::stream::StreamSource>()
{
	return local_ref< javax::xml::transform::stream::StreamSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME, javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(0), javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< javax::xml::transform::stream::StreamSource > create< javax::xml::transform::stream::StreamSource>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< javax::xml::transform::stream::StreamSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME, javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(1), javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::transform::stream::StreamSource > create< javax::xml::transform::stream::StreamSource>(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::xml::transform::stream::StreamSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME, javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(2), javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::transform::stream::StreamSource > create< javax::xml::transform::stream::StreamSource>(local_ref< java::io::Reader > const &a0)
{
	return local_ref< javax::xml::transform::stream::StreamSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME, javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(3), javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::transform::stream::StreamSource > create< javax::xml::transform::stream::StreamSource>(local_ref< java::io::Reader > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::xml::transform::stream::StreamSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME, javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(4), javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::transform::stream::StreamSource > create< javax::xml::transform::stream::StreamSource>(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::xml::transform::stream::StreamSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME, javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(5), javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::transform::stream::StreamSource > create< javax::xml::transform::stream::StreamSource>(local_ref< java::io::File > const &a0)
{
	return local_ref< javax::xml::transform::stream::StreamSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME, javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(6), javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void javax::xml::transform::stream::StreamSource::setInputStream(local_ref< java::io::InputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::InputStream > javax::xml::transform::stream::StreamSource::getInputStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void javax::xml::transform::stream::StreamSource::setReader(local_ref< java::io::Reader > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::Reader > javax::xml::transform::stream::StreamSource::getReader()
{
	return local_ref< java::io::Reader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void javax::xml::transform::stream::StreamSource::setPublicId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::xml::transform::stream::StreamSource::getPublicId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void javax::xml::transform::stream::StreamSource::setSystemId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::xml::transform::stream::StreamSource::getSystemId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void javax::xml::transform::stream::StreamSource::setSystemId(local_ref< java::io::File > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
	javax::xml::transform::stream::StreamSource::J2CPP_FIELD_NAME(0),
	javax::xml::transform::stream::StreamSource::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> javax::xml::transform::stream::StreamSource::FEATURE;


J2CPP_DEFINE_CLASS(javax::xml::transform::stream::StreamSource,"javax/xml/transform/stream/StreamSource")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,1,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,2,"<init>","(Ljava/io/InputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,3,"<init>","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,4,"<init>","(Ljava/io/Reader;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,5,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,6,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,7,"setInputStream","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,8,"getInputStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,9,"setReader","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,10,"getReader","()Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,11,"setPublicId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,12,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,13,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,14,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,15,"setSystemId","(Ljava/io/File;)V")
J2CPP_DEFINE_FIELD(javax::xml::transform::stream::StreamSource,0,"FEATURE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
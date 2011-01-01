/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.KeyPairGeneratorSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class KeyPair; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <java/security/KeyPair.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security {

	class KeyPairGeneratorSpi;
	class KeyPairGeneratorSpi
		: public object<KeyPairGeneratorSpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit KeyPairGeneratorSpi(jobject jobj)
		: object<KeyPairGeneratorSpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		KeyPairGeneratorSpi();
		local_ref< java::security::KeyPair > generateKeyPair();
		void initialize(jint, local_ref< java::security::SecureRandom >  const&);
		void initialize(local_ref< java::security::spec::AlgorithmParameterSpec >  const&, local_ref< java::security::SecureRandom >  const&);
	}; //class KeyPairGeneratorSpi

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_IMPL

namespace j2cpp {



java::security::KeyPairGeneratorSpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::KeyPairGeneratorSpi::KeyPairGeneratorSpi()
: object<java::security::KeyPairGeneratorSpi>(
	call_new_object<
		java::security::KeyPairGeneratorSpi::J2CPP_CLASS_NAME,
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_NAME(0),
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::security::KeyPair > java::security::KeyPairGeneratorSpi::generateKeyPair()
{
	return call_method<
		java::security::KeyPairGeneratorSpi::J2CPP_CLASS_NAME,
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_NAME(1),
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::KeyPair > >
	(get_jobject());
}

void java::security::KeyPairGeneratorSpi::initialize(jint a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::KeyPairGeneratorSpi::J2CPP_CLASS_NAME,
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_NAME(2),
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void java::security::KeyPairGeneratorSpi::initialize(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::KeyPairGeneratorSpi::J2CPP_CLASS_NAME,
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_NAME(3),
		java::security::KeyPairGeneratorSpi::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::security::KeyPairGeneratorSpi,"java/security/KeyPairGeneratorSpi")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,1,"generateKeyPair","()Ljava/security/KeyPair;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,2,"initialize","(ILjava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,3,"initialize","(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
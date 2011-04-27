/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.MediaScannerConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIASCANNERCONNECTION_HPP_DECL
#define J2CPP_ANDROID_MEDIA_MEDIASCANNERCONNECTION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace media { namespace MediaScannerConnection_ { class MediaScannerConnectionClient; } } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class ServiceConnection; } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ComponentName.hpp>
#include <android/content/Context.hpp>
#include <android/content/ServiceConnection.hpp>
#include <android/media/MediaScannerConnection.hpp>
#include <android/net/Uri.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class MediaScannerConnection;
	namespace MediaScannerConnection_ {

		class MediaScannerConnectionClient;
		class MediaScannerConnectionClient
			: public object<MediaScannerConnectionClient>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit MediaScannerConnectionClient(jobject jobj)
			: object<MediaScannerConnectionClient>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onMediaScannerConnected();
			void onScanCompleted(local_ref< java::lang::String >  const&, local_ref< android::net::Uri >  const&);
		}; //class MediaScannerConnectionClient

	} //namespace MediaScannerConnection_

	class MediaScannerConnection
		: public object<MediaScannerConnection>
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

		typedef MediaScannerConnection_::MediaScannerConnectionClient MediaScannerConnectionClient;

		explicit MediaScannerConnection(jobject jobj)
		: object<MediaScannerConnection>(jobj)
		{
		}

		operator local_ref<android::content::ServiceConnection>() const;
		operator local_ref<java::lang::Object>() const;


		MediaScannerConnection(local_ref< android::content::Context > const&, local_ref< android::media::MediaScannerConnection_::MediaScannerConnectionClient > const&);
		void connect();
		void disconnect();
		jboolean isConnected();
		void scanFile(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void onServiceConnected(local_ref< android::content::ComponentName >  const&, local_ref< android::os::IBinder >  const&);
		void onServiceDisconnected(local_ref< android::content::ComponentName >  const&);
	}; //class MediaScannerConnection

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIASCANNERCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIASCANNERCONNECTION_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_MEDIASCANNERCONNECTION_HPP_IMPL

namespace j2cpp {




android::media::MediaScannerConnection_::MediaScannerConnectionClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaScannerConnection_::MediaScannerConnectionClient::onMediaScannerConnected()
{
	return call_method<
		android::media::MediaScannerConnection_::MediaScannerConnectionClient::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection_::MediaScannerConnectionClient::J2CPP_METHOD_NAME(0),
		android::media::MediaScannerConnection_::MediaScannerConnectionClient::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void android::media::MediaScannerConnection_::MediaScannerConnectionClient::onScanCompleted(local_ref< java::lang::String > const &a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::media::MediaScannerConnection_::MediaScannerConnectionClient::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection_::MediaScannerConnectionClient::J2CPP_METHOD_NAME(1),
		android::media::MediaScannerConnection_::MediaScannerConnectionClient::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::media::MediaScannerConnection_::MediaScannerConnectionClient,"android/media/MediaScannerConnection$MediaScannerConnectionClient")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection_::MediaScannerConnectionClient,0,"onMediaScannerConnected","()V")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection_::MediaScannerConnectionClient,1,"onScanCompleted","(Ljava/lang/String;Landroid/net/Uri;)V")



android::media::MediaScannerConnection::operator local_ref<android::content::ServiceConnection>() const
{
	return local_ref<android::content::ServiceConnection>(get_jobject());
}

android::media::MediaScannerConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::MediaScannerConnection::MediaScannerConnection(local_ref< android::content::Context > const &a0, local_ref< android::media::MediaScannerConnection_::MediaScannerConnectionClient > const &a1)
: object<android::media::MediaScannerConnection>(
	call_new_object<
		android::media::MediaScannerConnection::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection::J2CPP_METHOD_NAME(0),
		android::media::MediaScannerConnection::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void android::media::MediaScannerConnection::connect()
{
	return call_method<
		android::media::MediaScannerConnection::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection::J2CPP_METHOD_NAME(1),
		android::media::MediaScannerConnection::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void android::media::MediaScannerConnection::disconnect()
{
	return call_method<
		android::media::MediaScannerConnection::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection::J2CPP_METHOD_NAME(2),
		android::media::MediaScannerConnection::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jboolean android::media::MediaScannerConnection::isConnected()
{
	return call_method<
		android::media::MediaScannerConnection::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection::J2CPP_METHOD_NAME(3),
		android::media::MediaScannerConnection::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

void android::media::MediaScannerConnection::scanFile(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::media::MediaScannerConnection::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection::J2CPP_METHOD_NAME(4),
		android::media::MediaScannerConnection::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::MediaScannerConnection::onServiceConnected(local_ref< android::content::ComponentName > const &a0, local_ref< android::os::IBinder > const &a1)
{
	return call_method<
		android::media::MediaScannerConnection::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection::J2CPP_METHOD_NAME(5),
		android::media::MediaScannerConnection::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::MediaScannerConnection::onServiceDisconnected(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::media::MediaScannerConnection::J2CPP_CLASS_NAME,
		android::media::MediaScannerConnection::J2CPP_METHOD_NAME(6),
		android::media::MediaScannerConnection::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::media::MediaScannerConnection,"android/media/MediaScannerConnection")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection,0,"<init>","(Landroid/content/Context;Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;)V")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection,1,"connect","()V")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection,2,"disconnect","()V")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection,3,"isConnected","()Z")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection,4,"scanFile","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection,5,"onServiceConnected","(Landroid/content/ComponentName;Landroid/os/IBinder;)V")
J2CPP_DEFINE_METHOD(android::media::MediaScannerConnection,6,"onServiceDisconnected","(Landroid/content/ComponentName;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIASCANNERCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
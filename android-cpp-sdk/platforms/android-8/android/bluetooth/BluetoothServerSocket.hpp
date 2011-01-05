/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.bluetooth.BluetoothServerSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_HPP_DECL
#define J2CPP_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_HPP_DECL


namespace j2cpp { namespace android { namespace bluetooth { class BluetoothSocket; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }


#include <android/bluetooth/BluetoothSocket.hpp>
#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace bluetooth {

	class BluetoothServerSocket;
	class BluetoothServerSocket
		: public object<BluetoothServerSocket>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit BluetoothServerSocket(jobject jobj)
		: object<BluetoothServerSocket>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;


		local_ref< android::bluetooth::BluetoothSocket > accept();
		local_ref< android::bluetooth::BluetoothSocket > accept(jint);
		void close();
	}; //class BluetoothServerSocket

} //namespace bluetooth
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_HPP_IMPL
#define J2CPP_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_HPP_IMPL

namespace j2cpp {



android::bluetooth::BluetoothServerSocket::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::bluetooth::BluetoothServerSocket::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}


local_ref< android::bluetooth::BluetoothSocket > android::bluetooth::BluetoothServerSocket::accept()
{
	return call_method<
		android::bluetooth::BluetoothServerSocket::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothServerSocket::J2CPP_METHOD_NAME(1),
		android::bluetooth::BluetoothServerSocket::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::bluetooth::BluetoothSocket >
	>(get_jobject());
}

local_ref< android::bluetooth::BluetoothSocket > android::bluetooth::BluetoothServerSocket::accept(jint a0)
{
	return call_method<
		android::bluetooth::BluetoothServerSocket::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothServerSocket::J2CPP_METHOD_NAME(2),
		android::bluetooth::BluetoothServerSocket::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::bluetooth::BluetoothSocket >
	>(get_jobject(), a0);
}

void android::bluetooth::BluetoothServerSocket::close()
{
	return call_method<
		android::bluetooth::BluetoothServerSocket::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothServerSocket::J2CPP_METHOD_NAME(3),
		android::bluetooth::BluetoothServerSocket::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::bluetooth::BluetoothServerSocket,"android/bluetooth/BluetoothServerSocket")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothServerSocket,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothServerSocket,1,"accept","()Landroid/bluetooth/BluetoothSocket;")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothServerSocket,2,"accept","(I)Landroid/bluetooth/BluetoothSocket;")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothServerSocket,3,"close","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
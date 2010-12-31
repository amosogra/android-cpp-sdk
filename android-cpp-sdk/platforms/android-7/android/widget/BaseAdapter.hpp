/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.BaseAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_BASEADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_BASEADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class SpinnerAdapter; } } }


#include <android/database/DataSetObserver.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/ListAdapter.hpp>
#include <android/widget/SpinnerAdapter.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class BaseAdapter;
	class BaseAdapter
		: public object<BaseAdapter>
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

		explicit BaseAdapter(jobject jobj)
		: object<BaseAdapter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::widget::ListAdapter>() const;
		operator local_ref<android::widget::SpinnerAdapter>() const;


		BaseAdapter();
		jboolean hasStableIds();
		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void notifyDataSetChanged();
		void notifyDataSetInvalidated();
		jboolean areAllItemsEnabled();
		jboolean isEnabled(jint);
		local_ref< android::view::View > getDropDownView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		jint getItemViewType(jint);
		jint getViewTypeCount();
		jboolean isEmpty();
	}; //class BaseAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_BASEADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_BASEADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_BASEADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::BaseAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::BaseAdapter::operator local_ref<android::widget::ListAdapter>() const
{
	return local_ref<android::widget::ListAdapter>(get_jobject());
}

android::widget::BaseAdapter::operator local_ref<android::widget::SpinnerAdapter>() const
{
	return local_ref<android::widget::SpinnerAdapter>(get_jobject());
}


android::widget::BaseAdapter::BaseAdapter()
: object<android::widget::BaseAdapter>(
	call_new_object<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(0),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jboolean android::widget::BaseAdapter::hasStableIds()
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(1),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

void android::widget::BaseAdapter::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(2),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::widget::BaseAdapter::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(3),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::widget::BaseAdapter::notifyDataSetChanged()
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(4),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void android::widget::BaseAdapter::notifyDataSetInvalidated()
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(5),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

jboolean android::widget::BaseAdapter::areAllItemsEnabled()
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(6),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject());
}

jboolean android::widget::BaseAdapter::isEnabled(jint a0)
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(7),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::BaseAdapter::getDropDownView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(8),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

jint android::widget::BaseAdapter::getItemViewType(jint a0)
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(9),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0);
}

jint android::widget::BaseAdapter::getViewTypeCount()
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(10),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jboolean android::widget::BaseAdapter::isEmpty()
{
	return call_method<
		android::widget::BaseAdapter::J2CPP_CLASS_NAME,
		android::widget::BaseAdapter::J2CPP_METHOD_NAME(11),
		android::widget::BaseAdapter::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::BaseAdapter,"android/widget/BaseAdapter")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,1,"hasStableIds","()Z")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,2,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,3,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,4,"notifyDataSetChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,5,"notifyDataSetInvalidated","()V")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,6,"areAllItemsEnabled","()Z")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,7,"isEnabled","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,8,"getDropDownView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,9,"getItemViewType","(I)I")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,10,"getViewTypeCount","()I")
J2CPP_DEFINE_METHOD(android::widget::BaseAdapter,11,"isEmpty","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_BASEADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
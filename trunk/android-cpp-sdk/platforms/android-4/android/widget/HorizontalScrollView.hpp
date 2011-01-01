/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.HorizontalScrollView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_HORIZONTALSCROLLVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_HORIZONTALSCROLLVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Rect.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/FrameLayout.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class HorizontalScrollView;
	class HorizontalScrollView
		: public object<HorizontalScrollView>
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
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)

		explicit HorizontalScrollView(jobject jobj)
		: object<HorizontalScrollView>(jobj)
		{
		}

		operator local_ref<android::widget::FrameLayout>() const;


		HorizontalScrollView(local_ref< android::content::Context > const&);
		HorizontalScrollView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		HorizontalScrollView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		jint getMaxScrollAmount();
		void addView(local_ref< android::view::View >  const&);
		void addView(local_ref< android::view::View >  const&, jint);
		void addView(local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		void addView(local_ref< android::view::View >  const&, jint, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		jboolean isFillViewport();
		void setFillViewport(jboolean);
		jboolean isSmoothScrollingEnabled();
		void setSmoothScrollingEnabled(jboolean);
		jboolean dispatchKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean executeKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean onInterceptTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean pageScroll(jint);
		jboolean fullScroll(jint);
		jboolean arrowScroll(jint);
		void smoothScrollBy(jint, jint);
		void smoothScrollTo(jint, jint);
		void computeScroll();
		void requestChildFocus(local_ref< android::view::View >  const&, local_ref< android::view::View >  const&);
		jboolean requestChildRectangleOnScreen(local_ref< android::view::View >  const&, local_ref< android::graphics::Rect >  const&, jboolean);
		void requestLayout();
		void fling(jint);
		void scrollTo(jint, jint);
	}; //class HorizontalScrollView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_HORIZONTALSCROLLVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_HORIZONTALSCROLLVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_HORIZONTALSCROLLVIEW_HPP_IMPL

namespace j2cpp {



android::widget::HorizontalScrollView::operator local_ref<android::widget::FrameLayout>() const
{
	return local_ref<android::widget::FrameLayout>(get_jobject());
}


android::widget::HorizontalScrollView::HorizontalScrollView(local_ref< android::content::Context > const &a0)
: object<android::widget::HorizontalScrollView>(
	call_new_object<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(0),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::HorizontalScrollView::HorizontalScrollView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::HorizontalScrollView>(
	call_new_object<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(1),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::HorizontalScrollView::HorizontalScrollView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::HorizontalScrollView>(
	call_new_object<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(2),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}




jint android::widget::HorizontalScrollView::getMaxScrollAmount()
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(5),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

void android::widget::HorizontalScrollView::addView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(6),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void android::widget::HorizontalScrollView::addView(local_ref< android::view::View > const &a0, jint a1)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(7),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::HorizontalScrollView::addView(local_ref< android::view::View > const &a0, local_ref< android::view::ViewGroup_::LayoutParams > const &a1)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(8),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::HorizontalScrollView::addView(local_ref< android::view::View > const &a0, jint a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(9),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2);
}

jboolean android::widget::HorizontalScrollView::isFillViewport()
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(10),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject());
}

void android::widget::HorizontalScrollView::setFillViewport(jboolean a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(11),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

jboolean android::widget::HorizontalScrollView::isSmoothScrollingEnabled()
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(12),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject());
}

void android::widget::HorizontalScrollView::setSmoothScrollingEnabled(jboolean a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(13),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}


jboolean android::widget::HorizontalScrollView::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(15),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::HorizontalScrollView::executeKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(16),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::HorizontalScrollView::onInterceptTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(17),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::HorizontalScrollView::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(18),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::HorizontalScrollView::pageScroll(jint a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(19),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::HorizontalScrollView::fullScroll(jint a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(20),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::HorizontalScrollView::arrowScroll(jint a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(21),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject(), a0);
}

void android::widget::HorizontalScrollView::smoothScrollBy(jint a0, jint a1)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(22),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::HorizontalScrollView::smoothScrollTo(jint a0, jint a1)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(23),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0, a1);
}




void android::widget::HorizontalScrollView::computeScroll()
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(27),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject());
}


void android::widget::HorizontalScrollView::requestChildFocus(local_ref< android::view::View > const &a0, local_ref< android::view::View > const &a1)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(29),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0, a1);
}


jboolean android::widget::HorizontalScrollView::requestChildRectangleOnScreen(local_ref< android::view::View > const &a0, local_ref< android::graphics::Rect > const &a1, jboolean a2)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(31),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(31), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

void android::widget::HorizontalScrollView::requestLayout()
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(32),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject());
}



void android::widget::HorizontalScrollView::fling(jint a0)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(35),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0);
}

void android::widget::HorizontalScrollView::scrollTo(jint a0, jint a1)
{
	return call_method<
		android::widget::HorizontalScrollView::J2CPP_CLASS_NAME,
		android::widget::HorizontalScrollView::J2CPP_METHOD_NAME(36),
		android::widget::HorizontalScrollView::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::widget::HorizontalScrollView,"android/widget/HorizontalScrollView")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,3,"getLeftFadingEdgeStrength","()F")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,4,"getRightFadingEdgeStrength","()F")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,5,"getMaxScrollAmount","()I")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,6,"addView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,7,"addView","(Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,8,"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,9,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,10,"isFillViewport","()Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,11,"setFillViewport","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,12,"isSmoothScrollingEnabled","()Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,13,"setSmoothScrollingEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,14,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,15,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,16,"executeKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,17,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,18,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,19,"pageScroll","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,20,"fullScroll","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,21,"arrowScroll","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,22,"smoothScrollBy","(II)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,23,"smoothScrollTo","(II)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,24,"computeHorizontalScrollRange","()I")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,25,"measureChild","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,26,"measureChildWithMargins","(Landroid/view/View;IIII)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,27,"computeScroll","()V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,28,"computeScrollDeltaToGetChildRectOnScreen","(Landroid/graphics/Rect;)I")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,29,"requestChildFocus","(Landroid/view/View;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,30,"onRequestFocusInDescendants","(ILandroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,31,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,32,"requestLayout","()V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,33,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,34,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,35,"fling","(I)V")
J2CPP_DEFINE_METHOD(android::widget::HorizontalScrollView,36,"scrollTo","(II)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_HORIZONTALSCROLLVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
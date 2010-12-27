/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.helpers.DefaultHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_HPP_DECL
#define J2CPP_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class SAXParseException; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Attributes; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }


#include <java/lang/String.hpp>
#include <org/xml/sax/Attributes.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/Locator.hpp>
#include <org/xml/sax/SAXParseException.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace helpers {

	class DefaultHandler;
	class DefaultHandler
		: public cpp_object<DefaultHandler>
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

		DefaultHandler(jobject jobj)
		: cpp_object<DefaultHandler>(jobj)
		{
		}

		local_ref< org::xml::sax::InputSource > resolveEntity(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void notationDecl(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void unparsedEntityDecl(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void setDocumentLocator(local_ref< org::xml::sax::Locator > const&);
		void startDocument();
		void endDocument();
		void startPrefixMapping(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void endPrefixMapping(local_ref< java::lang::String > const&);
		void startElement(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< org::xml::sax::Attributes > const&);
		void endElement(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void characters(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void ignorableWhitespace(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void processingInstruction(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void skippedEntity(local_ref< java::lang::String > const&);
		void warning(local_ref< org::xml::sax::SAXParseException > const&);
		void error(local_ref< org::xml::sax::SAXParseException > const&);
		void fatalError(local_ref< org::xml::sax::SAXParseException > const&);
	}; //class DefaultHandler

} //namespace helpers
} //namespace sax
} //namespace xml
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::xml::sax::helpers::DefaultHandler > create< org::xml::sax::helpers::DefaultHandler>()
{
	return local_ref< org::xml::sax::helpers::DefaultHandler >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::helpers::DefaultHandler::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::helpers::DefaultHandler::J2CPP_CLASS_NAME, org::xml::sax::helpers::DefaultHandler::J2CPP_METHOD_NAME(0), org::xml::sax::helpers::DefaultHandler::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< org::xml::sax::InputSource > org::xml::sax::helpers::DefaultHandler::resolveEntity(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::xml::sax::InputSource >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::notationDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::unparsedEntityDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::setDocumentLocator(local_ref< org::xml::sax::Locator > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::startDocument()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::endDocument()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::startPrefixMapping(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::endPrefixMapping(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::startElement(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< org::xml::sax::Attributes > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::endElement(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::characters(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::ignorableWhitespace(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::processingInstruction(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::skippedEntity(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::warning(local_ref< org::xml::sax::SAXParseException > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::error(local_ref< org::xml::sax::SAXParseException > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::DefaultHandler::fatalError(local_ref< org::xml::sax::SAXParseException > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::helpers::DefaultHandler,"org/xml/sax/helpers/DefaultHandler")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,1,"resolveEntity","(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,2,"notationDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,3,"unparsedEntityDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,4,"setDocumentLocator","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,5,"startDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,6,"endDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,7,"startPrefixMapping","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,8,"endPrefixMapping","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,9,"startElement","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,10,"endElement","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,11,"characters","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,12,"ignorableWhitespace","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,13,"processingInstruction","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,14,"skippedEntity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,15,"warning","(Lorg/xml/sax/SAXParseException;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,16,"error","(Lorg/xml/sax/SAXParseException;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::DefaultHandler,17,"fatalError","(Lorg/xml/sax/SAXParseException;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
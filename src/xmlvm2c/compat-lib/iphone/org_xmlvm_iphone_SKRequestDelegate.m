#include "org_xmlvm_iphone_SKRequest.h"
#include "org_xmlvm_iphone_NSError.h"

#include "org_xmlvm_iphone_SKRequestDelegate.h"

__CLASS_DEFINITION_org_xmlvm_iphone_SKRequestDelegate __CLASS_org_xmlvm_iphone_SKRequestDelegate = {
    0, // classInitialized
    "org.xmlvm.iphone.SKRequestDelegate", // className
    (__CLASS_DEFINITION_TEMPLATE*) &__CLASS_java_lang_Object, // extends
};

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


void __INIT_org_xmlvm_iphone_SKRequestDelegate()
{
    __CLASS_org_xmlvm_iphone_SKRequestDelegate.classInitialized = 1;
    // Initialize base class if necessary
    if (!__CLASS_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __CLASS_org_xmlvm_iphone_SKRequestDelegate.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_SKRequestDelegate;
    // Copy vtable from base class
    XMLVM_MEMCPY(__CLASS_org_xmlvm_iphone_SKRequestDelegate.vtable, __CLASS_java_lang_Object.vtable, sizeof(__CLASS_java_lang_Object.vtable));
    // Initialize vtable for this class
    __CLASS_org_xmlvm_iphone_SKRequestDelegate.vtable[11] = (VTABLE_PTR) &org_xmlvm_iphone_SKRequestDelegate_requestDidFailWithError___org_xmlvm_iphone_SKRequest_org_xmlvm_iphone_NSError;
    __CLASS_org_xmlvm_iphone_SKRequestDelegate.vtable[12] = (VTABLE_PTR) &org_xmlvm_iphone_SKRequestDelegate_requestDidFinish___org_xmlvm_iphone_SKRequest;
    // Initialize vtable for implementing interfaces
    __CLASS_org_xmlvm_iphone_SKRequestDelegate.numImplementedInterfaces = 0;
    __CLASS_org_xmlvm_iphone_SKRequestDelegate.implementedInterfaces = (__CLASS_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__CLASS_DEFINITION_TEMPLATE*) * 0);


    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_SKRequestDelegate]
    //XMLVM_END_WRAPPER
}

GC_CALLBACK __DELETE_org_xmlvm_iphone_SKRequestDelegate(void * me, void * client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_SKRequestDelegate]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_SKRequestDelegate()
{
    if (!__CLASS_org_xmlvm_iphone_SKRequestDelegate.classInitialized) __INIT_org_xmlvm_iphone_SKRequestDelegate();
    org_xmlvm_iphone_SKRequestDelegate* me = (org_xmlvm_iphone_SKRequestDelegate*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_SKRequestDelegate));
    me->__class = &__CLASS_org_xmlvm_iphone_SKRequestDelegate;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_SKRequestDelegate]
    //XMLVM_END_WRAPPER
    // Tell the GC to finalize us
    XMLVM_FINALIZE(me, __DELETE_org_xmlvm_iphone_SKRequestDelegate);
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_SKRequestDelegate()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_SKRequestDelegate();
    org_xmlvm_iphone_SKRequestDelegate___INIT___(me);
    return me;
}

void org_xmlvm_iphone_SKRequestDelegate___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKRequestDelegate___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_SKRequestDelegate_requestDidFailWithError___org_xmlvm_iphone_SKRequest_org_xmlvm_iphone_NSError(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKRequestDelegate_requestDidFailWithError___org_xmlvm_iphone_SKRequest_org_xmlvm_iphone_NSError]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_SKRequestDelegate_requestDidFinish___org_xmlvm_iphone_SKRequest(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKRequestDelegate_requestDidFinish___org_xmlvm_iphone_SKRequest]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}


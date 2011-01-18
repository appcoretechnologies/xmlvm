#include "xmlvm.h"

#include "org_xmlvm_iphone_SKProduct.h"

__TIB_DEFINITION_org_xmlvm_iphone_SKProduct __TIB_org_xmlvm_iphone_SKProduct = {
    0, // classInitialized
    "org.xmlvm.iphone.SKProduct", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProduct;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProduct_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_SKProduct();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_SKProduct()
{
    __TIB_org_xmlvm_iphone_SKProduct.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_SKProduct.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_SKProduct;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_SKProduct.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_SKProduct.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getLocalizedDescription__;
    __TIB_org_xmlvm_iphone_SKProduct.vtable[15] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getLocalizedTitle__;
    __TIB_org_xmlvm_iphone_SKProduct.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getPrice__;
    __TIB_org_xmlvm_iphone_SKProduct.vtable[17] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getPriceLocale__;
    __TIB_org_xmlvm_iphone_SKProduct.vtable[18] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getProductIdentifier__;
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_SKProduct.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_SKProduct.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_SKProduct.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_SKProduct.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_SKProduct.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_SKProduct.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_SKProduct.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_SKProduct = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_SKProduct);
    __TIB_org_xmlvm_iphone_SKProduct.clazz = __CLASS_org_xmlvm_iphone_SKProduct;
    __CLASS_org_xmlvm_iphone_SKProduct_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_SKProduct, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_SKProduct]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_SKProduct(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_SKProduct]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_SKProduct()
{
    if (!__TIB_org_xmlvm_iphone_SKProduct.classInitialized) __INIT_org_xmlvm_iphone_SKProduct();
    org_xmlvm_iphone_SKProduct* me = (org_xmlvm_iphone_SKProduct*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_SKProduct));
    me->tib = &__TIB_org_xmlvm_iphone_SKProduct;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_SKProduct]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_SKProduct()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getLocalizedDescription__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getLocalizedDescription__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getLocalizedTitle__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getLocalizedTitle__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_DOUBLE org_xmlvm_iphone_SKProduct_getPrice__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getPrice__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getPriceLocale__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getPriceLocale__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getProductIdentifier__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getProductIdentifier__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}


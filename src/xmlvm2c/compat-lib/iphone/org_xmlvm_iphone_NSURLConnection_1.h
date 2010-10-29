#ifndef __ORG_XMLVM_IPHONE_NSURLCONNECTION_1__
#define __ORG_XMLVM_IPHONE_NSURLCONNECTION_1__

#include "xmlvm.h"
#include "java_lang_Object.h"
#include "java_lang_Runnable.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSMutableURLRequest
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSMutableURLRequest
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSMutableURLRequest)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_Runnable
#define XMLVM_FORWARD_DECL_java_lang_Runnable
XMLVM_FORWARD_DECL(java_lang_Runnable)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSURLConnection)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnectionDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnectionDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSURLConnectionDelegate)
#endif
// Class declarations for org.xmlvm.iphone.NSURLConnection$1
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSURLConnection_1, 12)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSURLConnection_1
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_NSURLConnection_1 \
    __INSTANCE_MEMBERS_java_lang_Object; \
    struct { \
        JAVA_OBJECT this_0_; \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSURLConnection_1 \
    } org_xmlvm_iphone_NSURLConnection_1

struct org_xmlvm_iphone_NSURLConnection_1 {
    __CLASS_DEFINITION_org_xmlvm_iphone_NSURLConnection_1* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSURLConnection_1;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection_1
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURLConnection_1
typedef struct org_xmlvm_iphone_NSURLConnection_1 org_xmlvm_iphone_NSURLConnection_1;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSURLConnection_1 12
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_NSURLConnection_1_run__ 11

void __INIT_org_xmlvm_iphone_NSURLConnection_1();
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSURLConnection_1();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSURLConnection_1();
void org_xmlvm_iphone_NSURLConnection_1___INIT____org_xmlvm_iphone_NSURLConnection_org_xmlvm_iphone_NSMutableURLRequest_org_xmlvm_iphone_NSURLConnectionDelegate(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
// Vtable index: 11
void org_xmlvm_iphone_NSURLConnection_1_run__(JAVA_OBJECT me);

#endif
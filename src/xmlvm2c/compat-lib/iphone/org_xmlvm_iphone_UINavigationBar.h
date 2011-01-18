#ifndef __ORG_XMLVM_IPHONE_UINAVIGATIONBAR__
#define __ORG_XMLVM_IPHONE_UINAVIGATIONBAR__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationItem
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationItem
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationItem)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationController)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBarDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBarDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationBarDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIColor
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIColor
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIColor)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
// Class declarations for org.xmlvm.iphone.UINavigationBar
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UINavigationBar, 86)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationBar;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationBar_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationBar
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationBar \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIView; \
    struct { \
        JAVA_OBJECT nbcontroller_; \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationBar \
    } org_xmlvm_iphone_UINavigationBar

struct org_xmlvm_iphone_UINavigationBar {
    __TIB_DEFINITION_org_xmlvm_iphone_UINavigationBar* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationBar;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBar
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBar
typedef struct org_xmlvm_iphone_UINavigationBar org_xmlvm_iphone_UINavigationBar;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UINavigationBar 86
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_pushNavigationItem___org_xmlvm_iphone_UINavigationItem_boolean 70
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_popNavigationItemAnimated___boolean 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_setItems___java_util_ArrayList 72
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_setItems___java_util_ArrayList_boolean 73
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_getDelegate__ 74
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_setDelegate___org_xmlvm_iphone_UINavigationBarDelegate 75
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_getTopItem__ 76
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_getBackitem__ 77
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_getItems__ 78
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_getBarStyle__ 79
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_setBarStyle___int 80
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_getTintColor__ 81
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_setTintColor___org_xmlvm_iphone_UIColor 82
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_isTranslucent__ 83
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_setTranslucent___boolean 84
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBar_updateViews__ 85

void __INIT_org_xmlvm_iphone_UINavigationBar();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UINavigationBar();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UINavigationBar();
void org_xmlvm_iphone_UINavigationBar___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UINavigationBar___INIT____org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 70
void org_xmlvm_iphone_UINavigationBar_pushNavigationItem___org_xmlvm_iphone_UINavigationItem_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 71
JAVA_OBJECT org_xmlvm_iphone_UINavigationBar_popNavigationItemAnimated___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 72
void org_xmlvm_iphone_UINavigationBar_setItems___java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 73
void org_xmlvm_iphone_UINavigationBar_setItems___java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 74
JAVA_OBJECT org_xmlvm_iphone_UINavigationBar_getDelegate__(JAVA_OBJECT me);
// Vtable index: 75
void org_xmlvm_iphone_UINavigationBar_setDelegate___org_xmlvm_iphone_UINavigationBarDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 76
JAVA_OBJECT org_xmlvm_iphone_UINavigationBar_getTopItem__(JAVA_OBJECT me);
// Vtable index: 77
JAVA_OBJECT org_xmlvm_iphone_UINavigationBar_getBackitem__(JAVA_OBJECT me);
// Vtable index: 78
JAVA_OBJECT org_xmlvm_iphone_UINavigationBar_getItems__(JAVA_OBJECT me);
// Vtable index: 79
JAVA_INT org_xmlvm_iphone_UINavigationBar_getBarStyle__(JAVA_OBJECT me);
// Vtable index: 80
void org_xmlvm_iphone_UINavigationBar_setBarStyle___int(JAVA_OBJECT me, JAVA_INT n1);
// Vtable index: 81
JAVA_OBJECT org_xmlvm_iphone_UINavigationBar_getTintColor__(JAVA_OBJECT me);
// Vtable index: 82
void org_xmlvm_iphone_UINavigationBar_setTintColor___org_xmlvm_iphone_UIColor(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 83
JAVA_BOOLEAN org_xmlvm_iphone_UINavigationBar_isTranslucent__(JAVA_OBJECT me);
// Vtable index: 84
void org_xmlvm_iphone_UINavigationBar_setTranslucent___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 85
void org_xmlvm_iphone_UINavigationBar_updateViews__(JAVA_OBJECT me);

#endif

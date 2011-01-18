#ifndef __ORG_XMLVM_IPHONE_MKMAPVIEW__
#define __ORG_XMLVM_IPHONE_MKMAPVIEW__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIView.h"
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKCoordinateRegion
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKCoordinateRegion
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKCoordinateRegion)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapViewDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapViewDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKMapViewDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKMapRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIEdgeInsets
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIEdgeInsets
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIEdgeInsets)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGPoint
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGPoint
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGPoint)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CLLocationCoordinate2D
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CLLocationCoordinate2D
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CLLocationCoordinate2D)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
// Class declarations for org.xmlvm.iphone.MKMapView
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_MKMapView, 99)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKMapView;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKMapView_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKMapView
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_MKMapView \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIView; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKMapView \
    } org_xmlvm_iphone_MKMapView

struct org_xmlvm_iphone_MKMapView {
    __TIB_DEFINITION_org_xmlvm_iphone_MKMapView* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_MKMapView;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapView
typedef struct org_xmlvm_iphone_MKMapView org_xmlvm_iphone_MKMapView;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_MKMapView 99
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_getMapType__ 70
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setMapType___int 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_isScrollEnabled__ 72
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setScrollEnabled___boolean 73
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_isZoomEnabled__ 74
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setZoomEnabled___boolean 75
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_getDelegate__ 76
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setDelegate___org_xmlvm_iphone_MKMapViewDelegate 77
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_getRegion__ 78
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setRegion___org_xmlvm_iphone_MKCoordinateRegion 79
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setRegion___org_xmlvm_iphone_MKCoordinateRegion_boolean 80
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_getCenterCoordinate__ 81
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setCenterCoordinate___org_xmlvm_iphone_CLLocationCoordinate2D 82
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setCenterCoordinate___org_xmlvm_iphone_CLLocationCoordinate2D_boolean 83
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_getVisibleMapRect__ 84
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setVisibleMapRect___org_xmlvm_iphone_MKMapRect 85
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setVisibleMapRect___org_xmlvm_iphone_MKMapRect_boolean 86
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setVisibleMapRect___org_xmlvm_iphone_MKMapRect_org_xmlvm_iphone_UIEdgeInsets_boolean 87
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_isShowsUserLocation__ 88
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_setShowsUserLocation___boolean 89
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_getUserLocation__ 90
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_isUserLocationVisible__ 91
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_convertCoordinateToPointToView___org_xmlvm_iphone_CLLocationCoordinate2D_org_xmlvm_iphone_UIView 92
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_convertPointToCoordinateFromView___org_xmlvm_iphone_CGPoint_org_xmlvm_iphone_UIView 93
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_convertRegionToRectToView___org_xmlvm_iphone_MKCoordinateRegion_org_xmlvm_iphone_UIView 94
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_convertRectToRegionFromView___org_xmlvm_iphone_CGRect_org_xmlvm_iphone_UIView 95
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_regionThatFits___org_xmlvm_iphone_MKCoordinateRegion 96
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_mapRectThatFits___org_xmlvm_iphone_MKMapRect 97
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapView_mapRectThatFits___org_xmlvm_iphone_MKMapRect_org_xmlvm_iphone_UIEdgeInsets 98

void __INIT_org_xmlvm_iphone_MKMapView();
JAVA_OBJECT __NEW_org_xmlvm_iphone_MKMapView();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MKMapView();
void org_xmlvm_iphone_MKMapView___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_MKMapView___INIT____org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 70
JAVA_INT org_xmlvm_iphone_MKMapView_getMapType__(JAVA_OBJECT me);
// Vtable index: 71
void org_xmlvm_iphone_MKMapView_setMapType___int(JAVA_OBJECT me, JAVA_INT n1);
// Vtable index: 72
JAVA_BOOLEAN org_xmlvm_iphone_MKMapView_isScrollEnabled__(JAVA_OBJECT me);
// Vtable index: 73
void org_xmlvm_iphone_MKMapView_setScrollEnabled___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 74
JAVA_BOOLEAN org_xmlvm_iphone_MKMapView_isZoomEnabled__(JAVA_OBJECT me);
// Vtable index: 75
void org_xmlvm_iphone_MKMapView_setZoomEnabled___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 76
JAVA_OBJECT org_xmlvm_iphone_MKMapView_getDelegate__(JAVA_OBJECT me);
// Vtable index: 77
void org_xmlvm_iphone_MKMapView_setDelegate___org_xmlvm_iphone_MKMapViewDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 78
JAVA_OBJECT org_xmlvm_iphone_MKMapView_getRegion__(JAVA_OBJECT me);
// Vtable index: 79
void org_xmlvm_iphone_MKMapView_setRegion___org_xmlvm_iphone_MKCoordinateRegion(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 80
void org_xmlvm_iphone_MKMapView_setRegion___org_xmlvm_iphone_MKCoordinateRegion_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 81
JAVA_OBJECT org_xmlvm_iphone_MKMapView_getCenterCoordinate__(JAVA_OBJECT me);
// Vtable index: 82
void org_xmlvm_iphone_MKMapView_setCenterCoordinate___org_xmlvm_iphone_CLLocationCoordinate2D(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 83
void org_xmlvm_iphone_MKMapView_setCenterCoordinate___org_xmlvm_iphone_CLLocationCoordinate2D_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 84
JAVA_OBJECT org_xmlvm_iphone_MKMapView_getVisibleMapRect__(JAVA_OBJECT me);
// Vtable index: 85
void org_xmlvm_iphone_MKMapView_setVisibleMapRect___org_xmlvm_iphone_MKMapRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 86
void org_xmlvm_iphone_MKMapView_setVisibleMapRect___org_xmlvm_iphone_MKMapRect_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 87
void org_xmlvm_iphone_MKMapView_setVisibleMapRect___org_xmlvm_iphone_MKMapRect_org_xmlvm_iphone_UIEdgeInsets_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3);
// Vtable index: 88
JAVA_BOOLEAN org_xmlvm_iphone_MKMapView_isShowsUserLocation__(JAVA_OBJECT me);
// Vtable index: 89
void org_xmlvm_iphone_MKMapView_setShowsUserLocation___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 90
JAVA_OBJECT org_xmlvm_iphone_MKMapView_getUserLocation__(JAVA_OBJECT me);
// Vtable index: 91
JAVA_BOOLEAN org_xmlvm_iphone_MKMapView_isUserLocationVisible__(JAVA_OBJECT me);
// Vtable index: 92
JAVA_OBJECT org_xmlvm_iphone_MKMapView_convertCoordinateToPointToView___org_xmlvm_iphone_CLLocationCoordinate2D_org_xmlvm_iphone_UIView(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 93
JAVA_OBJECT org_xmlvm_iphone_MKMapView_convertPointToCoordinateFromView___org_xmlvm_iphone_CGPoint_org_xmlvm_iphone_UIView(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 94
JAVA_OBJECT org_xmlvm_iphone_MKMapView_convertRegionToRectToView___org_xmlvm_iphone_MKCoordinateRegion_org_xmlvm_iphone_UIView(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 95
JAVA_OBJECT org_xmlvm_iphone_MKMapView_convertRectToRegionFromView___org_xmlvm_iphone_CGRect_org_xmlvm_iphone_UIView(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 96
JAVA_OBJECT org_xmlvm_iphone_MKMapView_regionThatFits___org_xmlvm_iphone_MKCoordinateRegion(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 97
JAVA_OBJECT org_xmlvm_iphone_MKMapView_mapRectThatFits___org_xmlvm_iphone_MKMapRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 98
JAVA_OBJECT org_xmlvm_iphone_MKMapView_mapRectThatFits___org_xmlvm_iphone_MKMapRect_org_xmlvm_iphone_UIEdgeInsets(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif

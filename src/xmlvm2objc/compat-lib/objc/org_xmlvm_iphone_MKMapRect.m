/*
 * Copyright (c) 2004-2009 XMLVM --- An XML-based Programming Language
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 675 Mass
 * Ave, Cambridge, MA 02139, USA.
 * 
 * For more information, visit the XMLVM Home Page at http://www.xmlvm.org
 */

#import "org_xmlvm_iphone_MKMapRect.h"

@implementation org_xmlvm_iphone_MKMapRect;

+ (id) alloc
{
	org_xmlvm_iphone_MKMapRect * this = [super alloc];	
    this->origin_org_xmlvm_iphone_MKMapPoint = [org_xmlvm_iphone_MKMapPoint alloc];
    this->size_org_xmlvm_iphone_MKMapSize = [org_xmlvm_iphone_MKMapSize alloc];
	return this;
}

- (void) dealloc
{
    [origin_org_xmlvm_iphone_MKMapPoint release];
    [size_org_xmlvm_iphone_MKMapSize release];
    [super dealloc];
}

- (void) __init_org_xmlvm_iphone_MKMapRect___float_float_float_float :(float)x :(float)y :(float)width :(float)height
{
	self->origin_org_xmlvm_iphone_MKMapPoint->x_double = x;
	self->origin_org_xmlvm_iphone_MKMapPoint->y_double = y;
	self->size_org_xmlvm_iphone_MKMapSize->width_double = width;
	self->size_org_xmlvm_iphone_MKMapSize->height_double = height;
}

- (org_xmlvm_iphone_MKMapRect*) initWithMKMapRect:(MKMapRect) rect
{
	self->origin_org_xmlvm_iphone_MKMapPoint->x_double = rect.origin.x;
	self->origin_org_xmlvm_iphone_MKMapPoint->y_double = rect.origin.y;
	self->size_org_xmlvm_iphone_MKMapSize->width_double = rect.size.width;
	self->size_org_xmlvm_iphone_MKMapSize->height_double = rect.size.height;
	return self;
}

- (MKMapRect) getMKMapRect
{
	MKMapRect rect;
	rect.origin.x = self->origin_org_xmlvm_iphone_MKMapPoint->x_double;
	rect.origin.y = self->origin_org_xmlvm_iphone_MKMapPoint->y_double;
	rect.size.width = self->size_org_xmlvm_iphone_MKMapSize->width_double;
	rect.size.height = self->size_org_xmlvm_iphone_MKMapSize->height_double;
	return rect;
}


@end

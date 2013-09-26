//
// RSSEntry.m
// RSSKit
//
// Created by Árpád Goretity on 01/11/2011.
// Licensed under a CreativeCommons Attribution 3.0 Unported License
//

#import "RSSEntry.h"


@implementation RSSEntry

- (id) init {
	self = [super init];
	NSMutableArray *theCategories = [[NSMutableArray alloc] init];
	self.categories = theCategories;
	return self;
}


@end


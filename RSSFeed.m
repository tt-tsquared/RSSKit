//
// RSSFeed.m
// RSSKit
//
// Created by Árpád Goretity on 01/11/2011.
// Licensed under a CreativeCommons Attribution 3.0 Unported License
//

#import "RSSFeed.h"


@implementation RSSFeed

@synthesize type;
@synthesize title;
@synthesize feedDescription;
@synthesize url;
@synthesize date;
@synthesize author;
@synthesize articles;
@synthesize uid;
@synthesize language;
@synthesize copyright;
@synthesize categories;
@synthesize generator;
@synthesize validTime;
@synthesize iconUrl;
@synthesize cloudService;

- (id) init {
	self = [super init];
	NSMutableArray *theArticles = [[NSMutableArray alloc] init];
	self.articles = theArticles;
	NSMutableArray *theCategories = [[NSMutableArray alloc] init];
	self.categories = theCategories;
	return self;
}


@end


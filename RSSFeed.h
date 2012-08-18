//
// RSSFeed.h
// RSSKit
//
// Created by Árpád Goretity on 01/11/2011.
// Licensed under a CreativeCommons Attribution 3.0 Unported License
//

#import <Foundation/Foundation.h>
#import "RSSCloudService.h"
#import "RSSDefines.h"


@interface RSSFeed: NSObject {
	RSSFeedType type;
	NSString *title;
	NSString *description;
	NSString *url;
	NSString *date;
	NSString *author;
	NSMutableArray *articles;
	NSString *uid;
	NSString *language;
	NSString *copyright;
	NSMutableArray *categories;
	NSString *generator;
	NSTimeInterval validTime;
	NSString *iconUrl;
	RSSCloudService *cloudService;
}

@property (nonatomic, assign) RSSFeedType type;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *description;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSMutableArray *articles;
@property (nonatomic, strong) NSString *uid;
@property (nonatomic, strong) NSString *language;
@property (nonatomic, strong) NSString *copyright;
@property (nonatomic, strong) NSMutableArray *categories;
@property (nonatomic, strong) NSString *generator;
@property (nonatomic, assign) NSTimeInterval validTime;
@property (nonatomic, strong) NSString *iconUrl;
@property (nonatomic, strong) RSSCloudService *cloudService;


@end


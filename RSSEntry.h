//
// RSSEntry.h
// RSSKit
//
// Created by Árpád Goretity on 01/11/2011.
// Licensed under a CreativeCommons Attribution 3.0 Unported License
//

#import <Foundation/Foundation.h>
#import "RSSAttachedMedia.h"


@interface RSSEntry: NSObject {
	NSString *title;
	NSString *url;
	NSString *uid;
	NSString *date;
	NSString *summary;
	NSMutableArray *categories;
	NSString *comments;
	NSString *content;
	NSString *copyright;
	RSSAttachedMedia *attachedMedia;
	NSString *author;
}

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *uid;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *summary;
@property (nonatomic, strong) NSMutableArray *categories;
@property (nonatomic, strong) NSString *comments;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *copyright;
@property (nonatomic, strong) RSSAttachedMedia *attachedMedia;
@property (nonatomic, strong) NSString *author;

@end


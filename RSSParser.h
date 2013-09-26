//
// RSSParser.h
// RSSKit
//
// Created by Árpád Goretity on 01/11/2011.
// Licensed under a CreativeCommons Attribution 3.0 Unported License
//

#import <Foundation/Foundation.h>
#import "RSSDefines.h"
#import "RSSFeed.h"
#import "RSSEntry.h"

@protocol RSSParserDelegate;


@interface RSSParser: NSObject <NSXMLParserDelegate> {
	NSString *url;
	NSXMLParser *xmlParser;
	NSMutableArray *tagStack;
	NSMutableString *tagPath;
	RSSFeed *feed;
	RSSEntry *entry;
	id <RSSParserDelegate> __weak delegate;
}

@property (nonatomic, weak) id <RSSParserDelegate> delegate;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, assign) BOOL synchronous;

- (id) initWithUrl:(NSString *)theUrl synchronous:(BOOL)sync;
- (id) initWithUrl:(NSString *)theUrl;
- (id)initWithParser:(NSXMLParser *)parser;

- (void) parse;

@end


@protocol RSSParserDelegate <NSObject>
@optional
- (void) rssParser:(RSSParser *)parser parsedFeed:(RSSFeed *)feed;
- (void) rssParser:(RSSParser *)parser errorOccurred:(NSError *)error;
@end


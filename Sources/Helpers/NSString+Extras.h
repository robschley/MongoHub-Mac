//
//  NSString+Extras.h
//  MongoHub
//
//  Created by Syd on 10-4-28.
//  Copyright 2010 ThePeppersStudio.COM. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NSString (Extras)

+ (NSString*)stringFromResource:(NSString*)resourceName;
- (NSComparisonResult)compareCaseInsensitive:(NSString*)other;
- (NSString*)stringByPercentEscapingCharacters:(NSString*)characters;
- (NSString*)stringByEscapingURL;
- (NSString*)stringByUnescapingURL;
- (BOOL) containsString:(NSString *)aString;
- (BOOL) containsString:(NSString *)aString ignoringCase:(BOOL)flag;
- (int)countSubstring:(NSString *)aString ignoringCase:(BOOL)flag;
- (NSString *)stringByTrimmingWhitespace;

+ (NSString*)UUIDString;

@end

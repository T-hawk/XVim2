//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTSourceCodeSymbolKind, NSAttributedString, NSString;

@protocol IDEIndexCompletionItem <NSObject>
@property(nonatomic, readonly) BOOL notRecommended;
@property(nonatomic) double fuzzyMatchingScore;
@property(nonatomic, readonly) double priority;
@property(nonatomic, readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(nonatomic, readonly) NSAttributedString *descriptionText;
@property(nonatomic, readonly) NSString *parentText;
@property(nonatomic, readonly) NSString *completionText;
@property(nonatomic, readonly) NSString *displayType;
@property(nonatomic, readonly) NSString *displayText;
@property(nonatomic, readonly) NSString *name;
@end


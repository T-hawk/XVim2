//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s12SourceEditor0aB11ContentViewCN.h"

#import <IDESourceEditor/DVTSourceCodeComparisonTextView-Protocol.h>

@class NSColor;

@interface _$s12SourceEditor0aB11ContentViewCN (IDESourceEditor) <DVTSourceCodeComparisonTextView>
- (BOOL)scrollToRange:(struct _NSRange)arg1;
@property(nonatomic, readonly) double defaultLineHeight;
@property(nonatomic, readonly) NSColor *backgroundColor;
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineRange:(struct _NSRange)arg3 ensureLayout:(BOOL)arg4;
- (struct _NSRange)visibleParagraphRange;
- (double)fmc_startOfLine:(long long)arg1;
- (long long)fmc_lineNumberForPosition:(double)arg1;
@property(nonatomic, readonly) unsigned long long numberOfLines;
@end


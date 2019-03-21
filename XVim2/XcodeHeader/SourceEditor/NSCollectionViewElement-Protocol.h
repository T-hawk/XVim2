//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SourceEditor/NSObject-Protocol.h>
#import <SourceEditor/NSUserInterfaceItemIdentification-Protocol.h>

@class NSCollectionViewLayout, NSCollectionViewLayoutAttributes;

@protocol NSCollectionViewElement <NSObject, NSUserInterfaceItemIdentification>

@optional
- (NSCollectionViewLayoutAttributes *)preferredLayoutAttributesFittingAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)didTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)willTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)applyLayoutAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)prepareForReuse;
@end


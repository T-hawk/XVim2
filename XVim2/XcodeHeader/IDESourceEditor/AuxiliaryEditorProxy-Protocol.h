//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDEMediaLibraryController, NSArray, NSPasteboard, NSSet;

@protocol AuxiliaryEditorProxy <NSObject>
- (void)populatePasteboard:(NSPasteboard *)arg1 withVariantSets:(NSArray *)arg2 in:(IDEMediaLibraryController *)arg3;
@property(nonatomic, readonly) NSSet *additionalLibraryIdentifiers;
@property(nonatomic, readonly) NSSet *inspectorCategoryIdentifiers;
@end


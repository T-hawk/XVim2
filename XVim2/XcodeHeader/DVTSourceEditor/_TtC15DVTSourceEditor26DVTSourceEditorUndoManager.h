//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s12SourceEditor0aB11UndoManagerCN.h"

#import <DVTSourceEditor/DVTUndo-Protocol.h>

@protocol DVTUndoManagerDelegate;

@interface _TtC15DVTSourceEditor26DVTSourceEditorUndoManager : _$s12SourceEditor0aB11UndoManagerCN <DVTUndo>
{
    // Error parsing type: , name: willAutomaticallyUndoNextChangeGroup
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidate;
- (void)automaticallyUndoNextChangeGroup;
@property(nonatomic, retain) id <DVTUndoManagerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) BOOL willAutomaticallyUndoNextChangeGroup; // @synthesize willAutomaticallyUndoNextChangeGroup;

@end


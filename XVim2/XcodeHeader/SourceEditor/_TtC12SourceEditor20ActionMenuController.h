//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SourceEditor/NSPopoverDelegate-Protocol.h>
#import <SourceEditor/NSTableViewDataSource-Protocol.h>
#import <SourceEditor/NSTableViewDelegate-Protocol.h>
#import <SourceEditor/NSTextFieldDelegate-Protocol.h>

@class ActionMenuDivider, NSLayoutConstraint, NSScrollView, NSTableView, NSView, _TtC12SourceEditor21ActionMenuFilterField;

@interface _TtC12SourceEditor20ActionMenuController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate, NSPopoverDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: accessoryView
    // Error parsing type: , name: dividerBelowFilterField
    // Error parsing type: , name: accessoryViewArea
    // Error parsing type: , name: accessoryViewDivider
    // Error parsing type: , name: accessoryViewWidthConstraint
    // Error parsing type: , name: popoverResizingBehavior
    // Error parsing type: , name: maximumPopoverRowCount
    // Error parsing type: , name: contexts
    // Error parsing type: , name: uniqueIdentifierCounter
    // Error parsing type: , name: filteredItems
    // Error parsing type: , name: tableView
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: filterField
    // Error parsing type: , name: currentPopover
    // Error parsing type: , name: width
    // Error parsing type: , name: desiredWidth
    // Error parsing type: , name: maximumModifierWidth
    // Error parsing type: , name: sizingTextField
    // Error parsing type: , name: sizingSecondaryTextField
    // Error parsing type: , name: sizingSubtitleTextField
    // Error parsing type: , name: lastKnownSelectedRow
    // Error parsing type: , name: currentlySelectingItem
    // Error parsing type: , name: itemsRequiringMoreTime
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)filterStringChanged:(id)arg1;
- (void)tableViewClicked:(id)arg1;
- (void)acceptSelectedItem:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak _TtC12SourceEditor21ActionMenuFilterField *filterField; // @synthesize filterField;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak NSLayoutConstraint *accessoryViewWidthConstraint; // @synthesize accessoryViewWidthConstraint;
@property(nonatomic) __weak ActionMenuDivider *accessoryViewDivider; // @synthesize accessoryViewDivider;
@property(nonatomic) __weak NSView *accessoryViewArea; // @synthesize accessoryViewArea;
@property(nonatomic) __weak ActionMenuDivider *dividerBelowFilterField; // @synthesize dividerBelowFilterField;

@end


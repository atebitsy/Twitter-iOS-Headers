//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVBroadcastOverflowScrollViewController.h>

#import <PeriscopeSDK/UITableViewDataSource-Protocol.h>
#import <PeriscopeSDK/UITableViewDelegate-Protocol.h>

@class NSString, UITableView;

@interface PTVBroadcastOverflowTableViewController : PTVBroadcastOverflowScrollViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)visibleSectionHeaderViews;
- (void)updateSectionHeaderMasks;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)scrollViewForContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


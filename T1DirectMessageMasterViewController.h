//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNPushedSplitViewController.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString;

@interface T1DirectMessageMasterViewController : TFNPushedSplitViewController <TFNLayoutMetricsEnvironment>
{
}

- (struct UIEdgeInsets)t1_actionButtonMinimumInsets;
- (id)t1_buttonItemForCategory:(unsigned long long)arg1;
- (id)t1_actionButtonItemCategoriesWithAccount:(id)arg1;
- (_Bool)t1_showsActionButton;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (_Bool)t1_showsDashAction;
- (void)updateNavigationItems;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


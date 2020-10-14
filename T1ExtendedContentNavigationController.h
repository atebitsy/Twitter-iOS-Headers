//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNNavigationController.h>

#import <T1Twitter/TFNPresentationInterceptor-Protocol.h>
#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@class NSString;
@protocol T1ExtendedContentNavigationControllerDataSource;

@interface T1ExtendedContentNavigationController : TFNNavigationController <TFNPresentationInterceptor, TFNViewControllerEventObserver>
{
    id <T1ExtendedContentNavigationControllerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1ExtendedContentNavigationControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)tfn_isResponderChainVetoed;
- (_Bool)canBecomeFirstResponder;
- (void)_t1_updateContentViewControllerAnimated:(_Bool)arg1;
- (void)viewControllerViewWillFullyAppear:(id)arg1;
- (void)_t1_deselectSelectedCellsInView:(id)arg1;
- (id)viewController:(id)arg1 willPresentWithPresentationInfo:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


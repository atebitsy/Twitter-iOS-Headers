//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVPageScrollView, UIView;

@protocol PTVPageScrollViewDataSource <NSObject>

@optional
- (void)pageScrollView:(PTVPageScrollView *)arg1 didAdvanceToPageInDirection:(long long)arg2;
- (void)pageScrollView:(PTVPageScrollView *)arg1 willAdvanceToPageInDirection:(long long)arg2;
- (void)pageScrollViewDidInterruptPeek:(PTVPageScrollView *)arg1;
- (void)pageScrollViewDidCompletePeek:(PTVPageScrollView *)arg1;
- (void)pageScrollViewWillBeginPeek:(PTVPageScrollView *)arg1;
- (void)pageScrollView:(PTVPageScrollView *)arg1 didCancelTransitionToPage:(UIView *)arg2 direction:(long long)arg3;
- (void)pageScrollViewWillCancelPageTransition:(PTVPageScrollView *)arg1;
- (void)pageScrollViewDidCompletePageTransition:(PTVPageScrollView *)arg1 fromPage:(UIView *)arg2 direction:(long long)arg3;
- (void)pageScrollViewWillCompletePageTransition:(PTVPageScrollView *)arg1;
- (void)pageScrollViewDidUpdatePageTransition:(PTVPageScrollView *)arg1;
- (void)pageScrollViewDidBeginPageTransition:(PTVPageScrollView *)arg1;
- (void)pageScrollView:(PTVPageScrollView *)arg1 willBeginTransitionToPage:(UIView *)arg2 direction:(long long)arg3;
@end


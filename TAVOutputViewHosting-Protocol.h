//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/NSObject-Protocol.h>

@class TAVPlayer, TAVPlayerViewPresentationState, UIView;
@protocol TAVPlayerOutputView;

@protocol TAVOutputViewHosting <NSObject>
- (void)playerWasDeallocated;
- (TAVPlayerViewPresentationState *)presentationStateForPlayer:(TAVPlayer *)arg1;
- (void)playerWillChangeOutputHost:(TAVPlayer *)arg1;
- (void)player:(TAVPlayer *)arg1 didChangeToOutputView:(UIView<TAVPlayerOutputView> *)arg2;
@end


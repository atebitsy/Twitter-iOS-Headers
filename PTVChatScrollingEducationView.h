//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class PTVSwipeIconImageView;

@interface PTVChatScrollingEducationView : UIStackView
{
    _Bool _animating;
    PTVSwipeIconImageView *_swipeIcon;
}

+ (id)TitleColor;
+ (id)TitleFont;
- (void).cxx_destruct;
@property(retain, nonatomic) PTVSwipeIconImageView *swipeIcon; // @synthesize swipeIcon=_swipeIcon;
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void)fadeOutAnimated:(_Bool)arg1 withDelay:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fadeInAnimated:(_Bool)arg1 withDelay:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showEducationAfterDelay:(double)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end


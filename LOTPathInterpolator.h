//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Lottie/LOTValueInterpolator.h>

@protocol LOTPathValueDelegate;

@interface LOTPathInterpolator : LOTValueInterpolator
{
    id <LOTPathValueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LOTPathValueDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasDelegateOverride;
- (void)setValueDelegate:(id)arg1;
- (id)pathForFrame:(id)arg1 cacheLengths:(_Bool)arg2;

@end


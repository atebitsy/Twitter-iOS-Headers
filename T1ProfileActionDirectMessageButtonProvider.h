//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileActionDataSourceButtonProvider.h>

@class TFNLegacyButton, UIViewController;

@interface T1ProfileActionDirectMessageButtonProvider : T1ProfileActionDataSourceButtonProvider
{
    _Bool _shouldShowDirectMessageButton;
    TFNLegacyButton *_directMessageButton;
    UIViewController *_controller;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool shouldShowDirectMessageButton; // @synthesize shouldShowDirectMessageButton=_shouldShowDirectMessageButton;
@property(retain, nonatomic) TFNLegacyButton *directMessageButton; // @synthesize directMessageButton=_directMessageButton;
- (void)_directMessageButtonTapped:(id)arg1;
- (void)dataSourceDidInvalidateForReason:(long long)arg1;
- (id)buttonView;
- (unsigned long long)buttonState;
- (id)initWithAccount:(id)arg1 dataSource:(id)arg2 controller:(id)arg3;

@end


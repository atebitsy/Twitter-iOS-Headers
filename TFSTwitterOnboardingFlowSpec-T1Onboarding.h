//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingFlowSpec.h>

@interface TFSTwitterOnboardingFlowSpec (T1Onboarding)
+ (id)private_flowNameWithDefault:(id)arg1;
+ (id)statefulLoginFlowSpec;
+ (id)addOrUpdatePhoneNumberSpec;
+ (id)setupProfileFromProfileSpecWithProfileID:(long long)arg1;
+ (id)welcomeFromSplashScreenSpec;
+ (id)addOrUpdateEmailSpec;
+ (id)settingsPreferredLanguageSelectorSpec;
+ (id)settingsChangeCountrySpecWithCode:(id)arg1;
+ (id)signupFromSingleSignOnSpec;
+ (id)signupFromAccountSwitcherSpec;
+ (id)signupFromSplashScreenSpec;
- (id)initWithFlowName:(id)arg1 startLocation:(id)arg2 locationParameters:(id)arg3 retryCount:(long long)arg4 totalTimeout:(double)arg5;
- (id)initWithFlowName:(id)arg1 startLocation:(id)arg2 retryCount:(long long)arg3 totalTimeout:(double)arg4;
@end


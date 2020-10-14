//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSUserDefaults;

@interface T1DataSaverSettings : NSObject
{
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)_t1_setPreviousSettings:(id)arg1 forKey:(id)arg2;
- (id)_t1_previousSettingsForKey:(id)arg1;
- (void)_t1_updateMediaAutoplaySettingsWithDataSaverEnabled:(_Bool)arg1;
- (void)_t1_updateVideoQualitySettingsWithDataSaverEnabled:(_Bool)arg1;
- (void)_t1_updateImageQualitySettingsWithDataSaverEnabled:(_Bool)arg1;
@property(retain, nonatomic) NSNumber *previousMediaAutoplaySettings;
@property(retain, nonatomic) NSNumber *previousVideoQualitySettings;
@property(retain, nonatomic) NSNumber *previousImageQualitySettings;
@property(nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;

@end


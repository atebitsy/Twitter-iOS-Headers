//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;

@interface TFNAuthorizationObserver : NSObject
{
    long long _observerId;
    long long _serviceType;
    TFNTwitterAccount *_account;
    CDUnknownBlockType _updateBlock;
}

- (void).cxx_destruct;
- (void)_tfn_authStatusUpdated:(id)arg1;
- (id)initWithServiceType:(long long)arg1 account:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;

@end


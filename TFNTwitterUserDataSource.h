//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString, TFNTwitterUser, TFSTwitterUserReference;
@protocol TFSTwitterCanonicalUser;

@interface TFNTwitterUserDataSource : NSObject
{
    _Bool _representsUserForAssociatedAccount;
    _Bool _forceRefresh;
    _Bool _refreshing;
    TFNTwitterUser *_legacyUser;
    NSString *_accountID;
    TFSTwitterUserReference *_userReference;
    double _lastRefreshAttemptTime;
    double _retryAfterTime;
    NSMutableArray *_refreshCompletionBlocks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *refreshCompletionBlocks; // @synthesize refreshCompletionBlocks=_refreshCompletionBlocks;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) double retryAfterTime; // @synthesize retryAfterTime=_retryAfterTime;
@property(nonatomic) double lastRefreshAttemptTime; // @synthesize lastRefreshAttemptTime=_lastRefreshAttemptTime;
@property(readonly, nonatomic) _Bool representsUserForAssociatedAccount; // @synthesize representsUserForAssociatedAccount=_representsUserForAssociatedAccount;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference; // @synthesize userReference=_userReference;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)private_postUpdateNotificationWithUserInfo:(id)arg1;
- (id)canonicalUser;
- (void)private_userBlockingUpdate:(id)arg1;
- (void)private_userDidUpdate:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *displayFullName;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) _Bool hasUser;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) NSNumber *userIDNumber;
@property(readonly, nonatomic) long long userID;
- (void)internal_updateWithUser:(id)arg1;
- (id)scribeItemWithContext:(id)arg1;
- (_Bool)isEqualToUserReference:(id)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user;
@property(readonly, nonatomic) TFNTwitterUser *legacyUser; // @synthesize legacyUser=_legacyUser;
- (void)dealloc;
- (id)initInternalWithAccountID:(id)arg1 user:(id)arg2 userReference:(id)arg3 forAssociatedAccount:(_Bool)arg4;
- (id)initInternalForAssociatedUserWithAccountID:(id)arg1 userReference:(id)arg2;
- (id)initInternalWithAccountID:(id)arg1 userReference:(id)arg2;
- (id)initInternalWithAccountID:(id)arg1 user:(id)arg2;
- (id)init;

@end


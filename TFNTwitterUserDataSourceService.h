//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFNTwitter, TFNTwitterUserDataSourceServiceCommandQueue, TFSTwitterAPICommandService;
@protocol TFSTwitterAPICommandContext;

@interface TFNTwitterUserDataSourceService : NSObject
{
    TFSTwitterAPICommandService *_commandService;
    id <TFSTwitterAPICommandContext> _commandContext;
    TFNTwitter *_twitter;
    TFNTwitterUserDataSourceServiceCommandQueue *_verifyCredentialsCommandQueue;
    NSMutableDictionary *_contextsByAccountID;
}

+ (_Bool)internal_userDataSourceNeedsRefreshWithUserDataSource:(id)arg1;
+ (id)sharedService;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *contextsByAccountID; // @synthesize contextsByAccountID=_contextsByAccountID;
@property(readonly, nonatomic) TFNTwitterUserDataSourceServiceCommandQueue *verifyCredentialsCommandQueue; // @synthesize verifyCredentialsCommandQueue=_verifyCredentialsCommandQueue;
@property(readonly, nonatomic) TFNTwitter *twitter; // @synthesize twitter=_twitter;
@property(readonly, nonatomic) id <TFSTwitterAPICommandContext> commandContext; // @synthesize commandContext=_commandContext;
@property(readonly, nonatomic) TFSTwitterAPICommandService *commandService; // @synthesize commandService=_commandService;
- (void)private_twitterDidRemoveAccount:(id)arg1;
- (id)private_contextForAccountID:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)internal_cleanUpForTests;
- (void)refreshUserDataSource:(id)arg1 force:(_Bool)arg2 includeIsProfileTranslatable:(_Bool)arg3 useGraphQLModelBuilder:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)enableForceRefreshWithUserDataSource:(id)arg1;
- (_Bool)userDataSourceNeedsRefreshWithUserDataSource:(id)arg1;
- (id)userDataSourceForAccountUserWithAccountID:(id)arg1;
- (id)userDataSourceWithAccountID:(id)arg1 userReference:(id)arg2;
- (id)userDataSourceWithAccountID:(id)arg1 user:(id)arg2;
- (void)startWithCommandService:(id)arg1 twitter:(id)arg2;
- (id)initInternal;
- (id)init;

@end


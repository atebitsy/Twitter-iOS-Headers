//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSGroupOperation.h>

#import <T1Twitter/TFNDirectMessageFetchUpdatesOperationDelegate-Protocol.h>

@class NSString, TFNDirectMessageFetchUpdatesOperation, TFNDirectMessageInbox, TFNDirectMessageProcessUserUpdatesResponseOperation;

@interface TFNDirectMessageRefreshOperation : TFSGroupOperation <TFNDirectMessageFetchUpdatesOperationDelegate>
{
    TFNDirectMessageInbox *_inbox;
    NSString *_cursor;
    TFNDirectMessageFetchUpdatesOperation *_fetchOperation;
    TFNDirectMessageProcessUserUpdatesResponseOperation *_processResponseOperation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNDirectMessageProcessUserUpdatesResponseOperation *processResponseOperation; // @synthesize processResponseOperation=_processResponseOperation;
@property(readonly, nonatomic) TFNDirectMessageFetchUpdatesOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) TFNDirectMessageInbox *inbox; // @synthesize inbox=_inbox;
- (void)fetchUpdatesOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)fetchUpdatesOperation:(id)arg1 didSucceedWithResponse:(id)arg2;
- (void)completeOperation;
- (id)initWithInbox:(id)arg1 model:(id)arg2 source:(long long)arg3 activeConversationID:(id)arg4 filterLowQuality:(id)arg5 filterNSFW:(_Bool)arg6 commandService:(id)arg7 context:(id)arg8;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewBaseEventHandler.h>

#import <T1Twitter/T1CardViewEventHandler-Protocol.h>

@class NSString;
@protocol T1DirectMessageConversationFromCardsPresenter;

@interface T1MessageMeCardEventHandler : T1CardViewBaseEventHandler <T1CardViewEventHandler>
{
    id <T1DirectMessageConversationFromCardsPresenter> _presenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <T1DirectMessageConversationFromCardsPresenter> presenter; // @synthesize presenter=_presenter;
- (id)_logEventContextForViewEvent:(id)arg1 cardEventContext:(id)arg2;
- (id)handleViewEvent:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


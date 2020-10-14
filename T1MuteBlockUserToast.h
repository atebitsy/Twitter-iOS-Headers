//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ToastViewModel-Protocol.h>

@class NSArray, NSString, T1ToastAction, T1ToastScribeContext, UIColor, UIImage;
@protocol TFSTwitterCanonicalUser;

@interface T1MuteBlockUserToast : NSObject <T1ToastViewModel>
{
    NSString *_messageText;
    NSString *_iconName;
    T1ToastAction *_alternateAction;
}

+ (id)unblockToastWithUserReference:(id)arg1 undoAction:(CDUnknownBlockType)arg2;
+ (id)blockToastWithUserReference:(id)arg1 undoAction:(CDUnknownBlockType)arg2;
+ (id)unmuteFleetsToastWithUserReference:(id)arg1 undoAction:(CDUnknownBlockType)arg2;
+ (id)muteFleetsToastWithUserReference:(id)arg1 undoAction:(CDUnknownBlockType)arg2;
+ (id)unmuteToastWithUserReference:(id)arg1 undoAction:(CDUnknownBlockType)arg2;
+ (id)muteToastWithUserReference:(id)arg1 undoAction:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) T1ToastAction *alternateAction; // @synthesize alternateAction=_alternateAction;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
- (id)initWithUserReference:(id)arg1 undoAction:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSArray *detailTextBoldRanges;
@property(readonly, nonatomic) double displayDuration;
@property(readonly, nonatomic) long long hapticFeedbackType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIColor *iconColor;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSArray *messageTextBoldRanges;
@property(readonly, nonatomic) T1ToastAction *primaryAction;
@property(readonly, nonatomic) T1ToastScribeContext *scribeContext;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIImage *thumbnailImage;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user;

@end


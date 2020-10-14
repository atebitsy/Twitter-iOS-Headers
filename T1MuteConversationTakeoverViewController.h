//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1PromptViewController.h>

#import <T1Twitter/T1PromptDataSource-Protocol.h>

@class NSArray, NSString, T1PromptContentViewSpec, T1PromptImageSpec, T1PromptTextSpec, TFSTwitterScribeContext, UIImage;

@interface T1MuteConversationTakeoverViewController : T1PromptViewController <T1PromptDataSource>
{
    TFSTwitterScribeContext *_scribeContext;
    CDUnknownBlockType _muteActionBlock;
}

+ (_Bool)shouldShowForAccount:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType muteActionBlock; // @synthesize muteActionBlock=_muteActionBlock;
- (void)private_markAsShown;
- (id)scribeContext;
@property(readonly, nonatomic) NSArray *buttonSpecs;
@property(readonly, nonatomic) T1PromptTextSpec *primaryTextSpec;
@property(readonly, nonatomic) UIImage *image;
- (void)private_learnMorePressed;
- (void)private_muteButtonPressed:(id)arg1;
- (void)private_cancelButtonPressed:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2 muteActionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned long long buttonLayout;
@property(readonly, nonatomic) T1PromptContentViewSpec *contentViewSpec;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) T1PromptTextSpec *detailTextSpec;
@property(readonly, nonatomic) CDUnknownBlockType dismissOptionAction;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) T1PromptImageSpec *imageSpec;
@property(readonly, nonatomic) long long promptLayout;
@property(readonly, nonatomic) Class promptViewClass;
@property(readonly, nonatomic) T1PromptTextSpec *secondaryTextSpec;
@property(readonly, nonatomic) _Bool showDismissOption;
@property(readonly, nonatomic) _Bool showLogo;
@property(readonly) Class superclass;

@end


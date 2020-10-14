//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1PromptViewController.h>

#import <T1Twitter/T1PromptDataSource-Protocol.h>

@class NSArray, NSString, T1PromptContentViewSpec, T1PromptImageSpec, T1PromptTextSpec, UIImage;
@protocol TFSURTCover;

@interface T1TimelineCoverViewController : T1PromptViewController <T1PromptDataSource>
{
    id <TFSURTCover> _cover;
    UIImage *_image;
    T1PromptImageSpec *_imageSpec;
    NSString *_scribePage;
    NSString *_scribeSection;
}

+ (void)presentCover:(id)arg1 forAccount:(id)arg2 fromViewController:(id)arg3 animated:(_Bool)arg4;
- (void).cxx_destruct;
- (_Bool)private_isTwitterWebURL:(id)arg1;
- (void)private_handleActiveRange:(id)arg1 inView:(id)arg2 rect:(struct CGRect)arg3;
- (void)private_displayFeedbackMessage:(id)arg1;
- (void)private_navigateToURL:(id)arg1;
- (void)private_invokeCallbacks:(id)arg1;
- (void)private_performBehaviorForCTA:(id)arg1 defaultScribeElement:(id)arg2;
- (id)private_buttonSpecForCTA:(id)arg1 defaultScribeElement:(id)arg2 emphasized:(_Bool)arg3 preferFullWidth:(_Bool)arg4;
- (long long)private_textAlignmentForRichTextAlignment:(long long)arg1;
- (id)private_textSpecForRichText:(id)arg1 displayType:(id)arg2;
- (void)private_dismissWithCompletion:(CDUnknownBlockType)arg1;
- (id)private_dismissInfo;
- (CDUnknownBlockType)private_animationBlockForAnimationType:(long long)arg1;
- (long long)private_imageLayoutForImageDisplayType:(long long)arg1;
- (void)gestureDidDismissModalContainerViewController:(id)arg1;
- (_Bool)gestureShouldDismissModalContainerViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
@property(readonly, nonatomic) CDUnknownBlockType dismissOptionAction;
@property(readonly, nonatomic) _Bool showDismissOption;
@property(readonly, nonatomic) unsigned long long buttonLayout;
@property(readonly, nonatomic) NSArray *buttonSpecs;
@property(readonly, nonatomic) T1PromptTextSpec *detailTextSpec;
@property(readonly, nonatomic) T1PromptTextSpec *secondaryTextSpec;
@property(readonly, nonatomic) T1PromptTextSpec *primaryTextSpec;
@property(readonly, nonatomic) T1PromptImageSpec *imageSpec;
@property(readonly, nonatomic) long long promptLayout;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setDataSource:(id)arg1;
- (id)initWithCover:(id)arg1 account:(id)arg2;
- (id)initWithCover:(id)arg1 account:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) T1PromptContentViewSpec *contentViewSpec;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) Class promptViewClass;
@property(readonly, nonatomic) _Bool showLogo;
@property(readonly) Class superclass;

@end


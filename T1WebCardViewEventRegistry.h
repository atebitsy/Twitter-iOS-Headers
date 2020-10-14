//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1CardView, T1WebCardViewModel;
@protocol T1CardViewDelegate;

@interface T1WebCardViewEventRegistry : NSObject
{
    T1CardView *_view;
    id <T1CardViewDelegate> _delegate;
    T1WebCardViewModel *_viewModel;
    SEL _didTapImageSEL;
    SEL _didLongPressImageSEL;
    SEL _didTapTitleSEL;
    SEL _didLongPressTitleSEL;
    SEL _didTapDescriptionSEL;
    SEL _didLongPressDescriptionSEL;
    SEL _didTapLinkSEL;
    SEL _didLongPressLinkSEL;
    SEL _didTapBackgroundSEL;
    SEL _didLongPressBackgroundSEL;
    SEL _didTapCTAButton;
}

- (void).cxx_destruct;
@property(nonatomic) SEL didTapCTAButton; // @synthesize didTapCTAButton=_didTapCTAButton;
@property(nonatomic) SEL didLongPressBackgroundSEL; // @synthesize didLongPressBackgroundSEL=_didLongPressBackgroundSEL;
@property(nonatomic) SEL didTapBackgroundSEL; // @synthesize didTapBackgroundSEL=_didTapBackgroundSEL;
@property(nonatomic) SEL didLongPressLinkSEL; // @synthesize didLongPressLinkSEL=_didLongPressLinkSEL;
@property(nonatomic) SEL didTapLinkSEL; // @synthesize didTapLinkSEL=_didTapLinkSEL;
@property(nonatomic) SEL didLongPressDescriptionSEL; // @synthesize didLongPressDescriptionSEL=_didLongPressDescriptionSEL;
@property(nonatomic) SEL didTapDescriptionSEL; // @synthesize didTapDescriptionSEL=_didTapDescriptionSEL;
@property(nonatomic) SEL didLongPressTitleSEL; // @synthesize didLongPressTitleSEL=_didLongPressTitleSEL;
@property(nonatomic) SEL didTapTitleSEL; // @synthesize didTapTitleSEL=_didTapTitleSEL;
@property(nonatomic) SEL didLongPressImageSEL; // @synthesize didLongPressImageSEL=_didLongPressImageSEL;
@property(nonatomic) SEL didTapImageSEL; // @synthesize didTapImageSEL=_didTapImageSEL;
@property(retain, nonatomic) T1WebCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <T1CardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak T1CardView *view; // @synthesize view=_view;
- (void)didLongPressBackground:(id)arg1;
- (void)didTapBackground:(id)arg1;
- (void)didLongPressLink:(id)arg1;
- (void)didTapLink:(id)arg1;
- (void)didLongPressDescription:(id)arg1;
- (void)didTapDescription:(id)arg1;
- (void)didLongPressTitle:(id)arg1;
- (void)didTapTitle:(id)arg1;
- (void)didLongPressImage:(id)arg1;
- (void)didTapImage:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (void)_didTap:(id)arg1 eventType:(id)arg2;
- (_Bool)shouldOmitLongPress;
- (void)registerCardBackgroundHighlightView:(id)arg1;
- (void)registerLinkHighlightView:(id)arg1;
- (void)registerDescriptionHighlightView:(id)arg1;
- (void)registerTitleHighlightView:(id)arg1;
- (void)registerMediaHighlightView:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end


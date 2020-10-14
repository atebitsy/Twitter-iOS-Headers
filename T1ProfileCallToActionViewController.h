//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ResizableHeaderSubheader-Protocol.h>

@class NSString, T1CallToActionItem;

@interface T1ProfileCallToActionViewController : TFNItemsDataViewController <T1ResizableHeaderSubheader>
{
    CDUnknownBlockType _preferredHeightCheckBlock;
    id _subheaderInfo;
    T1CallToActionItem *_callToAction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1CallToActionItem *callToAction; // @synthesize callToAction=_callToAction;
@property(retain, nonatomic) id subheaderInfo; // @synthesize subheaderInfo=_subheaderInfo;
@property(copy, nonatomic) CDUnknownBlockType preferredHeightCheckBlock; // @synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock;
- (double)preferredHeight;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 activeSubtitleRange:(struct _NSRange)arg3 activeTextActionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


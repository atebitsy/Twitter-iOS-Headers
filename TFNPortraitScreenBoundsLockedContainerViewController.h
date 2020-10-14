//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface TFNPortraitScreenBoundsLockedContainerViewController : UIViewController
{
    long long _supportedHorizontalSizeClass;
    long long _supportedVerticalSizeClass;
    UIViewController *_contentViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (struct CGSize)_validSizeForProposedSize:(struct CGSize)arg1;
- (void)_updateContentViewControllerTraitCollection;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContentViewController:(id)arg1;

@end


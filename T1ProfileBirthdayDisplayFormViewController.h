//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

@protocol T1ProfileBirthdayDisplayFormViewControllerDelegate;

@interface T1ProfileBirthdayDisplayFormViewController : TFNFormViewController
{
    id <T1ProfileBirthdayDisplayFormViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1ProfileBirthdayDisplayFormViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)formFieldDidBeginEditingUserInput:(id)arg1 withStopEditingAction:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (id)initWithDisplayText:(id)arg1 delegate:(id)arg2;

@end


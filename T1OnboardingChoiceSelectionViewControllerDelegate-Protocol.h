//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSString, T1OnboardingChoiceSelectionViewController, TFSTwitterOnboardingRichText;
@protocol TFSActiveTextRange;

@protocol T1OnboardingChoiceSelectionViewControllerDelegate <NSObject>
- (void)choiceSelectionViewController:(T1OnboardingChoiceSelectionViewController *)arg1 didTapActiveTextRange:(id <TFSActiveTextRange>)arg2 inRect:(struct CGRect)arg3;
- (NSString *)choiceSelectionViewController:(T1OnboardingChoiceSelectionViewController *)arg1 expandedRichText:(TFSTwitterOnboardingRichText *)arg2;
- (_Bool)choiceSelectionViewController:(T1OnboardingChoiceSelectionViewController *)arg1 shouldEnableNextButtonForSelectedChoices:(NSArray *)arg2;
- (NSString *)choiceSelectionViewController:(T1OnboardingChoiceSelectionViewController *)arg1 nextLabelForSelectedChoices:(NSArray *)arg2;
- (void)choiceSelectionViewControllerDidTapSkip:(T1OnboardingChoiceSelectionViewController *)arg1;
- (void)choiceSelectionViewController:(T1OnboardingChoiceSelectionViewController *)arg1 didTapNextWithChoices:(NSArray *)arg2;
@end


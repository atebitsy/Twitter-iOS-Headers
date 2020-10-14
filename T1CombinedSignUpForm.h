//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNForm.h>

@class NSDate, NSDateFormatter, NSLayoutConstraint, NSString, TFNDatePicker, TFNFormField, UIBarButtonItem;

@interface T1CombinedSignUpForm : TFNForm
{
    _Bool _isReview;
    _Bool _useDevicePrefill;
    _Bool _shouldInputBirthdayAsAge;
    NSString *_phoneHint;
    NSString *_emailHint;
    NSString *_phoneOrEmailHint;
    NSString *_usePhoneButtonTitle;
    NSString *_useEmailButtonTitle;
    NSDate *_birthdayDate;
    TFNDatePicker *_birthdayPicker;
    NSDateFormatter *_birthdayFormatter;
    UIBarButtonItem *_nameAccessoryButtonItem;
    UIBarButtonItem *_phoneOrEmailKeyboardButtonItem;
    NSLayoutConstraint *_phoneOrEmailKeyboardButtonWidthConstraint;
    UIBarButtonItem *_phoneOrEmailAccessoryButtonItem;
    UIBarButtonItem *_birthdayAccessoryButtonItem;
    UIBarButtonItem *_submitAccessoryButtonItem;
    NSString *_defaultSubmitTitle;
    NSString *_emailSubmitTitle;
    _Bool _shouldHideBirthday;
    TFNFormField *_nameFormField;
    TFNFormField *_phoneOrEmailFormField;
    TFNFormField *_birthdayFormField;
    long long _selectedContactType;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedContactType; // @synthesize selectedContactType=_selectedContactType;
@property(nonatomic) _Bool shouldHideBirthday; // @synthesize shouldHideBirthday=_shouldHideBirthday;
@property(readonly, nonatomic) TFNFormField *birthdayFormField; // @synthesize birthdayFormField=_birthdayFormField;
@property(readonly, nonatomic) TFNFormField *phoneOrEmailFormField; // @synthesize phoneOrEmailFormField=_phoneOrEmailFormField;
@property(readonly, nonatomic) TFNFormField *nameFormField; // @synthesize nameFormField=_nameFormField;
- (void)private_updateInputAccessoryButton:(id)arg1 toType:(long long)arg2;
- (void)private_updateInputAccessoryButtons;
- (id)private_orderedInputAccessoryButtons;
- (id)private_orderedFormFields;
- (id)private_toolbarItemsWithLeftItem:(id)arg1 widthConstraint:(id)arg2 accessoryItem:(id)arg3;
- (void)private_updatePhoneOrEmailEditingHintText;
- (void)private_toggleContactTypeAction;
- (id)private_phoneOrEmailItemForSelectedContactType;
- (id)private_inputAccessoryButtonItem;
- (id)private_maximumDate;
- (long long)private_contactType;
- (void)private_refocusOnPhoneOrEmailFormField;
- (void)private_updateTextContentTypeForPhoneOrEmailFormField;
- (id)private_stringByConvertingWhitespaceToSpaceInString:(id)arg1;
- (CDUnknownBlockType)private_validationBlockForPhoneOrEmailField;
- (CDUnknownBlockType)private_validationBlockForNameField;
- (CDUnknownBlockType)private_validationBlockForBirthdayFieldAsAge;
- (CDUnknownBlockType)private_validationBlockForBirthdayField;
- (void)private_phoneOrEmailFieldDidEndEditing;
- (void)private_inputAccessoryButtonAction:(id)arg1;
- (void)private_birthdayDidChange:(id)arg1;
- (void)formField:(id)arg1 didUpdateValidityFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)clearUserInput;
- (id)toolbarItemsForFormField:(id)arg1;
- (id)nextFormFieldForFormField:(id)arg1;
@property(readonly, nonatomic) NSDate *placeholderBirthdayFromAge;
@property(readonly, nonatomic) NSDate *birthday;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) NSString *phone;
@property(readonly, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 hint:(id)arg2 phone:(id)arg3 email:(id)arg4 phoneOrEmailHint:(id)arg5 birthday:(id)arg6 hint:(id)arg7 explanation:(id)arg8 useDevicePrefill:(_Bool)arg9 shouldInputBirthdayAsAge:(_Bool)arg10 delegate:(id)arg11;
- (id)initForReviewWithName:(id)arg1 phone:(id)arg2 email:(id)arg3 birthday:(id)arg4 shouldInputBirthdayAsAge:(_Bool)arg5 delegate:(id)arg6;
- (id)initWithNameHint:(id)arg1 phoneHint:(id)arg2 usePhoneButtonTitle:(id)arg3 emailHint:(id)arg4 useEmailButtonTitle:(id)arg5 phoneOrEmailHint:(id)arg6 birthdayHint:(id)arg7 birthdayExplanation:(id)arg8 defaultSubmitButtonTitle:(id)arg9 emailSubmitButtonTitle:(id)arg10 useDevicePrefill:(_Bool)arg11 shouldInputBirthdayAsAge:(_Bool)arg12 delegate:(id)arg13;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString;
@protocol UITextFieldDelegate;

@interface _TtC14PhoneNumberKit20PhoneNumberTextField : UITextField
{
    // Error parsing type: , name: phoneNumberKit
    // Error parsing type: , name: $__lazy_storage_$_flagButton
    // Error parsing type: , name: $__lazy_storage_$__defaultRegion
    // Error parsing type: , name: withPrefix
    // Error parsing type: , name: withFlag
    // Error parsing type: , name: withExamplePlaceholder
    // Error parsing type: , name: countryCodePlaceholderColor
    // Error parsing type: , name: numberPlaceholderColor
    // Error parsing type: , name: _withDefaultPickerUI
    // Error parsing type: , name: isPartialFormatterEnabled
    // Error parsing type: , name: maxDigits
    // Error parsing type: , name: $__lazy_storage_$_partialFormatter
    // Error parsing type: , name: nonNumericSet
    // Error parsing type: , name: _delegate
}

- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didPressFlagButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic, retain) id <UITextFieldDelegate> delegate;
@property(nonatomic, copy) NSString *text;

@end


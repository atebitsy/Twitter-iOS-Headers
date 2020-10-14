//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

#import <T1Twitter/T1FormFieldViewDelegate-Protocol.h>

@class NSString, UIImage;
@protocol T1FormFieldDataViewAdapterDelegate;

@interface T1FormFieldDataViewAdapter : TFNItemsDataViewAdapter <T1FormFieldViewDelegate>
{
    UIImage *_alertImage;
    UIImage *_successImage;
    id <T1FormFieldDataViewAdapterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1FormFieldDataViewAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)private_formFieldViewForItem:(id)arg1;
- (_Bool)formFieldViewShouldClear:(id)arg1;
- (_Bool)formFieldViewShouldReturn:(id)arg1;
- (_Bool)formFieldViewShouldEndEditing:(id)arg1;
- (_Bool)formFieldViewShouldBeginEditing:(id)arg1;
- (void)formFieldViewDidEndEditing:(id)arg1;
- (void)formFieldViewDidBeginEditing:(id)arg1;
- (void)formFieldView:(id)arg1 didChangeText:(id)arg2 toText:(id)arg3;
- (void)formFieldViewContentSizeDidChange:(id)arg1;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)setBadgeType:(long long)arg1 forItem:(id)arg2;
- (void)setErrorMessage:(id)arg1 forItem:(id)arg2;
- (void)setText:(id)arg1 forItem:(id)arg2;
- (id)textForItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


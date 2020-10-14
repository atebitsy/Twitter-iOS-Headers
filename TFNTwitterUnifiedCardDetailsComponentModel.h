//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterUnifiedCardBaseComponentModel.h>

#import <T1Twitter/TFNTwitterUnifiedCardCTAButtonVariationsAdaptable-Protocol.h>
#import <T1Twitter/TFNTwitterUnifiedCardDetailsAdaptable-Protocol.h>

@class NSArray, NSString, TFNTwitterUnifiedCardButtonData, TFNTwitterUnifiedCardDestinationModel, TFNTwitterUnifiedCardDominantColorConfig;

@interface TFNTwitterUnifiedCardDetailsComponentModel : TFNTwitterUnifiedCardBaseComponentModel <TFNTwitterUnifiedCardDetailsAdaptable, TFNTwitterUnifiedCardCTAButtonVariationsAdaptable>
{
    NSString *_title;
    NSString *_subtitle;
    TFNTwitterUnifiedCardDominantColorConfig *_dominantColorConfig;
    TFNTwitterUnifiedCardButtonData *_button;
}

+ (id)componentWithJSON:(id)arg1 destinationDict:(id)arg2 mediaEntitiesDict:(id)arg3 appStoreData:(id)arg4 promotedContent:(id)arg5 usersDict:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterUnifiedCardButtonData *button; // @synthesize button=_button;
@property(readonly, nonatomic) TFNTwitterUnifiedCardDominantColorConfig *dominantColorConfig; // @synthesize dominantColorConfig=_dominantColorConfig;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 destinationModel:(id)arg3 shouldRenderFullBleed:(_Bool)arg4 dominantColorConfig:(id)arg5 useDominantColor:(_Bool)arg6;
- (id)initWithComponentJSON:(id)arg1 title:(id)arg2 subtitle:(id)arg3 destinationDict:(id)arg4;
- (id)withButton:(id)arg1;
- (id)withPromotedContent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *axDestinations;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TFNTwitterUnifiedCardDestinationModel *destination;
@property(readonly, nonatomic) _Bool shouldRenderFullBleed;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterUnifiedCardBaseComponentModel.h>

@class NSString, TFSTwitterUser;

@interface TFNTwitterUnifiedCardProfileComponentModel : TFNTwitterUnifiedCardBaseComponentModel
{
    TFSTwitterUser *_user;
    NSString *_socialContextString;
}

+ (id)componentWithJSON:(id)arg1 destinationDict:(id)arg2 mediaEntitiesDict:(id)arg3 appStoreData:(id)arg4 promotedContent:(id)arg5 usersDict:(id)arg6;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *socialContextString; // @synthesize socialContextString=_socialContextString;
@property(readonly, nonatomic) TFSTwitterUser *user; // @synthesize user=_user;
- (unsigned long long)type;
- (id)initWithComponentJSON:(id)arg1 destinationDict:(id)arg2 user:(id)arg3 socialContextString:(id)arg4;
- (id)allUsers;
- (id)withPromotedContent:(id)arg1;

@end


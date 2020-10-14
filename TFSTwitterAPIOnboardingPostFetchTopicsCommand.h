//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSString;

@interface TFSTwitterAPIOnboardingPostFetchTopicsCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _includeCategories;
    NSString *_subtaskID;
    NSString *_flowToken;
    NSString *_categoryID;
    NSString *_keyword;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool includeCategories; // @synthesize includeCategories=_includeCategories;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *flowToken; // @synthesize flowToken=_flowToken;
@property(copy, nonatomic) NSString *subtaskID; // @synthesize subtaskID=_subtaskID;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 subtaskID:(id)arg3 flowToken:(id)arg4 categoryID:(id)arg5 orKeyword:(id)arg6 includeCategories:(_Bool)arg7 source:(unsigned long long)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end


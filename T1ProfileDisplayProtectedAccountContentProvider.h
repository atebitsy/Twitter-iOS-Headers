//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileDisplayContentProvider.h>

@interface T1ProfileDisplayProtectedAccountContentProvider : T1ProfileDisplayContentProvider
{
    CDUnknownBlockType _loadTopCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType loadTopCompletionHandler; // @synthesize loadTopCompletionHandler=_loadTopCompletionHandler;
- (void)profileDataSourceDidInvalidateWithReason:(long long)arg1;
- (id)generateDefaultMainViewController;
- (id)contentSubheaderEntries;
- (_Bool)shouldShowUserDataWhenCurrent;
- (_Bool)canBecomeCurrent;

@end


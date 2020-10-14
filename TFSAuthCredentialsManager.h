//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSAuth/TFSAuthenticating-Protocol.h>

@class NSString, TFSAuthAppOAuth2Helper, TFSAuthConfiguration, TFSAuthConsumerCredential, TFSAuthGuestAuthManager, TFSAuthOAuth1Helper;
@protocol TFSAuthAccountAuthService, TFSAuthCredentialStateTransitionDelegate, TFSAuthGuestAuthAPI, TFSAuthKeychainSupport;

@interface TFSAuthCredentialsManager : NSObject <TFSAuthenticating>
{
    TFSAuthConfiguration *_configuration;
    TFSAuthConsumerCredential *_oAuthConsumerCredential;
    double _oAuthClockDelta;
    id <TFSAuthAccountAuthService> _accountService;
    id <TFSAuthGuestAuthAPI> _guestAuthAPI;
    id <TFSAuthKeychainSupport> _keychainSupport;
    id <TFSAuthCredentialStateTransitionDelegate> _credentialStateTransitionDelegate;
    TFSAuthOAuth1Helper *_OAuth1Helper;
    TFSAuthAppOAuth2Helper *_appOAuth2Helper;
    TFSAuthGuestAuthManager *_guestAuthManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSAuthGuestAuthManager *guestAuthManager; // @synthesize guestAuthManager=_guestAuthManager;
@property(readonly, nonatomic) TFSAuthAppOAuth2Helper *appOAuth2Helper; // @synthesize appOAuth2Helper=_appOAuth2Helper;
@property(readonly, nonatomic) TFSAuthOAuth1Helper *OAuth1Helper; // @synthesize OAuth1Helper=_OAuth1Helper;
@property(nonatomic) __weak id <TFSAuthCredentialStateTransitionDelegate> credentialStateTransitionDelegate; // @synthesize credentialStateTransitionDelegate=_credentialStateTransitionDelegate;
@property(nonatomic) __weak id <TFSAuthKeychainSupport> keychainSupport; // @synthesize keychainSupport=_keychainSupport;
@property(nonatomic) __weak id <TFSAuthGuestAuthAPI> guestAuthAPI; // @synthesize guestAuthAPI=_guestAuthAPI;
@property(nonatomic) __weak id <TFSAuthAccountAuthService> accountService; // @synthesize accountService=_accountService;
@property(nonatomic) double oAuthClockDelta; // @synthesize oAuthClockDelta=_oAuthClockDelta;
@property(retain, nonatomic) TFSAuthConsumerCredential *oAuthConsumerCredential; // @synthesize oAuthConsumerCredential=_oAuthConsumerCredential;
@property(retain, nonatomic) TFSAuthConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_handleAccountAuthRequestResponse:(id)arg1;
- (void)_signAppOAuth2BearerTokenRequest:(id)arg1 bearerToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_signAppOAuth2BasicAuthorizationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_signAppOAuth1Request:(id)arg1 parameters:(id)arg2 accountID:(id)arg3 requestingAppCredential:(id)arg4 callbackURLString:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_signGuestAuthRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_signAccountRequest:(id)arg1 parameters:(id)arg2 accountID:(id)arg3 requestingAppCredential:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)retrieveCredentialForAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)accountAuthErrorCodeFromAPIResponse:(id)arg1;
- (_Bool)responseHasRetriableAuthError:(id)arg1;
- (id)handleRequestResponse:(id)arg1;
- (void)signRequest:(id)arg1 parameters:(id)arg2 accountID:(id)arg3 authContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)additionalAuthenticationHTTPHeadersForAccountID:(id)arg1 authContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


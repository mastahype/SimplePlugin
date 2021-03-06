/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class IMAPAccount, NSArray, NSString;

@interface IMAPClientNamespaceOperation : IMAPSingleClientOperation
{
    IMAPAccount *_account;
    NSString *_separatorChar;
    NSArray *_privateNamespaces;
    NSArray *_publicNamespaces;
    NSArray *_sharedNamespaces;
}

- (id)initWithAccount:(id)arg1 separatorChar:(id)arg2;
- (void)dealloc;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)arg1;
@property(retain) NSArray *sharedNamespaces; // @synthesize sharedNamespaces=_sharedNamespaces;
@property(retain) NSArray *publicNamespaces; // @synthesize publicNamespaces=_publicNamespaces;
@property(retain) NSArray *privateNamespaces; // @synthesize privateNamespaces=_privateNamespaces;
@property(copy) NSString *separatorChar; // @synthesize separatorChar=_separatorChar;
@property(retain) IMAPAccount *account; // @synthesize account=_account;

@end


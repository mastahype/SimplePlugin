/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@protocol IMAPMailboxDelegate <NSObject>
- (void)updateCountFromMailbox:(id)arg1 fromIDLE:(BOOL)arg2;
- (void)processResponsesFromMailbox:(id)arg1;
- (void)updateUidValidityFromMailbox:(id)arg1;
- (void)updateSelectedGatewayFromMailbox:(id)arg1;
@end


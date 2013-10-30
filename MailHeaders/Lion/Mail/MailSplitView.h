/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSSplitView.h"

@class NSColor, NSImageView, NSString, NSView;

@interface MailSplitView : NSSplitView
{
    NSString *_oldAutosaveName;
    NSColor *_dividerEdgeColor;
    NSView *_leftView;
    NSImageView *_leftSnapshotView;
    NSImageView *_rightSnapshotView;
}

+ (void)initialize;
- (void)dealloc;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowLayoutWillEnterFullScreen:(id)arg1;
- (void)windowLayoutDidEnterFullScreen:(id)arg1;
- (void)windowLayoutWillExitFullScreen:(id)arg1;
- (void)windowLayoutDidExitFullScreen:(id)arg1;
- (void)setAutosaveName:(id)arg1;
@property(copy, nonatomic) NSColor *dividerEdgeColor;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (void)drawColoredEdgeInDividerRect:(struct CGRect)arg1;
- (void)snapshotLeftViewForDividerPosition:(double)arg1;
- (void)removeSnapshotPreventingOverlayScrollersPulse:(BOOL)arg1;
- (void)_preventOverlayScrollersFlashInView:(id)arg1;
- (void)freezeRightViewByDimming:(BOOL)arg1;
- (void)unfreezeRightView;
@property(copy, nonatomic) NSString *oldAutosaveName; // @synthesize oldAutosaveName=_oldAutosaveName;

@end


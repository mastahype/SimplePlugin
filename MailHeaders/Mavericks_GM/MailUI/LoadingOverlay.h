/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCActivityMonitor, NSProgressIndicator, NSString, NSTextField, NSView;

@interface LoadingOverlay : NSObject
{
    MCActivityMonitor *_monitor;
    NSView *_overlayView;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_statusMessageField;
    id _modalDelegate;
}

@property id modalDelegate; // @synthesize modalDelegate=_modalDelegate;
@property(nonatomic) NSTextField *statusMessageField; // @synthesize statusMessageField=_statusMessageField;
@property(nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
- (void)stop;
- (void)_activityEnded:(id)arg1;
@property(retain) NSString *statusMessage;
@property(retain, nonatomic) MCActivityMonitor *activityMonitor;
- (void)displayInSuperviewAfterDelay:(id)arg1;
- (void)displayInSuperview:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithModalDelegate:(id)arg1;

@end


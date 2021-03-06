/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLPowerAssertionAgent : PLAgent {
    long _aggregateMaxPIDCount;
    long _aggregteZeroDeltaCount;
    NSMutableDictionary *_assertionAggregatedLastSample;
    NSMutableDictionary *_assertionAggregatedLastSamplePLDataStructure;
    PLCFNotificationOperatorComposition *_assertionBufferFullNotification;
    BOOL _assertionBufferFullNotificationActive;
    PLTimer *_assertionBufferFullNotificationRearmTimer;
    NSMutableArray *_assertionBufferNotificationTracking;
    PLCFNotificationOperatorComposition *_assertionNotification;
    PLTimer *_assertionSnapShotTimer;
    PLEntryNotificationOperatorComposition *_batteryLevelNotificiations;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    BOOL _firstBufferDrain;
    PLTimer *_runQueryTimer;
    PLEntryNotificationOperatorComposition *_wakeNotification;
}

@property long aggregateMaxPIDCount;
@property long aggregteZeroDeltaCount;
@property (nonatomic, retain) NSMutableDictionary *assertionAggregatedLastSample;
@property (retain) NSMutableDictionary *assertionAggregatedLastSamplePLDataStructure;
@property (retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification;
@property (nonatomic) BOOL assertionBufferFullNotificationActive;
@property (retain) PLTimer *assertionBufferFullNotificationRearmTimer;
@property (retain) NSMutableArray *assertionBufferNotificationTracking;
@property (retain) PLCFNotificationOperatorComposition *assertionNotification;
@property (retain) PLTimer *assertionSnapShotTimer;
@property (nonatomic) BOOL assertionSnapshotTimerActive;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property BOOL firstBufferDrain;
@property (retain) PLTimer *runQueryTimer;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;

+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionAssertion;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventPointDefinitionBufferStatus;
+ (id)entryEventPointDefinitionSnapshot;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (long)aggregateMaxPIDCount;
- (long)aggregteZeroDeltaCount;
- (id)assertionAggregatedLastSample;
- (id)assertionAggregatedLastSamplePLDataStructure;
- (id)assertionBufferFullNotification;
- (BOOL)assertionBufferFullNotificationActive;
- (id)assertionBufferFullNotificationRearmTimer;
- (id)assertionBufferNotificationTracking;
- (id)assertionNotification;
- (id)assertionSnapShotTimer;
- (BOOL)assertionSnapshotTimerActive;
- (id)batteryLevelNotificiations;
- (id)bundleIDForAssertionProcessPID:(int)arg1;
- (id)canSleepNotification;
- (void)checkAssertionBufferFullNotificationRate;
- (BOOL)firstBufferDrain;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logAggregatedAssertionActivity;
- (void)logAggregatedAssertionActivityPLDataStructure;
- (void)logEventIntervalAssertion;
- (void)logEventIntervalAssertionWithReason:(id)arg1;
- (void)logEventPointAggregateResetWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)logEventPointSnapshot;
- (void)logEventPointSnapshotWithReason:(id)arg1;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)arg1 withPidCount:(int)arg2;
- (id)runQueryTimer;
- (void)sanitizeAssertionNameForEntry:(id)arg1;
- (void)setAggregateMaxPIDCount:(long)arg1;
- (void)setAggregteZeroDeltaCount:(long)arg1;
- (void)setAssertionAggregatedLastSample:(id)arg1;
- (void)setAssertionAggregatedLastSamplePLDataStructure:(id)arg1;
- (void)setAssertionBufferFullNotification:(id)arg1;
- (void)setAssertionBufferFullNotificationActive:(BOOL)arg1;
- (void)setAssertionBufferFullNotificationActive:(BOOL)arg1 withReason:(id)arg2;
- (void)setAssertionBufferFullNotificationRearmTimer:(id)arg1;
- (void)setAssertionBufferNotificationTracking:(id)arg1;
- (void)setAssertionNotification:(id)arg1;
- (void)setAssertionSnapShotTimer:(id)arg1;
- (void)setAssertionSnapshotTimerActive:(BOOL)arg1;
- (void)setBatteryLevelNotificiations:(id)arg1;
- (void)setCanSleepNotification:(id)arg1;
- (void)setFirstBufferDrain:(BOOL)arg1;
- (void)setRunQueryTimer:(id)arg1;
- (void)setWakeNotification:(id)arg1;
- (id)wakeNotification;

@end

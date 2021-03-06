/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryPushAgent : NSObject <APSConnectionDelegate, NSXPCListenerDelegate, WBSCloudHistoryPushAgent> {
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushNotificationStateQueue;
    NSXPCListener *_xpcListener;
}

@property (setter=_setHasAcknowlegedPushNotifications:, nonatomic) BOOL _hasAcknowledgedPushNotifications;
@property (setter=_setHasUnacknowledgedPushNotifications:, nonatomic) BOOL _hasUnacknowledgedPushNotifications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasAcknowledgedPushNotifications;
- (BOOL)_hasUnacknowledgedPushNotifications;
- (id)_pushTopic;
- (void)_setHasAcknowlegedPushNotifications:(BOOL)arg1;
- (void)_setHasUnacknowledgedPushNotifications:(BOOL)arg1;
- (void)acknowledgePendingPushNotifications;
- (void)clearAcknowledgedPushNotifications;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)getPushNotifications:(id /* block */)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

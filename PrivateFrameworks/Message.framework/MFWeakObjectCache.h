/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSLock, NSMutableDictionary;

@interface MFWeakObjectCache : NSObject {
    id _block;
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

- (void)dealloc;
- (id)initWithBlock:(id)arg1;
- (id)objectForKey:(id)arg1 wasCached:(bool*)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;

@end
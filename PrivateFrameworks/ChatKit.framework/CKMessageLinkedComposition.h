/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKMessage;



@interface CKMessageLinkedComposition : CKMessageComposition 
{
    CKMessage *_message;
}

@property(retain) CKMessage *message;


- (id)markupString;
- (id)subject;
- (id)resources;
- (void)setMessage:(id)arg1;
- (id)message;
- (BOOL)isTextOnly;
- (void)dealloc;
- (id)textString;

@end
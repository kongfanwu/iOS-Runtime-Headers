/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UITextSelectingContainer>, UIDelayedAction;



@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer 
{
    UIView<UITextSelectingContainer> *_containerView;
    UIDelayedAction *_secondDelayTimer;
    double _secondDelay;
    BOOL _secondDelayElapsed;
    id _userData;
}

@property id userData;
@property(readonly) BOOL secondDelayElapsed;
@property double secondDelay;
@property UIView<UITextSelectingContainer> *containerView;


- (void)secondDelayElapsed:(id)arg1;
- (double)secondDelay;
- (id)containerView;
- (void)clearTimer;
- (void)startTimer;
- (void)setContainerView:(id)arg1;
- (void)setSecondDelay:(double)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;
- (BOOL)secondDelayElapsed;
- (void)_resetGestureRecognizer;
- (void)setState:(NSInteger)arg1;

@end
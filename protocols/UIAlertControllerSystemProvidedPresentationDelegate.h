/* Generated by RuntimeBrowser.
 */

@protocol UIAlertControllerSystemProvidedPresentationDelegate <NSObject>

@required

- (UIViewController *)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;

@optional

- (void)_didBeginSystemProvidedDismissalOfAlertController:(UIAlertController *)arg1;
- (void)_didBeginSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;
- (void)_didEndSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 wasSuccessful:(BOOL)arg2;
- (void)_didPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 wasSuccessful:(BOOL)arg2;
- (BOOL)_shouldPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)_willBeginSystemProvidedDismissalOfAlertController:(UIAlertController *)arg1;
- (void)_willBeginSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;
- (void)_willPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;

@end

/* Generated by RuntimeBrowser.
 */

@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>

@optional

- (UIViewController *)contactPresentedViewController:(CNContactViewController *)arg1;
- (void)contactViewController:(CNContactContentViewController *)arg1 didChangeToEditMode:(BOOL)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (BOOL)contactViewController:(CNContactContentViewController *)arg1 shouldPerformDefaultActionForContact:(CNContact *)arg2 propertyKey:(NSString *)arg3 propertyIdentifier:(NSString *)arg4;

@end
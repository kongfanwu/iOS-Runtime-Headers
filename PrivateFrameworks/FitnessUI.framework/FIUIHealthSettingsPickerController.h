/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsPickerController : NSObject <FIUIHealthSettingsForceUpdatable, UIPickerViewDataSource, UIPickerViewDelegate> {
    BOOL _isMetricLocale;
    UIPickerView *_pickerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isMetricLocale;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)forceUpdate;
- (id)init;
- (BOOL)isMetricLocale;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)setIsMetricLocale:(BOOL)arg1;
- (void)setPickerView:(id)arg1;

@end

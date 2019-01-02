/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryWeightItem : HKSimpleDataEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    HKSimpleDataEntryPlainTextCell * _cell;
    NSNumber * _defaultValue;
    NSNumber * _kilogramValue;
    long long  _localWeightUnit;
    long long  _numberOfRowsForPicker;
    UIPickerView * _picker;
    NSString * _registrantModelKey;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_defaultKilogramValue;
- (id)_formattedValueForDisplay;
- (void)_setTextForInputTextField:(id)arg1;
- (void)_setWeightValueForSelectedRow:(long long)arg1;
- (void)_setupPlaceholder;
- (void)_updateLocaleDependentValues;
- (void)_valueDidChange;
- (void)beginEditing;
- (id)cell;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 weightInKg:(id)arg3 defaultWeightInKg:(id)arg4;
- (void)localeDidChange:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)updateCellDisplay;

@end
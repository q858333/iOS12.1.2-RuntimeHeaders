/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate> {
    EKCalendarItem * _calendarItem;
    <EKCalendarItemEditItemDelegate> * _delegate;
    UIResponder * _selectedResponder;
    EKEventStore * _store;
    <EKStyleProvider> * _styleProvider;
    UIViewController<EKEditItemViewControllerProtocol> * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKCalendarItemEditItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIResponder *selectedResponder;
@property (nonatomic, retain) <EKStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showViewController:(id)arg1 editor:(id)arg2 animated:(bool)arg3;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)applicationDidResume;
- (id)calendarItem;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureForCalendarConstraints:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)delegate;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewControllerWantsKeyboardPinned:(bool)arg1;
- (bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2;
- (bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;
- (void)editorDidScroll:(id)arg1;
- (void)endInlineEditing;
- (double)footerHeightForWidth:(double)arg1;
- (id)footerTitle;
- (id)footerView;
- (bool)forceRefreshInviteesItemOnSave;
- (bool)forceRefreshLocationItemOnSave;
- (bool)forceRefreshStartAndEndDatesOnSave;
- (bool)forceTableReloadOnSave;
- (id)headerTitle;
- (id)injectableViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)isInline;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (void)notifyRequiresHeightChange;
- (void)notifySubitemDidSave:(unsigned long long)arg1;
- (void)notifyTextChanged;
- (unsigned long long)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (bool)requiresReconfigurationOnSave;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (id)selectedResponder;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedResponder:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)shouldAppearWithVisibility:(int)arg1;
- (bool)shouldPinKeyboard;
- (id)styleProvider;
- (bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (id)viewForActionSheet;

@end
/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLValueTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    long long  _selectedIndex;
    id /* block */  _selectionBlock;
    UITableView * _tableView;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ selectionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithValues:(id)arg1 selectedIndex:(long long)arg2;
- (void)loadView;
- (id /* block */)selectionBlock;
- (void)setSelectionBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
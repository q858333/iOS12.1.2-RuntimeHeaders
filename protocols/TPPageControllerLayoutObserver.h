/* Generated by EzioChiu.
 */

@protocol TPPageControllerLayoutObserver <NSObject>

@optional

- (void)pageController:(TPPageController *)arg1 didInvalidateFromPageIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3;
- (void)pageController:(TPPageController *)arg1 didLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(bool)arg4;
- (void)pageController:(TPPageController *)arg1 willLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(bool)arg4;

@end

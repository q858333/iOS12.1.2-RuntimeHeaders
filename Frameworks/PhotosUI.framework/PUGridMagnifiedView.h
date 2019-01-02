/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridMagnifiedView : UIView {
    UIImageView * _imageView;
    UIImage * _itemImage;
    NSIndexPath * _itemIndexPath;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _magnifiedDragEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _magnifiedImageSize;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIImage *itemImage;
@property (nonatomic, retain) NSIndexPath *itemIndexPath;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } magnifiedDragEdgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } magnifiedImageSize;

- (void).cxx_destruct;
- (void)hideAnimate:(bool)arg1;
- (id)imageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageWindFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemImage;
- (id)itemIndexPath;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })magnifiedDragEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })magnifiedFrameForParentLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })magnifiedImageSize;
- (void)magnifyFromImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLocation:(struct CGPoint { double x1; double x2; })arg2 animate:(bool)arg3;
- (void)moveToLocation:(struct CGPoint { double x1; double x2; })arg1 animate:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })photoFrameForViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pinFrameToParentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageAnimate:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemIndexPath:(id)arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMagnifiedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewFrameForPhotoFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
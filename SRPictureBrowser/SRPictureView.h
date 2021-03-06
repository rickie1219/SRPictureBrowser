//
//  SRPictureView.h
//  SRPhotoBrowser
//
//  Created by Willing Guo on 16/12/24.
//  Copyright © 2016年 SR. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SRPictureModel;

@protocol SRPictureViewDelegate <NSObject>

@optional

- (void)pictureViewDidTapToDismissPictureBrowser;
- (void)pictureViewDidLongPress;

@end

@interface SRPictureView : UIScrollView

@property (nonatomic, weak) id <SRPictureViewDelegate> pictureViewDelegate;

@property (nonatomic, strong) SRPictureModel *pictureModel;

@property (nonatomic, strong) UIImageView *imageView;

@end

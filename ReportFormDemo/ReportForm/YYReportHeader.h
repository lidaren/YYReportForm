//
//  YYReportHeader.h
//  ReportFormDemo
//
//  Created by YanHui Lee on 2018/11/24.
//  Copyright © 2018 YanHuiLee. All rights reserved.
//
//  头部

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYReportHeader : UIView

@property (weak, nonatomic) IBOutlet UIView *lockView;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lockViewWidthConstraint;

@end

NS_ASSUME_NONNULL_END

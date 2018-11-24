//
//  YYReportNormalCell.h
//  ReportFormDemo
//
//  Created by YanHui Lee on 2018/11/24.
//  Copyright © 2018 YanHuiLee. All rights reserved.
//
//  内容

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYReportNormalCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UITableView *lockViewTableView;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *fristColumnWidth;
@property (nonatomic,strong) UITableView *scrollViewTableView;

-(void) setXTableDatas:(NSArray*)xTableDatas;
-(void) setYTableDatas:(NSArray*)yTableDatas;
-(void) setColumeMaxWidths:(NSArray*)mColumeMaxWidths;
-(void) setRowMaxHeights:(NSArray*)mRowMaxHeights;
-(void) setCellTextFont:(UIFont*)mTextFont;
-(void) setCellTextColor:(UIColor*)mTextColor;
-(void) setCellBorderWidth:(CGFloat)mBorderWidth;
-(void) setCellBorderColor:(UIColor*)mBorderColor;
-(void) setCellSingleBackgroundColor:(UIColor*)mSingleBG;
-(void) setCellDoubleBackgroundColor:(UIColor*)mDoubleBG;

-(void) initView;
@end

NS_ASSUME_NONNULL_END

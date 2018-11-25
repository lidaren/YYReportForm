# YYReportForm
A report form on iOS widge use Object-C

# 说明
iOS 表格控件，支持多级表头，支持锁定双向表头

# 效果图
![image](https://github.com/lidaren/YYReportForm/blob/master/YYReportForm.gif)

# 数据结构
/** 这是一个用来画多层表格的父类
 *  ******************  使用说明  ********************
 */
/*
 
 ****** 以下分不同表头 ********
 
 1、单层表头
 * 直接从左到右排就行了
 - (NSArray *)formHeaderData{<br>
 return @[@"地市",@"当日转化量",@"当日转化率",@"当月转化量",@"当月转化率",@"6月拍照客户累计转化量（期末）",@"6月拍照客户累计转化率（期末）"];<br>
 }<br>
 <br>
 2、双层表头<br>
 * 需要按照下面配置<br>
 - (NSArray *)formHeaderData{<br>
 return @[@"地市",@[@{@"layer":@(2),          // 2 : 两层表头<br>
        @"key0.0":@"日办理情况",   // 第一层表头<br>
        @"key1.0":@"红包购机",    // 第二层表头 第1列<br>
        @"key1.1":@"特惠购机",    // 第二层表头 第2列<br>
        @"key1.2":@"明星购机",    // 第二层表头 第3列<br>
        @"key1.3":@"信用购机",    // 第二层表头 第4列<br>
        @"key1.4":@"其他购机"     // 第二层表头 第5列<br>
       },@{@"key0.0":NSStringFromCGRect(CGRectMake(0, 0, 400.0, 30.0)),   // X, Y, Width, Height 第一层表头 (需要计算)
           @"key1.0":NSStringFromCGRect(CGRectMake(0, 30.0, 80.0, 60.0)),     // X, Y, Width, Height 第2层表头
           @"key1.1":NSStringFromCGRect(CGRectMake(80.0, 30.0, 80.0, 60.0)),
           @"key1.2":NSStringFromCGRect(CGRectMake(160, 30.0, 80.0, 60.0)),
           @"key1.3":NSStringFromCGRect(CGRectMake(240.0, 30.0, 80.0, 60.0)),
           @"key1.4":NSStringFromCGRect(CGRectMake(320.0, 30.0, 80.0,60.0))},
             @{@"key0.0":@[@(5),@(0),@(1)], // 第一个参数 宽度占5份   第二个x轴起点为0  第三个为第一层
               @"key1.0":@[@(1),@(0),@(2)], // 第一个参数 宽度占5分之1份   第二个x轴起点为0  第三个为第2层
               @"key1.1":@[@(1),@(1),@(2)], // 第一个参数 宽度占5分之1份   第二个x轴起点为1  第三个为第2层
               @"key1.2":@[@(1),@(2),@(2)], // 第一个参数 宽度占5分之1份   第二个x轴起点为2  第三个为第2层
               @"key1.3":@[@(1),@(3),@(2)], // 第一个参数 宽度占5分之1份   第二个x轴起点为3  第三个为第2层
               @"key1.4":@[@(1),@(4),@(2)]}],// 第一个参数 宽度占5分之1份   第二个x轴起点为4  第三个为第2层
                 @[@{@"layer":@(2),
                   @"key0.0":@"月办理情况",
                   @"key1.0":@"红包购机",
                   @"key1.1":@"特惠购机",
                   @"key1.2":@"明细购机",
                   @"key1.3":@"信用购机",
                   @"key1.4":@"其他购机"
                 },@{@"key0.0":NSStringFromCGRect(CGRectMake(0, 0, 400.0, 30.0)),
                     @"key1.0":NSStringFromCGRect(CGRectMake(0, 30.0, 80.0, 50.0)),
                     @"key1.1":NSStringFromCGRect(CGRectMake(80.0, 30.0, 80.0, 50.0)),
                     @"key1.2":NSStringFromCGRect(CGRectMake(160, 30.0, 80.0, 50.0)),
                     @"key1.3":NSStringFromCGRect(CGRectMake(240.0, 30.0, 80.0, 50.0)),
                     @"key1.4":NSStringFromCGRect(CGRectMake(320.0, 30.0, 80.0,50.0))},
                       @{@"key0.0":@[@(5),@(0),@(1)],
                         @"key1.0":@[@(1),@(0),@(2)],
                         @"key1.1":@[@(1),@(1),@(2)],
                         @"key1.2":@[@(1),@(2),@(2)],
                         @"key1.3":@[@(1),@(3),@(2)],
                         @"key1.4":@[@(1),@(4),@(2)]}]];
}
 */

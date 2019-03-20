//
//  UIImage+Compress.h
//  NCZhxy
//
//  Created by stoneli on 2018/12/18.
//  Copyright © 2018年 gxz. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Compress)
/**
 指定大小，返回压缩后的数据
 @param maxSize 限制大小,单位KB
 @return 最合适的大小
 */
- (NSData *)resetSizeWithMaxSize:(NSInteger)maxSize;
@end

NS_ASSUME_NONNULL_END

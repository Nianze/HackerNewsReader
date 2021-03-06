//
//  HNTextStorage.h
//  HackerNewsReader
//
//  Created by Ryan Nystrom on 4/26/15.
//  Copyright (c) 2015 Ryan Nystrom. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface HNTextStorage : NSObject

- (CGFloat)heightForAttributedString:(NSAttributedString *)attributedString width:(CGFloat)width;

- (id)renderedContentForAttributedString:(NSAttributedString *)attributedString width:(CGFloat)width;

- (NSDictionary *)attributesForAttributedString:(NSAttributedString *)attributedString width:(CGFloat)width point:(CGPoint)point;

@end

NS_ASSUME_NONNULL_END

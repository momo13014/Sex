//
//  RequestService.h
//  Sex
//
//  Created by Shendong on 16/9/28.
//  Copyright © 2016年 Shendong. All rights reserved.
//

#import <Foundation/Foundation.h>



extern NSString *const KQuerylunbo;
extern NSString *const KSearch;

@class RACSignal;
@interface RequestService : NSObject

- (RACSignal *)requretWithUrl:(NSString *)url withParameters:(NSDictionary *)paramters;

- (RACSignal *)testRequest;

@end

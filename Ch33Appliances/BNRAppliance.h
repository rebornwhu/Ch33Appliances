//
//  BNRAppliance.h
//  Ch33Appliances
//
//  Created by Xiao Lu on 4/11/15.
//  Copyright (c) 2015 Xiao Lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRAppliance : NSObject

@property (nonatomic) NSString *productName;
@property (nonatomic) int voltage;

- (instancetype)initWithProductName:(NSString *)pn;

@end

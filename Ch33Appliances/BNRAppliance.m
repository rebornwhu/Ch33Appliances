//
//  BNRAppliance.m
//  Ch33Appliances
//
//  Created by Xiao Lu on 4/11/15.
//  Copyright (c) 2015 Xiao Lu. All rights reserved.
//

#import "BNRAppliance.h"

@implementation BNRAppliance

- (instancetype)init{
    return [self initWithProductName:@"Unknown"];
}

- (instancetype)initWithProductName:(NSString *)pn
{
    self = [super init];
    
    if (self) {
        _productName = [pn copy];
        _voltage = 120;
    }
    
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@: %d volts>", self.productName, self.voltage];
}

@end

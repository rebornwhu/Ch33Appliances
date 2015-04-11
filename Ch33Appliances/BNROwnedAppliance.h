//
//  BNROwnedAppliance.h
//  Ch33Appliances
//
//  Created by Xiao Lu on 4/11/15.
//  Copyright (c) 2015 Xiao Lu. All rights reserved.
//

#import "BNRAppliance.h"

@interface BNROwnedAppliance : BNRAppliance

@property (readonly) NSSet *ownerNames;
- (instancetype)initWithProductName:(NSString *)pn
                     firstOwnerName:(NSString *)n;
- (void)addOwnerName:(NSString *)n;
- (void)removeOwnerName:(NSString *)n;

@end

//
//  Product.h
//  Patterns_2_FactoryMethod
//
//  Created by Ильяс on 15.06.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject

@property (nonatomic, assign) int *price;
@property (nonatomic, strong) NSString *name;

-(NSInteger *)getTotalPrice:(int)sum;
-(void)saveObject;


@end

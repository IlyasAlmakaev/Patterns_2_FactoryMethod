//
//  Product.m
//  Patterns_2_FactoryMethod
//
//  Created by Ильяс on 15.06.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import "Product.h"

@implementation Product

-(NSInteger *)getTotalPrice:(int)sum {
    return self.price + sum;
}

-(void)saveObject {
    NSLog(@"I am saving an object in to product database");
}

@end

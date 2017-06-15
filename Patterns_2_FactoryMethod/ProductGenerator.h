//
//  ProductGenerator.h
//  Patterns_2_FactoryMethod
//
//  Created by Ильяс on 15.06.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Product.h"

@interface ProductGenerator : NSObject

-(Product *)getProduct:(int)price;

@end

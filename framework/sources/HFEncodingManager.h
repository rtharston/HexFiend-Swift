//
//  HFEncodingManager.h
//  HexFiend_Framework
//
//  Created by Kevin Wojniak on 12/30/18.
//  Copyright © 2018 ridiculous_fish. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HFNSStringEncoding.h"

@interface HFEncodingManager : NSObject

+ (instancetype)shared;

@property (readonly) NSArray<HFNSStringEncoding *> *systemEncodings;

@end
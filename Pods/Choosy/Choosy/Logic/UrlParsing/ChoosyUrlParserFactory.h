//
//  ChoosyUrlParserFactory.h
//  ChoosyDemo
//
//  Created by Sasha Novosad on 5/2/14.
//  Copyright (c) 2014 Substantial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ChoosyUrlParser.h"

@interface ChoosyUrlParserFactory : NSObject

+ (id<ChoosyUrlParser>)parserForUrl:(NSURL *)url;

@end

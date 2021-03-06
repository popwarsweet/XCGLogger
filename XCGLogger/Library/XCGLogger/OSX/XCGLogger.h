//
//  XCGLogger.h
//  XCGLogger: https://github.com/DaveWoodCom/XCGLogger
//
//  Created by Dave Wood on 2014-06-06.
//  Copyright (c) 2014 Dave Wood, Cerebral Gardens.
//  Some rights reserved: https://github.com/DaveWoodCom/XCGLogger/blob/master/LICENSE.txt
//

#import <Cocoa/Cocoa.h>

#ifdef __OBJC__
#define XCGLogva(level, message) [XCGLogWrapper log:level functionName: @(__PRETTY_FUNCTION__) fileName: @__FILE__ lineNumber: __LINE__ logMessage: message ]
#define XCGLog(level, ...) XCGLogva(level, ([NSString stringWithFormat: __VA_ARGS__ ]) )
#endif

//! Project version number for XCGLogger.
FOUNDATION_EXPORT double XCGLoggerVersionNumber;

//! Project version string for XCGLogger.
FOUNDATION_EXPORT const unsigned char XCGLoggerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <XCGLogger/PublicHeader.h>



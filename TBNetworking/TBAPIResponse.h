//
//  TBAPIResponse.h
//  TBNetworking
//
//  Created by DangGu on 15/7/30.
//  Copyright (c) 2015年 Teambition. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TBAPIBaseManager;

typedef NS_ENUM(NSUInteger, TBAPIResponseStatus) {
    TBAPIResponseStatusSuccess,
    TBAPIResponseStatusErrorTimeout,
    TBAPIResponseStatusNoNetwork
};

@interface TBAPIResponse : NSObject

@property (nonatomic, assign, readonly) TBAPIResponseStatus status;
@property (nonatomic, assign, readonly) NSInteger statusCode;
@property (nonatomic, copy, readonly) id responseObject;
@property (nonatomic, strong, readonly) TBAPIBaseManager *request;
@property (nonatomic, assign, readonly) NSInteger requestID;
@property (nonatomic, assign, readonly) BOOL isCache;

- (instancetype)initWithRequest:(TBAPIBaseManager *)request requestID:(NSInteger)requestID responseObject:(id)responseObject statusCode:(NSInteger)statusCode;

- (instancetype)initWithRequest:(TBAPIBaseManager *)request requestID:(NSInteger)requestID responseObject:(id)responseObject statusCode:(NSInteger)statusCode error:(NSError *)error;

@end
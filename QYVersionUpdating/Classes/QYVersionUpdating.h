//
//  QYVersionUpdating.h
//  QYVersionUpdating
//
//  Created by Dxc_iOS on 2018/6/12.
//  Copyright © 2018年 代星创. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QYVersionUpdating : NSObject
/**
 VersionUpdatingBlock
 */
typedef void(^VersionUpdatingBlock)(NSString *currentVersion,NSString *appstoreVersion, NSString *openUrl,BOOL isUpdate);

/**
 检测更新版本：APPID、BundleId，随便传一个 或者都传nil

 */
+(void)qy_versionUpdatingWithAPPID:(NSString *)appId withBundleId:(NSString *)bundelId block:(VersionUpdatingBlock)block;
@end

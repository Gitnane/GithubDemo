//
//  AppDelegate.h
//  HelloBaiduMap
//
//  Created by 海南福泽科技  on 17/3/17.
//  Copyright © 2017年 abc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
//初始化BMKMapManager
//在您的AppDelegate.h文件中添加BMKMapManager的定义

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *window;
    UINavigationController *navigationController;
    BMKMapManager *_mapManager;
}
@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


//
//  KKNotificationCenter.h
//  KKNotificationCenter
//
//  Created by TaiHsinLee on 2019/2/10.
//  Copyright © 2019 TaiHsinLee. All rights reserved.
//

@interface KKNotificationCenter: NSObject
{
    NSMutableArray * selectorArray;
}

+ (KKNotificationCenter *) defaultCenter;

- (void)addObserver: (id)observer selector: (SEL)aSelector name: (NSString *)aName object: (id)anObject;

- (void)postNotification: (NSNotification *)notification;

- (void)removeObserver: (id)observer;

@end

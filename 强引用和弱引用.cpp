//强引用和弱引用
 	__strong:	强引用，持有对象； //默认
 	__weak：		弱引用，不持有对象；

 1、强引用可以释放对象，但弱引用不可以，
 	因为弱引用不持有对象，当弱引用指向一个强引用所持有的对象时，当强引用将对象释放掉后，弱引用会自动的被赋值为nil，即弱引用会自动的指向nil。
 	代码说明：
//
//  main.m
//  ARC中的强引用和弱引用
//
//  Created by on 15/3/31.
//  Copyright (c) 2015年 apple. All rights reserved.
//
 
#import <Foundation/Foundation.h>
 
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        id __weak obj0 = nil;
        if (YES) {
            id obj1 = [[NSObject alloc] init];
            obj0 = obj1;
            NSLog(@"obj0: ％@", obj0);
        }
        NSLog(@"obj0: ％@", obj0);
    }
    return 0;
}
 
/*
 *  输出结果
 *  obj0: <NSObject: 0x1003066c0>
 *  obj0: (null)
 *
 *  因为obj1生成的默认的为强引用(__strong)，在超出if的作用域之后，obj1所持有的对象被释放，
 *  obj0为弱引用，所以obj0不持有对象，在obj1对象释放后，obj0自动的被赋值为nil
 *  弱引用的特性是，不持有对象，即便是写成id __weak obj1 = [[NSObject alloc] init];
 *  此代码系统会给与警告，因为这里obj1被声明成弱引用，那么在赋值之后，alloc出来的对象会被立即释放。
 */

 2、一些集合类不应该增加其元素的引用，因为这会引起对象无法释放。
 	在这种情况下，我们需要使用弱引用（不用担心，内置的集合类 就是这么干的），使用 __weak 关键字。NSHashTable 就是一个例子。
 	当被引用的对象消失时，弱引用会自动设置为 nil。Cocoa 的 Notification Center 就是这么一个例子，虽然这已经超出纯 Objective-C 的语言范畴。
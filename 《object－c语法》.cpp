《object－c语法》
一、语法结构
#import <Foundation/Foundation.h>

@interface SampleClass:NSObject
- (void)sampleMethod;
@end

@implementation SampleClass

- (void)sampleMethod{
   NSLog(@"Hello, World! 
");
}

@end

int main()
{
   /* my first program in Objective-C */
   SampleClass *sampleClass = [[SampleClass alloc]init];
   [sampleClass sampleMethod];
   return 0;
}

 1、#import <Foundation/Foundation.h>是一个预处理命令，它告诉Objective-C语言编译器去实际编译之前包含Foundation.h文件。

 2、@interface SampleClass:NSObject 显示了如何创建一个接口。它继承NSObject，这是所有对象的基类。

 3、- (void)sampleMethod; shows how to declare a method.

 4、@end 标志着接口的结束。

 5、@implementation SampleClass 显示如何实现接口SampleClass

 6、- (void)sampleMethod{} 显示方法 sampleMethod 的实现.

 7、@end标志着实现的结束。

 8、int main() 是主函数在程序开始执行.

 9、/*...*/ 由编译器将被忽略，它已经把在程序中添加额外的注释。因此，这样的行称为程序中的注释。

 10、NSLog(...) 另外一个函数可以在Objective-C会打印消息 “Hello, World!” 要显示在屏幕上。

 11、return 0; 终止main()函数返回值为0。
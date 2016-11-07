OjbectC基础教程
//
1、@
双引号前加@符号表示字符串采用Cocoa的NSString来处理。
2、 BOOL
布尔值只占用8个二进制数。YES NO

//第6章 Xcode
1、一次性修改引用：
	a、选定符号：局部变量或参数
	b、Editor->Edit all in Scope (control+command+E)
	c、输入目标名称

2、快捷操作技巧
	//鼠标
	control－F：向右 （Forward）
	control－B：向左 （Backward）
	control－P：前一行 （Previous）
	control－N：下一行 （Next）
	control－A：行首  （command＋<-)
	control－E：行尾	（command＋->)
	control－T：转置光标两边符号
	control－D：删除光标右边字符 （Delete）
	control－K：删除光标后面字符 （Kill）
	control－L：将光标置于正中
	//折叠
	Editor->Code Folding 
	option＋command＋<-  :折叠
	option＋command＋->	:折叠取消


//8章
	//－－NS开头的类
1、NSString 处理字符串的类：双引号前加@
	＋：类方法：声明前面多一个 ＋ 号
	a、这个方法属于类对象（不是实例对象），并且通常用于创建新的实例。 也叫工厂方法。
	b、访问全局类数据
	－：实例方法，声明前面多一个 － 号 
2、NSArray 数组
	3种方法遍历数组：
	a、索引
	b、使用NSEnumerator
	c、快速枚举
3、NSDictionary 字典
	//NSArray和NSDictionary只能存储对象，不能直接存储任何基本类型的数据如int、float或struct
4、NSNumber  包装基本数据类型
	＋（NSNuber ＊）numberWithChar：（char）value；
5、NSValue	包装任意值
	a、NSNumber是NSValue的子类	
	b、生成描述这个数据类型的字符串，采用@encode编译器指令
6、NSNull
	a、集合中不能存放nil值，采用NSNull来表示空内容
	b、＋（NsNull ＊） null；
7、NSMutableArray 可变数组
8、NSEnumerator 枚举器

//9章 内存管理
1、Java或脚本语言无需考虑内存回收问题，他们的内存管理是自动进行的。
2、 －（id）autorelease； 自动释放池
	－retain
	－release
//10章 对象初始化
//13章 协议
1、正式协议 formal protocol：是一额命名的方法列表，要求显示采用协议
	a、声明协议： @protocal NSCopying
	b、声明协议方法列表：
	c、采用协议：@interface Car：NSObject <NSCopying> 尖括号

//14章 AppKit
1、Foundation Kit ：文本输出发送到控制台进行通信
2、Application Kit：界面点击和处理信息

//15章 文件加载和保存
1、属性列表 plist ：包含Cocoa知道如何操作的一组对象
	NSarray，NSDictionary，NSString，NSNumber
	NSDate：日期和时间的基础类
	NSData：

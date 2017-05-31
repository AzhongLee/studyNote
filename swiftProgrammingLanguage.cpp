//swift 初见
1、	let：声明常量
	var：声明变量
	func：声明函数

2、	self	：区分实例变量
	override：继承父类方法标记

3、	处理变量的可选值时,你可以在操作(比如方法、属性和子脚本)之前加 ? 。
	如果 ? 之前的值是 nil , ? 后面 的东西都会被忽略,并且整个表达式返回 nil 。否则, ? 之后的东西都会被运行。
	let optionalSquare: Square? = Square(sideLength: 2.5, name: "optional square")
	let sideLength = optionalSquare?.sideLength

4、	enum：枚举
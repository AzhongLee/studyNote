#Homebrew


###**简介**
macOS不可或缺的套件管理器，Homebrew 使 macOS 更完美。使用 gem 来安装 gems、用 brew 来搞定那些依赖包。

官网 <http://brew.sh/index_zh-cn.html>

linux系统存在软件包依赖，各自基础上的系统自带了解决方案：

| 系统 | 套件管理器  | 
| ------------- |:-------------|
| Red hat | yum | 
| Ubuntu | apt-get |
| macOS | HomeBrew | 

###**安装**
```
ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
```
###**使用**
搜索软件： 

```
brew search AppName
```

安装软件：

```
brew install AppName
```


卸载软件：

```
brew remove AppName
```

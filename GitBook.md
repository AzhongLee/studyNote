#GitBook

##**简介**
GitBook是一个基于 Node.js 的命令行工具，可使用 Github/Git 和 Markdown 来制作精美的电子书，GitBook 并非关于 Git 的教程。
GitBook支持输出多种文档格式：

- 静态站点：GitBook默认输出该种格式，生成的静态站点可直接托管搭载Github Pages服务上；
- PDF：需要安装gitbook-pdf依赖；
- eBook：需要安装ebook-convert；
- 单HTML网页：支持将内容输出为单页的HTML，不过一般用在将电子书格式转换为PDF或eBook的中间过程；
- JSON：一般用于电子书的调试或元数据提取。

***使用GitBook制作电子书，必备两个文件：README.md和SUMMARY.md***

##**安装**
gitbook-cli <https://github.com/GitbookIO/gitbook-cli>

	$ npm install -g gitbook-cli
	
查看版本

	$ gitbook -V
	
##**使用**
###1、创建图书结构
**1.1、创建一个文件夹，例如命名：MyBook**

	$ mkdir mybook
	$ cd mybook
	
**1.2、创建两个必备文件：README.md 和 SUMMARY.md**

- README.md

   这个文件相当于一本Gitbook的简介。以下命令生成一个空文件。
 
```
$ touch README.md
```

- SUMMARY.md

   这个文件是一本书的目录结构。
   
```
$ touch SUMMARY.md
$ vim SUMMARY.md
```
打开vim编辑器后，键入：

	*[简介](README.md)
	* [第一章](chapter1/README.md)
	 - [第一节](chapter1/section1.md)
	 - [第二节](chapter1/section2.md)
	* [第二章](chapter2/README.md)
	 - [第一节](chapter2/section1.md)
	 - [第二节](chapter2/section2.md)
	* [结束](end/README.md)

保存退出vim编辑器。

**1.3、初始化图书结构**
	
	$ gitbook init
	$ tree .
将在mybook目录下构建出对应的文件夹目录结构，使用tree命令可查看结构如下：

	.
	├── README.md
	├── SUMMARY.md
	├── chapter1
	│   ├── README.md
	│   ├── section1.md
	│   └── section2.md
	├── chapter2
	│   ├── README.md
	│   ├── section1.md
	│   └── section2.md
	└── end
	    └── README.md

###2、生成图书
**2.1 输出为静态网站html**

***2.1.1 生成到当前目录预览***
	
	$ gitbook serve .
	
- 在当前图书目录下会多出一个命名为_book的文件目录。这个目录就包含了生成的静态网站的内容。
- 在浏览器中键入<http://localhost:4000>即可以浏览当前网页结果。

***2.1.2 生成到指定目录***

	$ mkdir /tmp/mybook
	$ gitbook build --output=/tmp/mybook
	
**2.2 输出为PDF文件**

***2.2.1 安装ebook-convert组件(如果存在，则跳过这步)***

浏览器链接：<http://calibre-ebook.com/download_osx>

选择：Download calibre，下载完成后安装calibre-2.71.0.dmg。其中2.71.0是版本号，根据实际情况选择。
安装完后，键入：
	
	ln -s /Applications/calibre.app/Contents/MacOS/ebook-convert /usr/local/bin
ln -s：对源文件建立符号连接，而非硬连接。

***2.2.2 生成pdf文件***


	$ gitbook pdf . myname.pdf
会在当前目录下生成文件myname.pdf。
	
###3、GitBook Editor
使用 gitbook editor 工具制作电子书。
<https://www.gitbook.com/editor/>
	
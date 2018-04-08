## 项目说明
本项目在Win10下使用VS2017编译的nginx+rtmp module项目, nginx版本为1.12;  
本项目既可以使用VS2017直接打开进行项目编译，也可以使用VS的nmake -f build/Makefile通过命令行进行编译，无需安装其他编译环境。
### 目录说明
* include：该目录下存放的是openssl库的头文件，对应的静态库存放于libs目录下；
* publish：该目录下存放的是nginx运行的基本目录结构以及简单的配置文件；
* src：该目录下存放为nginx的实现代码；
* build：该目录下存放的是生成的Makefile文件以及公用头文件，该目录下各个子目录如果不使用nmake进行编译的话可以删除，使用nmake编译必须保留，否则会提示找不到目录的错误；

## 项目说明
本项目在Win10下使用VS2017编译的nginx+rtmp module项目, nginx版本为1.12;  
本项目既可以使用VS2017直接打开进行项目编译，也可以使用VS的nmake -f build/Makefile通过命令行进行编译，无需安装其他编译环境。
### 目录说明
* include：该目录下存放的是openssl库的头文件，对应的静态库存放于libs目录下；
* publish：该目录下存放的是nginx运行的基本目录结构以及简单的配置文件；
* src：该目录下存放为nginx的实现代码；
* build：该目录下存放的是生成的Makefile文件以及公用头文件，该目录下各个子目录如果不使用nmake进行编译的话可以删除，使用nmake编译必须保留，否则会提示找不到目录的错误；

## 注意事项
为了能在Windows下更友好的编译，本项目对auto目录下的配置文件进行了修改，修改项如下：
* 去掉了manage文档模块的生成，因为需要用到sed这个windows不支持的命令；
* 添加了FILE* __cdecl __iob_func(unsigned i)函数的自动生成，以支持VS2015后的编译器，不需要手动修改；
* 修改auto\cc\msvc文件的17行，固定NGX_MSVC_VER版本对应VS2017的19.13，以支持VS2017的编译，否则在进行configure的时候会报“auto/cc/msvc: line 117: [: : integer expression expected”的错误；
* 修改openssl的生成配置，生成的Makefile文件符合本项目的目录设置；
* 项目目录下的build.txt中存放着两个configure命令示例，进行配置时可进行参考；

## 联系我们
car-eye 开源官方网址：www.car-eye.cn;  
car-eye开源源码下载网址：https://github.com/Car-eye-team  
有关car-eye 问题咨询可以加QQ群590411159。

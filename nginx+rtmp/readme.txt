20180319 
介绍官方wiki:https://github.com/arut/nginx-rtmp-module#readme
Nginx rtmp 功能特点
1.   支持音视频直播
2.   支持flv/mp4视频格式，输入可以是文件或者HTTP流
3.   支持两种流的分发模式 pushand pull
4.   可以将直播流录制成flv文件
5.   H264/AAC编码
6.   支持在线转码 Onlinetranscoding with FFmpeg
7.   支持HLS (HTTP LiveStreaming)需要 libavformat (>= 8. 53.31.100) from ffmpeg (ffmpeg.org)
8.   HTTPcallbacks (publish/play/record/update etc)
9.   支持外部程序(exec)
10.  HTTPcontrol module for recording audio/video and dropping clients
11.  先进内存控制技术，可以在使用少量内存的情况下完成流畅的直播功能。
12.  可以和以下协同工作。FMS server（Wirecast, FMS, Wowza,）Player（JWPlayer, FlowPlayer, StrobeMediaPlayback,）外部程序（ffmpeg,avconv,rtmpdump,flvstreamer ）
13.  Statistics in XML/XSL in machine- & human- readable form
14.  支持跨平台 Linux/FreeBSD/MacOS


下面搭建nginx+rtmp的步骤，使用centos 6.5 x64机器，提供的程序包在/opt/解压即可。
zlib-1.2.11.tar.gz
    http://www.zlib.net/zlib-1.2.11.tar.gz

openssl-1.0.2n.tar.gz
    https://www.openssl.org/source/openssl-1.0.2n.tar.gz

pcre-8.41.tar.gz
    https://sourceforge.net/projects/pcre/files/pcre/8.41/pcre-8.41.tar.gz/download

nginx-rtmp-module-1.2.1.tar.gz
    https://codeload.github.com/arut/nginx-rtmp-module/tar.gz/v1.2.1

nginx-1.12.2.tar.gz
    http://nginx.org/download/nginx-1.12.2.tar.gz


编译nginx
./configure --prefix=/opt/nginx --add-module=../nginx-rtmp-module-1.2.1  --with-pcre=../pcre-8.41  --with-openssl=../openssl-1.0.2n --with-zlib=../zlib-1.2.11 --with-http_stub_status_module


安装nginx，到/opt/nginx目录下
make && make install

启动
./sbin/nginx

查看nginx编译选项
nginx -V

修改nginx.con,重新加载配置文件
sudo ./sbin/nginx -s reload


直播测试使用obs推流
rtmp://192.168.12.178/live/livestream

hls请求
http://192.168.12.178/live/livestream/index.m3u8

vlc请求
rtmp://192.168.12.178/live/livestream


点播测试
rtmp://192.168.12.178/vod/test.flv


访问ngixn负载状态
http://192.168.12.178/nginx_status


访问rtmp链接状态
http://192.168.12.178/stat


jwplayer 直播rtmp
http://192.168.12.178/index.html


rtmp 例子
香港卫视
rtmp://live.hkstv.hk.lxdns.com/live/hks
直播rtmp
file: "rtmp://192.168.12.178/live/livestream"
点播rtmp
file: "rtmp://192.168.12.178/vod/test.flv"

























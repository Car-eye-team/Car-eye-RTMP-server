# Car-eye-RTMP-server

## 服务器功能
Car-eye-RTMP-server 是基于Nginx开发的一个开源服务器，功能特点
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


## 编译nginx
./configure --prefix=/opt/nginx --add-module=../nginx-rtmp-module  --with-pcre=../pcre  --with-openssl=../openssl --with-zlib=../zlib --with-http_stub_status_module

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

# 联系我们
car-eye 开源官方网址：www.car-eye.cn      

car-eye 流媒体平台网址：www.liveoss.com    

car-eye 技术官方邮箱: support@car-eye.cn   

car-eye技术交流QQ群: 590411159      

![](https://github.com/Car-eye-team/Car-eye-server/blob/master/car-server/doc/QQ.jpg)  


CopyRight©  car-eye 开源团队 2018

# PlatinumMedia(DLNA服务端)
This is a Project for me to study DLNA Media Server Based on Platinum SDK.

#### Details
The Platinum UPnP SDK is a cross-platform C++ library that makes it easy to build DLNA Compliant Devices.
It compiles and runs on Windows, Mac OSX, Linux, iPhone, Android and more.

该项目基于C++开源库Platinum SDK(铂金)，用于学习DLNA服务协议，Platinum又依赖于C++开源库Neptune(海王星)。
源码本身就适配了Android系统，所以无需对源码进行修改就可以编译成功，包括Log打印也完美。

DLNA(数字生活网络联盟)服务端(如电视，机顶盒)通常会实现两种服务：
* Digital Media Server（DMS）数字媒体服务器: 提供了媒体档案的获取、录制、储存以及作为源头的装置。
* Digital Media Renderer（DMR）数字媒体渲染器: 可接收并播放从DMC传过来的多媒体：图片，音乐，视频

而手机或者电脑可以作为客户端访问服务或者推送媒体/控制播放器，称为Digital Media Controller（DMC）数字媒体控制器:
作为遥控装置使用，可寻找DMS上的多媒体档案，并指定可播放该多媒体档案的DMR进行播放或是控制多媒体档案上下传到DMS的装置。

* Platinum UPnP SDK: https://github.com/plutinosoft/Platinum
* Neptune C++ Runtime: https://github.com/plutinosoft/Neptune
* Compile With Neptune-1.2.3 and Platinum-1.3.0
* Build the native code with Android NDK and cmake

#### Libraries
* Glide: https://github.com/bumptech/glide
* ButterKnife: https://github.com/JakeWharton/butterknife
* EventBus: https://github.com/greenrobot/EventBus
* ExoPlayer: https://github.com/google/ExoPlayer
* ExoMedia: https://github.com/brianwernick/ExoMedia
* AndroidUtilCode: https://github.com/Blankj/AndroidUtilCode
* PhotoView: https://github.com/chrisbanes/PhotoView

#### Other Projects
* https://github.com/geniusgithub/MediaRender
* https://github.com/RiverrunNetwork/TV_DLNA_Server


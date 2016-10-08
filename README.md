# HK_DEMO

之前用海康摄像头做的一个项目，把部分功能删掉了。仅保留了人脸识别的部分，用的是opencv的Haar+Adaboost方法，都是现成的分类器。需要的朋友可以参考一下。
以下几点需要注意：

1. Props文件夹有项目属性表，需要把目录改成本机的海康SDK和OpenCV目录；
2. HK_Demo_main.cpp 文件有几个地方需要做修改：
  * `line 57 hProcess_people = (HANDLE)_beginthreadex(NULL, 0, &process_people, NULL, 0, &tidProcess_people);`  
  人脸识别线程
  * `line 216 lUserID = NET_DVR_Login_V30("192.168.1.1", 8000, "admin", "12345", &struDeviceInfo);`  
  摄像头的IP和用户名密码
  * `line 157 if (!PlayM4_OpenStream(nPort, pBuffer, dwBufSize, 1024 * 1024))`  
  如果画质过高，有可能内存溢出，需要修改
3. 大概就是这些，代码写的比较乱，勿喷( - -)/

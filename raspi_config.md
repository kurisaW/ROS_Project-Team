#### 1、[【树莓派4B或CM4】ubuntu 18.04 CSI摄像头](https://blog.csdn.net/weixin_41756645/article/details/124461772?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522166616850016782412582556%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=166616850016782412582556&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-1-124461772-null-null.142^v59^new_blog_pos_by_title,201^v3^control_1&utm_term=ubuntu18.04%E5%A6%82%E4%BD%95%E7%9F%A5%E9%81%93%E6%A0%91%E8%8E%93%E6%B4%BE%E6%91%84%E5%83%8F%E5%A4%B4%E8%AE%BE%E5%A4%87%E5%90%8D%E7%A7%B0&spm=1018.2226.3001.4187)



#### 2、[树莓派3-摄像头-视频软件Motion的安装使用](https://www.ncnynl.com/archives/201607/268.html)

![image-20221027152909977](https://raw.githubusercontent.com/kurisaW/picbed/main/img/202210271529228.png)

移动端查看命令行：http://树莓派ip:8081

#### 3、[树莓派4B motion摄像头（解决卡顿）相关配置](https://blog.csdn.net/qq_18471449/article/details/104119071)

启动：sudo motion

关闭：sudo killall -TERM motion

重启服务：sudo service motion restart

#### 4、[树莓派视频流,详细步骤使用Motion搭建网络摄像头服务器](https://www.labno3.com/2021/08/10/build-a-raspberry-pi-webcam-server-in-minutes/)




#### 5、[（学习笔记）树莓派4B使用usb转串口通讯模块](https://blog.csdn.net/m0_50679156/article/details/115799847)
```
sudo minicom -D /dev/ttyUSB0 -b 115200 
```



#### 6、[ros包的创建使用方法](http://wiki.ros.org/ROS/Tutorials/CreatingPackage)

![image-20221027181808585](https://raw.githubusercontent.com/kurisaW/picbed/main/img/202210271818655.png)

![image-20221027181821528](https://raw.githubusercontent.com/kurisaW/picbed/main/img/202210271818714.png)

#### 7、[ubuntu ros话题通信(rospy)](https://blog.csdn.net/yiwang1670831/article/details/125431750?ops_request_misc=&request_id=&biz_id=102&utm_term=ubuntu%E4%BD%BF%E7%94%A8ROS%E8%BF%9B%E8%A1%8CTopic%E9%80%9A%E4%BF%A1&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-2-125431750.142^v59^new_blog_pos_by_title,201^v3^control_1&spm=1018.2226.3001.4187)



#### 8、[树莓派4B安装Ubuntu18.04 + vnc远程桌面](https://blog.csdn.net/m0_52364631/article/details/112439570?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522166711697016782412584464%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=166711697016782412584464&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~pc_rank_34-4-112439570-null-null.142^v62^pc_new_rank,201^v3^control_1,213^v1^control&utm_term=%E6%A0%91%E8%8E%93%E6%B4%BE%E5%9C%A8ubuntu%E4%BD%BF%E7%94%A8vnc&spm=1018.2226.3001.4187)



#### 9、VNC使用

**1、vi ~/.vnc/xstartup（需要提前下好gnorm关键桌面组件）**

```
#!/bin/sh
#Uncomment the following two lines for normal desktop:
#unset SESSION_MANAGER
#exec /etc/X11/xinit/xinitrc

export XKL_XMODMAP_DISABLE=1
unset SESSION_MANAGER
unset DBUS_SESSION_BUS_ADDRESS

[ -x /etc/vnc/xstartup ] && exec /etc/vnc/xstartup
[ -r $HOME/.Xresources ] && xrdb $HOME/.Xresources
xsetroot -solid grey
vncconfig -iconic &

x-terminal-emulator -geometry 80x24+10+10 -ls -title "$VNCDESKTOP Desktop" &
x-window-manager &

#mate-session &

gnome-panel &
gnmoe-settings-daemon &
metacity &
nautilus &
gnome-terminal &
```

**2、sudo chmod 777 ~/.vnc/xstartup**

**3、vncserver -kill :2**

**4、vncserver -geometry 1920x1080**

#### 10、ros包使用事项

编译完成后需要将编译生成的相关文件加入环境变量 ，便于ROS环境可以识别执行命令如下所示，该命令是临时给终端加入环境变量，意味着您如果重新打开新的终端，也需要重新执行如下命令。

`cd  catkin_ws`

为了重新打开终端后，永久不用执行上述添加环境变量的命令，可以进行如下操作。
`source devel/setup.bash`
`source ~/.bashrc`

---

#### 树莓派引脚

![image-20221027181431264](https://raw.githubusercontent.com/kurisaW/picbed/main/img/202210271814433.png)

![image-20221027181503103](https://raw.githubusercontent.com/kurisaW/picbed/main/img/202210271815244.png)

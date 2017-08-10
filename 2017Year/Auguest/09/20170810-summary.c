/***********编译内核出错总结******************/
(1)make menuconfig出错
	<1>当出现没有找到curses.h文件的时候，是缺少curses库，功能是设置光标的位置和终端屏幕上显示的字符样式.
	解决：		apt-get install libncurses5-dev
	<2>当出现"cripts/sign-file.c:25:30: fatal error: openssl/opensslv.h: 没有那个文件或目录"时，缺少库
	解决：		apt-get install libssl-dev
(2)运行脚本的时候出现build.sh: 1: build.sh: make-kpkg: not found 时是缺少kernel-package包
	解决：sudo apt-get install kernel-package

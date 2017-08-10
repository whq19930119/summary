/***********编译内核出错总结******************/
20170809:
(1)make menuconfig出错
	<1>当出现没有找到curses.h文件的时候，是缺少curses库，功能是设置光标的位置和终端屏幕上显示的字符样式.
	解决：		apt-get install libncurses5-dev
	<2>当出现"cripts/sign-file.c:25:30: fatal error: openssl/opensslv.h: 没有那个文件或目录"时，缺少库
	解决：		apt-get install libssl-dev
(2)运行脚本的时候出现build.sh: 1: build.sh: make-kpkg: not found 时是缺少kernel-package包
	解决：sudo apt-get install kernel-package
(3).deb安装包生成命令
	make-kpkg -j16 --appen-to-version -txvh-secgmac --revision 38.0 --initrd kernel_image
	这个命令会在上一级目录生成一个.deb安装包
	如果是普通用户，可以在make-kpkg前边加上"fakeroot"来运行这个命令
	/***********命令分析*************/
	--appen-to-version  :	内核版本附加信息 (-axvh-secgmac)
	--revision          :	deb文件的版本信息，只影响文件名字
	--initrd 			:	生成initramfs
		"initramfs 是一个 gzip 压缩的 cpio 文件系统打包，如果遇到什么紧急情况需要处理的时候，你可以建立一个临时目录，把 initramfs 解压之后，直接 cpio -idv 解压出来，改之后再用 cpio 和 gzip 封上即可。虽然大家都喜欢用 tar 打包，但掌握点 cpio 在关键时刻还是可以救命的"
	kernel_image 		:	内核和模块的安装包
	kernel_headers		:	生成内核头文件的安装包
	
20170810:
	(1) ls命令查看文件大小 
		-h 以KB MB GB形式显示文件大小
		-s 在文件名字前边显示文件大小，可以配合-h使用
		-t 根据修改时间来排列文件
		-n 显示uid gid的名字

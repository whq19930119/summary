/*****************************/
<1>枚举类型知识总结 
	enum name {
	  i,
	  j,
	  k
	};		/*若成员变量各自均有赋值，此时变量的值就是所赋的值；
   			  若变量均未赋值，此时第一个变量为“0”值，以后的变量会基于其前一个变量的值“+1”；
		  	  若第一个变量没有赋值，中间变量有赋值（j=5），那么i=0,j=5，k=6 */


<2>MODULE_DEVICE_TABLE(platform,xx_driver_ids);
	这条语句应用于热插拔设备驱动中
	参数：platform 			设备是什么类型，例如 USB/PCI
		  xx_driver_ids 	用于存储设备的信息设备表，最后一个元素必须是空，用于结束标识

<3>NAPI 机制简单了解
	不采用中断的方式读取数据，而是首先采用中断来唤醒数据接收，然后应用poll方法来轮询数据


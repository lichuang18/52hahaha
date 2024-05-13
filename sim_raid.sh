#/bin/bash



#    /usr/bin
	lsblk  bak_lsblk hidden_lsblk init_lsblk raid0_lsblk raid5_lsblk


开机自启隐藏所有nvme盘符，lsblk后删除第一列包含nvme相关的所有行


init， 

记得所有输出全部重定向到其他地方去

raid0组建, 盘数量, 文件系统类型，挂载点   看到一个盘符nvme0n1，所有对nvme0n1的操作全部转化为对md0的操作


raid5组建, 盘数量，文件系统类型，挂载点   看到一个盘符nvme0n1，所有对nvme0n1的操作全部转化为对md1的操作



		


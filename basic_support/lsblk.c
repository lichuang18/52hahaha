#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp, *fp2;
    char value, value2;

    // 打开文件
    fp = fopen("/root/raid_level", "r");
    fp2 = fopen("/root/mount_fs", "r");

    // 读取文件中的值
    fscanf(fp, "%c", &value);
    fscanf(fp2, "%c", &value2);
    // 关闭文件
    fclose(fp);
    fclose(fp2);

    // 检查读取的值是否为1
    if (value == '0') { //value为1，表示未初始化
        int ret = system("bak_lsblk |grep -v \"nvme\"");
        return 0;
    } else if(value == '1' && value2 == '0' ) {//value为2,表示RAID0组建成功，自动初始化完成

        char command[] = "bak_lsblk | grep -v \"nvme1n1\" | grep -v \"md\" | sed '/nvme/ s/^\\(\\([^[:space:]]\\+[[:space:]]\\+\\)\\{3\\}\\)[^[:space:]]\\+/\\1   42T/'";
        int ret = system(command);
	if (ret != 0) {
            //printf("Create RAID0 error!\n");
            return 1;
        }
	return 0;
    }else if(value == '1' && value2 == '1' ) {//value为2,表示RAID0组建成功，自动初始化完成
        FILE *fp;
        fp = fopen("/root/dir_mount", "r");
        if (fp == NULL) {
                //printf("locate dir erro。\n");
                return 1;
        }
        char cha[100];
        fscanf(fp, "%s", cha);
        fclose(fp);
        char command2[] = "bak_lsblk | grep -v \"nvme1n1\" | grep -v \"md\" | sed '/nvme/ s/^\\(\\([^[:space:]]\\+[[:space:]]\\+\\)\\{3\\}\\)[^[:space:]]\\+/\\1   42T/' | sed '/nvme/ s/$/\\";
        //printf("string1: %s\n",command2);
        //printf("string2: %s\n",cha);
        strcat(command2, cha);
        strcat(command2, "/'");
        //printf("string3: %s\n",command2);
        int ret = system(command2);
        if (ret != 0) {
            //printf("Create RAID0 error!\n");
            return 1;
        }
        return 0;
    }else if(value == '2' && value2 == '0' ) {//value为3,表示RAID5组建成功，自动初始化完成
					      //value2为0表示没挂载
        char command[] = "bak_lsblk | grep -v \"nvme1n1\" | grep -v \"md\" | sed '/nvme/ s/^\\(\\([^[:space:]]\\+[[:space:]]\\+\\)\\{3\\}\\)[^[:space:]]\\+/\\1   28T/'";
        
        int ret = system(command);
        if (ret != 0) {
            //printf("Create RAID5 error!\n");
            return 1;
        }
        return 0;
    }else if(value == '2' && value2 == '1' ) {//value为3,表示RAID5组建成功，自动初始化完成
					      //value1为1表示挂载
        FILE *fp;
        fp = fopen("/root/dir_mount", "r");
        char cha[100];
        fscanf(fp, "%s", cha);
        fclose(fp);
        char command2[] = "bak_lsblk | grep -v \"nvme1n1\" | grep -v \"md\" | sed '/nvme/ s/^\\(\\([^[:space:]]\\+[[:space:]]\\+\\)\\{3\\}\\)[^[:space:]]\\+/\\1   28T/' | sed '/nvme/ s/$/\\";
        strcat(command2, cha);
        strcat(command2, "/'");
        int ret = system(command2);
        return 0;
    }else{
        int ret = system("bak_lsblk |grep -v \"nvme\"");
    }
}


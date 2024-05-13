#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    // 调用Shell命令
    if (strcmp(argv[1], "-help") == 0 || strcmp(argv[1], "-h") == 0 || argc == 1){
	int ret = system("bak_mount -h");
    }
    int ret;

    if(argc >= 3){
	FILE *file = fopen("/root/dir_mount", "w");
    	if (file == NULL) {
	        //printf("locate fs fail!\n");
        	return 1;
    	}
    	fprintf(file, "%s", argv[2]);
	fclose(file);

	FILE *filea = fopen("/root/mount_fs", "w");
        if (filea == NULL) {
            //printf("locate fs fail!\n");
            return 1;
        }
        fprintf(filea, "1");
        fclose(filea);
    
    if (strcmp(argv[1], "/dev/nvme0n1") == 0){
    //if (strcmp(argv[1], "/dev/sdc") == 0){
	    char command[100];
        FILE *file2;
    	file2 = fopen("/root/raid_level", "r");
    	if (file2 == NULL) {
            //printf("locate raid level fail!\n");
            return 1;
        }
		int value;
		fscanf(file2, "%d", &value);
		fclose(file2);
		if(value == 1){
            sprintf(command, "bak_mount /dev/md0 %s", argv[2]);
        }else if(value == 2){
            sprintf(command, "bak_mount /dev/md5 %s", argv[2]);
        }
        ret = system(command);
    }else{
	    char command[100];
        sprintf(command, "mount %s %s", argv[1], argv[2]);
        ret = system(command);
    }
    }
/*
    ret = system("echo `umount /dev/md* 2>&1` > /dev/null");

    ret = system("echo `mdadm -S /dev/md* 2>&1` > /dev/null");
    if (ret != 0) {
        printf("RAID del/Stop fail! Maybe umount is useful!\n");
        return 1;
    }
    ret = system("echo `mdadm --zero-superblock /dev/sdc /dev/sdd 2>&1` > /dev/null");
    //ret = system("echo `mdadm --zero-superblock /dev/nvme0n1 /dev/nvme1n1 2>&1` > /dev/null");
    if (ret != 0) {
        printf("RAID clear fail!\n");
        return 1;
    }
    ret = system("echo `yes | mdadm /dev/md5 -C -v -l1 -n2 /dev/sdc /dev/sdd 2>&1` > /dev/null");
    //ret = system("echo `yes | mdadm /dev/md5 -C -v -l1 -n2 /dev/nvme0n1 /dev/nvme1n1 2>&1` > /dev/null");
    if (ret != 0) {
        printf("RAID create fail!\n");
        return 1;
    }else{
	printf("RAID5 have been created successfully\n");
    }
    ret 
    = system("echo `yes |mkfs -t ext4 /dev/md5  > /dev/null 2>&1` > /dev/null");
    //ret = system("echo `yes |mkfs -t ext4 /dev/md5  > /dev/null 2>&1` > /dev/null");
    if (ret != 0) {
        printf("RAID VD mkfs fail!\n");
        return 1;
    }
*/    
    
    return 0;
}


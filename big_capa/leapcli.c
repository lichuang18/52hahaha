#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show_r0()
{
	printf("CLI Version = 007.2508.0000.0000 Feb 27, 2023\n");
	printf("Status = Success\n\n");

	printf("FW Package Build = 52.16.1-4405\n");
	printf("BIOS Version = 7.16.00.0_0x07100501\n");
	printf("FW Version = 5.160.02-3552\n\n");

	printf("Current Personality = RAID-Mode\n");
	printf("Host Interface = PCI-E\n");
	printf("Device Interface = NVMe\n\n");

	printf("Drive Groups = 1\n\n");

	printf("TOPOLOGY :\n");
	printf("========\n\n");

	printf("-----------------------------------------------------------------------------\n");
	printf("DG Arr Row EID:Slot DID Type  State BT       Size PDC  PI SED DS3  FSpace TR \n");
	printf("-----------------------------------------------------------------------------\n");
	printf(" 0 -   -   -        -   RAID0 Optl  N   42.855 TB -    N  N   -    N      N  \n");
	printf(" 0 0   -   -        -   RAID0 Optl  N   42.855 TB -    N  N   -    N      N  \n");
	printf(" 0 0   0   -        -   DRIVE Onln  -   14.285 TB -    N  N   -    -      N  \n");
	printf(" 0 0   1   -        -   DRIVE Onln  -   14.285 TB -    N  N   -    -      N  \n");
	printf(" 0 0   2   -        -   DRIVE Onln  -   14.285 TB -    N  N   -    -      N  \n");
	printf("-----------------------------------------------------------------------------\n\n");

	printf("Virtual Drives = 1\n\n");

	printf("VD LIST :\n");
	printf("=======\n\n");

	printf("-------------------------------------------------------------\n");
	printf("DG/VD TYPE  State Access Consist Cache Cac sCC     Size Name \n");
	printf("-------------------------------------------------------------\n");
	printf("0/0   RAID0 Optl  RW     Yes     RWBD  -   ON      42.855 TB \n");
	printf("-------------------------------------------------------------\n\n");

	printf("Physical Drives = 3\n\n");

	printf("PD LIST :\n");
	printf("=======\n\n");

	printf("-------------------------------------------------------------------\n");
	printf("EID:Slt DID State  DG       Size Intf Med SED PI SeSz Model Sp Type\n");
	printf("-------------------------------------------------------------------\n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-------------------------------------------------------------------\n\n");

}
void show_r5()
{
	printf("CLI Version = 007.2508.0000.0000 Feb 27, 2023\n");
	printf("Status = Success\n\n");

	printf("FW Package Build = 52.16.1-4405\n");
	printf("BIOS Version = 7.16.00.0_0x07100501\n");
	printf("FW Version = 5.160.02-3552\n\n");

	printf("Current Personality = RAID-Mode\n");
	printf("Host Interface = PCI-E\n");
	printf("Device Interface = NVMe\n\n");

	printf("Drive Groups = 1\n\n");

	printf("TOPOLOGY :\n");
	printf("========\n\n");

	printf("-----------------------------------------------------------------------------\n");
	printf("DG Arr Row EID:Slot DID Type  State BT       Size PDC  PI SED DS3  FSpace TR \n");
	printf("-----------------------------------------------------------------------------\n");
	printf(" 0 -   -   -        -   RAID5 Optl  N    28.57 TB -    N  N   -    N      N  \n");
	printf(" 0 0   -   -        -   RAID5 Optl  N    28.57 TB -    N  N   -    N      N  \n");
	printf(" 0 0   0   -        -   DRIVE Onln  -   14.285 TB -    N  N   -    -      N  \n");
	printf(" 0 0   1   -        -   DRIVE Onln  -   14.285 TB -    N  N   -    -      N  \n");
	printf(" 0 0   2   -        -   DRIVE Onln  -   14.285 TB -    N  N   -    -      N  \n");
	printf("-----------------------------------------------------------------------------\n\n");

	printf("Virtual Drives = 1\n\n");

	printf("VD LIST :\n");
	printf("=======\n\n");

	printf("-------------------------------------------------------------\n");
	printf("DG/VD TYPE  State Access Consist Cache Cac sCC     Size Name \n");
	printf("-------------------------------------------------------------\n");
	printf("0/0   RAID5 Optl  RW     Yes     RWBD  -   ON      28.57 TB  \n");
	printf("-------------------------------------------------------------\n\n");

	printf("Physical Drives = 3\n\n");

	printf("PD LIST :\n");
	printf("=======\n\n");

	printf("-------------------------------------------------------------------\n");
	printf("EID:Slt DID State  DG       Size Intf Med SED PI SeSz Model Sp Type\n");
	printf("-------------------------------------------------------------------\n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-------------------------------------------------------------------\n\n");

}

void show_pd()
{
	printf("CLI Version = 007.2508.0000.0000 Feb 27, 2023\n");
	printf("Status = Success\n\n");

	printf("FW Package Build = 52.16.1-4405\n");
	printf("BIOS Version = 7.16.00.0_0x07100501\n");
	printf("FW Version = 5.160.02-3552\n\n");

	printf("Current Personality = RAID-Mode\n");
	printf("Host Interface = PCI-E\n");
	printf("Device Interface = NVMe\n\n");

	printf("Physical Drives = 3\n\n");

	printf("PD LIST :\n");
	printf("=======\n\n");

	printf("-------------------------------------------------------------------\n");
	printf("EID:Slt DID State  DG       Size Intf Med SED PI SeSz Model Sp Type\n");
	printf("-------------------------------------------------------------------\n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-        - Onln   -   14.285 TB NVMe  SSD -   N  512B -     U  -   \n");
	printf("-------------------------------------------------------------------\n\n");

}

int main(int argc, char *argv[]) {
    // 调用Shell命令
    if (strcmp(argv[1], "-help") == 0 || strcmp(argv[1], "-h") == 0 || argc == 1){
	printf("Usage:\n\t%s [option] <value>\n",argv[0]);
	printf("example:");
	printf("\n\t%s del",argv[0]);
	printf("\n\t%s add_vd r0",argv[0]);
	printf("\n\t%s add_vd r5",argv[0]);
	printf("\n\t%s show\n",argv[0]);
    }

    int ret;
    //清除RAID
    if (strcmp(argv[1], "del") == 0){
        ret = system("echo `umount /dev/md* 2>&1` > /dev/null");
	ret = system("echo `mdadm -S /dev/md* 2>&1` > /dev/null");
	ret = system("echo `mdadm --zero-superblock /dev/nvme0n1 /dev/nvme1n1 2>&1` > /dev/null");
	FILE *file;
	file = fopen("/root/raid_level", "w");
        if (file == NULL) {
                printf("locate raid level fail!\n");
                return 1;
        }
        fprintf(file, "0");
        fclose(file);
	
	FILE *file2;
        file2 = fopen("/root/mount_fs", "w");
        if (file2 == NULL) {
                printf("locate raid level fail!\n");
                return 1;
        }
        fprintf(file2, "0");
        fclose(file2);

    }else if(strcmp(argv[1], "add_vd") == 0 && strcmp(argv[2], "r0") == 0){
		//创建RAID0
		ret = system("echo `umount /dev/md* 2>&1` > /dev/null");
        ret = system("echo `mdadm -S /dev/md* 2>&1` > /dev/null");
        ret = system("echo `mdadm --zero-superblock /dev/nvme0n1 /dev/nvme1n1 2>&1` > /dev/null");
		ret = system("echo `yes | mdadm /dev/md0 -C -v -l0 -n2 /dev/nvme0n1 /dev/nvme1n1 2>&1` > /dev/null");
 		printf("RAID0 have been created successfully\n");
		FILE *file;
    	file = fopen("/root/raid_level", "w");
    	if (file == NULL) {
        	printf("locate raid level fail!\n");
        	return 1;
    	}
		fprintf(file, "1");
		fclose(file);
		ret = system("echo `yes |mkfs -t ext4 /dev/md0  > /dev/null 2>&1` > /dev/null");
    }else if(strcmp(argv[1], "add_vd") == 0 && strcmp(argv[2], "r5") == 0){
	//创建RAID5
        ret = system("echo `umount /dev/md* 2>&1` > /dev/null");
        ret = system("echo `mdadm -S /dev/md* 2>&1` > /dev/null");
        ret = system("echo `mdadm --zero-superblock /dev/nvme0n1 /dev/nvme1n1 2>&1` > /dev/null");
        ret = system("echo `yes | mdadm /dev/md5 -C -v -l1 -n2 /dev/nvme0n1 /dev/nvme1n1 2>&1` > /dev/null");
        printf("RAID0 have been created successfully\n");
		FILE *file;
    	file = fopen("/root/raid_level", "w");
    	if (file == NULL) {
        	printf("locate raid level fail!\n");
        	return 1;
    	}
		fprintf(file, "2");
        fclose(file);
        ret = system("echo `yes |mkfs -t ext4 /dev/md5  > /dev/null 2>&1` > /dev/null");
    }else if(strcmp(argv[1], "show") == 0){
        FILE *file2;
    	file2 = fopen("/root/raid_level", "r");
    	if (file2 == NULL) {
            printf("locate raid level fail!\n");
            return 1;
        }
		int value;
		fscanf(file2, "%d", &value);
		fclose(file2);
		if(value == 1){
	   		show_r0();
		}else if(value == 2){
	    	show_r5();
		}else if(value == 0){ 
	    	show_pd(); 
		}else{
	    	printf("syntax error: %d\n",value);
		}
    }else{
   	printf("syntax error\n");
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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char command[] = "lsblk | sed '/sde/ s/^\\(\\([^[:space:]]\\+[[:space:]]\\+\\)\\{3\\}\\)[^[:space:]]\\+/\\114.28T/' | sed '/sde/ s/$/\\/mnt/'";
	
	printf("string : %s\n",command);

	FILE *fp;
	fp = fopen("/root/dir_mount", "r");
    	if (fp == NULL) {
        	printf("无法打开文件。\n");
        	return 1;
    	}
	char value[100];
	fscanf(fp, "%s", value);
	fclose(fp);
	printf(" value : %s\n",value);
	char command2[] = "lsblk | sed '/sde/ s/^\\(\\([^[:space:]]\\+[[:space:]]\\+\\)\\{3\\}\\)[^[:space:]]\\+/\\114.28T/' | sed '/sde/ s/$/\\";
	strcat(command2, value);
	printf("string : %s\n",command2);

	strcat(command2, "/'");
        printf("string : %s\n",command2);
//	system(command);
	return 0;
}


//lsblk |sed '/sde/ s/^\(\([^[:space:]]\+[[:space:]]\+\)\{3\}\)[^[:space:]]\+/\114.28T/' | sed '/sde/ s/$/\/mnt/'

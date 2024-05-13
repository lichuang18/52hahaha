#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define NUM_DIRS 5
#define NUM_FILES_PER_DIR 1000
#define FILE_SIZE 1048576 // 1M

//LD
//78+2N  Byte   N表示采样点数

//SAR IR RS
//TIFF格式  libtiff随机生成数据

//SPEECH
//44     Byte


int main() {
    // 创建六个目录
    char dir_names[NUM_DIRS][10] = {"LD", "SAR", "IR", "RS", "SPEECH"};
    char dir_path[20];
    for (int i = 0; i < NUM_DIRS; i++) {
        sprintf(dir_path, "/mnt/%s", dir_names[i]);
        mkdir(dir_path, 0777);
    }

    // 在每个目录中生成一千个文件
    char file_path[30];
    for (int i = 0; i < NUM_DIRS; i++) {
        sprintf(dir_path, "/mnt/%s", dir_names[i]);
        for (int j = 1; j <= NUM_FILES_PER_DIR; j++) {
            sprintf(file_path, "%s/file%d", dir_path, j);
            FILE *file = fopen(file_path, "wb");
            if (file == NULL) {
                perror("无法创建文件");
                return 1;
            }
            // 将1M大小的数据写入文件
            for (int k = 0; k < FILE_SIZE; k++) {
                fputc(0, file);
            }
            fclose(file);
        }
    }

    printf("已成功生成文件。\n");

    return 0;
}


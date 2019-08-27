#include <stdio.h>
#define STR_MAX 256

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("!! This program puts LineNumber !!\n");
        printf("type \"./gyouBangou <READ_FILENAME> <WRITE_FILENAME>\"\n");
        return -1;
    }
    FILE *fp, *fwrite;
    char str[STR_MAX];
    int cnt = 1;/* 行番号は1から */
    fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("read file open error!\n");
        return -1;
    }
    fwrite = fopen(argv[2], "w");
    if(fwrite == NULL){
        printf("write file open error!\n");
        return -1;
    }
    printf("start reading %s\n", argv[1]);

    while(fgets(str, sizeof(str), fp) != NULL){/* ここで\nまで読み込んでいるので */
        fprintf(fwrite, "%4d  %s", cnt, str);/* ここでは\nいらない */
        cnt++;
    }

    printf("end writing %s\n", argv[2]);
    return 0;
}

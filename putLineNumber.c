#include <stdio.h>
#define STR_MAX 256

int main(int argc, char *argv[]){
    if(argc != 2 && argc != 3){/* argcが2でも3でもない時エラー */
        printf("!! This program puts Line Number !!\n");
        printf("command: \"./pln <READ_FILENAME> (<WRITE_FILENAME>)\"\n");
        return -1;
    }
    FILE *fread, *fwrite;
    char str[STR_MAX];
    int cnt = 1;/* 行番号は1から */
    fread = fopen(argv[1], "r");
    if(fread == NULL){
        printf("read file open error!\n");
        return -1;
    }
    fwrite = fopen(argv[2], "w");
    if(fwrite == NULL){
        printf("write file open error!\n");
        return -1;
    }
    printf("start reading %s\n", argv[1]);

    while(fgets(str, sizeof(str), fopen) != NULL){/* ここで\nまで読み込んでいるので */
        fprintf(fwrite, "%4d  %s", cnt, str);/* ここでは\nいらない */
        cnt++;
    }

    fclose(fopen);
    fclose(fwrite);

    printf("end writing %s\n", argv[2]);
    return 0;
}

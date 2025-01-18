#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("文件打开失败\n");
        return 1;
    }
    fprintf(fp, "Hello World\n");
    fclose(fp);
    return 0;
}

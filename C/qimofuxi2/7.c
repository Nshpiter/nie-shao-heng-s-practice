#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("文件打开失败\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}
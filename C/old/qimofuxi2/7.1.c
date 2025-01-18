#include <stdio.h>

int main()
{
    FILE *fp = fopen("a.txt","r");
    if (fp == NULL){
        printf("error");
        return 1;
    }

    // 方法1：使用fgetc()逐字符读取
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // 方法2：使用fscanf()格式化读取
    char str[100];
    while (fscanf(fp, "%s", str) != EOF) {
        printf("%s ", str);
    }

    // 方法3：使用fread()读取
    char buffer[100];
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), fp)) > 0) {
        fwrite(buffer, 1, bytesRead, stdout);
    }

    // 方法4：使用getc()读取
    int c;
    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}
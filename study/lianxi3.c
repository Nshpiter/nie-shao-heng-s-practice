#include <stdio.h>
int main() {
    char str[100];
    printf("请输入一行字符串: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        printf("你输入的字符串是: %s", str);
    } else {
        printf("读取失败\n");
    }
    return 0;
}
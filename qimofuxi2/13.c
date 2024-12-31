#include <stdio.h>

int main() {
    char str[] = "hello world";
    for (char *p = str; *p != '\0'; p++) {
        printf("字符：%c\n", *p); // 用指针逐个读取字符
    }
    return 0;
}

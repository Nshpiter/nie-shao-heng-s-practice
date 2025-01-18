#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    printf("请输入一串字符：");
    while ((str[i] = getchar()) != '\n') {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}

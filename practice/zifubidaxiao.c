#include <stdio.h>
int main()
{
    char c1, c2;
    printf("请输入两个字符:\n");
    scanf(" %c", &c1); // 在%c前面加一个空格，用于忽略换行符
    scanf(" %c", &c2); // 在%c前面加一个空格，用于忽略换行符
    printf("c1 > c2 ? %d\n", c1 > c2 ? 1 : 0);

    return 0;
}
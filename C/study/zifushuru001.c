#include <stdio.h>
int main()
{
    char ch[100];
    scanf(" %[^\n]",ch);
    printf("你输入的字符串是: %s\n", ch);
    return 0;
}